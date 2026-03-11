/*
 * func-name: sub_10047C00
 * func-address: 0x10047c00
 * callers: 0x10018e67
 * callees: none
 */

int *__thiscall sub_10047C00(int *this)
{
  int v2; // eax
  int v3; // ecx

  if ( !*this )
    _invalid_parameter_noinfo();
  v2 = *(_DWORD *)(this[1] + 4);
  v3 = *this;
  this[1] = v2;
  if ( v2 == *(_DWORD *)(v3 + 4) )
    _invalid_parameter_noinfo();
  return this;
}
