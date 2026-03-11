/*
 * func-name: sub_100237A0
 * func-address: 0x100237a0
 * callers: none
 * callees: 0x10023530, 0x100294f2
 */

Outpop::Utility::Timer_Handler *__thiscall sub_100237A0(Outpop::Utility::Timer_Handler *this, char a2)
{
  sub_10023530(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
