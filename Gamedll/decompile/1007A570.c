/*
 * func-name: sub_1007A570
 * func-address: 0x1007a570
 * callers: 0x1000416f
 * callees: 0x1000961f, 0x10013d1d
 */

_DWORD *__thiscall sub_1007A570(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10013D1D();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000961F((int)a2);
  return this;
}
