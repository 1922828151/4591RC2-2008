/*
 * func-name: sub_1001B450
 * func-address: 0x1001b450
 * callers: 0x10013d90, 0x10020950, 0x10020ae0, 0x10020c00, 0x10020e20, 0x10023eb0, 0x100286a0, 0x100313e0, 0x100318d0, 0x10031d00, 0x10032ab0, 0x10032bd0, 0x100585f0, 0x100f5df0, 0x101715f0
 * callees: none
 */

bool __thiscall sub_1001B450(_DWORD *this, _DWORD *a2)
{
  if ( !*this || *this != *a2 )
    invalid_parameter_noinfo();
  return this[1] != a2[1];
}
