/*
 * func-name: ??0datatype_misalignment@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009d50
 * callers: none
 * callees: 0x10009b10
 */

Outpop::Utility::datatype_misalignment *__thiscall Outpop::Utility::datatype_misalignment::datatype_misalignment(
        Outpop::Utility::datatype_misalignment *this,
        const struct Outpop::Utility::datatype_misalignment *a2)
{
  Outpop::Utility::hardware_exception::hardware_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::datatype_misalignment::`vftable';
  return this;
}
