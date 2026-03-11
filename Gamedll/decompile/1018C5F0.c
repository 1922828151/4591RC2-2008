/*
 * func-name: ?GetProductName@RobotBody@GameClient@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x1018c5f0
 * callers: 0x1000e782
 * callees: none
 */

void *__thiscall GameClient::RobotBody::GetProductName(_DWORD *this, void *a2)
{
  std::string::string(a2, (void *)(this[38] + 212));
  return a2;
}
