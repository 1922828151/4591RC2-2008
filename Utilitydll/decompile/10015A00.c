/*
 * func-name: ??0float_denormal_error@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015a00
 * callers: 0x10014ff0
 * callees: 0x10015510
 */

Outpop::Utility::float_denormal_error *__thiscall Outpop::Utility::float_denormal_error::float_denormal_error(
        Outpop::Utility::float_denormal_error *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::float_exception::float_exception(this, a2, "float denormal error.", a3);
  *(_DWORD *)this = &Outpop::Utility::float_denormal_error::`vftable';
  return this;
}
