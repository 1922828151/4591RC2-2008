/*
 * func-name: sub_101C6200
 * func-address: 0x101c6200
 * callers: 0x10004e94
 * callees: none
 */

bool __thiscall sub_101C6200(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
