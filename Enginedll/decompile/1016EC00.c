/*
 * func-name: sub_1016EC00
 * func-address: 0x1016ec00
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_1016EC00(_DWORD *this, char a2)
{
  *this = &CUIController::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
