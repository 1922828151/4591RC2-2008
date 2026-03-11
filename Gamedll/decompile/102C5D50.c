/*
 * func-name: sub_102C5D50
 * func-address: 0x102c5d50
 * callers: none
 * callees: none
 */

int __thiscall sub_102C5D50(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // edi

  v2 = this[2];
  v3 = *(_DWORD *)(*this + 8);
  if ( v3 > *(_DWORD *)(*this + 12) )
    _invalid_parameter_noinfo();
  return v2 + 32 * ((int)(this[1] - v3) >> 2);
}
