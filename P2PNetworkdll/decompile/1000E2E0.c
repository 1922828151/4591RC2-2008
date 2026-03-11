/*
 * func-name: sub_1000E2E0
 * func-address: 0x1000e2e0
 * callers: none
 * callees: 0x1000e270, 0x10023306
 */

_DWORD *__thiscall sub_1000E2E0(_DWORD *this, char a2)
{
  sub_1000E270(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
