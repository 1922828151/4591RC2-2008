/*
 * func-name: sub_1001B610
 * func-address: 0x1001b610
 * callers: 0x1001f2a0, 0x1001f330, 0x100e3840, 0x100e7ce0, 0x100e8310
 * callees: none
 */

_DWORD *__thiscall sub_1001B610(_DWORD *this, int a2)
{
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  *((_BYTE *)this + 8) = *(_BYTE *)(a2 + 8);
  *((_BYTE *)this + 9) = *(_BYTE *)(a2 + 9);
  *((_BYTE *)this + 10) = *(_BYTE *)(a2 + 10);
  this[3] = *(_DWORD *)(a2 + 12);
  *((float *)this + 4) = *(float *)(a2 + 16);
  *((_BYTE *)this + 20) = *(_BYTE *)(a2 + 20);
  std::string::string(this + 6, a2 + 24);
  std::string::string(this + 13, a2 + 52);
  *((_BYTE *)this + 80) = *(_BYTE *)(a2 + 80);
  *((_BYTE *)this + 81) = *(_BYTE *)(a2 + 81);
  *((_BYTE *)this + 82) = *(_BYTE *)(a2 + 82);
  *((_BYTE *)this + 83) = *(_BYTE *)(a2 + 83);
  *((_BYTE *)this + 84) = *(_BYTE *)(a2 + 84);
  this[22] = *(_DWORD *)(a2 + 88);
  this[23] = *(_DWORD *)(a2 + 92);
  return this;
}
