/*
 * func-name: sub_101F5E60
 * func-address: 0x101f5e60
 * callers: 0x10011ef5
 * callees: none
 */

Outpop::Message::Message *__thiscall sub_101F5E60(Outpop::Message::Message *this, char a2)
{
  Outpop::Message::Message::~Message(this);
  if ( (a2 & 1) != 0 )
    Outpop::Message::Message::operator delete(this);
  return this;
}
