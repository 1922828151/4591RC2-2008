/*
 * func-name: ??0structure_exception@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009a40
 * callers: 0x10009b10, 0x10009bd0, 0x10009c30, 0x10009c90
 * callees: 0x10009900
 */

Outpop::Utility::structure_exception *__thiscall Outpop::Utility::structure_exception::structure_exception(
        Outpop::Utility::structure_exception *this,
        const struct Outpop::Utility::structure_exception *a2)
{
  Outpop::Utility::outpop_exception::outpop_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::structure_exception::`vftable';
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 5);
  return this;
}
