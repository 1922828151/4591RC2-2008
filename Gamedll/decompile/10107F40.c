/*
 * func-name: sub_10107F40
 * func-address: 0x10107f40
 * callers: 0x1001a6bd
 * callees: none
 */

bool __thiscall sub_10107F40(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
