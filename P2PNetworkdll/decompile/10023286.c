/*
 * func-name: socket
 * func-address: 0x10023286
 * callers: 0x100122f0, 0x10012390
 * callees: none
 */

// attributes: thunk
SOCKET __stdcall socket(int af, int type, int protocol)
{
  return __imp_socket(af, type, protocol);
}
