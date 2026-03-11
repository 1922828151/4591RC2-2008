/*
 * func-name: ??0hardware_exception@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PBDPAVoutpop_exception@12@@Z
 * func-address: 0x10015430
 * callers: 0x100155f0, 0x10015660, 0x100156d0
 * callees: 0x10014f60
 */

Outpop::Utility::hardware_exception *__thiscall Outpop::Utility::hardware_exception::hardware_exception(
        Outpop::Utility::hardware_exception *this,
        struct _EXCEPTION_RECORD *a2,
        char *a3,
        struct Outpop::Utility::outpop_exception *a4)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2, a3, a4);
  *(_DWORD *)this = &Outpop::Utility::hardware_exception::`vftable';
  return this;
}
