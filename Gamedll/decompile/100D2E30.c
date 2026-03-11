/*
 * func-name: sub_100D2E30
 * func-address: 0x100d2e30
 * callers: 0x1000c789
 * callees: none
 */

int __thiscall sub_100D2E30(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 28 )
    _invalid_parameter_noinfo();
  return this[1] + 28 * a2;
}
