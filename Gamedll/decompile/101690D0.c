/*
 * func-name: sub_101690D0
 * func-address: 0x101690d0
 * callers: 0x1001775b
 * callees: 0x1000d6e3, 0x10016fea
 */

_DWORD *__thiscall sub_101690D0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10016FEA();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000D6E3((int)a2);
  return this;
}
