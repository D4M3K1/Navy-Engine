#pragma once

#ifdef NV_PLATFORM_WINDOWS
	#ifdef NV_BUILD_DLL
		#define NAVY_API _declspec(dllexport)
	#else
		#define NAVY_API _declspec(dllimport)
	#endif
#else
	#error NAVY only support Windows!
#endif