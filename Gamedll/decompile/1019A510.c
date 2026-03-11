/*
 * func-name: ??4WeaponPattern@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1019a510
 * callers: 0x1000a808
 * callees: 0x10018836
 */

int __thiscall GameClient::WeaponPattern::operator=(int this, int a2)
{
  int result; // eax

  std::string::operator=(this, a2);
  *(_DWORD *)(this + 28) = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(this + 32) = *(_DWORD *)(a2 + 32);
  *(_BYTE *)(this + 36) = *(_BYTE *)(a2 + 36);
  *(_BYTE *)(this + 37) = *(_BYTE *)(a2 + 37);
  *(_BYTE *)(this + 38) = *(_BYTE *)(a2 + 38);
  *(float *)(this + 40) = *(float *)(a2 + 40);
  *(_DWORD *)(this + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  *(float *)(this + 52) = *(float *)(a2 + 52);
  *(_DWORD *)(this + 56) = *(_DWORD *)(a2 + 56);
  *(_BYTE *)(this + 60) = *(_BYTE *)(a2 + 60);
  sub_10018836(a2 + 64);
  sub_10018836(a2 + 80);
  *(float *)(this + 96) = *(float *)(a2 + 96);
  *(float *)(this + 100) = *(float *)(a2 + 100);
  *(_DWORD *)(this + 104) = *(_DWORD *)(a2 + 104);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(float *)(this + 116) = *(float *)(a2 + 116);
  result = this;
  *(float *)(this + 120) = *(float *)(a2 + 120);
  *(float *)(this + 124) = *(float *)(a2 + 124);
  *(float *)(this + 128) = *(float *)(a2 + 128);
  *(float *)(this + 132) = *(float *)(a2 + 132);
  *(float *)(this + 136) = *(float *)(a2 + 136);
  *(float *)(this + 140) = *(float *)(a2 + 140);
  *(float *)(this + 144) = *(float *)(a2 + 144);
  *(float *)(this + 148) = *(float *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  *(float *)(this + 156) = *(float *)(a2 + 156);
  return result;
}
