/*
 * func-name: sub_10143C80
 * func-address: 0x10143c80
 * callers: 0x10003ff8
 * callees: 0x10011a5e, 0x10012c5b
 */

_DWORD *__thiscall sub_10143C80(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10011A5E();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10012C5B((int)a2);
  return this;
}
