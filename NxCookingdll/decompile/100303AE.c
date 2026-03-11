/*
 * func-name: WSAStartup
 * func-address: 0x100303ae
 * callers: 0x10001a50
 * callees: none
 */

// attributes: thunk
int __stdcall WSAStartup(WORD wVersionRequested, LPWSADATA lpWSAData)
{
  return __imp_WSAStartup(wVersionRequested, lpWSAData);
}
