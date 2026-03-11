/*
 * func-name: ?GetVersionName@RobotCore@GameClient@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x1018c980
 * callers: 0x10012d0f
 * callees: none
 */

void *__thiscall GameClient::RobotCore::GetVersionName(_DWORD *this, void *a2)
{
  std::string::string(a2, (void *)(this[38] + 244));
  return a2;
}
