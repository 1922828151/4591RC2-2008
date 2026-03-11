/*
 * func-name: ??0float_inexact_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a2a0
 * callers: none
 * callees: 0x10009c30
 */

Outpop::Utility::float_inexact_error *__thiscall Outpop::Utility::float_inexact_error::float_inexact_error(
        Outpop::Utility::float_inexact_error *this,
        const struct Outpop::Utility::float_inexact_error *a2)
{
  Outpop::Utility::float_exception::float_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::float_inexact_error::`vftable';
  return this;
}
