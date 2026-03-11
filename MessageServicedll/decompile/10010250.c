/*
 * func-name: sub_10010250
 * func-address: 0x10010250
 * callers: none
 * callees: 0x100294f2
 */

_DWORD *__thiscall sub_10010250(_DWORD *this, char a2)
{
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
