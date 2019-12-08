
// Copyright (C) Force67 2019

#include <cstdio>

#include "dcore.h"
#include <logger/logger.h>
#include <utl/File.h>

deltaCore::deltaCore(int& argc, char** argv) :
	QApplication(argc, argv)
{
	setApplicationName(rsc_productname);
	setApplicationVersion(rsc_productversion);
}

bool deltaCore::init()
{
	LOG_INFO("Initializing deltaCore " rsc_copyright);

	if (!headless)
		window = std::make_unique<mainWindow>(*this);

	if (window)
		window->init();

	return true;
}

#include <thread>

void deltaCore::boot(std::string& dir)
{
	// sanitize path
	std::replace(dir.begin(), dir.end(), '/', '\\');

	std::thread ctx([&]() {
		auto proc = std::make_unique<krnl::proc>();
		if (!proc->create(dir))
			return;

		proc->start();
	});

	ctx.detach();
}