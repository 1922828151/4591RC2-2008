/*
 * func-name: sub_100EAAB0
 * func-address: 0x100eaab0
 * callers: 0x1001498e
 * callees: none
 */

bool __thiscall sub_100EAAB0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
