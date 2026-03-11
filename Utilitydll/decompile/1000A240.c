/*
 * func-name: ??0float_divide_by_zero@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a240
 * callers: none
 * callees: 0x10009c30
 */

Outpop::Utility::float_divide_by_zero *__thiscall Outpop::Utility::float_divide_by_zero::float_divide_by_zero(
        Outpop::Utility::float_divide_by_zero *this,
        const struct Outpop::Utility::float_divide_by_zero *a2)
{
  Outpop::Utility::float_exception::float_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::float_divide_by_zero::`vftable';
  return this;
}
