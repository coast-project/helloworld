/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
 */

//--- standard modules used ----------------------------------------------------
#include "InitFinisManager.h"

namespace {
	void Init()
	{
		InitFinisManager::IFMTrace(">> helloworld::Init\n");
		InitFinisManager::IFMTrace("<< helloworld::Init\n");
	}

	void Finis()
	{
		InitFinisManager::IFMTrace(">> helloworld::Finis\n");
		InitFinisManager::IFMTrace("<< helloworld::Finis\n");
	}
}

extern "C" void __attribute__ ((constructor)) helloworld_init()
{
	Init();
}
extern "C" void __attribute__ ((destructor)) helloworld_fini()
{
	Finis();
}
