/*
 * func-name: ??0float_divide_by_zero@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015a70
 * callers: 0x10014ff0
 * callees: 0x10015510
 */

Outpop::Utility::float_divide_by_zero *__thiscall Outpop::Utility::float_divide_by_zero::float_divide_by_zero(
        Outpop::Utility::float_divide_by_zero *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::float_exception::float_exception(this, a2, "float divide by zero.", a3);
  *(_DWORD *)this = &Outpop::Utility::float_divide_by_zero::`vftable';
  return this;
}
