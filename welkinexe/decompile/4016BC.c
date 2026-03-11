/*
 * func-name: GetDesktopWindow
 * func-address: 0x4016bc
 * callers: none
 * callees: none
 */

// attributes: thunk
HWND __stdcall GetDesktopWindow()
{
  return __imp_GetDesktopWindow();
}
