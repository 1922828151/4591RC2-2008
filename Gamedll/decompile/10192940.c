/*
 * func-name: sub_10192940
 * func-address: 0x10192940
 * callers: 0x10017a8f
 * callees: 0x10011946, 0x10017896
 */

_DWORD *__thiscall sub_10192940(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10011946();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10017896((int)a2);
  return this;
}
