/*
 * func-name: sub_100025D0
 * func-address: 0x100025d0
 * callers: none
 * callees: 0x10023306
 */

_DWORD *__thiscall sub_100025D0(_DWORD *this, char a2)
{
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
