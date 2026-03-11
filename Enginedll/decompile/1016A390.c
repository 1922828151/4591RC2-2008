/*
 * func-name: sub_1016A390
 * func-address: 0x1016a390
 * callers: 0x10013d90, 0x10020950, 0x10020ae0, 0x10020c00, 0x10020e20, 0x10023eb0, 0x100286a0, 0x100313e0, 0x100318d0, 0x10031d00, 0x10032ab0, 0x10032bd0, 0x100585f0, 0x100f5df0, 0x101611e0
 * callees: none
 */

_DWORD *__thiscall sub_1016A390(_DWORD *this)
{
  if ( !*this )
    invalid_parameter_noinfo();
  if ( this[1] == *(_DWORD *)(*this + 4) )
    invalid_parameter_noinfo();
  this[1] = *(_DWORD *)this[1];
  return this;
}
