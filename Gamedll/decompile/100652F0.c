/*
 * func-name: sub_100652F0
 * func-address: 0x100652f0
 * callers: 0x10007851
 * callees: 0x1000b32a, 0x1001251c
 */

_DWORD *__thiscall sub_100652F0(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_1001251C();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_1000B32A((int)a2);
  return this;
}
