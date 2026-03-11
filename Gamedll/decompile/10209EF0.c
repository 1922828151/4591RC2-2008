/*
 * func-name: sub_10209EF0
 * func-address: 0x10209ef0
 * callers: 0x1000ab05
 * callees: 0x100100f0, 0x100108a7
 */

_DWORD *__thiscall sub_10209EF0(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_100108A7();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_100100F0(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
