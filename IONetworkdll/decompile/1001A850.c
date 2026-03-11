/*
 * func-name: sub_1001A850
 * func-address: 0x1001a850
 * callers: none
 * callees: 0x10019210, 0x1004e870
 */

_DWORD *__thiscall sub_1001A850(_DWORD *this, char a2)
{
  sub_10019210(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
