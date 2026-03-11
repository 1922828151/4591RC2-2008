/*
 * func-name: ??0float_invalid_operation@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a300
 * callers: none
 * callees: 0x10009c30
 */

Outpop::Utility::float_invalid_operation *__thiscall Outpop::Utility::float_invalid_operation::float_invalid_operation(
        Outpop::Utility::float_invalid_operation *this,
        const struct Outpop::Utility::float_invalid_operation *a2)
{
  Outpop::Utility::float_exception::float_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::float_invalid_operation::`vftable';
  return this;
}
