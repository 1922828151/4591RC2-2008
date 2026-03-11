/*
 * func-name: sub_1001E590
 * func-address: 0x1001e590
 * callers: 0x1001e7c0
 * callees: 0x100149b0, 0x10015590
 */

char __usercall sub_1001E590@<al>(_DWORD *a1@<eax>, int a2, int a3)
{
  int v3; // ebp
  int v5; // eax
  int v6; // edx
  _DWORD *v7; // ebx
  int v8; // edi
  int *v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // edx
  float *v16; // eax
  _DWORD *v18; // edi
  _DWORD *v19; // edi
  int v20; // ebp
  int v21; // ebx
  _DWORD *v22; // edi
  int v23; // ebx
  _DWORD *v24; // esi
  int v25; // [esp+10h] [ebp-14h]
  float v26; // [esp+14h] [ebp-10h] BYREF
  float v27; // [esp+18h] [ebp-Ch]
  float v28; // [esp+1Ch] [ebp-8h]
  float v29; // [esp+20h] [ebp-4h]

  v3 = a3;
  if ( !a1[3] || !a1[4] )
    return 1;
  if ( a3 == -1 )
  {
    v12 = a2;
LABEL_17:
    v18 = (_DWORD *)a1[3];
    if ( v18[1] == *v18 )
      sub_100149B0(v18, 1);
    *(_DWORD *)(v18[2] + 4 * v18[1]++) = v12;
    if ( a3 == -1 )
    {
      v19 = (_DWORD *)a1[4];
      v20 = 12 * v12;
      v21 = *(_DWORD *)(*a1 + 12 * v12);
      if ( v19[1] == *v19 )
        sub_100149B0(v19, 1);
      *(_DWORD *)(v19[2] + 4 * v19[1]++) = v21;
      v22 = (_DWORD *)a1[4];
      v23 = *(_DWORD *)(*a1 + v20 + 4);
      if ( v22[1] == *v22 )
        sub_100149B0(v22, 1);
      *(_DWORD *)(v22[2] + 4 * v22[1]++) = v23;
      v3 = *(_DWORD *)(*a1 + v20 + 8);
    }
    v24 = (_DWORD *)a1[4];
    if ( v24[1] == *v24 )
      sub_100149B0(v24, 1);
    *(_DWORD *)(v24[2] + 4 * v24[1]++) = v3;
    return 1;
  }
  v5 = a1[3];
  v6 = *(_DWORD *)(v5 + 4);
  v7 = *(_DWORD **)(v5 + 8);
  while ( v6 )
  {
    v8 = *(_DWORD *)(*a1 + 12 * *v7 + 4);
    v9 = (int *)(*a1 + 12 * *v7);
    v10 = *v9;
    v11 = v9[2];
    --v6;
    ++v7;
    v25 = v6;
    if ( a3 != v10 && a3 != v8 && a3 != v11 )
    {
      sub_10015590(&v26, (float *)(a1[1] + 12 * v10), (float *)(a1[1] + 12 * v8), (float *)(a1[1] + 12 * v11));
      if ( *(float *)(a1[1] + 12 * a3 + 4) * v27
         + *(float *)(a1[1] + 12 * a3 + 8) * v28
         + *(float *)(a1[1] + 12 * a3) * v26
         + v29 > 0.001 )
        return 0;
      v6 = v25;
    }
  }
  v12 = a2;
  sub_10015590(
    &v26,
    (float *)(a1[1] + 12 * *(_DWORD *)(*a1 + 12 * a2)),
    (float *)(a1[1] + 12 * *(_DWORD *)(*a1 + 12 * a2 + 4)),
    (float *)(a1[1] + 12 * *(_DWORD *)(*a1 + 12 * a2 + 8)));
  v13 = a1[4];
  v14 = *(_DWORD *)(v13 + 4);
  v15 = *(_DWORD **)(v13 + 8);
  if ( !v14 )
    goto LABEL_17;
  while ( 1 )
  {
    v16 = (float *)(a1[1] + 12 * *v15);
    --v14;
    ++v15;
    if ( v16[1] * v27 + v16[2] * v28 + *v16 * v26 + v29 > 0.001 )
      return 0;
    if ( !v14 )
      goto LABEL_17;
  }
}
