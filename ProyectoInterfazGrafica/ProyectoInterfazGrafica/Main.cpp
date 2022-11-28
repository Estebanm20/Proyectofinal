#include <Windows.h>
#include "resource.h"

LRESULT CALLBACK registrarse(HWND , UINT , WPARAM , LPARAM );

int WINAPI wWinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, PWSTR pCmdLine, int nCmdShow) {

    HWND hwnd = CreateDialog(hInst, MAKEINTRESOURCE(IDD_DIALOG1), NULL, registrarse);
    MSG msg;

    ZeroMemory(&msg, sizeof(MSG));

    ShowWindow(hwnd, nCmdShow);

    while (GetMessage(&msg, hwnd, NULL, NULL) > 0) {

        TranslateMessage(&msg);

        DispatchMessage(&msg);

    }

    return 0;
}

LRESULT CALLBACK registrarse(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

    HBRUSH Pincel = NULL;   
    HINSTANCE i = NULL;
    

    switch (uMsg) {

        case WM_COMMAND:

            switch (LOWORD(wParam)) {

                case BOTON_SIGUIENTE:

                    exit(0);

                    break;      
            }

         break;

        case WM_CLOSE:

            DeleteObject(Pincel);

            EndDialog(hwnd, TRUE);

            break;
        }

        return 0;
   
}