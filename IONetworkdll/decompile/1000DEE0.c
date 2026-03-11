/*
 * func-name: sub_1000DEE0
 * func-address: 0x1000dee0
 * callers: none
 * callees: 0x1004e870
 */

_DWORD *__thiscall sub_1000DEE0(_DWORD *this, char a2)
{
  *this = &Outpop::IONetwork::Asynch_IO_Result::`vftable';
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
