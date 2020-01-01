
// Copyright (C) Force67 2019

#include <base.h>

#include "kern/proc.h"
#include "kern/dev/console_dev.h"
#include "kern/dev/tty6_dev.h"
#include "kern/dev/gc_dev.h"
#include "kern/dev/dma_dev.h"
#include "kern/dev/dipsw_dev.h"

#include <utl/object_ref.h>

namespace krnl
{
	static device* make_device(const char* deviceName)
	{
		std::string_view xname(deviceName);

		device* dev = nullptr;
		auto* proc = proc::getActive();
		if (xname == "console")
			dev = new consoleDevice(proc);
		if (xname == "deci_tty6")
			dev = new tty6Device(proc);
		if (xname == "gc")
			dev = new gcDevice(proc);
		if (xname == "dipsw")
			dev = new dipswDevice(proc);
		/*there are multiple of these*/
		if (xname.find("dmem") != -1)
			dev = new dmaDevice(proc);

		return dev;
	}

	int PS4ABI sys_open(const char* path, uint32_t flags, uint32_t mode)
	{
		if (!path)
			return SysError::eINVAL;

		std::printf("open: %s, %x, %x\n", path, flags, mode);

		if (std::strncmp(path, "/dev/", 5) == 0) {
			const char* name = &path[5];

			auto dev = make_device(name);
			if (dev) {

				if (!dev->init(name, flags, mode)) {
					dev->releaseHandle();
					return -1;
				}

				return dev->handle();
			}
			else
				__debugbreak();
			return -1;
		}

		__debugbreak();
		return 0;
	}
}