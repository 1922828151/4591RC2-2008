/*
 * func-name: sub_101464E0
 * func-address: 0x101464e0
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_101464E0(_DWORD *this, char a2)
{
  *this = &NxControllerDesc::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
