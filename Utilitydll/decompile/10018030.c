/*
 * func-name: ?GetCanShutdown@CServiceBase@Utility@Outpop@@QAE_NXZ
 * func-address: 0x10018030
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::CServiceBase::GetCanShutdown(Outpop::Utility::CServiceBase *this)
{
  return (*((_BYTE *)this + 16) & 4) != 0;
}
