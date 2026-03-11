/*
 * func-name: sub_10023AB0
 * func-address: 0x10023ab0
 * callers: none
 * callees: 0x100239c0, 0x100294f2
 */

_DWORD *__thiscall sub_10023AB0(_DWORD *this, char a2)
{
  sub_100239C0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
