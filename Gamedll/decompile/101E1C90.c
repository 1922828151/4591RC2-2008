/*
 * func-name: sub_101E1C90
 * func-address: 0x101e1c90
 * callers: 0x10016c11
 * callees: 0x10001ebf, 0x10019c45
 */

char *__thiscall sub_101E1C90(char *this, int a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::string::string(this + 4, (void *)(a2 + 4));
  this[32] = *(_BYTE *)(a2 + 32);
  *((_DWORD *)this + 9) = *(_DWORD *)(a2 + 36);
  this[40] = *(_BYTE *)(a2 + 40);
  this[41] = *(_BYTE *)(a2 + 41);
  *((_DWORD *)this + 11) = *(_DWORD *)(a2 + 44);
  *((_DWORD *)this + 12) = *(_DWORD *)(a2 + 48);
  *((_DWORD *)this + 13) = *(_DWORD *)(a2 + 52);
  *((_DWORD *)this + 14) = *(_DWORD *)(a2 + 56);
  std::string::string(this + 60, (void *)(a2 + 60));
  std::string::string(this + 88, (void *)(a2 + 88));
  std::string::string(this + 116, (void *)(a2 + 116));
  std::string::string(this + 144, (void *)(a2 + 144));
  this[172] = *(_BYTE *)(a2 + 172);
  sub_10001EBF(a2 + 176);
  sub_10019C45(a2 + 192);
  return this;
}
