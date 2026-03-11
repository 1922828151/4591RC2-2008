/*
 * func-name: ??1stack_overflow@Utility@Outpop@@UAE@XZ
 * func-address: 0x10009db0
 * callers: 0x10009f40, 0x1000a1e0
 * callees: none
 */

void __thiscall Outpop::Utility::stack_overflow::~stack_overflow(Outpop::Utility::stack_overflow *this)
{
  *(_DWORD *)this = &Outpop::Utility::outpop_exception::`vftable';
  std::exception::~exception(this);
}
