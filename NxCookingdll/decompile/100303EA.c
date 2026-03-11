/*
 * func-name: WSAGetLastError
 * func-address: 0x100303ea
 * callers: 0x10001c50
 * callees: none
 */

// attributes: thunk
int __stdcall WSAGetLastError()
{
  return __imp_WSAGetLastError();
}
