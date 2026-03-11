/*
 * func-name: sub_10005AC0
 * func-address: 0x10005ac0
 * callers: none
 * callees: none
 */

Outpop::Utility::Binary_Stream *__thiscall sub_10005AC0(Outpop::Utility::Binary_Stream *this, char a2)
{
  Outpop::Utility::Binary_Stream::~Binary_Stream(this);
  if ( (a2 & 1) != 0 )
    Outpop::Utility::Binary_Stream::operator delete(this);
  return this;
}
