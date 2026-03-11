/*
 * func-name: ??4StaticModel@@QAEAAV0@ABV0@@Z
 * func-address: 0x1002d2e0
 * callers: 0x10031350, 0x100efd90
 * callees: 0x10011510, 0x10020000, 0x10021e30
 */

int __thiscall StaticModel::operator=(int this, int a2)
{
  *(_BYTE *)(this + 4) = *(_BYTE *)(a2 + 4);
  *(_DWORD *)(this + 8) = *(_DWORD *)(a2 + 8);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  *(_DWORD *)(this + 24) = *(_DWORD *)(a2 + 24);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(this + 36) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(this + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(float *)(this + 52) = *(float *)(a2 + 52);
  *(_BYTE *)(this + 56) = *(_BYTE *)(a2 + 56);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  *(_DWORD *)(this + 76) = *(_DWORD *)(a2 + 76);
  *(_DWORD *)(this + 80) = *(_DWORD *)(a2 + 80);
  *(_DWORD *)(this + 84) = *(_DWORD *)(a2 + 84);
  *(_DWORD *)(this + 88) = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(this + 96) = *(_DWORD *)(a2 + 96);
  *(_DWORD *)(this + 100) = *(_DWORD *)(a2 + 100);
  sub_10011510(this + 104, a2 + 104);
  std::vector<Model *>::operator=(this + 120, a2 + 120);
  *(_BYTE *)(this + 136) = *(_BYTE *)(a2 + 136);
  *(_BYTE *)(this + 137) = *(_BYTE *)(a2 + 137);
  *(_BYTE *)(this + 138) = *(_BYTE *)(a2 + 138);
  *(_BYTE *)(this + 139) = *(_BYTE *)(a2 + 139);
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144);
  qmemcpy((void *)(this + 148), (const void *)(a2 + 148), 0x4Cu);
  qmemcpy((void *)(this + 224), (const void *)(a2 + 224), 0x40u);
  sub_10021E30(this + 288, a2 + 288);
  *(_DWORD *)(this + 304) = *(_DWORD *)(a2 + 304);
  *(_DWORD *)(this + 308) = *(_DWORD *)(a2 + 308);
  *(_BYTE *)(this + 312) = *(_BYTE *)(a2 + 312);
  *(_BYTE *)(this + 313) = *(_BYTE *)(a2 + 313);
  *(_BYTE *)(this + 314) = *(_BYTE *)(a2 + 314);
  *(_BYTE *)(this + 315) = *(_BYTE *)(a2 + 315);
  *(_DWORD *)(this + 316) = *(_DWORD *)(a2 + 316);
  std::string::operator=(this + 320, a2 + 320);
  std::string::operator=(this + 348, a2 + 348);
  return this;
}
