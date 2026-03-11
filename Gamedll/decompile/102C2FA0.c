/*
 * func-name: sub_102C2FA0
 * func-address: 0x102c2fa0
 * callers: none
 * callees: none
 */

_DWORD *__thiscall sub_102C2FA0(_DWORD *this, int a2)
{
  unsigned int v3; // eax

  if ( !*this )
    _invalid_parameter_noinfo();
  v3 = 8 * a2 + this[1];
  if ( v3 > *(_DWORD *)(*this + 8) || v3 < *(_DWORD *)(*this + 4) )
    _invalid_parameter_noinfo();
  this[1] += 8 * a2;
  return this;
}
