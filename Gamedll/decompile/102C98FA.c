/*
 * func-name: GetModuleHandleA
 * func-address: 0x102c98fa
 * callers: none
 * callees: none
 */

// attributes: thunk
HMODULE __stdcall GetModuleHandleA(LPCSTR lpModuleName)
{
  return __imp_GetModuleHandleA(lpModuleName);
}
