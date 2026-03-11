/*
 * func-name: ShowWindow
 * func-address: 0x40167a
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall ShowWindow(HWND hWnd, int nCmdShow)
{
  return __imp_ShowWindow(hWnd, nCmdShow);
}
