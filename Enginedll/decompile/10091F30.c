/*
 * func-name: sub_10091F30
 * func-address: 0x10091f30
 * callers: 0x10092b40
 * callees: none
 */

float *__cdecl sub_10091F30(float *a1, int a2)
{
  int v3; // edx
  double v4; // st7
  bool v5; // sf
  double v6; // st6
  double v7; // st3
  int v8; // edx
  double v9; // st4
  float *result; // eax
  float v11; // [esp+8h] [ebp-48h]
  float v12; // [esp+Ch] [ebp-44h]
  float v13[16]; // [esp+10h] [ebp-40h] BYREF
  float v14; // [esp+58h] [ebp+8h]

  v3 = *(_DWORD *)(a2 + 12);
  v14 = (float)*(unsigned int *)(a2 + 8);
  v4 = (double)*(int *)(a2 + 12);
  if ( v3 < 0 )
    v4 = v4 + 4294967300.0;
  v11 = v4;
  v5 = *(int *)a2 < 0;
  v12 = *(float *)(a2 + 16);
  v6 = v14 * 0.5;
  v13[0] = v6;
  v13[1] = 0.0;
  v13[2] = 0.0;
  v13[3] = 0.0;
  v13[4] = 0.0;
  v13[5] = -v11 * 0.5;
  v13[6] = 0.0;
  v13[7] = 0.0;
  v13[8] = 0.0;
  v13[9] = 0.0;
  v13[10] = *(float *)(a2 + 20) - v12;
  v13[11] = 0.0;
  v7 = (double)*(int *)a2;
  if ( v5 )
    v7 = v7 + 4294967300.0;
  v8 = *(_DWORD *)(a2 + 4);
  v13[12] = v6 + v7;
  v9 = (double)*(int *)(a2 + 4);
  if ( v8 < 0 )
    v9 = v9 + 4294967300.0;
  result = a1;
  v13[13] = 0.5 * v11 + v9;
  v13[14] = v12;
  v13[15] = 1.0;
  qmemcpy(a1, v13, 0x40u);
  return result;
}
