/*
 * func-name: ?GetCanPauseAndContinue@CServiceBase@Utility@Outpop@@QAE_NXZ
 * func-address: 0x10018000
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::CServiceBase::GetCanPauseAndContinue(Outpop::Utility::CServiceBase *this)
{
  return (*((_BYTE *)this + 16) & 2) != 0;
}
