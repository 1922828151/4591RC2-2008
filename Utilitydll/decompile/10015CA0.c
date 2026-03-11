/*
 * func-name: ??0float_stack_error@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015ca0
 * callers: 0x10014ff0
 * callees: 0x10015510
 */

Outpop::Utility::float_stack_error *__thiscall Outpop::Utility::float_stack_error::float_stack_error(
        Outpop::Utility::float_stack_error *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::float_exception::float_exception(this, a2, "float stack error.", a3);
  *(_DWORD *)this = &Outpop::Utility::float_stack_error::`vftable';
  return this;
}
