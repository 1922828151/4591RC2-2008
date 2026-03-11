/*
 * func-name: sub_1001A3C0
 * func-address: 0x1001a3c0
 * callers: none
 * callees: 0x1001a2d0, 0x100294f2
 */

Outpop::Utility::Thread_Message *__thiscall sub_1001A3C0(Outpop::Utility::Thread_Message *this, char a2)
{
  sub_1001A2D0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
