/*
 * func-name: sub_10176990
 * func-address: 0x10176990
 * callers: 0x10174800
 * callees: 0x1001db90, 0x10175df0
 */

_DWORD *__thiscall sub_10176990(_DWORD *this, _BYTE *a2, int a3)
{
  char *v4; // edi
  int v5; // edx
  _DWORD v7[5]; // [esp+Ch] [ebp-14h] BYREF

  *(_BYTE *)this = *a2;
  v4 = (char *)(this + 1);
  this[2] = sub_1001DB90();
  *((_DWORD *)v4 + 2) = 0;
  v5 = *((_DWORD *)v4 + 1);
  v7[4] = 0;
  v7[1] = v5;
  v7[0] = v4;
  sub_10175DF0(this + 4, 9u, v7);
  this[8] = 1;
  this[9] = 1;
  return this;
}
