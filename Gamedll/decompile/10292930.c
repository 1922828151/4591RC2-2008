/*
 * func-name: sub_10292930
 * func-address: 0x10292930
 * callers: 0x10003148
 * callees: none
 */

unsigned int __thiscall sub_10292930(_DWORD *this, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // ebx
  int i; // edi
  unsigned int result; // eax
  int v9; // eax
  unsigned int v10; // ebp
  int v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // edi
  int v17; // eax
  int v18; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // edi
  int v23; // ecx
  int j; // [esp+10h] [ebp-8h]
  int v25; // [esp+14h] [ebp-4h]

  v5 = 0;
  for ( i = 0; ; i += 60 )
  {
    result = this[134];
    v25 = i;
    if ( !result )
      break;
    result = (int)(this[135] - result) / 60;
    if ( v5 >= result )
      break;
    v9 = this[134];
    if ( !v9 || v5 >= (this[135] - v9) / 60 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(this[134] + i + 32) == a2 )
    {
      v10 = 0;
      for ( j = 0; ; j += 128 )
      {
        v11 = this[134];
        if ( !v11 || v5 >= (this[135] - v11) / 60 )
          _invalid_parameter_noinfo();
        v12 = this[134];
        v13 = *(_DWORD *)(v12 + i + 48);
        if ( !v13 || v10 >= (*(_DWORD *)(v12 + i + 52) - v13) >> 7 )
          break;
        if ( !v12 || v5 >= (this[135] - v12) / 60 )
          _invalid_parameter_noinfo();
        v14 = this[134];
        v15 = *(_DWORD *)(i + v14 + 48);
        v16 = i + v14 + 44;
        if ( !v15 || v10 >= (*(_DWORD *)(v16 + 8) - v15) >> 7 )
          _invalid_parameter_noinfo();
        if ( *(_DWORD *)(j + *(_DWORD *)(v16 + 4) + 68) == a3 )
        {
          v17 = this[134];
          if ( !v17 || v5 >= (this[135] - v17) / 60 )
            _invalid_parameter_noinfo();
          v18 = v25 + this[134] + 44;
          v19 = *(_DWORD *)(v25 + this[134] + 48);
          if ( !v19 || v10 >= (*(_DWORD *)(v25 + this[134] + 52) - v19) >> 7 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(j + *(_DWORD *)(v18 + 4) + 120) = a4;
          v20 = this[134];
          if ( !v20 || v5 >= (this[135] - v20) / 60 )
            _invalid_parameter_noinfo();
          v21 = this[134];
          v22 = v25 + v21 + 44;
          v23 = *(_DWORD *)(v25 + v21 + 48);
          if ( !v23 || v10 >= (*(_DWORD *)(v25 + v21 + 52) - v23) >> 7 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(*(_DWORD *)(v22 + 4) + j + 124) = a5;
        }
        i = v25;
        ++v10;
      }
    }
    ++v5;
  }
  return result;
}
