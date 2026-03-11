/*
 * func-name: sub_1011D460
 * func-address: 0x1011d460
 * callers: 0x1001093d
 * callees: 0x1000254a, 0x10017a80
 */

_DWORD *__thiscall sub_1011D460(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10017A80();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000254A((int)a2);
  return this;
}
