/*
 * func-name: sub_101236C0
 * func-address: 0x101236c0
 * callers: 0x10004cc3
 * callees: 0x102c9d50
 */

Actor *__thiscall sub_101236C0(Actor *this, char a2)
{
  Actor::~Actor(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
