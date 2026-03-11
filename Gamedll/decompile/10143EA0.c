/*
 * func-name: ??4FAura@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10143ea0
 * callers: 0x10009395
 * callees: 0x100124bd
 */

int __thiscall GameClient::FAura::operator=(int this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  sub_100124BD(a2 + 32);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 52, a2 + 52);
  std::string::operator=(this + 80, a2 + 80);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120);
  *(_BYTE *)(this + 124) = *(_BYTE *)(a2 + 124);
  *(float *)(this + 128) = *(float *)(a2 + 128);
  *(float *)(this + 132) = *(float *)(a2 + 132);
  *(_BYTE *)(this + 136) = *(_BYTE *)(a2 + 136);
  *(_BYTE *)(this + 137) = *(_BYTE *)(a2 + 137);
  std::string::operator=(this + 140, a2 + 140);
  *(_DWORD *)(this + 168) = *(_DWORD *)(a2 + 168);
  std::string::operator=(this + 172, a2 + 172);
  std::string::operator=(this + 200, a2 + 200);
  std::string::operator=(this + 228, a2 + 228);
  *(_BYTE *)(this + 256) = *(_BYTE *)(a2 + 256);
  return this;
}
