/*
 * func-name: ?GetShowName@Establishment@GameClient@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x1011ebe0
 * callers: 0x1000ef48
 * callees: none
 */

void *__thiscall GameClient::Establishment::GetShowName(int this, void *a2)
{
  std::string::string(a2, (void *)(this + 400));
  return a2;
}
