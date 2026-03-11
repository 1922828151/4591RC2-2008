/*
 * func-name: ?SetCanHandlePowerEvent@CServiceBase@Utility@Outpop@@QAEX_N@Z
 * func-address: 0x10017fe0
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::CServiceBase::SetCanHandlePowerEvent(Outpop::Utility::CServiceBase *this, bool a2)
{
  if ( a2 )
    *((_DWORD *)this + 4) |= 0x40u;
  else
    *((_DWORD *)this + 4) ^= 0x40u;
}
