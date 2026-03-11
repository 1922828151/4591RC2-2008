/*
 * func-name: ?SetCanStop@CServiceBase@Utility@Outpop@@QAEX_N@Z
 * func-address: 0x10018070
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::CServiceBase::SetCanStop(Outpop::Utility::CServiceBase *this, bool a2)
{
  if ( a2 )
    *((_DWORD *)this + 4) |= 1u;
  else
    *((_DWORD *)this + 4) ^= 1u;
}
