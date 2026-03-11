/*
 * func-name: sub_10151100
 * func-address: 0x10151100
 * callers: 0x10004ffc
 * callees: 0x1000db93, 0x10013f7a
 */

_DWORD *__thiscall sub_10151100(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000DB93();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10013F7A((int)a2);
  return this;
}
