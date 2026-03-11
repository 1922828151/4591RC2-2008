/*
 * func-name: sub_102C68A0
 * func-address: 0x102c68a0
 * callers: 0x102c6cd0
 * callees: 0x102c6070
 */

int **__thiscall sub_102C68A0(int *this, int **a2)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = this[2];
  if ( v3 > this[3] )
    _invalid_parameter_noinfo();
  *a2 = 0;
  a2[1] = (int *)v3;
  a2[2] = 0;
  if ( !this )
    _invalid_parameter_noinfo();
  *a2 = this;
  v4 = *this;
  if ( v4 )
    sub_102C6070(a2, v4);
  return a2;
}
