/*
 * func-name: sub_1000B680
 * func-address: 0x1000b680
 * callers: 0x1000b900, 0x10013320, 0x10063f00, 0x10063f40
 * callees: none
 */

_DWORD *__thiscall sub_1000B680(_DWORD *this, int a2)
{
  _DWORD *result; // eax

  result = this;
  *this = *(_DWORD *)a2;
  this[1] = *(_DWORD *)(a2 + 4);
  this[2] = *(_DWORD *)(a2 + 8);
  this[3] = *(_DWORD *)(a2 + 12);
  this[4] = *(_DWORD *)(a2 + 16);
  this[5] = *(_DWORD *)(a2 + 20);
  this[6] = *(_DWORD *)(a2 + 24);
  this[7] = *(_DWORD *)(a2 + 28);
  this[8] = *(_DWORD *)(a2 + 32);
  this[9] = *(_DWORD *)(a2 + 36);
  this[10] = *(_DWORD *)(a2 + 40);
  this[11] = *(_DWORD *)(a2 + 44);
  this[12] = *(_DWORD *)(a2 + 48);
  this[13] = *(_DWORD *)(a2 + 52);
  this[14] = *(_DWORD *)(a2 + 56);
  this[15] = *(_DWORD *)(a2 + 60);
  this[16] = *(_DWORD *)(a2 + 64);
  this[17] = *(_DWORD *)(a2 + 68);
  this[18] = *(_DWORD *)(a2 + 72);
  this[19] = *(_DWORD *)(a2 + 76);
  this[20] = *(_DWORD *)(a2 + 80);
  this[21] = *(_DWORD *)(a2 + 84);
  this[22] = *(_DWORD *)(a2 + 88);
  this[23] = *(_DWORD *)(a2 + 92);
  *((_BYTE *)this + 96) = *(_BYTE *)(a2 + 96);
  this[26] = *(_DWORD *)(a2 + 104);
  this[27] = *(_DWORD *)(a2 + 108);
  this[28] = *(_DWORD *)(a2 + 112);
  this[29] = *(_DWORD *)(a2 + 116);
  this[30] = *(_DWORD *)(a2 + 120);
  this[31] = *(_DWORD *)(a2 + 124);
  this[32] = *(_DWORD *)(a2 + 128);
  this[33] = *(_DWORD *)(a2 + 132);
  this[34] = *(_DWORD *)(a2 + 136);
  return result;
}
