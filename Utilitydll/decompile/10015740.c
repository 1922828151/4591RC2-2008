/*
 * func-name: ??0access_violation@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015740
 * callers: 0x10014ff0
 * callees: 0x100154a0
 */

Outpop::Utility::access_violation *__thiscall Outpop::Utility::access_violation::access_violation(
        Outpop::Utility::access_violation *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::os_exception::os_exception(this, a2, "access violation.", a3);
  *(_DWORD *)this = &Outpop::Utility::access_violation::`vftable';
  *((_DWORD *)this + 6) = a2->ExceptionInformation[0] != 0;
  *((_DWORD *)this + 7) = a2->ExceptionInformation[1];
  return this;
}
