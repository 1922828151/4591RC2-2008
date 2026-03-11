/*
 * func-name: ??4FEstablishment@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x1016cd40
 * callers: 0x100083cd
 * callees: 0x10006a0a, 0x1000d5c1, 0x10011ad1, 0x10018836
 */

int __thiscall GameClient::FEstablishment::operator=(int this, int a2)
{
  GameClient::FProduct::operator=(a2);
  std::string::operator=(this + 196, a2 + 196);
  std::string::operator=(this + 224, a2 + 224);
  std::string::operator=(this + 252, a2 + 252);
  std::string::operator=(this + 280, a2 + 280);
  std::string::operator=(this + 308, a2 + 308);
  std::string::operator=(this + 336, a2 + 336);
  std::string::operator=(this + 364, a2 + 364);
  std::string::operator=(this + 392, a2 + 392);
  sub_1000D5C1(a2 + 420);
  sub_1000D5C1(a2 + 436);
  sub_10018836(a2 + 452);
  *(float *)(this + 468) = *(float *)(a2 + 468);
  *(_BYTE *)(this + 472) = *(_BYTE *)(a2 + 472);
  sub_10006A0A(a2 + 476);
  sub_1000D5C1(a2 + 492);
  *(_DWORD *)(this + 508) = *(_DWORD *)(a2 + 508);
  *(float *)(this + 512) = *(float *)(a2 + 512);
  return this;
}
