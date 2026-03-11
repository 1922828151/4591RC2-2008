/*
 * func-name: ??1winsock_error@Utility@Outpop@@UAE@XZ
 * func-address: 0x1000a640
 * callers: 0x10009b70, 0x10009cf0, 0x10009db0, 0x10009e90, 0x1000e460
 * callees: none
 */

void __thiscall Outpop::Utility::winsock_error::~winsock_error(Outpop::Utility::winsock_error *this)
{
  *(_DWORD *)this = &Outpop::Utility::outpop_exception::`vftable';
  std::exception::~exception(this);
}
