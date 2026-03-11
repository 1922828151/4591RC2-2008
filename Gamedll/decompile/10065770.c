/*
 * func-name: sub_10065770
 * func-address: 0x10065770
 * callers: 0x10018912
 * callees: 0x10006280, 0x1001387c
 */

_DWORD *__thiscall sub_10065770(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1001387C();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10006280((int)a2);
  return this;
}
