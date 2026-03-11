/*
 * func-name: SendMessageA
 * func-address: 0x102c992a
 * callers: none
 * callees: none
 */

// attributes: thunk
LRESULT __stdcall SendMessageA(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_SendMessageA(hWnd, Msg, wParam, lParam);
}
