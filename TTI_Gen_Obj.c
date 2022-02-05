//*************************************************************************************************
//***                                                                                           ***
//***                                                                                           ***
//*************************************************************************************************


//*************************************************************************************************
//***   INCLUDE                                                                                 ***
//*************************************************************************************************
#include "TTI_Gen_Obj.h"



//*************************************************************************************************
//***   MODULE VARIABLES                                                                        ***
//*************************************************************************************************
WINDOWS_OBJ win_obj;

//*************************************************************************************************
//***                                                                                           ***
//*************************************************************************************************
HWND initWinObj(HINSTANCE hInstance, HWND parent, int xSize, int ySize, PCWSTR winName)
{
    unsigned char retVal = FALSE;
    WNDCLASSEX wincl;        /* Data structure for the windowclass */

#if 0
    /* The Window structure */
    wincl.hInstance =       GetwiInstahThisInstance;
    wincl.lpszClassName =   szClassName;
    wincl.lpfnWndProc =     WindowProcedure;      /* This function is called by windows */
    wincl.style =           CS_DBLCLKS;                 /* Catch double-clicks */
    wincl.cbSize =          sizeof (WNDCLASSEX);

    /* Use default icon and mouse-pointer */
    wincl.hIcon =           LoadIcon (NULL, IDI_APPLICATION);
    wincl.hIconSm =         LoadIcon (NULL, IDI_APPLICATION);
    wincl.hCursor =         LoadCursor (NULL, IDC_ARROW);
    wincl.lpszMenuName =    NULL;                 /* No menu */
    wincl.cbClsExtra =      0;                      /* No extra bytes after the window class */
    wincl.cbWndExtra =      0;                      /* structure or the window instance */

    /* Use Windows's default colour as the background of the window */
    wincl.hbrBackground = (HBRUSH) COLOR_BACKGROUND;

    /* Register the window class, and if it fails quit the program */
    if (!RegisterClassEx (&wincl))
    {
        return 0;
    }
    else
    {

    }
#endif

}


//*************************************************************************************************
//***                                                                                           ***
//*************************************************************************************************
HWND CreteWinProcess(HWND parent, int xSize, int ySize, PCWSTR winName)
{

}



