/*
 * func-name: ??0page_error@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015920
 * callers: 0x10014ff0
 * callees: 0x100154a0
 */

Outpop::Utility::page_error *__thiscall Outpop::Utility::page_error::page_error(
        Outpop::Utility::page_error *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::os_exception::os_exception(this, a2, "page error.", a3);
  *(_DWORD *)this = &Outpop::Utility::page_error::`vftable';
  return this;
}
