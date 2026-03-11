/*
 * func-name: sub_102C68F0
 * func-address: 0x102c68f0
 * callers: 0x102c6ae0
 * callees: none
 */

void __cdecl sub_102C68F0(_DWORD *a1, _DWORD *a2, unsigned int a3, int a4, _DWORD *a5, int a6, _BYTE *a7)
{
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  unsigned int v11; // ebp

  while ( a2 != a5 || a3 != a6 )
  {
    if ( !a1 )
      _invalid_parameter_noinfo();
    if ( *a7 )
    {
      if ( !a1 || !a2 )
        _invalid_parameter_noinfo();
      v9 = a1[2];
      if ( v9 > a1[3] )
        _invalid_parameter_noinfo();
      if ( a3 + 32 * ((int)((int)a2 - v9) >> 2) >= *a1 )
        _invalid_parameter_noinfo();
      *a2 |= 1 << a3;
    }
    else
    {
      if ( !a1 || !a2 )
        _invalid_parameter_noinfo();
      v10 = a1[2];
      if ( v10 > a1[3] )
        _invalid_parameter_noinfo();
      if ( a3 + 32 * ((int)((int)a2 - v10) >> 2) >= *a1 )
        _invalid_parameter_noinfo();
      *a2 &= ~(1 << a3);
    }
    v11 = a1[2];
    if ( v11 > a1[3] )
      _invalid_parameter_noinfo();
    if ( 32 * ((int)((int)a2 - v11) >> 2) + a3 + 1 > *a1 )
      _invalid_parameter_noinfo();
    if ( a3 >= 0x1F )
    {
      a3 = 0;
      ++a2;
    }
    else
    {
      ++a3;
    }
  }
}
