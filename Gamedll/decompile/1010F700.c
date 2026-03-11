/*
 * func-name: sub_1010F700
 * func-address: 0x1010f700
 * callers: 0x1000d8d2
 * callees: 0x1000e3a9, 0x100138f9
 */

_DWORD *__thiscall sub_1010F700(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000E3A9();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100138F9((int)a2);
  return this;
}
