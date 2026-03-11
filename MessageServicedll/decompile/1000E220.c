/*
 * func-name: sub_1000E220
 * func-address: 0x1000e220
 * callers: none
 * callees: 0x1000e150, 0x100294f2
 */

_DWORD *__thiscall sub_1000E220(_DWORD *this, char a2)
{
  sub_1000E150(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
