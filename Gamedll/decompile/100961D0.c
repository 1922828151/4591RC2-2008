/*
 * func-name: sub_100961D0
 * func-address: 0x100961d0
 * callers: 0x100124b8
 * callees: 0x1000f9d4
 */

_DWORD *__thiscall sub_100961D0(int *this, _DWORD *a2, int a3, char *a4, int a5, char *a6)
{
  int v6; // ebp
  char *v8; // eax
  char *v9; // ecx
  int v10; // ebx
  int v11; // edx
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  v8 = a6;
  if ( a4 != a6 )
  {
    v9 = (char *)this[2];
    v10 = (int)&a4[8 * ((v9 - a6) >> 3)];
    if ( a6 != v9 )
    {
      v11 = a4 - a6;
      do
      {
        *(_DWORD *)&v8[v11] = *(_DWORD *)v8;
        *(_DWORD *)&v8[v11 + 4] = *((_DWORD *)v8 + 1);
        v8 += 8;
      }
      while ( v8 != v9 );
      v6 = a3;
    }
    sub_1000F9D4(v10, this[2]);
    this[2] = v10;
  }
  result = a2;
  a2[1] = a4;
  *a2 = v6;
  return result;
}
