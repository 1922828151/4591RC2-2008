/*
 * func-name: sub_10230E80
 * func-address: 0x10230e80
 * callers: 0x1000f9a7
 * callees: 0x1000a7fe, 0x10016284
 */

_DWORD *__thiscall sub_10230E80(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_1000A7FE();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_10016284(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
