/*
 * func-name: sub_10034710
 * func-address: 0x10034710
 * callers: none
 * callees: 0x10034620, 0x1004e870
 */

_DWORD *__thiscall sub_10034710(_DWORD *this, char a2)
{
  sub_10034620(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
