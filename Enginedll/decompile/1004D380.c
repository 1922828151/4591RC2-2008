/*
 * func-name: sub_1004D380
 * func-address: 0x1004d380
 * callers: none
 * callees: 0x101a2500
 */

_DWORD *__thiscall sub_1004D380(_DWORD *this, char a2)
{
  *this = &NxUserContactReport::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
