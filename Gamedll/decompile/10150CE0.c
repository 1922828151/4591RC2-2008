/*
 * func-name: ??4DamageEquip@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10150ce0
 * callers: 0x100153d4
 * callees: 0x10009345, 0x1000bdbb
 */

int __thiscall GameClient::DamageEquip::operator=(int this, int a2)
{
  int result; // eax

  GameClient::Equip::operator=(a2);
  std::string::operator=(this + 740, a2 + 740);
  *(_DWORD *)(this + 768) = *(_DWORD *)(a2 + 768);
  *(_DWORD *)(this + 772) = *(_DWORD *)(a2 + 772);
  *(_DWORD *)(this + 776) = *(_DWORD *)(a2 + 776);
  sub_1000BDBB(a2 + 784);
  *(_DWORD *)(this + 800) = *(_DWORD *)(a2 + 800);
  *(_DWORD *)(this + 804) = *(_DWORD *)(a2 + 804);
  *(_DWORD *)(this + 808) = *(_DWORD *)(a2 + 808);
  *(_DWORD *)(this + 812) = *(_DWORD *)(a2 + 812);
  *(_DWORD *)(this + 816) = *(_DWORD *)(a2 + 816);
  *(_BYTE *)(this + 820) = *(_BYTE *)(a2 + 820);
  std::string::operator=(this + 824, a2 + 824);
  std::string::operator=(this + 852, a2 + 852);
  *(_DWORD *)(this + 880) = *(_DWORD *)(a2 + 880);
  *(float *)(this + 884) = *(float *)(a2 + 884);
  *(_BYTE *)(this + 888) = *(_BYTE *)(a2 + 888);
  result = this;
  *(float *)(this + 892) = *(float *)(a2 + 892);
  *(float *)(this + 896) = *(float *)(a2 + 896);
  *(float *)(this + 900) = *(float *)(a2 + 900);
  return result;
}
