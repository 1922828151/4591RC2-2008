/*
 * func-name: ??0outpop_exception@Utility@Outpop@@QAE@PBDPAV012@@Z
 * func-address: 0x10014e90
 * callers: 0x10014f60, 0x10015df0, 0x10015ef0
 * callees: none
 */

Outpop::Utility::outpop_exception *__thiscall Outpop::Utility::outpop_exception::outpop_exception(
        Outpop::Utility::outpop_exception *this,
        const char *a2,
        struct Outpop::Utility::outpop_exception *a3)
{
  struct Outpop::Utility::outpop_exception *v4; // ecx

  std::exception::exception(this, &a2);
  v4 = a3;
  *(_DWORD *)this = &Outpop::Utility::outpop_exception::`vftable';
  *((_DWORD *)this + 3) = v4;
  return this;
}
