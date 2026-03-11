/*
 * func-name: sub_10018F00
 * func-address: 0x10018f00
 * callers: 0x10018f00, 0x10019040, 0x100193a0
 * callees: 0x10018f00
 */

int __cdecl sub_10018F00(int a1, int a2, int *a3, int a4)
{
  int v5; // edi
  double v6; // st6
  double v7; // st5
  double v8; // st5
  double v9; // st6
  bool v10; // zf
  int result; // eax
  int v12; // eax
  unsigned int v13; // esi
  unsigned int v14; // ecx
  float v15; // [esp+10h] [ebp-Ch]
  float v16; // [esp+10h] [ebp-Ch]
  float v17; // [esp+14h] [ebp-8h]
  float v18; // [esp+14h] [ebp-8h]
  float v19; // [esp+18h] [ebp-4h]
  float v20; // [esp+18h] [ebp-4h]
  int v21; // [esp+2Ch] [ebp+10h]

  v5 = a1 + 36 * a2;
  v6 = *(float *)(a4 + 16) + *(float *)(a4 + 4);
  v7 = *(float *)(a4 + 20) + *(float *)(a4 + 8);
  v15 = (*(float *)(a4 + 12) + *(float *)a4) * 0.5;
  *(float *)v5 = v15;
  v17 = v6 * 0.5;
  *(float *)(v5 + 4) = v17;
  v19 = v7 * 0.5;
  *(float *)(v5 + 8) = v19;
  v8 = *(float *)(a4 + 16) - *(float *)(a4 + 4);
  v9 = *(float *)(a4 + 20) - *(float *)(a4 + 8);
  v16 = (*(float *)(a4 + 12) - *(float *)a4) * 0.5;
  *(float *)(v5 + 12) = v16;
  v18 = v8 * 0.5;
  *(float *)(v5 + 16) = v18;
  v20 = 0.5 * v9;
  *(float *)(v5 + 20) = v20;
  v10 = (*(_DWORD *)(a4 + 24) & 0xFFFFFFFE) == 0;
  result = *a3;
  v21 = *a3;
  if ( v10 )
  {
    *(_DWORD *)(v5 + 24) = **(_DWORD **)(a4 + 32) | 0x80000000;
  }
  else
  {
    *a3 = result + 1;
    *(_DWORD *)(v5 + 24) = result;
    sub_10018F00(a1, result, a3, *(_DWORD *)(a4 + 24) & 0xFFFFFFFE);
    v12 = (*a3)++;
    *(_DWORD *)(v5 + 28) = v12;
    v13 = *(_DWORD *)(a4 + 24) & 0xFFFFFFFE;
    if ( v13 )
      v14 = v13 + 40;
    else
      v14 = 0;
    result = sub_10018F00(a1, v12, a3, v14);
    *(_DWORD *)(v5 + 32) = *a3 - v21;
  }
  return result;
}
