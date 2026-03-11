/*
 * func-name: ??0os_exception@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009bd0
 * callers: 0x10009e90, 0x10009fa0, 0x1000a000, 0x1000a060, 0x1000a0c0, 0x1000a120
 * callees: 0x10009a40
 */

Outpop::Utility::os_exception *__thiscall Outpop::Utility::os_exception::os_exception(
        Outpop::Utility::os_exception *this,
        const struct Outpop::Utility::os_exception *a2)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::os_exception::`vftable';
  return this;
}
