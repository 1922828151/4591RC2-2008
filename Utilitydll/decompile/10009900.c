/*
 * func-name: ??0outpop_exception@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009900
 * callers: 0x10009a40, 0x1000a540, 0x1000a700
 * callees: none
 */

Outpop::Utility::outpop_exception *__thiscall Outpop::Utility::outpop_exception::outpop_exception(
        Outpop::Utility::outpop_exception *this,
        const struct Outpop::Utility::outpop_exception *a2)
{
  std::exception::exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::outpop_exception::`vftable';
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  return this;
}
