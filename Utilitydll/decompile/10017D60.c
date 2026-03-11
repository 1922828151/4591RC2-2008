/*
 * func-name: ??0CServiceHandlerInfor@Utility@Outpop@@QAE@PAVIServiceHandler@12@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@P6GXKPAPAD@Z@Z
 * func-address: 0x10017d60
 * callers: none
 * callees: 0x10017e00
 */

struct Outpop::Utility::CServiceHandlerInfor *__thiscall Outpop::Utility::CServiceHandlerInfor::CServiceHandlerInfor(
        struct Outpop::Utility::CServiceHandlerInfor *this,
        int a2,
        int a3,
        int a4)
{
  *(_DWORD *)this = a2;
  std::string::string((char *)this + 4, a3);
  *((_DWORD *)this + 8) = a4;
  Outpop::Utility::CServiceBase::AddService(this);
  return this;
}
