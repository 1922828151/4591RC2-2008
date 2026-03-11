/*
 * func-name: sub_10166EB0
 * func-address: 0x10166eb0
 * callers: 0x10002090
 * callees: none
 */

bool __thiscall sub_10166EB0(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    _invalid_parameter_noinfo();
  return this[1] != a2[1];
}
