/*
 * func-name: ?SetVersion@Engine@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100191d0
 * callers: none
 * callees: none
 */

int __thiscall Engine::SetVersion(char *this, int a2)
{
  return std::string::operator=(this + 76, a2);
}
