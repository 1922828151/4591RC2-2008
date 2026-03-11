/*
 * func-name: ?GetCanHandlePowerEvent@CServiceBase@Utility@Outpop@@QAE_NXZ
 * func-address: 0x10017fd0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::CServiceBase::GetCanHandlePowerEvent(Outpop::Utility::CServiceBase *this)
{
  return (*((_DWORD *)this + 4) & 0x40) != 0;
}
