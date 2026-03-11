/*
 * func-name: PeekMessageA
 * func-address: 0x102c9942
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall PeekMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
  return __imp_PeekMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
}
