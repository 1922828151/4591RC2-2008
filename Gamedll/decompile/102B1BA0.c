/*
 * func-name: sub_102B1BA0
 * func-address: 0x102b1ba0
 * callers: 0x1000fea7
 * callees: 0x100119c3, 0x10014164
 */

_DWORD *__thiscall sub_102B1BA0(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_100119C3();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_10014164(9, (int)v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
