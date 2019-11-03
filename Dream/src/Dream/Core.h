#pragma once

#ifdef DR_PLATFORM_WINDOWS
	#ifdef DR_BUILD_DLL
		#define DREAM_API __declspec(dllexport)
	#else
		#define DREAM_API __declspec(dllimport)
	#endif
#else
	#error Dream only supports Windows!
#endif

#ifdef DR_ENABLE_ASSERTS
	#define DR_ASSERT(x, ...) { if(!(x)) { DR_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
	#define DR_CORE_ASSERT(x, ...) { if(!(x)) { DR_CORE_ERROR("Assertion Failed: {0}", __VA_ARGS__); __debugbreak(); } }
#else
	#define DR_ASSERT(x, ...)
	#define DR_CORE_ASSERT(x, ...)
#endif

#define BIT(x) (1 << x)
