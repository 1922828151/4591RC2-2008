/*
 * func-name: sub_101FBCE0
 * func-address: 0x101fbce0
 * callers: 0x1000d369
 * callees: none
 */

_DWORD *__thiscall sub_101FBCE0(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2;
  std::string::operator=(this + 1, a2 + 4);
  this[8] = *(_DWORD *)(a2 + 32);
  *((_BYTE *)this + 36) = *(_BYTE *)(a2 + 36);
  this[10] = *(_DWORD *)(a2 + 40);
  this[11] = *(_DWORD *)(a2 + 44);
  this[12] = *(_DWORD *)(a2 + 48);
  this[13] = *(_DWORD *)(a2 + 52);
  *((float *)this + 14) = *(float *)(a2 + 56);
  this[15] = *(_DWORD *)(a2 + 60);
  this[16] = *(_DWORD *)(a2 + 64);
  this[17] = *(_DWORD *)(a2 + 68);
  this[18] = *(_DWORD *)(a2 + 72);
  this[19] = *(_DWORD *)(a2 + 76);
  this[20] = *(_DWORD *)(a2 + 80);
  return this;
}
