/*
 * Copyright (c) 2000-2002 itopia
 * All Rights Reserved
 *
 * initialization of helloworld library
 */

#ifdef __GNUG__
	#pragma implementation
#endif

//--- interface include -------------------------------------------------------
#include "config_helloworld.h"

//--- standard modules used ----------------------------------------------------
#include "InitFinisManager.h"

static void Init()
{
	InitFinisManager::IFMTrace(">> helloworld::Init\n");
	InitFinisManager::IFMTrace("<< helloworld::Init\n");
}

static void Finis()
{
	InitFinisManager::IFMTrace(">> helloworld::Finis\n");
	InitFinisManager::IFMTrace("<< helloworld::Finis\n");
}

#if defined(WIN32)
	#ifdef _DLL
		// DllMain() is the entry-point function for this DLL.
		BOOL WINAPI DllMain(HANDLE hinstDLL,  // DLL module handle
			DWORD fdwReason,                    // reason called
			LPVOID lpvReserved)                 // reserved
		{
			switch (fdwReason) {

				// The DLL is loading due to process
				// initialization or a call to LoadLibrary.
				case DLL_PROCESS_ATTACH:
					Init();
					break;

				// The attached process creates a new thread.
				case DLL_THREAD_ATTACH:
					break;

				// The thread of the attached process terminates.
				case DLL_THREAD_DETACH:
					break;

				// The DLL unloading due to process termination or call to FreeLibrary.
				case DLL_PROCESS_DETACH:
					Finis();
					break;

				default:
					break;
			}

			return true;
			UNREFERENCED_PARAMETER(hinstDLL);
			UNREFERENCED_PARAMETER(lpvReserved);
		}
	#endif	// _DLL
#else
	extern "C" void __attribute__ ((constructor)) helloworld_init()
	{
		Init();
	}
	extern "C" void __attribute__ ((destructor)) helloworld_fini()
	{
		Finis();
	}
#endif	// WIN32
