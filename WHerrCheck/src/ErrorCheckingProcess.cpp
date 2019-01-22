#include "ErrorCheckingProcess.h"

ErrorCheckingProcess::ErrorCheckingProcess()
{
    //ctor
}

int ErrorCheckingProcess::_tScreenShot()
    {
        HWND cmdhwnd;
        char consoleName[500];
        GetConsoleTitleA(consoleName,  500);
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

        HBITMAP hBitmap = CreateCompatibleBitmap(hScreen, w, h);\
        HGDIOBJ old_obj = SelectObject(hDC, hBitmap);
        BOOL bRet = BitBlt(hDC, 0, 0, w, h, hScreen,x1, y1, SRCCOPY);
        OpenClipboard(NULL);
        EmptyClipboard();
        SetClipboardData(CF_BITMAP , hBitmap);
        //TODO: Nie mam pojêcia cotu sie odpierdala. Rozpracowaæ zapisywanie SS do pliku
        HANDLE chuj = CreateFileA("C:\\Users\\admin\\Documents\\GitHub\\learning-c-\\WHerrCheck\\bitmap.bmp", GENERIC_WRITE|GENERIC_READ, 0, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
        DWORD dupa = SizeofResource(NULL, FindResourceA(NULL, "&hDC", "&hDC"));
        WriteFile(chuj, &hDC, dupa, &dupa, NULL );
        //CloseClipboard();
        return 0;

    }


ErrorCheckingProcess::~ErrorCheckingProcess()
{
    //dtor
}
