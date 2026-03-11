/*
 * func-name: sub_10014010
 * func-address: 0x10014010
 * callers: none
 * callees: 0x100294f2
 */

Outpop::IONetwork::Dgram_Connector *__thiscall sub_10014010(Outpop::IONetwork::Dgram_Connector *this, char a2)
{
  Outpop::IONetwork::Dgram_Connector::~Dgram_Connector(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
