/*
 * func-name: sub_1006C7D0
 * func-address: 0x1006c7d0
 * callers: none
 * callees: 0x1016d6e0, 0x101a2500
 */

RenderBase *__thiscall sub_1006C7D0(RenderBase *this, char a2)
{
  sub_1016D6E0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
