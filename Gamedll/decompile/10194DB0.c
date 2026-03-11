/*
 * func-name: ??4FTransformItem@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10194db0
 * callers: 0x100193bc
 * callees: 0x1000ee9e
 */

char *__thiscall GameClient::FTransformItem::operator=(char *this, int a2)
{
  GameClient::FItem::operator=(a2);
  std::string::operator=(this + 2200, a2 + 2200);
  return this;
}
