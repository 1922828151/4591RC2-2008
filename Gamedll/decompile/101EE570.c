/*
 * func-name: sub_101EE570
 * func-address: 0x101ee570
 * callers: 0x100032a1
 * callees: 0x10005880, 0x100198c1
 */

_DWORD *__thiscall sub_101EE570(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_10005880();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_100198C1(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
