/*
 * func-name: sub_100F74B0
 * func-address: 0x100f74b0
 * callers: 0x100f2ca0, 0x101b85e0
 * callees: 0x100f6350, 0x1010f210
 */

_DWORD *__thiscall sub_100F74B0(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+Ch] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_1010F210(this + 1);
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_100F6350(this + 4, 9u, v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
