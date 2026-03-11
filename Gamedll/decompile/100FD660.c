/*
 * func-name: sub_100FD660
 * func-address: 0x100fd660
 * callers: 0x10017cce
 * callees: 0x10007c89, 0x1000e732
 */

_DWORD *__thiscall sub_100FD660(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000E732();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10007C89((int)a2);
  return this;
}
