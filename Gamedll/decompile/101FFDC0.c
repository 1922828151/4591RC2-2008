/*
 * func-name: sub_101FFDC0
 * func-address: 0x101ffdc0
 * callers: 0x10011e00
 * callees: 0x1000e62e, 0x1000fa47
 */

_DWORD *__thiscall sub_101FFDC0(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_1000E62E();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_1000FA47(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
