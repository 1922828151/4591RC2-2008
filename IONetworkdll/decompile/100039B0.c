/*
 * func-name: sub_100039B0
 * func-address: 0x100039b0
 * callers: none
 * callees: 0x1004e870
 */

_DWORD *__thiscall sub_100039B0(_DWORD *this, char a2)
{
  *this = &Outpop::IONetwork::Asynch_WakeUp_Result::`vftable';
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
