/*
 * func-name: ?SetFlyweightFilename@Flyweight@GameClient@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x10034820
 * callers: 0x10017102
 * callees: none
 */

int __thiscall GameClient::Flyweight::SetFlyweightFilename(char *this, int a2)
{
  return std::string::operator=(this + 52, a2);
}
