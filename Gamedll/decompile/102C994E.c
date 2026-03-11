/*
 * func-name: GetKeyState
 * func-address: 0x102c994e
 * callers: none
 * callees: none
 */

// attributes: thunk
SHORT __stdcall GetKeyState(int nVirtKey)
{
  return __imp_GetKeyState(nVirtKey);
}
