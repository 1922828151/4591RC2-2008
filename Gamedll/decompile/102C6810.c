/*
 * func-name: sub_102C6810
 * func-address: 0x102c6810
 * callers: 0x102c6a50
 * callees: 0x102c62f0
 */

int **__thiscall sub_102C6810(int *this, int **a2, int a3, void *a4, void *a5)
{
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // edi
  int **result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 6 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    if ( !a3 || (int *)a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)((int)a4 - v6) >> 6;
  }
  else
  {
    v7 = 0;
  }
  sub_102C62F0(this, a3, a4, 1u, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    _invalid_parameter_noinfo();
  v9 = v8 + (v7 << 6);
  if ( v9 > this[2] || v9 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = (int *)v9;
  *a2 = this;
  return result;
}
