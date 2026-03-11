/*
 * func-name: sub_101C9330
 * func-address: 0x101c9330
 * callers: 0x100180e3
 * callees: 0x10019dd0, 0x1001ab4f
 */

_DWORD *__thiscall sub_101C9330(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_10019DD0();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_1001AB4F(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
