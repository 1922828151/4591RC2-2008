/*
 * func-name: sub_1005EE50
 * func-address: 0x1005ee50
 * callers: 0x100069fb
 * callees: 0x100066f9, 0x100185a2
 */

_DWORD *__thiscall sub_1005EE50(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_100185A2();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_100066F9(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
