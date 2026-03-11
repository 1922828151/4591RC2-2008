/*
 * func-name: ?c_network_type_to_string@P2P@Outpop@@YAPBDW4ENetworkType@12@@Z
 * func-address: 0x1000ec30
 * callers: none
 * callees: none
 */

const char *__cdecl Outpop::P2P::c_network_type_to_string(int a1)
{
  if ( a1 == 1 )
    return "InteralNetwork";
  if ( a1 == 2 )
    return "ExteralNetwork";
  return "UnknownNetwork";
}
