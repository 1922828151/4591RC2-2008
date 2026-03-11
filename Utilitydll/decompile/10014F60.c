/*
 * func-name: ??0structure_exception@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PBDPAVoutpop_exception@12@@Z
 * func-address: 0x10014f60
 * callers: 0x10014ff0, 0x10015430, 0x100154a0, 0x10015510, 0x10015580
 * callees: 0x10014e90
 */

Outpop::Utility::structure_exception *__thiscall Outpop::Utility::structure_exception::structure_exception(
        Outpop::Utility::structure_exception *this,
        struct _EXCEPTION_RECORD *a2,
        char *a3,
        struct Outpop::Utility::outpop_exception *a4)
{
  Outpop::Utility::outpop_exception::outpop_exception(this, a3, a4);
  *(_DWORD *)this = &Outpop::Utility::structure_exception::`vftable';
  *((_DWORD *)this + 4) = a2->ExceptionCode;
  *((_DWORD *)this + 5) = a2->ExceptionAddress;
  return this;
}
