#include "stdafx.h"
#include "EditApp.h"

EditApp* gApp = NULL;

EditApp::EditApp(void)
{
    gApp = this;
}


EditApp::~EditApp(void)
{
}

BOOL EditApp::InitInstance()
{
    //Create the Frame Window
    if (m_Frame.Create() == 0)	
    {
        // We get here if the Frame creation fails

        ::MessageBoxA(NULL, "Failed to create Frame window", "ERROR", MB_ICONERROR);
        return FALSE; // returning FALSE ends the application
    }

    return TRUE;
}

EditApp* GetMyApp()
{
    return gApp;
}