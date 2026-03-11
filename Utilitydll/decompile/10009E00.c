/*
 * func-name: ??0illegal_instrument@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009e00
 * callers: none
 * callees: 0x10009b10
 */

Outpop::Utility::illegal_instrument *__thiscall Outpop::Utility::illegal_instrument::illegal_instrument(
        Outpop::Utility::illegal_instrument *this,
        const struct Outpop::Utility::illegal_instrument *a2)
{
  Outpop::Utility::hardware_exception::hardware_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::illegal_instrument::`vftable';
  return this;
}
