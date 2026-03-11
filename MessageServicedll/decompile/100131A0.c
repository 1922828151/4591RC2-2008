/*
 * func-name: sub_100131A0
 * func-address: 0x100131a0
 * callers: none
 * callees: 0x100130c0, 0x100294f2
 */

void **__thiscall sub_100131A0(void **this, char a2)
{
  sub_100130C0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
