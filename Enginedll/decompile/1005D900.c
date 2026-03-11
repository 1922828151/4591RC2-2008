/*
 * func-name: sub_1005D900
 * func-address: 0x1005d900
 * callers: 0x10055de0
 * callees: 0x10020130, 0x10021e30, 0x1005d480
 */

int __thiscall sub_1005D900(int this, int a2)
{
  sub_10021E30(this, a2);
  *(_DWORD *)(this + 16) = *(_DWORD *)(a2 + 16);
  *(_DWORD *)(this + 20) = *(_DWORD *)(a2 + 20);
  std::string::operator=(this + 24, a2 + 24);
  *(_DWORD *)(this + 52) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_DWORD *)(this + 60) = *(_DWORD *)(a2 + 60);
  *(_DWORD *)(this + 64) = *(_DWORD *)(a2 + 64);
  *(_DWORD *)(this + 68) = *(_DWORD *)(a2 + 68);
  *(_DWORD *)(this + 72) = *(_DWORD *)(a2 + 72);
  std::vector<Matrix *>::operator=(this + 76, a2 + 76);
  *(_DWORD *)(this + 92) = *(_DWORD *)(a2 + 92);
  qmemcpy((void *)(this + 96), (const void *)(a2 + 96), 0x42u);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  *(_DWORD *)(this + 172) = *(_DWORD *)(a2 + 172);
  *(_DWORD *)(this + 176) = *(_DWORD *)(a2 + 176);
  *(_DWORD *)(this + 180) = *(_DWORD *)(a2 + 180);
  *(_DWORD *)(this + 184) = *(_DWORD *)(a2 + 184);
  *(_DWORD *)(this + 188) = *(_DWORD *)(a2 + 188);
  *(_DWORD *)(this + 192) = *(_DWORD *)(a2 + 192);
  *(_DWORD *)(this + 196) = *(_DWORD *)(a2 + 196);
  *(_DWORD *)(this + 200) = *(_DWORD *)(a2 + 200);
  *(_DWORD *)(this + 204) = *(_DWORD *)(a2 + 204);
  *(_BYTE *)(this + 208) = *(_BYTE *)(a2 + 208);
  *(_DWORD *)(this + 212) = *(_DWORD *)(a2 + 212);
  *(_DWORD *)(this + 216) = *(_DWORD *)(a2 + 216);
  *(_DWORD *)(this + 220) = *(_DWORD *)(a2 + 220);
  *(_BYTE *)(this + 224) = *(_BYTE *)(a2 + 224);
  *(_DWORD *)(this + 228) = *(_DWORD *)(a2 + 228);
  *(_DWORD *)(this + 232) = *(_DWORD *)(a2 + 232);
  sub_1005D480((_DWORD *)(this + 236), (_DWORD *)(a2 + 236));
  *(_DWORD *)(this + 256) = *(_DWORD *)(a2 + 256);
  *(_DWORD *)(this + 260) = *(_DWORD *)(a2 + 260);
  *(_BYTE *)(this + 264) = *(_BYTE *)(a2 + 264);
  *(_BYTE *)(this + 265) = *(_BYTE *)(a2 + 265);
  *(float *)(this + 268) = *(float *)(a2 + 268);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(this + 276) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(this + 280) = *(_DWORD *)(a2 + 280);
  return this;
}
