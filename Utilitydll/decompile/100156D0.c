/*
 * func-name: ??0illegal_instrument@Utility@Outpop@@QAE@PAU_EXCEPTION_RECORD@@PAVoutpop_exception@12@@Z
 * func-address: 0x100156d0
 * callers: 0x10014ff0
 * callees: 0x10015430
 */

Outpop::Utility::illegal_instrument *__thiscall Outpop::Utility::illegal_instrument::illegal_instrument(
        Outpop::Utility::illegal_instrument *this,
        struct _EXCEPTION_RECORD *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  Outpop::Utility::hardware_exception::hardware_exception(this, a2, "illegal instrument.", a3);
  *(_DWORD *)this = &Outpop::Utility::illegal_instrument::`vftable';
  return this;
}
