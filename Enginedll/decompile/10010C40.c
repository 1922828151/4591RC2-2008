/*
 * func-name: sub_10010C40
 * func-address: 0x10010c40
 * callers: 0x100136b0
 * callees: 0x1000d300
 */

int **__thiscall sub_10010C40(int *this, int **a2)
{
  unsigned int v3; // ebx
  int v4; // edi

  v3 = this[2];
  if ( v3 > this[3] )
    invalid_parameter_noinfo();
  *a2 = 0;
  a2[1] = (int *)v3;
  a2[2] = 0;
  if ( !this )
    invalid_parameter_noinfo();
  *a2 = this;
  v4 = *this;
  if ( v4 )
    sub_1000D300(a2, v4);
  return a2;
}
