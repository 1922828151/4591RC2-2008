/*
 * func-name: ??4FRobotArmor@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10066250
 * callers: 0x100047aa
 * callees: 0x1000d5c1, 0x1000da35, 0x100102b7, 0x10017c79
 */

int __thiscall GameClient::FRobotArmor::operator=(int this, int a2)
{
  GameClient::FSystemPart::operator=(a2);
  *(_DWORD *)(this + 272) = *(_DWORD *)(a2 + 272);
  std::string::operator=(this + 276, a2 + 276);
  std::string::operator=(this + 304, a2 + 304);
  *(_DWORD *)(this + 332) = *(_DWORD *)(a2 + 332);
  *(_DWORD *)(this + 336) = *(_DWORD *)(a2 + 336);
  *(float *)(this + 340) = *(float *)(a2 + 340);
  *(float *)(this + 344) = *(float *)(a2 + 344);
  *(_DWORD *)(this + 348) = *(_DWORD *)(a2 + 348);
  *(_DWORD *)(this + 352) = *(_DWORD *)(a2 + 352);
  *(_DWORD *)(this + 356) = *(_DWORD *)(a2 + 356);
  *(_DWORD *)(this + 360) = *(_DWORD *)(a2 + 360);
  *(_DWORD *)(this + 364) = *(_DWORD *)(a2 + 364);
  *(_DWORD *)(this + 368) = *(_DWORD *)(a2 + 368);
  *(_DWORD *)(this + 372) = *(_DWORD *)(a2 + 372);
  sub_1000DA35(a2 + 376);
  sub_1000D5C1(a2 + 392);
  sub_1000D5C1(a2 + 408);
  sub_10017C79(a2 + 424);
  sub_1000D5C1(a2 + 440);
  sub_1000D5C1(a2 + 456);
  return this;
}
