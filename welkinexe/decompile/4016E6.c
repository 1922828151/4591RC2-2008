/*
 * func-name: PeekMessageW
 * func-address: 0x4016e6
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall PeekMessageW(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax, UINT wRemoveMsg)
{
  return __imp_PeekMessageW(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax, wRemoveMsg);
}
