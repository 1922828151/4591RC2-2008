/*
 * func-name: ?GetFlyweightFilename@Flyweight@GameClient@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x10034830
 * callers: 0x1001a3fc
 * callees: none
 */

void *__thiscall GameClient::Flyweight::GetFlyweightFilename(int this, void *a2)
{
  std::string::string(a2, (void *)(this + 52));
  return a2;
}
