/*
 * func-name: ??0stack_overflow@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a060
 * callers: none
 * callees: 0x10009bd0
 */

Outpop::Utility::stack_overflow *__thiscall Outpop::Utility::stack_overflow::stack_overflow(
        Outpop::Utility::stack_overflow *this,
        const struct Outpop::Utility::stack_overflow *a2)
{
  Outpop::Utility::os_exception::os_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::stack_overflow::`vftable';
  return this;
}
