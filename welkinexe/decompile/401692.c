/*
 * func-name: DefWindowProcW
 * func-address: 0x401692
 * callers: none
 * callees: none
 */

// attributes: thunk
LRESULT __stdcall DefWindowProcW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_DefWindowProcW(hWnd, Msg, wParam, lParam);
}
