/*
 * func-name: sub_102AA9E0
 * func-address: 0x102aa9e0
 * callers: 0x10001f3c
 * callees: 0x10008044, 0x1001201c
 */

_DWORD *__thiscall sub_102AA9E0(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_10008044();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_1001201C(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
