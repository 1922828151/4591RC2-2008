/*
 * func-name: sub_10030EF0
 * func-address: 0x10030ef0
 * callers: 0x10033040
 * callees: 0x1001db70, 0x1002f7d0
 */

_DWORD *__thiscall sub_10030EF0(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // edi

  v3 = this + 1;
  *(_BYTE *)this = *a2;
  this[2] = sub_1001DB70();
  v3[2] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1002F7D0(this, (int)a2);
  return this;
}
