/*
 * func-name: ??0integer_overflow_error@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015d80
 * callers: 0x10014ff0
 * callees: 0x10015580
 */

Outpop::Utility::integer_overflow_error *__thiscall Outpop::Utility::integer_overflow_error::integer_overflow_error(
        Outpop::Utility::integer_overflow_error *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::integer_exception::integer_exception(this, a2, "integer overflow.", a3);
  *(_DWORD *)this = &Outpop::Utility::integer_overflow_error::`vftable';
  return this;
}
