/*
 * func-name: ?SetManagedClassName@Actor@@QAEXAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100184d0
 * callers: none
 * callees: none
 */

int __thiscall Actor::SetManagedClassName(char *this, int a2)
{
  return std::string::operator=(this + 220, a2);
}
