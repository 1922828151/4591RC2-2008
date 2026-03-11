/*
 * func-name: WSAStartup
 * func-address: 0x100232da
 * callers: 0x10012520
 * callees: none
 */

// attributes: thunk
int __stdcall WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData)
{
  return __imp_WSAStartup(wVersionRequested, lpWSAData);
}
