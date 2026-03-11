/*
 * func-name: ??1win32_error@Utility@Outpop@@UAE@XZ
 * func-address: 0x100099f0
 * callers: 0x10009ab0, 0x10009b10, 0x10009db0, 0x1000a5e0, 0x1000a640, 0x1000a690
 * callees: none
 */

void __thiscall Outpop::Utility::win32_error::~win32_error(Outpop::Utility::win32_error *this)
{
  *(_DWORD *)this = &Outpop::Utility::outpop_exception::`vftable';
  std::exception::~exception(this);
}
