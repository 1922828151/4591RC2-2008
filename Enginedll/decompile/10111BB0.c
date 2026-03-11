/*
 * func-name: sub_10111BB0
 * func-address: 0x10111bb0
 * callers: 0x101b86d0
 * callees: 0x1010f2d0, 0x101102b0
 */

_DWORD *__thiscall sub_10111BB0(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+Ch] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_1010F2D0();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_101102B0(this + 4, 9u, v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
