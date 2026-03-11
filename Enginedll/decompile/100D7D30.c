/*
 * func-name: sub_100D7D30
 * func-address: 0x100d7d30
 * callers: 0x100d6ae0
 * callees: none
 */

int __thiscall sub_100D7D30(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 36 )
    invalid_parameter_noinfo();
  return this[1] + 36 * a2;
}
