/*
 * func-name: TranslateMessage
 * func-address: 0x4016da
 * callers: none
 * callees: none
 */

// attributes: thunk
BOOL __stdcall TranslateMessage(const MSG *lpMsg)
{
  return __imp_TranslateMessage(lpMsg);
}
