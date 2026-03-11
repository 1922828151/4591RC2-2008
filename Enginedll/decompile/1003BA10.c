/*
 * func-name: sub_1003BA10
 * func-address: 0x1003ba10
 * callers: 0x1003c010, 0x1015c970, 0x1015c9c0
 * callees: 0x10023440
 */

_DWORD *__thiscall sub_1003BA10(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2;
  this[2] = *(_DWORD *)(a2 + 8);
  this[3] = *(_DWORD *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  this[5] = *(_DWORD *)(a2 + 20);
  this[6] = *(_DWORD *)(a2 + 24);
  this[7] = *(_DWORD *)(a2 + 28);
  this[8] = *(_DWORD *)(a2 + 32);
  this[9] = *(_DWORD *)(a2 + 36);
  this[10] = *(_DWORD *)(a2 + 40);
  *((_BYTE *)this + 44) = *(_BYTE *)(a2 + 44);
  sub_10023440((int)(this + 12), a2 + 48);
  this[16] = *(_DWORD *)(a2 + 64);
  this[17] = *(_DWORD *)(a2 + 68);
  *((float *)this + 18) = *(float *)(a2 + 72);
  this[19] = *(_DWORD *)(a2 + 76);
  return this;
}
