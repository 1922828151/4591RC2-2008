/*
 * func-name: sub_10067880
 * func-address: 0x10067880
 * callers: 0x10015a8c
 * callees: 0x10005335, 0x10007ffe
 */

_DWORD *__thiscall sub_10067880(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10005335();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10007FFE((int)a2);
  return this;
}
