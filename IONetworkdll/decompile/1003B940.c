/*
 * func-name: sub_1003B940
 * func-address: 0x1003b940
 * callers: none
 * callees: 0x1003a4d0, 0x1004e870
 */

_DWORD *__thiscall sub_1003B940(_DWORD *this, char a2)
{
  sub_1003A4D0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
