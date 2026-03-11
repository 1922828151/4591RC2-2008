/*
 * func-name: ??0float_underflow_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a3c0
 * callers: none
 * callees: 0x10009c30
 */

Outpop::Utility::float_underflow_error *__thiscall Outpop::Utility::float_underflow_error::float_underflow_error(
        Outpop::Utility::float_underflow_error *this,
        const struct Outpop::Utility::float_underflow_error *a2)
{
  Outpop::Utility::float_exception::float_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::float_underflow_error::`vftable';
  return this;
}
