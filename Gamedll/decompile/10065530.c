/*
 * func-name: sub_10065530
 * func-address: 0x10065530
 * callers: 0x100077d4
 * callees: 0x1000c9f0, 0x10010cda
 */

_DWORD *__thiscall sub_10065530(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000C9F0();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10010CDA((int)a2);
  return this;
}
