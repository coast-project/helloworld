/*
 * Copyright (c) 1999-2002 itopia
 * All Rights Reserved
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
