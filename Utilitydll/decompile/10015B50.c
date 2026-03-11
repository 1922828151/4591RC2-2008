/*
 * func-name: ??0float_invalid_operation@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015b50
 * callers: 0x10014ff0
 * callees: 0x10015510
 */

Outpop::Utility::float_invalid_operation *__thiscall Outpop::Utility::float_invalid_operation::float_invalid_operation(
        Outpop::Utility::float_invalid_operation *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::float_exception::float_exception(this, a2, "float invalid operation.", a3);
  *(_DWORD *)this = &Outpop::Utility::float_invalid_operation::`vftable';
  return this;
}
