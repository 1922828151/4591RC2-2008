/*
 * func-name: ??4Productor@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10034740
 * callers: 0x1001a2f8
 * callees: none
 */

char *__thiscall GameClient::Productor::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}
