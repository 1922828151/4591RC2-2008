/*
 * func-name: ??4FFunc_Receive@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101c3210
 * callers: 0x100144a2
 * callees: 0x100124bd
 */

int __thiscall GameClient::FFunc_Receive::operator=(int this, int a2)
{
  int result; // eax

  std::string::operator=(this + 4, a2 + 4);
  sub_100124BD(a2 + 32);
  *(_DWORD *)(this + 48) = *(_DWORD *)(a2 + 48);
  std::string::operator=(this + 52, a2 + 52);
  std::string::operator=(this + 80, a2 + 80);
  *(_DWORD *)(this + 108) = *(_DWORD *)(a2 + 108);
  *(_DWORD *)(this + 112) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(this + 116) = *(_DWORD *)(a2 + 116);
  *(float *)(this + 120) = *(float *)(a2 + 120);
  result = this;
  *(float *)(this + 124) = *(float *)(a2 + 124);
  return result;
}
