/*
 * func-name: SetWindowPos
 * func-address: 0x4016b0
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall SetWindowPos(HWND hWnd, HWND hWndInsertAfter, int X, int Y, int cx, int cy, UINT uFlags)
{
  return __imp_SetWindowPos(hWnd, hWndInsertAfter, X, Y, cx, cy, uFlags);
}
