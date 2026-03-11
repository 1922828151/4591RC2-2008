/*
 * func-name: sub_1000CD70
 * func-address: 0x1000cd70
 * callers: none
 * callees: 0x10023306
 */

Outpop::IONetwork::P2PUdpBuilder *__thiscall sub_1000CD70(Outpop::IONetwork::P2PUdpBuilder *this, char a2)
{
  Outpop::IONetwork::P2PUdpBuilder::~P2PUdpBuilder(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
