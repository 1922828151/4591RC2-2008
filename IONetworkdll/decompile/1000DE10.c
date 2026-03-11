/*
 * func-name: ?socket_finit@IONetwork@Outpop@@YAHXZ
 * func-address: 0x1000de10
 * callers: none
 * callees: none
 */

// attributes: thunk
int __stdcall Outpop::IONetwork::socket_finit()
{
  return WSACleanup();
}
