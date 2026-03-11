/*
 * func-name: sub_10003D60
 * func-address: 0x10003d60
 * callers: none
 * callees: 0x100294f2
 */

_DWORD *__thiscall sub_10003D60(_DWORD *this, char a2)
{
  *this = &Outpop::Utility::event_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
