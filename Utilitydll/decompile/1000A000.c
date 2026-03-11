/*
 * func-name: ??0priv_instruction@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x1000a000
 * callers: none
 * callees: 0x10009bd0
 */

Outpop::Utility::priv_instruction *__thiscall Outpop::Utility::priv_instruction::priv_instruction(
        Outpop::Utility::priv_instruction *this,
        const struct Outpop::Utility::priv_instruction *a2)
{
  Outpop::Utility::os_exception::os_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::priv_instruction::`vftable';
  return this;
}
