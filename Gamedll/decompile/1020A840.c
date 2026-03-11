/*
 * func-name: sub_1020A840
 * func-address: 0x1020a840
 * callers: 0x10003c65
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_1020A840(_DWORD *this, char a2)
{
  *this = &Outpop::IONetwork::Asynch_Result::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
