/*
 * func-name: sub_1000ED50
 * func-address: 0x1000ed50
 * callers: none
 * callees: 0x100294f2
 */

Outpop::IONetwork::Dgram_Acceptor *__thiscall sub_1000ED50(Outpop::IONetwork::Dgram_Acceptor *this, char a2)
{
  Outpop::IONetwork::Dgram_Acceptor::~Dgram_Acceptor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
