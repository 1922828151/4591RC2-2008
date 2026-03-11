/*
 * func-name: sub_10023BC0
 * func-address: 0x10023bc0
 * callers: none
 * callees: 0x10023b50, 0x100294f2
 */

Outpop::Utility::Thread_Message *__thiscall sub_10023BC0(Outpop::Utility::Thread_Message *this, char a2)
{
  sub_10023B50(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
