/*
 * func-name: sub_100FA700
 * func-address: 0x100fa700
 * callers: 0x100fd750
 * callees: none
 */

unsigned int __thiscall sub_100FA700(_DWORD *this, int a2)
{
  unsigned int v2; // ebp
  unsigned int result; // eax
  int v5; // eax
  int v6; // ecx
  _DWORD *v7; // ebx
  int v8; // eax
  int v9; // ecx
  int v10; // ebx
  int v11; // eax
  int v12; // ecx
  int v13; // ebx
  unsigned int v14; // [esp+10h] [ebp-Ch]
  int v15; // [esp+14h] [ebp-8h]
  int i; // [esp+18h] [ebp-4h]

  v2 = 0;
  v14 = 2;
  v15 = 0;
  for ( i = 8; ; i += 12 )
  {
    result = this[6];
    if ( !result )
      break;
    result = (int)(this[7] - result) / 60;
    if ( v2 >= result )
      break;
    v5 = this[6];
    if ( !v5 || v2 >= (this[7] - v5) / 60 )
      invalid_parameter_noinfo();
    v6 = *(_DWORD *)(a2 + 4);
    v7 = (_DWORD *)(v15 + this[6]);
    if ( !v6 || v14 - 2 >= (*(_DWORD *)(a2 + 8) - v6) >> 2 )
      invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(a2 + 4) + i - 8) = *v7;
    v8 = this[6];
    if ( !v8 || v2 >= (this[7] - v8) / 60 )
      invalid_parameter_noinfo();
    v9 = *(_DWORD *)(a2 + 4);
    v10 = v15 + this[6];
    if ( !v9 || v14 - 1 >= (*(_DWORD *)(a2 + 8) - v9) >> 2 )
      invalid_parameter_noinfo();
    *(_DWORD *)(*(_DWORD *)(a2 + 4) + i - 4) = *(_DWORD *)(v10 + 4);
    v11 = this[6];
    if ( !v11 || v2 >= (this[7] - v11) / 60 )
      invalid_parameter_noinfo();
    v12 = *(_DWORD *)(a2 + 4);
    v13 = v15 + this[6];
    if ( !v12 || v14 >= (*(_DWORD *)(a2 + 8) - v12) >> 2 )
      invalid_parameter_noinfo();
    v14 += 3;
    *(_DWORD *)(i + *(_DWORD *)(a2 + 4)) = *(_DWORD *)(v13 + 8);
    ++v2;
    v15 += 60;
  }
  return result;
}
