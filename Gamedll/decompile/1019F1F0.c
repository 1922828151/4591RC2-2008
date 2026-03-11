/*
 * func-name: sub_1019F1F0
 * func-address: 0x1019f1f0
 * callers: 0x1000f3da
 * callees: none
 */

Outpop::Utility::Binary_Stream *__thiscall sub_1019F1F0(Outpop::Utility::Binary_Stream *this, char a2)
{
  Outpop::Utility::Binary_Stream::~Binary_Stream(this);
  if ( (a2 & 1) != 0 )
    Outpop::Utility::Binary_Stream::operator delete(this);
  return this;
}
