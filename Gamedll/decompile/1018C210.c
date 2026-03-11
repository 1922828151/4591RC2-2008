/*
 * func-name: ??4FRobotCore@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1018c210
 * callers: 0x1000dbfc
 * callees: 0x100102b7
 */

int __thiscall GameClient::FRobotCore::operator=(int this, int a2)
{
  GameClient::FSystemPart::operator=(a2);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  *(_DWORD *)(this + 276) = *(_DWORD *)(a2 + 276);
  *(_DWORD *)(this + 280) = *(_DWORD *)(a2 + 280);
  *(float *)(this + 284) = *(float *)(a2 + 284);
  *(_DWORD *)(this + 288) = *(_DWORD *)(a2 + 288);
  std::string::operator=(this + 292, a2 + 292);
  return this;
}
