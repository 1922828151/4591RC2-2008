/*
 * func-name: ??0datatype_misalignment@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015660
 * callers: 0x10014ff0
 * callees: 0x10015430
 */

Outpop::Utility::datatype_misalignment *__thiscall Outpop::Utility::datatype_misalignment::datatype_misalignment(
        Outpop::Utility::datatype_misalignment *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::hardware_exception::hardware_exception(this, a2, "datatype misaligned.", a3);
  *(_DWORD *)this = &Outpop::Utility::datatype_misalignment::`vftable';
  return this;
}
