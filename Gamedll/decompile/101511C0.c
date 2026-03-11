/*
 * func-name: ??4FItem@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x101511c0
 * callers: 0x1000ee9e
 * callees: 0x10017cba
 */

int __thiscall GameClient::FItem::operator=(int this, int a2)
{
  int result; // eax

  GameClient::FEquip::operator=(a2);
  std::string::operator=(this + 2084, a2 + 2084);
  std::string::operator=(this + 2112, a2 + 2112);
  std::string::operator=(this + 2140, a2 + 2140);
  *(_DWORD *)(this + 2168) = *(_DWORD *)(a2 + 2168);
  *(_DWORD *)(this + 2172) = *(_DWORD *)(a2 + 2172);
  *(_DWORD *)(this + 2176) = *(_DWORD *)(a2 + 2176);
  *(_DWORD *)(this + 2180) = *(_DWORD *)(a2 + 2180);
  *(_DWORD *)(this + 2184) = *(_DWORD *)(a2 + 2184);
  *(_DWORD *)(this + 2188) = *(_DWORD *)(a2 + 2188);
  *(float *)(this + 2192) = *(float *)(a2 + 2192);
  result = this;
  *(float *)(this + 2196) = *(float *)(a2 + 2196);
  return result;
}
