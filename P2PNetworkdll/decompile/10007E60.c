/*
 * func-name: sub_10007E60
 * func-address: 0x10007e60
 * callers: 0x10002770, 0x10006ab0
 * callees: 0x100080d0, 0x100084c0, 0x100084e0, 0x100087a0, 0x10009890, 0x10023bc6
 */

unsigned int __stdcall sub_10007E60(int a1, int a2)
{
  int v2; // esi
  int v3; // ebx
  _DWORD *v4; // ecx
  unsigned int v5; // edi
  unsigned int result; // eax
  int v7; // ecx
  int v8; // ecx
  int v9; // edi
  _DWORD *v10; // esi
  unsigned int v11; // esi
  int v12; // ecx
  int v13; // eax
  _DWORD *v14; // ecx
  _DWORD *v15; // esi
  bool v16; // zf
  int v17; // [esp-4h] [ebp-4Ch]
  int v18; // [esp+0h] [ebp-48h] BYREF
  _DWORD *v19; // [esp+24h] [ebp-24h]
  _DWORD *v20; // [esp+2Ch] [ebp-1Ch]
  unsigned int v21; // [esp+34h] [ebp-14h]
  int *v22; // [esp+38h] [ebp-10h]
  int v23; // [esp+44h] [ebp-4h]
  unsigned int v24; // [esp+50h] [ebp+8h]

  v22 = &v18;
  v2 = a2;
  v3 = a1 + 4;
  v17 = *(_DWORD *)(a1 + 8);
  v21 = a1 + 16;
  sub_100080D0(a1 + 4, v17);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  sub_100087A0(a1 + 4);
  v23 = 0;
  sub_10009890(a1 + 4, a1 + 4, *(_DWORD *)(a1 + 8), v2 + 4, **(_DWORD **)(v2 + 8), v2 + 4, *(_DWORD *)(v2 + 8));
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v4 = **(_DWORD ***)(a2 + 8);
  v5 = 0;
  v19 = **(_DWORD ***)(a1 + 8);
  v20 = v4;
  v24 = 0;
  while ( 1 )
  {
    result = v21;
    v7 = *(_DWORD *)(v21 + 4);
    if ( !v7 )
      break;
    result = (*(_DWORD *)(v21 + 8) - v7) >> 3;
    if ( v5 >= result )
      break;
    v8 = *(_DWORD *)(v2 + 20);
    if ( !v8 || v5 >= (*(_DWORD *)(v2 + 24) - v8) >> 3 )
      invalid_parameter_noinfo();
    v9 = 8 * v5;
    v10 = (_DWORD *)(v9 + *(_DWORD *)(v2 + 20));
    if ( a2 + 4 != *v10 )
      invalid_parameter_noinfo();
    if ( v20 == (_DWORD *)v10[1] )
    {
      v11 = v21;
      v12 = *(_DWORD *)(v21 + 4);
      if ( !v12 || v24 >= (*(_DWORD *)(v21 + 8) - v12) >> 3 )
        invalid_parameter_noinfo();
      v13 = *(_DWORD *)(v11 + 4);
      v14 = v19;
      ++v24;
      v2 = a2;
      *(_DWORD *)(v13 + v9) = v3;
      *(_DWORD *)(v13 + v9 + 4) = v14;
      v5 = v24;
    }
    else
    {
      v15 = v19;
      if ( v19 == *(_DWORD **)(v3 + 4) )
        invalid_parameter_noinfo();
      v16 = v20 == *(_DWORD **)(a2 + 8);
      v19 = (_DWORD *)*v15;
      if ( v16 )
        invalid_parameter_noinfo();
      v5 = v24;
      v2 = a2;
      v20 = (_DWORD *)*v20;
    }
  }
  return result;
}
