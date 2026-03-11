/*
 * func-name: ??0float_exception@Utility@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10009c30
 * callers: 0x1000a180, 0x1000a240, 0x1000a2a0, 0x1000a300, 0x1000a360, 0x1000a3c0, 0x1000a420
 * callees: 0x10009a40
 */

Outpop::Utility::float_exception *__thiscall Outpop::Utility::float_exception::float_exception(
        Outpop::Utility::float_exception *this,
        const struct Outpop::Utility::float_exception *a2)
{
  Outpop::Utility::structure_exception::structure_exception(this, a2);
  *(_DWORD *)this = &Outpop::Utility::float_exception::`vftable';
  return this;
}
