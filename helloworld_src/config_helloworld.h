/*
 * Copyright (c) 2009, Peter Sommerlad and IFS Institute for Software at HSR Rapperswil, Switzerland
 * All rights reserved.
 *
 * This library/application is free software; you can redistribute and/or modify it under the terms of
 * the license that is included with this library/application in the file license.txt.
 */

#ifndef _CONFIG_HELLOWORLD_H
#define _CONFIG_HELLOWORLD_H

// WIN32 settings for Windows NT
#if defined(WIN32)
	#ifdef _DLL
		#include <windows.h>
		#ifdef HELLOWORLD_IMPL
			#define EXPORTDECL_HELLOWORLD	__declspec(dllexport)
		#else
			#define EXPORTDECL_HELLOWORLD	__declspec(dllimport)
		#endif
	#else
		#define EXPORTDECL_HELLOWORLD
	#endif
#else
	#define EXPORTDECL_HELLOWORLD
#endif

#endif
