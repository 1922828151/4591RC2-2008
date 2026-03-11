/*
 * func-name: ??0integer_divide_by_zero@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a480
 * callers: none
 * callees: 0x10009c90
 */

Outpop::Utility::integer_divide_by_zero *__thiscall Outpop::Utility::integer_divide_by_zero::integer_divide_by_zero(
        Outpop::Utility::integer_divide_by_zero *this,
        const struct Outpop::Utility::integer_divide_by_zero *a2)
{
  Outpop::Utility::integer_exception::integer_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::integer_divide_by_zero::`vftable';
  return this;
}
