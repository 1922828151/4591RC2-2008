/*
 * func-name: sub_10256510
 * func-address: 0x10256510
 * callers: 0x10010d61
 * callees: none
 */

int __thiscall sub_10256510(_DWORD *this, unsigned int a2)
{
  int v3; // eax

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) / 84 )
    _invalid_parameter_noinfo();
  return this[1] + 84 * a2;
}
