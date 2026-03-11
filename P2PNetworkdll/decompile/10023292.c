/*
 * func-name: closesocket
 * func-address: 0x10023292
 * callers: 0x100116b0, 0x10012640, 0x100135f0
 * callees: none
 */

// attributes: thunk
int __stdcall closesocket(SOCKET s)
{
  return __imp_closesocket(s);
}
