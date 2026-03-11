/*
 * func-name: ??4FWheel@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101aa960
 * callers: 0x1000f173
 * callees: 0x100124bd
 */

int __thiscall GameClient::FWheel::operator=(int this, int a2)
{
  int result; // eax

  std::string::operator=(this + 4, a2 + 4);
  sub_100124BD(a2 + 32);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 52, a2 + 52);
  std::string::operator=(this + 80, a2 + 80);
  *(float *)(this + 108) = *(float *)(a2 + 108);
  result = this;
  *(float *)(this + 112) = *(float *)(a2 + 112);
  *(float *)(this + 116) = *(float *)(a2 + 116);
  *(float *)(this + 120) = *(float *)(a2 + 120);
  *(float *)(this + 124) = *(float *)(a2 + 124);
  *(float *)(this + 128) = *(float *)(a2 + 128);
  *(float *)(this + 132) = *(float *)(a2 + 132);
  *(float *)(this + 136) = *(float *)(a2 + 136);
  *(float *)(this + 140) = *(float *)(a2 + 140);
  *(float *)(this + 144) = *(float *)(a2 + 144);
  return result;
}
