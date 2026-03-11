/*
 * func-name: sub_101BD710
 * func-address: 0x101bd710
 * callers: 0x1000429b
 * callees: 0x1000984f, 0x10016aa9
 */

_DWORD *__thiscall sub_101BD710(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_10016AA9();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_1000984F(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
