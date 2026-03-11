/*
 * func-name: ?AdvanceState@CServiceBase@Utility@Outpop@@QAE_NKK@Z
 * func-address: 0x100180c0
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::CServiceBase::AdvanceState(
        Outpop::Utility::CServiceBase *this,
        unsigned int a2,
        unsigned int a3)
{
  int v3; // eax

  v3 = a3;
  if ( !a3 )
    v3 = *((_DWORD *)this + 7) + 1;
  *((_DWORD *)this + 7) = v3;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 8) = a2;
  return SetServiceStatus(*(SERVICE_STATUS_HANDLE *)this, (LPSERVICE_STATUS)((char *)this + 8));
}
