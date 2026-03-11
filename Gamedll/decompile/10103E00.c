/*
 * func-name: sub_10103E00
 * func-address: 0x10103e00
 * callers: 0x1000a1d2
 * callees: 0x10012e5e, 0x1001a8e8
 */

_DWORD *__thiscall sub_10103E00(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1001A8E8();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10012E5E((int)a2);
  return this;
}
