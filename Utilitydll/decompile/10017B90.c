/*
 * func-name: ??0CServiceHandlerInfor@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10017b90
 * callers: none
 * callees: none
 */

Outpop::Utility::CServiceHandlerInfor *__thiscall Outpop::Utility::CServiceHandlerInfor::CServiceHandlerInfor(
        Outpop::Utility::CServiceHandlerInfor *this,
        const struct Outpop::Utility::CServiceHandlerInfor *a2)
{
  *(_DWORD *)this = *(_DWORD *)a2;
  std::string::string((char *)this + 4, (char *)a2 + 4);
  *((_DWORD *)this + 8) = *((_DWORD *)a2 + 8);
  return this;
}
