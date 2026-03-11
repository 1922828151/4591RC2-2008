/*
 * func-name: ??0noncontinueable_error@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009fa0
 * callers: none
 * callees: 0x10009bd0
 */

Outpop::Utility::noncontinueable_error *__thiscall Outpop::Utility::noncontinueable_error::noncontinueable_error(
        Outpop::Utility::noncontinueable_error *this,
        const struct Outpop::Utility::noncontinueable_error *a2)
{
  Outpop::Utility::os_exception::os_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::noncontinueable_error::`vftable';
  return this;
}
