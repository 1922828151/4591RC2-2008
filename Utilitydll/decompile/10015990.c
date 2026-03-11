/*
 * func-name: ??0invalid_disposition@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015990
 * callers: 0x10014ff0
 * callees: 0x100154a0
 */

Outpop::Utility::invalid_disposition *__thiscall Outpop::Utility::invalid_disposition::invalid_disposition(
        Outpop::Utility::invalid_disposition *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::os_exception::os_exception(this, a2, "invalid disposition.", a3);
  *(_DWORD *)this = &Outpop::Utility::invalid_disposition::`vftable';
  return this;
}
