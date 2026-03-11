/*
 * func-name: sub_10019E80
 * func-address: 0x10019e80
 * callers: 0x10019e80, 0x10019fc0, 0x1001a090
 * callees: 0x10019e80
 */

int __cdecl sub_10019E80(int a1, int a2, int *a3, int a4)
{
  unsigned int v4; // ecx
  unsigned int v5; // ebx
  double v6; // st6
  int v7; // esi
  double v8; // st5
  double v9; // st5
  double v10; // st6
  unsigned int v11; // eax
  int result; // eax
  int v13; // [esp-Ch] [ebp-28h]
  float v14; // [esp+10h] [ebp-Ch]
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+14h] [ebp-8h]
  float v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+18h] [ebp-4h]
  float v19; // [esp+18h] [ebp-4h]
  int v20; // [esp+2Ch] [ebp+10h]

  v4 = *(_DWORD *)(a4 + 24) & 0xFFFFFFFE;
  if ( v4 )
    v5 = v4 + 40;
  else
    v5 = 0;
  v6 = *(float *)(a4 + 16) + *(float *)(a4 + 4);
  v7 = a1 + 32 * a2;
  v8 = *(float *)(a4 + 20) + *(float *)(a4 + 8);
  v14 = (*(float *)(a4 + 12) + *(float *)a4) * 0.5;
  *(float *)v7 = v14;
  v16 = v6 * 0.5;
  *(float *)(v7 + 4) = v16;
  v18 = v8 * 0.5;
  *(float *)(v7 + 8) = v18;
  v9 = *(float *)(a4 + 16) - *(float *)(a4 + 4);
  v10 = *(float *)(a4 + 20) - *(float *)(a4 + 8);
  v15 = (*(float *)(a4 + 12) - *(float *)a4) * 0.5;
  *(float *)(v7 + 12) = v15;
  v17 = v9 * 0.5;
  *(float *)(v7 + 16) = v17;
  v19 = 0.5 * v10;
  *(float *)(v7 + 20) = v19;
  if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFE) != 0 && (*(_DWORD *)(v5 + 24) & 0xFFFFFFFE) == 0 )
  {
    v11 = v4;
    v4 = v5;
    v5 = v11;
  }
  result = *a3;
  v20 = *a3;
  if ( (*(_DWORD *)(v4 + 24) & 0xFFFFFFFE) != 0 )
  {
    *a3 = result + 1;
    *(_DWORD *)(v7 + 24) = 57005;
    result = sub_10019E80(a1, result, a3, v4);
  }
  else
  {
    *(_DWORD *)(v7 + 24) = **(_DWORD **)(v4 + 32) | 0x80000000;
  }
  if ( (*(_DWORD *)(v5 + 24) & 0xFFFFFFFE) != 0 )
  {
    v13 = (*a3)++;
    result = sub_10019E80(a1, v13, a3, v5);
    *(_DWORD *)(v7 + 28) = *a3 - v20;
  }
  else
  {
    *(_DWORD *)(v7 + 24) |= 0x40000000u;
    *(_DWORD *)(v7 + 28) = 0;
  }
  return result;
}
