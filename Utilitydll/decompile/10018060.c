/*
 * func-name: ?GetCanStop@CServiceBase@Utility@Outpop@@QAE_NXZ
 * func-address: 0x10018060
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::CServiceBase::GetCanStop(Outpop::Utility::CServiceBase *this)
{
  return (*((_BYTE *)this + 16) & 1) != 0;
}
