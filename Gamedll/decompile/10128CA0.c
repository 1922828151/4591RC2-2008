/*
 * func-name: sub_10128CA0
 * func-address: 0x10128ca0
 * callers: 0x100156c2
 * callees: 0x10003aa8, 0x1001873c
 */

_DWORD *__thiscall sub_10128CA0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10003AA8();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1001873C((int)a2);
  return this;
}
