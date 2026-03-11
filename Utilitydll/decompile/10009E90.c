/*
 * func-name: ??0access_violation@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009e90
 * callers: none
 * callees: 0x10009bd0
 */

Outpop::Utility::access_violation *__thiscall Outpop::Utility::access_violation::access_violation(
        Outpop::Utility::access_violation *this,
        const struct Outpop::Utility::access_violation *a2)
{
  Outpop::Utility::os_exception::os_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::access_violation::`vftable';
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
  *((_DWORD *)this + 7) = *((_DWORD *)a2 + 7);
  return this;
}
