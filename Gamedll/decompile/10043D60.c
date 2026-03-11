/*
 * func-name: sub_10043D60
 * func-address: 0x10043d60
 * callers: 0x1000bba4
 * callees: none
 */

bool __thiscall sub_10043D60(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
