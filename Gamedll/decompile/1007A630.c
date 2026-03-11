/*
 * func-name: sub_1007A630
 * func-address: 0x1007a630
 * callers: 0x10017251
 * callees: 0x10009610, 0x1000a88a
 */

_DWORD *__thiscall sub_1007A630(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1000A88A();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10009610((int)a2);
  return this;
}
