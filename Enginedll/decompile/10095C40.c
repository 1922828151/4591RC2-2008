/*
 * func-name: ?GetModuleName@Engine@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x10095c40
 * callers: 0x10002270, 0x10003130, 0x1003fb30, 0x10041980
 * callees: none
 */

int __stdcall Engine::GetModuleName(int a1)
{
  std::string::string(a1, &unk_1028584C);
  return a1;
}
