/*
 * func-name: GetWindowRect
 * func-address: 0x4016b6
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall GetWindowRect(HWND hWnd, LPRECT lpRect)
{
  return __imp_GetWindowRect(hWnd, lpRect);
}
