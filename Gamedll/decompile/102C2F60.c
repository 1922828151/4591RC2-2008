/*
 * func-name: sub_102C2F60
 * func-address: 0x102c2f60
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C2F60(_DWORD *this, int a2)
{
  unsigned int v3; // eax

  if ( !*this )
    _invalid_parameter_noinfo();
  v3 = 4 * a2 + this[1];
  if ( v3 > *(_DWORD *)(*this + 8) || v3 < *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] += 4 * a2;
  return this;
}
