/*
 * func-name: sub_10047B90
 * func-address: 0x10047b90
 * callers: 0x100016c2
 * callees: none
 */

int *__thiscall sub_10047B90(int *this)
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
