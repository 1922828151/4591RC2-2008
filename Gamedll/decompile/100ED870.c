/*
 * func-name: sub_100ED870
 * func-address: 0x100ed870
 * callers: 0x10013b56
 * callees: none
 */

bool __thiscall sub_100ED870(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
