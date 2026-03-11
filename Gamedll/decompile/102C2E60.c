/*
 * func-name: sub_102C2E60
 * func-address: 0x102c2e60
 * callers: none
 * callees: none
 */

int __thiscall sub_102C2E60(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return (this[1] - a2[1]) >> 2;
}
