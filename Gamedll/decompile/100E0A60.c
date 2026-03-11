/*
 * func-name: sub_100E0A60
 * func-address: 0x100e0a60
 * callers: 0x10010622
 * callees: none
 */

int __thiscall sub_100E0A60(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return (this[1] - a2[1]) / 92;
}
