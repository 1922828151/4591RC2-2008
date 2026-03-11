/*
 * func-name: sub_100202F0
 * func-address: 0x100202f0
 * callers: none
 * callees: 0x1001f160, 0x1004e870
 */

_DWORD *__thiscall sub_100202F0(_DWORD *this, char a2)
{
  sub_1001F160(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
