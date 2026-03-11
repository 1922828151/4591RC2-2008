/*
 * func-name: ??0stack_overflow@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x100158b0
 * callers: 0x10014ff0
 * callees: 0x100154a0
 */

Outpop::Utility::stack_overflow *__thiscall Outpop::Utility::stack_overflow::stack_overflow(
        Outpop::Utility::stack_overflow *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::os_exception::os_exception(this, a2, "stack overflow.", a3);
  *(_DWORD *)this = &Outpop::Utility::stack_overflow::`vftable';
  return this;
}
