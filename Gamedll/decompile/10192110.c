/*
 * func-name: sub_10192110
 * func-address: 0x10192110
 * callers: 0x10011bad
 * callees: none
 */

_DWORD *__thiscall sub_10192110(_DWORD *this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // ebp
  char *v8; // eax
  char *v9; // ecx
  int v10; // edx
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  v8 = a6;
  if ( a4 != a6 )
  {
    v9 = (char *)this[2];
    if ( a6 != v9 )
    {
      v10 = a4 - a6;
      do
      {
        *(_DWORD *)&v8[v10] = *(_DWORD *)v8;
        *(_DWORD *)&v8[v10 + 4] = *((_DWORD *)v8 + 1);
        v8 += 8;
      }
      while ( v8 != v9 );
      v6 = a3;
    }
    this[2] = &a4[8 * ((v9 - a6) >> 3)];
  }
  result = a2;
  a2[1] = a4;
  *a2 = v6;
  return result;
}
