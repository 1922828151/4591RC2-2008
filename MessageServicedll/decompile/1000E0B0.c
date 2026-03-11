/*
 * func-name: sub_1000E0B0
 * func-address: 0x1000e0b0
 * callers: none
 * callees: 0x100294f2
 */

Outpop::IONetwork::Stream_Acceptor *__thiscall sub_1000E0B0(Outpop::IONetwork::Stream_Acceptor *this, char a2)
{
  Outpop::IONetwork::Stream_Acceptor::~Stream_Acceptor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
