/*
 * func-name: ?ReportStatus@CServiceBase@Utility@Outpop@@QAE_NXZ
 * func-address: 0x10018210
 * callers: none
 * callees: none
 */

bool __thiscall Outpop::Utility::CServiceBase::ReportStatus(Outpop::Utility::CServiceBase *this)
{
  return SetServiceStatus(*(SERVICE_STATUS_HANDLE *)this, (LPSERVICE_STATUS)((char *)this + 8));
}
