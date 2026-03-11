/*
 * func-name: sub_10132B00
 * func-address: 0x10132b00
 * callers: 0x10134090
 * callees: none
 */

bool __cdecl sub_10132B00(int a1, float *a2, char a3)
{
  int v3; // ebx
  int v4; // edi
  int v5; // esi
  double v6; // st6
  float v8; // [esp+0h] [ebp-4h]
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]
  float v11; // [esp+0h] [ebp-4h]
  float v12; // [esp+0h] [ebp-4h]
  float v13; // [esp+0h] [ebp-4h]

  v3 = 0;
  v4 = 0;
  v5 = 0;
  v8 = a2[3] * *(float *)(a1 + 36) + a2[2] * *(float *)(a1 + 32) + a2[4] * *(float *)(a1 + 40);
  v9 = v8 + *(double *)(a1 + 24);
  if ( v9 < 0.001 )
  {
    v6 = -0.001;
    if ( v9 > -0.001 )
      v5 = 1;
    else
      v4 = 1;
  }
  else
  {
    v6 = -0.001;
    v3 = 1;
  }
  v10 = a2[17] * *(float *)(a1 + 36) + a2[16] * *(float *)(a1 + 32) + a2[18] * *(float *)(a1 + 40);
  v11 = v10 + *(double *)(a1 + 24);
  if ( v11 < 0.001 )
  {
    if ( v11 > v6 )
      ++v5;
    else
      ++v4;
  }
  else
  {
    ++v3;
  }
  v12 = a2[31] * *(float *)(a1 + 36) + a2[30] * *(float *)(a1 + 32) + a2[32] * *(float *)(a1 + 40);
  v13 = v12 + *(double *)(a1 + 24);
  if ( v13 < 0.001 )
  {
    if ( v6 < v13 )
      ++v5;
    else
      ++v4;
  }
  else
  {
    ++v3;
  }
  return a3 && v5 || v4 && v3;
}
