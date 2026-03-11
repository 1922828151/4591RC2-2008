/*
 * func-name: ??4FDamageEquip@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101512a0
 * callers: 0x100134b7
 * callees: 0x1000ee9e
 */

int __thiscall GameClient::FDamageEquip::operator=(int this, int a2)
{
  int result; // eax

  GameClient::FItem::operator=(a2);
  *(_DWORD *)(this + 2200) = *(_DWORD *)(a2 + 2200);
  *(_DWORD *)(this + 2204) = *(_DWORD *)(a2 + 2204);
  *(_BYTE *)(this + 2208) = *(_BYTE *)(a2 + 2208);
  *(_DWORD *)(this + 2216) = *(_DWORD *)(a2 + 2216);
  *(_DWORD *)(this + 2220) = *(_DWORD *)(a2 + 2220);
  *(_DWORD *)(this + 2224) = *(_DWORD *)(a2 + 2224);
  *(_DWORD *)(this + 2228) = *(_DWORD *)(a2 + 2228);
  *(_DWORD *)(this + 2232) = *(_DWORD *)(a2 + 2232);
  *(_DWORD *)(this + 2236) = *(_DWORD *)(a2 + 2236);
  *(_DWORD *)(this + 2240) = *(_DWORD *)(a2 + 2240);
  *(_DWORD *)(this + 2244) = *(_DWORD *)(a2 + 2244);
  *(_DWORD *)(this + 2248) = *(_DWORD *)(a2 + 2248);
  *(_DWORD *)(this + 2252) = *(_DWORD *)(a2 + 2252);
  *(_DWORD *)(this + 2256) = *(_DWORD *)(a2 + 2256);
  *(_DWORD *)(this + 2260) = *(_DWORD *)(a2 + 2260);
  *(_DWORD *)(this + 2264) = *(_DWORD *)(a2 + 2264);
  std::string::operator=(this + 2268, a2 + 2268);
  std::string::operator=(this + 2296, a2 + 2296);
  std::string::operator=(this + 2324, a2 + 2324);
  *(_DWORD *)(this + 2352) = *(_DWORD *)(a2 + 2352);
  *(float *)(this + 2356) = *(float *)(a2 + 2356);
  *(_BYTE *)(this + 2360) = *(_BYTE *)(a2 + 2360);
  *(float *)(this + 2364) = *(float *)(a2 + 2364);
  result = this;
  *(float *)(this + 2368) = *(float *)(a2 + 2368);
  *(float *)(this + 2372) = *(float *)(a2 + 2372);
  return result;
}
