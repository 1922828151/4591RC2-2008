/*
 * func-name: sub_1003B960
 * func-address: 0x1003b960
 * callers: none
 * callees: 0x1003b5a0, 0x1004e870
 */

_DWORD *__thiscall sub_1003B960(_DWORD *this, char a2)
{
  sub_1003B5A0(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
