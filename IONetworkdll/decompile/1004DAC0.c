/*
 * func-name: sub_1004DAC0
 * func-address: 0x1004dac0
 * callers: none
 * callees: 0x1004d960, 0x1004e870
 */

_DWORD *__thiscall sub_1004DAC0(_DWORD *this, char a2)
{
  sub_1004D960(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
