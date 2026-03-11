/*
 * func-name: sub_102C5EA0
 * func-address: 0x102c5ea0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C5EA0(_DWORD *this)
{
  int v2; // eax
  unsigned int v4; // edi

  v2 = this[2];
  if ( v2 )
  {
    this[2] = v2 - 1;
    return this;
  }
  else
  {
    if ( !*this || !this[1] )
      _invalid_parameter_noinfo();
    v4 = *(_DWORD *)(*this + 8);
    if ( v4 > *(_DWORD *)(*this + 12) )
      _invalid_parameter_noinfo();
    if ( this[1] <= v4 )
      _invalid_parameter_noinfo();
    this[1] -= 4;
    this[2] = 31;
    return this;
  }
}
