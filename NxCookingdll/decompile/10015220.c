/*
 * func-name: sub_10015220
 * func-address: 0x10015220
 * callers: 0x10018a20, 0x10019960, 0x1001a620, 0x1001a850, 0x10030400, 0x10033910
 * callees: 0x10014b90, 0x10014ef0
 */

int *__thiscall sub_10015220(int *this, char *a2, int a3)
{
  char *v3; // edi
  int v5; // ebp
  char v6; // bl
  int **v7; // eax
  _DWORD *v8; // eax

  v3 = a2;
  if ( !a2 )
    return this;
  sub_10014EF0(this);
  v5 = a3;
  if ( !a3 )
    return this;
  do
  {
    v6 = *v3;
    --v5;
    v7 = (int **)sub_10014EF0(this);
    if ( (*v7)[1] + 1 > (unsigned int)(*v7)[2] )
      sub_10014B90(v7, (int)*v7, 0);
    v8 = (_DWORD *)*this;
    ++v3;
    this[4] = *(_DWORD *)*this + *(_DWORD *)(*this + 4);
    ++v8[1];
    *(_BYTE *)this[4] = v6;
  }
  while ( v5 );
  return this;
}
