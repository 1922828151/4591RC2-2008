/*
 * func-name: sub_1006E5A0
 * func-address: 0x1006e5a0
 * callers: 0x1000e09d
 * callees: none
 */

int *__thiscall sub_1006E5A0(int *this)
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
