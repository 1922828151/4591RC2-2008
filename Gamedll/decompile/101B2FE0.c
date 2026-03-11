/*
 * func-name: sub_101B2FE0
 * func-address: 0x101b2fe0
 * callers: 0x100023ec
 * callees: none
 */

int __thiscall sub_101B2FE0(_DWORD *this, unsigned int a2)
{
  int v3; // ecx

  v3 = this[1];
  if ( !v3 || a2 >= (this[2] - v3) >> 4 )
    _invalid_parameter_noinfo();
  return this[1] + 16 * a2;
}
