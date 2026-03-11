/*
 * func-name: sub_102C0F00
 * func-address: 0x102c0f00
 * callers: 0x100c2280, 0x100c2c00, 0x100c38b0, 0x100c40c0, 0x101751c0, 0x101774c0, 0x1017c390, 0x1017e700
 * callees: 0x100029cd
 */

_DWORD *__thiscall sub_102C0F00(_DWORD *this, _DWORD *a2)
{
  *a2 = *this;
  a2[1] = this[1];
  a2[2] = this[2];
  sub_100029CD();
  return a2;
}
