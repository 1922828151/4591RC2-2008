/*
 * func-name: ??1logic_error@Utility@Outpop@@UAE@XZ
 * func-address: 0x10015f70
 * callers: 0x1000a760
 * callees: none
 */

void __thiscall Outpop::Utility::logic_error::~logic_error(Outpop::Utility::logic_error *this)
{
  *(_DWORD *)this = &Outpop::Utility::logic_error::`vftable';
  *(_DWORD *)this = &Outpop::Utility::outpop_exception::`vftable';
  std::exception::~exception(this);
}
