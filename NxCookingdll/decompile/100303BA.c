/*
 * func-name: closesocket
 * func-address: 0x100303ba
 * callers: 0x10001af0, 0x10001bf0
 * callees: none
 */

// attributes: thunk
int __stdcall closesocket(SOCKET s)
{
  return __imp_closesocket(s);
}
