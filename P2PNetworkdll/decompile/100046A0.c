/*
 * func-name: sub_100046A0
 * func-address: 0x100046a0
 * callers: none
 * callees: none
 */

Outpop::Utility::Binary_Stream *__thiscall sub_100046A0(Outpop::Utility::Binary_Stream *this, char a2)
{
  Outpop::Utility::Binary_Stream::~Binary_Stream(this);
  if ( (a2 & 1) != 0 )
    Outpop::Utility::Binary_Stream::operator delete(this);
  return this;
}
