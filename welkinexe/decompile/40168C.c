/*
 * func-name: DestroyWindow
 * func-address: 0x40168c
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall DestroyWindow(HWND hWnd)
{
  return __imp_DestroyWindow(hWnd);
}
