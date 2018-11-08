#include "ErrorCheckingProcess.h"

ErrorCheckingProcess::ErrorCheckingProcess()
{
    //ctor
}

int ErrorCheckingProcess::_tScreenShot()
    {
        while(true)
        {
        HWND cmdhwnd;
        char consoleName[500];
        GetConsoleTitleA(consoleName, 500);
        cmdhwnd = FindWindowA(NULL, consoleName);
        ShowWindow(cmdhwnd, SW_HIDE);

        int x1, x2, y1, y2, w, h;
        x1 = GetSystemMetrics(SM_XVIRTUALSCREEN);
        x2 = GetSystemMetrics(SM_CXVIRTUALSCREEN);
        y1 = GetSystemMetrics(SM_YVIRTUALSCREEN);
        y2 = GetSystemMetrics(SM_CYVIRTUALSCREEN);

        w = x2 - x1;
        h = y2 - y1;

        HDC hScreen = GetDC(NULL);
        HDC hDC =  CreateCompatibleDC(hScreen);
        HBITMAP hBitmap = CreateCompatibleBitmap(hScreen, w, h);
        HGDIOBJ old_obj = SelectObject(hDC, hBitmap);
        BOOL bRet = BitBlt(hDC, 0, 0, w, h, hScreen,x1, y1, SRCCOPY);

        OpenClipboard(NULL);
        EmptyClipboard();
        SetClipboardData(CF_BITMAP, hBitmap);

        CloseClipboard();
        }
        return 0;
    }


ErrorCheckingProcess::~ErrorCheckingProcess()
{
    //dtor
}
