/*
 * func-name: sub_1007A930
 * func-address: 0x1007a930
 * callers: 0x100028b5
 * callees: 0x1000b5e6, 0x1000e62e
 */

_DWORD *__thiscall sub_1007A930(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000E62E();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000B5E6((int)a2);
  return this;
}
