/*
 * func-name: ??1outpop_exception@Utility@Outpop@@UAE@XZ
 * func-address: 0x10014f00
 * callers: 0x10009990, 0x100099f0, 0x10009a40, 0x10009db0, 0x1000a640, 0x1000a700
 * callees: none
 */

void __thiscall Outpop::Utility::outpop_exception::~outpop_exception(Outpop::Utility::outpop_exception *this)
{
  *(_DWORD *)this = &Outpop::Utility::outpop_exception::`vftable';
  std::exception::~exception(this);
}
