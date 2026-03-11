/*
 * func-name: ??0os_exception@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PBDPAVoutpop_exception@12@@Z
 * func-address: 0x100154a0
 * callers: 0x10015740, 0x100157d0, 0x10015840, 0x100158b0, 0x10015920, 0x10015990
 * callees: 0x10014f60
 */

Outpop::Utility::os_exception *__thiscall Outpop::Utility::os_exception::os_exception(
        Outpop::Utility::os_exception *this,
        struct _EXCEPTION_RECORD *a2,
        char *a3,
        struct Outpop::Utility::outpop_exception *a4)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2, a3, a4);
  *(_DWORD *)this = &Outpop::Utility::os_exception::`vftable';
  return this;
}
