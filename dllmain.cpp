#include <Windows.h>
#include <iostream>
#include "loader.h"

// Entry point
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    // Nothing to do . . .
    return TRUE;
}

// Get mod information
void GetModInformation(mod_info& info)
{
    strcpy_s(info.name, "pkodev.mod.helloworld");
    strcpy_s(info.version, "1.0");
    strcpy_s(info.author, "V3ct0r");
    info.exe_version = GAMESERVER_138;
}

// Start the mod
void Start(const char* path)
{
    std::cout << "Hello world!" << std::endl;
    std::cout << "path = " << path << std::endl << std::endl;
}

// Stop the mod
void Stop()
{

}
