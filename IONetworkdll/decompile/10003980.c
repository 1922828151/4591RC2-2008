/*
 * func-name: sub_10003980
 * func-address: 0x10003980
 * callers: none
 * callees: 0x1004e870
 */

_DWORD *__thiscall sub_10003980(_DWORD *this, char a2)
{
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
