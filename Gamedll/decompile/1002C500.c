/*
 * func-name: ??4Game@@QAEAAV0@ABV0@@Z_0
 * func-address: 0x1002c500
 * callers: 0x1001722e
 * callees: 0x1000d5c1
 */

char *__thiscall Game::operator=(char *this, int a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  this[4] = *(_BYTE *)(a2 + 4);
  this[5] = *(_BYTE *)(a2 + 5);
  this[6] = *(_BYTE *)(a2 + 6);
  *((_DWORD *)this + 2) = *(_DWORD *)(a2 + 8);
  *((_DWORD *)this + 3) = *(_DWORD *)(a2 + 12);
  std::vector<Model *>::operator=(this + 16, a2 + 16);
  this[32] = *(_BYTE *)(a2 + 32);
  this[33] = *(_BYTE *)(a2 + 33);
  this[34] = *(_BYTE *)(a2 + 34);
  this[35] = *(_BYTE *)(a2 + 35);
  this[36] = *(_BYTE *)(a2 + 36);
  std::string::operator=(this + 40, a2 + 40);
  std::string::operator=(this + 68, a2 + 68);
  *((float *)this + 24) = *(float *)(a2 + 96);
  *((_DWORD *)this + 25) = *(_DWORD *)(a2 + 100);
  *((_DWORD *)this + 26) = *(_DWORD *)(a2 + 104);
  *((_DWORD *)this + 27) = *(_DWORD *)(a2 + 108);
  *((float *)this + 28) = *(float *)(a2 + 112);
  this[116] = *(_BYTE *)(a2 + 116);
  sub_1000D5C1(a2 + 120);
  return this;
}
