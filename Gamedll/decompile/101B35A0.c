/*
 * func-name: sub_101B35A0
 * func-address: 0x101b35a0
 * callers: 0x1000713f
 * callees: none
 */

bool __thiscall sub_101B35A0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
