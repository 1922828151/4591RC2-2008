/*
 * func-name: ?SetServiceName@CServiceBase@Utility@Outpop@@QAEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x100180a0
 * callers: none
 * callees: none
 */

int __thiscall Outpop::Utility::CServiceBase::SetServiceName(char *this, int a2)
{
  return std::string::operator=(this + 36, a2);
}
