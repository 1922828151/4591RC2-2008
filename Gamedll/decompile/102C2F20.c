/*
 * func-name: sub_102C2F20
 * func-address: 0x102c2f20
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C2F20(_DWORD *this, int a2)
{
  unsigned int v3; // eax

  if ( !*this )
    _invalid_parameter_noinfo();
  v3 = (a2 << 6) + this[1];
  if ( v3 > *(_DWORD *)(*this + 8) || v3 < *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] += a2 << 6;
  return this;
}
