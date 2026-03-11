/*
 * func-name: ??0logic_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a700
 * callers: none
 * callees: 0x10009900
 */

Outpop::Utility::logic_error *__thiscall Outpop::Utility::logic_error::logic_error(
        Outpop::Utility::logic_error *this,
        const struct Outpop::Utility::logic_error *a2)
{
  Outpop::Utility::outpop_exception::outpop_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::logic_error::`vftable';
  return this;
}
