/*
 * func-name: sub_1000C050
 * func-address: 0x1000c050
 * callers: 0x10010100, 0x100101a0
 * callees: none
 */

int __thiscall sub_1000C050(
        Outpop::IONetwork::Acceptor_Config *this,
        const struct Outpop::IONetwork::Acceptor_Config *a2)
{
  int result; // eax

  if ( this )
    return Outpop::IONetwork::Acceptor_Config::Acceptor_Config(this, a2);
  return result;
}
