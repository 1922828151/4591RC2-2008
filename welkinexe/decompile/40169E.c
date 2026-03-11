/*
 * func-name: EndPaint
 * func-address: 0x40169e
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall EndPaint(HWND hWnd, const PAINTSTRUCT *lpPaint)
{
  return __imp_EndPaint(hWnd, lpPaint);
}
