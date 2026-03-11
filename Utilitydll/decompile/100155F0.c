/*
 * func-name: ??0bounds_error@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x100155f0
 * callers: 0x10014ff0
 * callees: 0x10015430
 */

Outpop::Utility::bounds_error *__thiscall Outpop::Utility::bounds_error::bounds_error(
        Outpop::Utility::bounds_error *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::hardware_exception::hardware_exception(this, a2, "array bounds exceeded.", a3);
  *(_DWORD *)this = &Outpop::Utility::bounds_error::`vftable';
  return this;
}
