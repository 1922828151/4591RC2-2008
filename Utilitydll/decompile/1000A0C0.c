/*
 * func-name: ??0page_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a0c0
 * callers: none
 * callees: 0x10009bd0
 */

Outpop::Utility::page_error *__thiscall Outpop::Utility::page_error::page_error(
        Outpop::Utility::page_error *this,
        const struct Outpop::Utility::page_error *a2)
{
  Outpop::Utility::os_exception::os_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::page_error::`vftable';
  return this;
}
