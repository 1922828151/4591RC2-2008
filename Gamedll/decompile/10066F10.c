/*
 * func-name: sub_10066F10
 * func-address: 0x10066f10
 * callers: 0x1000aefc
 * callees: 0x10014790, 0x10016d9c
 */

_DWORD *__thiscall sub_10066F10(_DWORD *this, _BYTE *a2)
{
  char *v3; // edi

  v3 = (char *)(this + 1);
  *(_BYTE *)this = *a2;
  this[2] = sub_10016D9C();
  *((_DWORD *)v3 + 2) = 0;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10014790((int)a2);
  return this;
}
