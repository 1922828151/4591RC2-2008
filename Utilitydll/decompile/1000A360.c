/*
 * func-name: ??0float_overflow_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a360
 * callers: none
 * callees: 0x10009c30
 */

Outpop::Utility::float_overflow_error *__thiscall Outpop::Utility::float_overflow_error::float_overflow_error(
        Outpop::Utility::float_overflow_error *this,
        const struct Outpop::Utility::float_overflow_error *a2)
{
  Outpop::Utility::float_exception::float_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::float_overflow_error::`vftable';
  return this;
}
