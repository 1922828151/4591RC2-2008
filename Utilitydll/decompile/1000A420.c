/*
 * func-name: ??0float_stack_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a420
 * callers: none
 * callees: 0x10009c30
 */

Outpop::Utility::float_stack_error *__thiscall Outpop::Utility::float_stack_error::float_stack_error(
        Outpop::Utility::float_stack_error *this,
        const struct Outpop::Utility::float_stack_error *a2)
{
  Outpop::Utility::float_exception::float_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::float_stack_error::`vftable';
  return this;
}
