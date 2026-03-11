/*
 * func-name: sub_101757C0
 * func-address: 0x101757c0
 * callers: 0x101611e0, 0x10174d80
 * callees: none
 */

int __thiscall sub_101757C0(_DWORD *this)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    invalid_parameter_noinfo();
  return this[1] + 8;
}
