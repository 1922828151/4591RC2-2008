/*
 * func-name: ??0priv_instruction@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x10015840
 * callers: 0x10014ff0
 * callees: 0x100154a0
 */

Outpop::Utility::priv_instruction *__thiscall Outpop::Utility::priv_instruction::priv_instruction(
        Outpop::Utility::priv_instruction *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::os_exception::os_exception(this, a2, "instrument has no privilege in current mode.", a3);
  *(_DWORD *)this = &Outpop::Utility::priv_instruction::`vftable';
  return this;
}
