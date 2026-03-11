/*
 * func-name: ?GetVersion@Engine@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
 * func-address: 0x100191e0
 * callers: none
 * callees: none
 */

int __thiscall Engine::GetVersion(char *this, int a2)
{
  std::string::string(a2, this + 76);
  return a2;
}
