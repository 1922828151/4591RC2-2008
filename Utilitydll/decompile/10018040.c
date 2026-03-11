/*
 * func-name: ?SetCanShutdown@CServiceBase@Utility@Outpop@@QAEX_N@Z
 * func-address: 0x10018040
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::CServiceBase::SetCanShutdown(Outpop::Utility::CServiceBase *this, bool a2)
{
  if ( a2 )
    *((_DWORD *)this + 4) |= 4u;
  else
    *((_DWORD *)this + 4) ^= 4u;
}
