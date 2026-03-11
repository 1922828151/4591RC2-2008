/*
 * func-name: sub_100324A0
 * func-address: 0x100324a0
 * callers: 0x10005c59
 * callees: 0x100029cd
 */

_DWORD *__thiscall sub_100324A0(_DWORD *this, _DWORD *a2)
{
  *a2 = *this;
  a2[1] = this[1];
  a2[2] = this[2];
  sub_100029CD();
  return a2;
}
