/*
 * func-name: sub_10013FF0
 * func-address: 0x10013ff0
 * callers: none
 * callees: 0x100294f2
 */

Outpop::IONetwork::Stream_Connector *__thiscall sub_10013FF0(Outpop::IONetwork::Stream_Connector *this, char a2)
{
  Outpop::IONetwork::Stream_Connector::~Stream_Connector(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
