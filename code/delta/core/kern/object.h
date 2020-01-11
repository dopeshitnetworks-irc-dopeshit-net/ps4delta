#pragma once

// Copyright (C) Force67 2019

#include <string>
#include <vector>
#include <mutex>
#include <atomic>
#include <utl/object_ref.h>

namespace krnl
{
	class proc;

	class kObject
	{
	public:
		using handleList = std::vector<uint32_t>;

		enum class oType
		{
			file,
			device,
		};

		explicit kObject(proc*, oType);

		void retain();
		void release();
		void retainHandle();
		void releaseHandle();

		oType type() const {
			return otype;
		}

		handleList& handles() {
			return handleCollection;
		}

		uint32_t handle() const { 
			return handleCollection[0];
		}

	protected:
		oType otype;
		proc* process;
		std::string name;

	private:
		handleList handleCollection;
		std::atomic<int32_t> refCount;
	};

	template <typename T>
	utl::object_ref<T> retain_object(T* ptr) {
		if (ptr) ptr->retain();
		return utl::object_ref<T>(ptr);
	}
}