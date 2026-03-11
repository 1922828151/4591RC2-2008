/*
 * func-name: ?SetCanPauseAndContinue@CServiceBase@Utility@Outpop@@QAEX_N@Z
 * func-address: 0x10018010
 * callers: none
 * callees: none
 */

void __thiscall Outpop::Utility::CServiceBase::SetCanPauseAndContinue(Outpop::Utility::CServiceBase *this, bool a2)
{
  if ( a2 )
    *((_DWORD *)this + 4) |= 2u;
  else
    *((_DWORD *)this + 4) ^= 2u;
}
