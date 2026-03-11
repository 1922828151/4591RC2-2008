/*
 * func-name: ??0float_overflow_error@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015bc0
 * callers: 0x10014ff0
 * callees: 0x10015510
 */

Outpop::Utility::float_overflow_error *__thiscall Outpop::Utility::float_overflow_error::float_overflow_error(
        Outpop::Utility::float_overflow_error *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::float_exception::float_exception(this, a2, "float overflow.", a3);
  *(_DWORD *)this = &Outpop::Utility::float_overflow_error::`vftable';
  return this;
}
