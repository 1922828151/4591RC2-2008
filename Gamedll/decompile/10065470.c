/*
 * func-name: sub_10065470
 * func-address: 0x10065470
 * callers: 0x10008026
 * callees: 0x100044a3, 0x1000a7fe
 */

_DWORD *__thiscall sub_10065470(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000A7FE();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_100044A3((int)a2);
  return this;
}
