/*
 * func-name: sub_101F1F90
 * func-address: 0x101f1f90
 * callers: 0x1000b1a4
 * callees: 0x1000f2cc, 0x1000f60a
 */

char *__thiscall sub_101F1F90(char *this, int a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::string::operator=(this + 4, a2 + 4);
  this[32] = *(_BYTE *)(a2 + 32);
  *((_DWORD *)this + 9) = *(_DWORD *)(a2 + 36);
  this[40] = *(_BYTE *)(a2 + 40);
  this[41] = *(_BYTE *)(a2 + 41);
  *((_DWORD *)this + 11) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)this + 12) = *(_DWORD *)(a2 + 48);
  *((_DWORD *)this + 13) = *(_DWORD *)(a2 + 52);
  *((_DWORD *)this + 14) = *(_DWORD *)(a2 + 56);
  std::string::operator=(this + 60, a2 + 60);
  std::string::operator=(this + 88, a2 + 88);
  std::string::operator=(this + 116, a2 + 116);
  std::string::operator=(this + 144, a2 + 144);
  this[172] = *(_BYTE *)(a2 + 172);
  sub_1000F2CC(a2 + 176);
  sub_1000F60A(a2 + 192);
  return this;
}
