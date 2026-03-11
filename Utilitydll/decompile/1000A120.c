/*
 * func-name: ??0invalid_disposition@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a120
 * callers: none
 * callees: 0x10009bd0
 */

Outpop::Utility::invalid_disposition *__thiscall Outpop::Utility::invalid_disposition::invalid_disposition(
        Outpop::Utility::invalid_disposition *this,
        const struct Outpop::Utility::invalid_disposition *a2)
{
  Outpop::Utility::os_exception::os_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::invalid_disposition::`vftable';
  return this;
}
