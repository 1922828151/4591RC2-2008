/*
 * func-name: ??0bounds_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009cf0
 * callers: none
 * callees: 0x10009b10
 */

Outpop::Utility::bounds_error *__thiscall Outpop::Utility::bounds_error::bounds_error(
        Outpop::Utility::bounds_error *this,
        const struct Outpop::Utility::bounds_error *a2)
{
  Outpop::Utility::hardware_exception::hardware_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::bounds_error::`vftable';
  return this;
}
