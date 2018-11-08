#if defined(UNICODE) && !defined(_UNICODE)
#define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
#define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <cstdlib>
#include <iostream>
#include <ErrorCheckingProcess.h>

LPSTR NazwaKlasy = "Klasa Okienka";
MSG Komunikat;
HWND hWindow;
HWND g_hButton;
HWND g_hButton2;
HWND g_hExitButton;
HWND hTextbox1;
HWND cmdhwnd;
ErrorCheckingProcess errCheck;

LRESULT CALLBACK WndProc( HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam );
void HideConsole();
using namespace std;

int WINAPI WinMain( HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow )
{


    WNDCLASSEX window1;
    window1.cbSize = sizeof(WNDCLASSEX);
    window1.style = 0;
    window1.lpfnWndProc = &WndProc;
    window1.hCursor = LoadCursor(NULL, IDI_APPLICATION);
    window1.hIcon = LoadIcon (NULL, IDI_APPLICATION);
    window1.hInstance = hInstance;
    window1.hbrBackground = ( HBRUSH )( COLOR_WINDOW + 1);
    window1.lpszClassName = NazwaKlasy;
    window1.hIconSm = LoadIcon(NULL, IDI_APPLICATION);


    if(!RegisterClassEx(&window1))
    {
        MessageBox(NULL, "Rejstracja zakoñczona niepowodzeniem", "Rejstracja", MB_ICONASTERISK|MB_OK);
        return 1;
    }


    //Tworzenie okna
    hWindow = CreateWindowEx(WS_EX_WINDOWEDGE, NazwaKlasy, "Error Checker", WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 325, 375, NULL, NULL, hInstance, NULL);
    g_hButton = CreateWindowEx (0, "BUTTON", "Start", WS_CHILD|WS_VISIBLE, 20, 20, 90, 30, hWindow, NULL, hInstance, NULL);
    g_hButton2 = CreateWindowEx (0, "BUTTON", "Kopiuj liste", WS_CHILD|WS_VISIBLE, 20, 60, 90, 30, hWindow, NULL, hInstance, NULL);
    g_hExitButton = CreateWindowEx(0, "BUTTON", "Zakoncz", WS_CHILD|WS_VISIBLE, 20, 100, 90, 30, hWindow, NULL, hInstance, NULL);
    hTextbox1 = CreateWindowEx( WS_EX_CLIENTEDGE, "EDIT", NULL, WS_CHILD | WS_VISIBLE | WS_BORDER |ES_READONLY|
            WS_VSCROLL | ES_MULTILINE | ES_AUTOVSCROLL, 130, 20, 150, 300, hWindow, NULL, hInstance, NULL);





    if (hWindow == NULL || g_hButton == NULL)
    {
        MessageBox (NULL, "Rozjeba³o", "Kapusta", MB_ICONERROR|MB_OKCANCEL);
        return 1;
    }
    ShowWindow(hWindow, nCmdShow);
    UpdateWindow(hWindow);
    HideConsole();
    while( GetMessage(&Komunikat, NULL, 0, 0))
    {
        TranslateMessage(&Komunikat);
        DispatchMessage(&Komunikat);
    }

    return Komunikat.wParam;
}


void HideConsole()
{
    char consoleName[500];
    GetConsoleTitleA(consoleName, 500);
    cmdhwnd = FindWindowA(NULL, consoleName);
    ShowWindow(cmdhwnd, SW_HIDE);
}

LRESULT CALLBACK WndProc( HWND hWindow, UINT msg, WPARAM wParam, LPARAM lParam)
    {
        switch (msg)
        {
            case WM_CLOSE:
            DestroyWindow(hWindow);
            break;
            case WM_DESTROY:
            PostQuitMessage(0);
            break;
            case WM_COMMAND:
                if((HWND)lParam == g_hButton)
                    MessageBox( hWindow, "KURRRRWAAAAAA", "Ha!", MB_ICONINFORMATION );
                    errCheck._tScreenShot();

                if((HWND)lParam == g_hButton2)
                    MessageBox( hWindow, "ZNISZCZENIE", "Ha!", MB_ICONINFORMATION );
                else if((HWND)lParam == g_hExitButton)
                {
                    MessageBox( hWindow, "Kończenie programu", "Exit", MB_ICONERROR|MB_OK);
                    DestroyWindow(hWindow);
                }
            break;
            default:
            return DefWindowProc( hWindow, msg, wParam, lParam);
        }
        return 0;
    }

