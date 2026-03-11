/*
 * func-name: SendMessageW
 * func-address: 0x401698
 * callers: none
 * callees: none
 */

// attributes: thunk
LRESULT __stdcall SendMessageW(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
  return __imp_SendMessageW(hWnd, Msg, wParam, lParam);
}
