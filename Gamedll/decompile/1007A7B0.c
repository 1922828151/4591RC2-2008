/*
 * func-name: sub_1007A7B0
 * func-address: 0x1007a7b0
 * callers: 0x1000db4d
 * callees: 0x1000a2ef, 0x10010e92
 */

_DWORD *__thiscall sub_1007A7B0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000A2EF();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10010E92((int)a2);
  return this;
}
