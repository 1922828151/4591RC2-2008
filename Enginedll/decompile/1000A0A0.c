/*
 * func-name: sub_1000A0A0
 * func-address: 0x1000a0a0
 * callers: 0x10038ca0, 0x10045740, 0x10083770, 0x10097ea0
 * callees: none
 */

int __thiscall sub_1000A0A0(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 28 )
    invalid_parameter_noinfo();
  return this[1] + 28 * a2;
}
