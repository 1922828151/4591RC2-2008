/*
 * func-name: sub_102AEC00
 * func-address: 0x102aec00
 * callers: 0x1000e9da
 * callees: 0x102c9d50
 */

_DWORD *__thiscall sub_102AEC00(_DWORD *this, char a2)
{
  *this = &GameClientConfigPaser::`vftable';
  *this = Outpop::Utility::Config_Paser::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
