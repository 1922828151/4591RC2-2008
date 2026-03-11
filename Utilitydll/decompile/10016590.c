/*
 * func-name: sub_10016590
 * func-address: 0x10016590
 * callers: none
 * callees: 0x10018cf2
 */

_DWORD *__thiscall sub_10016590(_DWORD *this, char a2)
{
  *this = &Outpop::Utility::Logger_Config_Paser::`vftable';
  *this = &Outpop::Utility::Config_Paser::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
