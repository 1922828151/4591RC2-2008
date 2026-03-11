/*
 * func-name: ??0integer_overflow_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a4e0
 * callers: none
 * callees: 0x10009c90
 */

Outpop::Utility::integer_overflow_error *__thiscall Outpop::Utility::integer_overflow_error::integer_overflow_error(
        Outpop::Utility::integer_overflow_error *this,
        const struct Outpop::Utility::integer_overflow_error *a2)
{
  Outpop::Utility::integer_exception::integer_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::integer_overflow_error::`vftable';
  return this;
}
