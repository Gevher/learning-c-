#ifndef ERRORCHECKINGPROCESS_H
#define ERRORCHECKINGPROCESS_H
#if defined(UNICODE) && !defined(_UNICODE)
#define _UNICODE
#elif defined(_UNICODE) && !defined(UNICODE)
#define UNICODE
#endif

#include <tchar.h>
#include <windows.h>
#include <cstdlib>
#include <iostream>
#include <stdfix.h>

class ErrorCheckingProcess
{
    public:
        ErrorCheckingProcess();
        virtual ~ErrorCheckingProcess();
        int _tScreenShot ();


    protected:
    private:
};

#endif // ERRORCHECKINGPROCESS_H
