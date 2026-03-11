/*
 * func-name: sub_1007A170
 * func-address: 0x1007a170
 * callers: 0x1000b5e6
 * callees: 0x10005c4f, 0x100061ea, 0x1000df49, 0x1001193c, 0x10013188, 0x10015e1f, 0x102c9d86
 */

unsigned int __fastcall sub_1007A170(unsigned int a1, int a2, int a3)
{
  int v4; // esi
  int v5; // ecx
  int v6; // ebx
  int v7; // eax
  _DWORD *v8; // edx
  unsigned int v9; // edi
  unsigned int result; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // edi
  _DWORD *v14; // esi
  unsigned int v15; // esi
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // ecx
  _DWORD *v19; // esi
  bool v20; // zf
  int v21; // [esp-18h] [ebp-54h]
  int v22; // [esp-10h] [ebp-4Ch]
  int *v23; // [esp-8h] [ebp-44h]
  int v24; // [esp-4h] [ebp-40h]
  int v25; // [esp+0h] [ebp-3Ch] BYREF
  _DWORD *v26; // [esp+14h] [ebp-28h]
  _DWORD *v27; // [esp+1Ch] [ebp-20h]
  unsigned int v28; // [esp+20h] [ebp-1Ch]
  unsigned int v29; // [esp+28h] [ebp-14h]
  int *v30; // [esp+2Ch] [ebp-10h]
  int v31; // [esp+38h] [ebp-4h]

  v30 = &v25;
  v29 = a1;
  v4 = a3;
  v5 = *(_DWORD *)(a3 + 20);
  v6 = v29 + 4;
  if ( v5 )
    v7 = (*(_DWORD *)(a3 + 24) - v5) >> 3;
  else
    v7 = 0;
  v24 = *(_DWORD *)(v29 + 8);
  v28 = a1 + 16;
  sub_1000DF49(v7, v29 + 4, v24);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a3 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a3 + 36);
  sub_10005C4F();
  v23 = *(int **)(a3 + 8);
  v22 = *v23;
  v21 = *(_DWORD *)(v6 + 4);
  v31 = 0;
  sub_10015E1F(v6, v21, a3 + 4, v22, a3 + 4, (int)v23, a3);
  *(_BYTE *)v29 = *(_BYTE *)a3;
  v8 = **(_DWORD ***)(a3 + 8);
  v9 = 0;
  v26 = **(_DWORD ***)(v6 + 4);
  v27 = v8;
  v29 = 0;
  while ( 1 )
  {
    result = v28;
    v11 = *(_DWORD *)(v28 + 4);
    if ( !v11 )
      break;
    result = (*(_DWORD *)(v28 + 8) - v11) >> 3;
    if ( v9 >= result )
      break;
    v12 = *(_DWORD *)(v4 + 20);
    if ( !v12 || v9 >= (*(_DWORD *)(v4 + 24) - v12) >> 3 )
      _invalid_parameter_noinfo();
    v13 = 8 * v9;
    v14 = (_DWORD *)(v13 + *(_DWORD *)(v4 + 20));
    if ( a3 + 4 != *v14 )
      _invalid_parameter_noinfo();
    if ( v27 == (_DWORD *)v14[1] )
    {
      v15 = v28;
      v16 = *(_DWORD *)(v28 + 4);
      if ( !v16 || v29 >= (*(_DWORD *)(v28 + 8) - v16) >> 3 )
        _invalid_parameter_noinfo();
      v17 = *(_DWORD *)(v15 + 4);
      v18 = v26;
      ++v29;
      v4 = a3;
      *(_DWORD *)(v17 + v13) = v6;
      *(_DWORD *)(v17 + v13 + 4) = v18;
      v9 = v29;
    }
    else
    {
      v19 = v26;
      if ( v26 == *(_DWORD **)(v6 + 4) )
        _invalid_parameter_noinfo();
      v20 = v27 == *(_DWORD **)(a3 + 8);
      v26 = (_DWORD *)*v19;
      if ( v20 )
        _invalid_parameter_noinfo();
      v9 = v29;
      v4 = a3;
      v27 = (_DWORD *)*v27;
    }
  }
  return result;
}
