/*
 * func-name: BeginPaint
 * func-address: 0x4016a4
 * callers: none
 * callees: none
 */

// attributes: thunk
HDC __stdcall BeginPaint(HWND hWnd, LPPAINTSTRUCT lpPaint)
{
  return __imp_BeginPaint(hWnd, lpPaint);
}
