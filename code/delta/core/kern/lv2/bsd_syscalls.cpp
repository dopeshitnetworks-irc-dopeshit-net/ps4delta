
/*
 * PS4Delta : PS4 emulation and research project
 *
 * Copyright 2019-2020 Force67.
 * For information regarding licensing see LICENSE
 * in the root of the source tree.
 */

#include "../proc.h"
#include <base.h>
#include <logger/logger.h>

#include <kern/proc.h>

namespace krnl {
int PS4ABI sys_exit() {
  __debugbreak();
  return 0;
}

int PS4ABI sys_rfork() {
  __debugbreak();
  return 0;
}

int PS4ABI sys_execve() {
  __debugbreak();
  return 0;
}

int PS4ABI sys_sigprocmask(int how, const int *sigset, int *oset) { return 0; }

int PS4ABI sys_sigaction(int how, void (*cb)(void *, void *, void *)) {
  return 0;
}

/*does not belong here*/
uint32_t PS4ABI sys_namedobj_create(const char *name, void *arg2,
                                    uint32_t arg3) {
  auto *proc = proc::getActive();
  if (!proc)
    return -1;

  auto *obj = new kObject(proc, kObject::oType::namedobj);
  obj->name() = name;

  uint32_t handle = -1;
  proc->getObjTable().add(obj, handle);

  std::printf("creating named obj %s -> %d, with arg 2 %p\n", name, handle,
              arg2);
  return handle;
}

int PS4ABI sys_namedobj_delete(uint32_t fd, uint32_t op) {
  auto *proc = proc::getActive();
  if (!proc)
    return SysError::eSRCH;
  __debugbreak();

  proc->getObjTable().release(fd);
  return 0;
}

int PS4ABI sys_sysarch(int num, void *args) {
  // amd64_set_fsbase
  if (num == 129) {
    auto fsbase = *static_cast<void **>(args);
    proc::getActive()->getEnv().fsBase = fsbase;
    return 0;
  }
  __debugbreak();
  return -1;
}

struct nonsys_int {
  union {
    uint64_t encoded_id;
    struct {
      uint8_t data[4];
      uint8_t table;
      uint8_t index;
      uint16_t checksum;
    } encoded_id_parts;
  };
  uint32_t unknown;
  uint32_t value;
};

/*TODO: clearly does not belong here*/
int PS4ABI sys_regmgr_call(uint32_t op, uint32_t id, void *result, void *value,
                           uint64_t type) {
  if (op == 25) // non-system get int
  {
    auto int_value = static_cast<nonsys_int *>(value);

    if (int_value->encoded_id == 0x0CAE671ADF3AEB34ull ||
        int_value->encoded_id == 0x338660835BDE7CB1ull) {
      int_value->value = 0;
      return 0;
    }

    return 0x800D0203;
  } else
    __debugbreak();

  return -1;
}

int PS4ABI sys_getpid() { return 0x1337; }

int PS4ABI sys_write(uint32_t fd, const void *buf, size_t nbytes) {
  if (fd == 1 || fd == 2) // stdout, stderr
  {
    auto b = static_cast<const char *>(buf);
    for (size_t i = 0; i < nbytes; ++i, ++b) {
      printf("%c", *b);
    }
    return 0;
  }

  __debugbreak();

  return -1;
}
} // namespace krnl