/*
 * func-name: sub_10020E50
 * func-address: 0x10020e50
 * callers: none
 * callees: 0x10020c80, 0x100294f2
 */

_DWORD *__thiscall sub_10020E50(_DWORD *this, char a2)
{
  sub_10020C80(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
