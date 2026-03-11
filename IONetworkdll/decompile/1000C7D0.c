/*
 * func-name: sub_1000C7D0
 * func-address: 0x1000c7d0
 * callers: none
 * callees: 0x1000c840, 0x1004e870
 */

_DWORD *__thiscall sub_1000C7D0(_DWORD *this, char a2)
{
  *this = &std::length_error::`vftable';
  sub_1000C840();
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
