/*
 * func-name: sub_101291D0
 * func-address: 0x101291d0
 * callers: 0x1000fab0
 * callees: none
 */

char __thiscall sub_101291D0(_DWORD *this, unsigned int a2, float a3)
{
  int v4; // ecx

  v4 = this[27];
  if ( !v4 || a2 >= (this[28] - v4) >> 3 )
    return 0;
  if ( a3 >= 0.0 )
  {
    if ( a3 > 1.0 )
      a3 = 1.0;
  }
  else
  {
    a3 = 0.0;
  }
  if ( a2 >= (this[28] - v4) >> 3 )
    _invalid_parameter_noinfo();
  *(float *)(this[27] + 8 * a2) = a3;
  return 1;
}
