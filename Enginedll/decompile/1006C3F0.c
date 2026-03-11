/*
 * func-name: sub_1006C3F0
 * func-address: 0x1006c3f0
 * callers: 0x100c33b0
 * callees: none
 */

_DWORD *__thiscall sub_1006C3F0(_DWORD *this, int a2)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int v5; // edx

  if ( !this[1] )
    invalid_parameter_noinfo();
  v3 = this[1];
  v4 = *(_DWORD *)(v3 + 12);
  v5 = a2 + this[2];
  if ( v5 > v4 + *(_DWORD *)(v3 + 16) || v5 < v4 )
    invalid_parameter_noinfo();
  this[2] += a2;
  return this;
}
