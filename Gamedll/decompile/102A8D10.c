/*
 * func-name: sub_102A8D10
 * func-address: 0x102a8d10
 * callers: 0x10014cd1
 * callees: none
 */

bool __thiscall sub_102A8D10(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
