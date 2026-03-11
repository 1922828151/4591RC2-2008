/*
 * func-name: sub_102C5EF0
 * func-address: 0x102c5ef0
 * callers: none
 * callees: none
 */

BOOL __thiscall sub_102C5EF0(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // edi

  if ( !*this || !this[1] )
    _invalid_parameter_noinfo();
  v2 = this[2];
  v3 = *(_DWORD *)(*this + 8);
  if ( v3 > *(_DWORD *)(*this + 12) )
    _invalid_parameter_noinfo();
  if ( (unsigned int)(v2 + 32 * ((int)(this[1] - v3) >> 2)) >= *(_DWORD *)*this )
    _invalid_parameter_noinfo();
  return (*(_DWORD *)this[1] & (1 << this[2])) != 0;
}
