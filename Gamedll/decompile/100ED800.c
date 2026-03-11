/*
 * func-name: sub_100ED800
 * func-address: 0x100ed800
 * callers: 0x100181ce
 * callees: none
 */

int *__thiscall sub_100ED800(int *this)
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
