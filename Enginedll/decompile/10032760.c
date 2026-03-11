/*
 * func-name: sub_10032760
 * func-address: 0x10032760
 * callers: 0x10033040
 * callees: 0x1001db30, 0x100323b0
 */

_DWORD *__thiscall sub_10032760(_DWORD *this, _BYTE *a2)
{
  _DWORD *v3; // edi

  v3 = this + 1;
  *(_BYTE *)this = *a2;
  this[2] = sub_1001DB30();
  v3[2] = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100323B0(this, (int)a2);
  return this;
}
