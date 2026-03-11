/*
 * func-name: GetMessageA
 * func-address: 0x102c9936
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall GetMessageA(LPMSG lpMsg, HWND hWnd, UINT wMsgFilterMin, UINT wMsgFilterMax)
{
  return __imp_GetMessageA(lpMsg, hWnd, wMsgFilterMin, wMsgFilterMax);
}
