/*
 * func-name: sub_100140A0
 * func-address: 0x100140a0
 * callers: none
 * callees: 0x100140c0, 0x100294f2
 */

void *__thiscall sub_100140A0(void *this, char a2)
{
  sub_100140C0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
