/*
 * func-name: sub_100CE270
 * func-address: 0x100ce270
 * callers: 0x1000eaf0, 0x101004c0, 0x101322b0, 0x101324c0, 0x1014ecb0, 0x1016d2b0
 * callees: none
 */

bool __thiscall sub_100CE270(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    invalid_parameter_noinfo();
  return this[1] == a2[1];
}
