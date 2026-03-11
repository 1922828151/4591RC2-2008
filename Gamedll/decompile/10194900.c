/*
 * func-name: ?GetVersionName@SystemPart@GameClient@@UBE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ_0
 * func-address: 0x10194900
 * callers: 0x1000c478
 * callees: none
 */

void *__thiscall GameClient::SystemPart::GetVersionName(_DWORD *this, void *a2)
{
  std::string::string(a2, (void *)(this[2] + 244));
  return a2;
}
