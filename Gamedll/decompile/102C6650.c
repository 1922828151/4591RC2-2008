/*
 * func-name: sub_102C6650
 * func-address: 0x102c6650
 * callers: 0x102c6b50
 * callees: none
 */

_DWORD *__cdecl sub_102C6650(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        _DWORD *a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9,
        int a10)
{
  void (__cdecl *v12)(); // esi
  unsigned int v13; // esi
  bool v14; // cc
  unsigned int v15; // esi
  unsigned int v16; // esi
  unsigned int v17; // esi
  unsigned int v18; // esi

  while ( a3 != a6 || a4 != a7 )
  {
    if ( a7 )
    {
      --a7;
      v12 = _invalid_parameter_noinfo;
    }
    else
    {
      if ( !a5 || !a6 )
        _invalid_parameter_noinfo();
      v13 = a5[2];
      if ( v13 > a5[3] )
        _invalid_parameter_noinfo();
      v14 = (unsigned int)a6 <= v13;
      v12 = _invalid_parameter_noinfo;
      if ( v14 )
        _invalid_parameter_noinfo();
      --a6;
      a7 = 31;
    }
    if ( !a5 )
      v12();
    if ( a10 )
    {
      --a10;
    }
    else
    {
      if ( !a8 || !a9 )
        v12();
      v15 = a8[2];
      if ( v15 > a8[3] )
        _invalid_parameter_noinfo();
      if ( (unsigned int)a9 <= v15 )
        _invalid_parameter_noinfo();
      v12 = _invalid_parameter_noinfo;
      --a9;
      a10 = 31;
    }
    if ( !a8 )
      v12();
    if ( !a5 || !a6 )
      v12();
    v16 = a5[2];
    if ( v16 > a5[3] )
      _invalid_parameter_noinfo();
    if ( (unsigned int)(a7 + 32 * ((int)((int)a6 - v16) >> 2)) >= *a5 )
      _invalid_parameter_noinfo();
    if ( ((1 << a7) & *a6) != 0 )
    {
      if ( !a8 || !a9 )
        _invalid_parameter_noinfo();
      v17 = a8[2];
      if ( v17 > a8[3] )
        _invalid_parameter_noinfo();
      if ( (unsigned int)(a10 + 32 * ((int)((int)a9 - v17) >> 2)) >= *a8 )
        _invalid_parameter_noinfo();
      *a9 |= 1 << a10;
    }
    else
    {
      if ( !a8 || !a9 )
        _invalid_parameter_noinfo();
      v18 = a8[2];
      if ( v18 > a8[3] )
        _invalid_parameter_noinfo();
      if ( (unsigned int)(a10 + 32 * ((int)((int)a9 - v18) >> 2)) >= *a8 )
        _invalid_parameter_noinfo();
      *a9 &= ~(1 << a10);
    }
  }
  *a1 = 0;
  a1[1] = a9;
  a1[2] = a10;
  if ( !a8 )
    _invalid_parameter_noinfo();
  *a1 = a8;
  return a1;
}
