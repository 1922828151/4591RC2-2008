/*
 * func-name: sub_101EE3E0
 * func-address: 0x101ee3e0
 * callers: 0x1000e061
 * callees: 0x10004485, 0x10004ad9
 */

_DWORD *__thiscall sub_101EE3E0(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_10004AD9();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_10004485(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
