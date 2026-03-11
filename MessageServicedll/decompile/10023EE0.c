/*
 * func-name: sub_10023EE0
 * func-address: 0x10023ee0
 * callers: none
 * callees: 0x10023e30, 0x100294f2
 */

Outpop::Utility::Thread_Message *__thiscall sub_10023EE0(Outpop::Utility::Thread_Message *this, char a2)
{
  sub_10023E30(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
