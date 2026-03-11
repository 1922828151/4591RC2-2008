/*
 * func-name: WSACleanup
 * func-address: 0x100232d4
 * callers: 0x100116b0, 0x100122f0, 0x10012390, 0x10012520, 0x10012640, 0x100135f0
 * callees: none
 */

// attributes: thunk
int __stdcall WSACleanup()
{
  return __imp_WSACleanup();
}
