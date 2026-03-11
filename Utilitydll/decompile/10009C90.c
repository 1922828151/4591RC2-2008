/*
 * func-name: ??0integer_exception@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009c90
 * callers: 0x1000a480, 0x1000a4e0
 * callees: 0x10009a40
 */

Outpop::Utility::integer_exception *__thiscall Outpop::Utility::integer_exception::integer_exception(
        Outpop::Utility::integer_exception *this,
        const struct Outpop::Utility::integer_exception *a2)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::integer_exception::`vftable';
  return this;
}
