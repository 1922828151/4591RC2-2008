/*
 * func-name: ?GetProductName@RobotArmor@GameClient@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x1018c360
 * callers: 0x100049cb
 * callees: none
 */

void *__thiscall GameClient::RobotArmor::GetProductName(_DWORD *this, void *a2)
{
  std::string::string(a2, (void *)(this[38] + 212));
  return a2;
}
