/*
 * func-name: sub_102935B0
 * func-address: 0x102935b0
 * callers: 0x10013ca5
 * callees: none
 */

char __thiscall sub_102935B0(_DWORD *this, int a2, int a3)
{
  unsigned int v3; // ebx
  int v5; // edi
  int v6; // eax
  unsigned int v7; // ebp
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  int v13; // edi
  int v14; // ecx
  int v15; // eax
  int v16; // eax
  int v17; // ecx
  int v18; // esi
  int i; // [esp+10h] [ebp-8h]
  int v21; // [esp+14h] [ebp-4h]

  v3 = 0;
  v5 = 0;
LABEL_2:
  v6 = this[134];
  v21 = v5;
  if ( !v6 || v3 >= (this[135] - v6) / 60 )
    return 0;
  v7 = 0;
  for ( i = 0; ; i += 128 )
  {
    v8 = this[134];
    if ( !v8 || v3 >= (this[135] - v8) / 60 )
      _invalid_parameter_noinfo();
    v9 = this[134];
    v10 = *(_DWORD *)(v9 + v5 + 48);
    v11 = v9 + v5 + 44;
    if ( !v10 || v7 >= (*(_DWORD *)(v11 + 8) - v10) >> 7 )
    {
      ++v3;
      v5 += 60;
      goto LABEL_2;
    }
    v12 = this[134];
    if ( !v12 || v3 >= (this[135] - v12) / 60 )
      _invalid_parameter_noinfo();
    v13 = this[134] + v5 + 44;
    v14 = *(_DWORD *)(v13 + 4);
    if ( !v14 || v7 >= (*(_DWORD *)(v13 + 8) - v14) >> 7 )
      _invalid_parameter_noinfo();
    if ( *(_DWORD *)(*(_DWORD *)(v13 + 4) + i + 68) == a2 )
      break;
    v5 = v21;
    ++v7;
  }
  v15 = this[134];
  if ( !v15 || v3 >= (this[135] - v15) / 60 )
    _invalid_parameter_noinfo();
  v16 = this[134];
  v17 = *(_DWORD *)(v16 + 60 * v3 + 48);
  v18 = v16 + 60 * v3 + 44;
  if ( !v17 || v7 >= (*(_DWORD *)(v16 + 60 * v3 + 52) - v17) >> 7 )
    _invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v18 + 4) + (v7 << 7) + 116) = a3;
  return 1;
}
