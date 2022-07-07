#pragma once
#ifdef DE_PLATFORM_WINDOWS
    #ifdef DE_BUILD_DLL
        #define DE_API _declspec(dllexport)
    #else
        #define DE_API _declspec(dllimport)
    #endif
#else
    #error Dimension-engine is only in Windows!
#endif