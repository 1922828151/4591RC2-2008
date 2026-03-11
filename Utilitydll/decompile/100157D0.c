/*
 * func-name: ??0noncontinueable_error@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x100157d0
 * callers: 0x10014ff0
 * callees: 0x100154a0
 */

Outpop::Utility::noncontinueable_error *__thiscall Outpop::Utility::noncontinueable_error::noncontinueable_error(
        Outpop::Utility::noncontinueable_error *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::os_exception::os_exception(this, a2, "exception can not continue.", a3);
  *(_DWORD *)this = &Outpop::Utility::noncontinueable_error::`vftable';
  return this;
}
