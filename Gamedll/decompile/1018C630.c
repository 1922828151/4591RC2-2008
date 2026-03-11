/*
 * func-name: ?GetVersionName@RobotBody@GameClient@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x1018c630
 * callers: 0x1000a63c
 * callees: none
 */

void *__thiscall GameClient::RobotBody::GetVersionName(_DWORD *this, void *a2)
{
  std::string::string(a2, (void *)(this[38] + 244));
  return a2;
}
