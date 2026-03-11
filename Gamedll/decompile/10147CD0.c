/*
 * func-name: ??4FBooty@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10147cd0
 * callers: 0x1000d9b3
 * callees: 0x100124bd
 */

int __thiscall GameClient::FBooty::operator=(int this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  sub_100124BD(a2 + 32);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 52, a2 + 52);
  std::string::operator=(this + 80, a2 + 80);
  *(float *)(this + 108) = *(float *)(a2 + 108);
  *(float *)(this + 112) = *(float *)(a2 + 112);
  *(_DWORD *)(this + 120) = *(_DWORD *)(a2 + 120);
  *(_DWORD *)(this + 124) = *(_DWORD *)(a2 + 124);
  *(_DWORD *)(this + 128) = *(_DWORD *)(a2 + 128);
  *(_DWORD *)(this + 132) = *(_DWORD *)(a2 + 132);
  *(_DWORD *)(this + 136) = *(_DWORD *)(a2 + 136);
  *(_DWORD *)(this + 140) = *(_DWORD *)(a2 + 140);
  *(_DWORD *)(this + 144) = *(_DWORD *)(a2 + 144);
  *(_DWORD *)(this + 148) = *(_DWORD *)(a2 + 148);
  *(_DWORD *)(this + 152) = *(_DWORD *)(a2 + 152);
  std::string::operator=(this + 156, a2 + 156);
  return this;
}
