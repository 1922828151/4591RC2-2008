/*
 * func-name: DefWindowProcA
 * func-address: 0x102c9948
 * callers: none
 * callees: none
 */

// attributes: thunk
LRESULT __stdcall DefWindowProcA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_DefWindowProcA(hWnd, Msg, wParam, lParam);
}
