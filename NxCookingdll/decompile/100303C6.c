/*
 * func-name: socket
 * func-address: 0x100303c6
 * callers: 0x10001af0
 * callees: none
 */

// attributes: thunk
SOCKET __stdcall socket(int af, int type, int protocol)
{
  return __imp_socket(af, type, protocol);
}
