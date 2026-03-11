/*
 * func-name: sub_10030FD0
 * func-address: 0x10030fd0
 * callers: 0x100325e0
 * callees: 0x1001dbb0, 0x1002fbc0
 */

_DWORD *__thiscall sub_10030FD0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // edi

  v3 = this + 1;
  *(_BYTE *)this = *a2;
  this[2] = sub_1001DBB0();
  v3[2] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1002FBC0(this, (int)a2);
  return this;
}
