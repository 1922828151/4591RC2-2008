/*
 * func-name: ??0float_exception@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PBDPAVoutpop_exception@12@@Z
 * func-address: 0x10015510
 * callers: 0x10015a00, 0x10015a70, 0x10015ae0, 0x10015b50, 0x10015bc0, 0x10015c30, 0x10015ca0
 * callees: 0x10014f60
 */

Outpop::Utility::float_exception *__thiscall Outpop::Utility::float_exception::float_exception(
        Outpop::Utility::float_exception *this,
        struct _EXCEPTION_RECORD *a2,
        char *a3,
        struct Outpop::Utility::outpop_exception *a4)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2, a3, a4);
  *(_DWORD *)this = &Outpop::Utility::float_exception::`vftable';
  return this;
}
