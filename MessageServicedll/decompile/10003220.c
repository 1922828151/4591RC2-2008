/*
 * func-name: sub_10003220
 * func-address: 0x10003220
 * callers: 0x100031b0
 * callees: 0x10009b90, 0x10009bf0, 0x1000a1c0, 0x1000ae10, 0x10022810, 0x100294f2, 0x10029d92
 */

unsigned int __stdcall sub_10003220(int a1, int a2)
{
  int v2; // esi
  int v3; // edx
  int v4; // ebx
  int v5; // eax
  int v6; // ecx
  _DWORD **v7; // eax
  _DWORD *v8; // ecx
  _DWORD *v9; // edi
  _DWORD **v10; // eax
  unsigned int result; // eax
  int v12; // ecx
  int v13; // ecx
  _DWORD *v14; // ebx
  unsigned int v15; // ebx
  int v16; // ecx
  int v17; // eax
  _DWORD *v18; // ebx
  _DWORD v19[9]; // [esp+0h] [ebp-48h] BYREF
  _DWORD *v20; // [esp+24h] [ebp-24h]
  int v21; // [esp+28h] [ebp-20h]
  _DWORD *v22; // [esp+2Ch] [ebp-1Ch]
  unsigned int v23; // [esp+34h] [ebp-14h]
  _DWORD *v24; // [esp+38h] [ebp-10h]
  int v25; // [esp+44h] [ebp-4h]
  unsigned int v26; // [esp+50h] [ebp+8h]

  v24 = v19;
  v2 = a1 + 4;
  v3 = *(_DWORD *)(a1 + 8);
  v4 = a2;
  v5 = *(_DWORD *)(a2 + 20);
  if ( v5 )
    v6 = (*(_DWORD *)(a2 + 24) - v5) >> 3;
  else
    v6 = 0;
  v23 = a1 + 16;
  sub_10022810(v6, a1 + 4, v3);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(a1 + 36) = *(_DWORD *)(a2 + 36);
  v7 = *(_DWORD ***)(a1 + 8);
  v8 = *v7;
  *v7 = v7;
  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4) = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 12) = 0;
  if ( v8 != *(_DWORD **)(a1 + 8) )
  {
    do
    {
      v9 = (_DWORD *)*v8;
      operator delete(v8);
      v8 = v9;
    }
    while ( v9 != *(_DWORD **)(a1 + 8) );
  }
  v25 = 0;
  v10 = *(_DWORD ***)(a2 + 8);
  v21 = a2 + 4;
  v22 = *v10;
  v19[8] = a2 + 4;
  v19[6] = a1 + 4;
  sub_1000AE10(a1 + 4, a2, a1 + 4, *(_DWORD *)(a1 + 8), a2 + 4, v22, a2 + 4, v10);
  *(_BYTE *)a1 = *(_BYTE *)a2;
  v25 = -1;
  v20 = **(_DWORD ***)(a1 + 8);
  v22 = **(_DWORD ***)(a2 + 8);
  v26 = 0;
  while ( 1 )
  {
    result = v23;
    v12 = *(_DWORD *)(v23 + 4);
    if ( !v12 )
      break;
    result = (*(_DWORD *)(v23 + 8) - v12) >> 3;
    if ( v26 >= result )
      break;
    v13 = *(_DWORD *)(v4 + 20);
    if ( !v13 || v26 >= (*(_DWORD *)(v4 + 24) - v13) >> 3 )
      invalid_parameter_noinfo();
    v14 = (_DWORD *)(8 * v26 + *(_DWORD *)(v4 + 20));
    if ( a2 + 4 != *v14 )
      invalid_parameter_noinfo();
    if ( v22 == (_DWORD *)v14[1] )
    {
      v15 = v23;
      v16 = *(_DWORD *)(v23 + 4);
      if ( !v16 || v26 >= (*(_DWORD *)(v23 + 8) - v16) >> 3 )
        invalid_parameter_noinfo();
      v17 = *(_DWORD *)(v15 + 4);
      *(_DWORD *)(v17 + 8 * v26) = v2;
      *(_DWORD *)(v17 + 8 * v26++ + 4) = v20;
      v4 = a2;
    }
    else
    {
      v18 = v20;
      if ( v20 == *(_DWORD **)(v2 + 4) )
        invalid_parameter_noinfo();
      v20 = (_DWORD *)*v18;
      if ( v22 == *(_DWORD **)(a2 + 8) )
        invalid_parameter_noinfo();
      v22 = (_DWORD *)*v22;
      v4 = a2;
    }
  }
  return result;
}
