/*
 * func-name: ??0hardware_exception@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009b10
 * callers: 0x10009cf0, 0x10009d50, 0x10009e00
 * callees: 0x10009a40
 */

Outpop::Utility::hardware_exception *__thiscall Outpop::Utility::hardware_exception::hardware_exception(
        Outpop::Utility::hardware_exception *this,
        const struct Outpop::Utility::hardware_exception *a2)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::hardware_exception::`vftable';
  return this;
}
