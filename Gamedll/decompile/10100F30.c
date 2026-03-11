/*
 * func-name: sub_10100F30
 * func-address: 0x10100f30
 * callers: 0x100052a9
 * callees: none
 */

int *__thiscall sub_10100F30(int *this)
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
