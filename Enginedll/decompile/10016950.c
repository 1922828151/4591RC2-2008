/*
 * func-name: ?GetName@AudioDevice@@UAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x10016950
 * callers: none
 * callees: none
 */

int __stdcall AudioDevice::GetName(int a1)
{
  std::string::string(a1, &unk_101BAFFA);
  return a1;
}
