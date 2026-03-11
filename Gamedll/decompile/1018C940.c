/*
 * func-name: ?GetProductName@RobotCore@GameClient@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x1018c940
 * callers: 0x10017f5d
 * callees: none
 */

void *__thiscall GameClient::RobotCore::GetProductName(_DWORD *this, void *a2)
{
  std::string::string(a2, (void *)(this[38] + 212));
  return a2;
}
