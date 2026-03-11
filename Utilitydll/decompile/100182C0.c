/*
 * func-name: ?SetUltimateState@CServiceBase@Utility@Outpop@@QAE_NKK@Z
 * func-address: 0x100182c0
 * callers: 0x100182f0
 * callees: none
 */

bool __thiscall Outpop::Utility::CServiceBase::SetUltimateState(
        Outpop::Utility::CServiceBase *this,
        unsigned int a2,
        unsigned int a3)
{
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 8) = a3;
  return SetServiceStatus(*(SERVICE_STATUS_HANDLE *)this, (LPSERVICE_STATUS)((char *)this + 8));
}
