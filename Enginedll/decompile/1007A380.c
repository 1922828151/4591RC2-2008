/*
 * func-name: sub_1007A380
 * func-address: 0x1007a380
 * callers: 0x100634b0, 0x100debd0, 0x100df070, 0x100efe90, 0x100f04f0
 * callees: none
 */

BOOL __cdecl sub_1007A380(float *a1, float *a2, float *a3, float a4)
{
  double v5; // st7
  double v6; // st7
  double v7; // st7
  double v8; // st7
  double v9; // st7
  double v10; // st7
  float v12; // [esp+0h] [ebp-4h]
  float v13; // [esp+10h] [ebp+Ch]
  float v14; // [esp+10h] [ebp+Ch]
  float v15; // [esp+10h] [ebp+Ch]

  v12 = 0.0;
  v5 = *a3;
  if ( *a1 <= v5 )
  {
    if ( *a2 >= v5 )
      goto LABEL_6;
    v6 = *a2 - *a3;
  }
  else
  {
    v6 = v5 - *a1;
  }
  v13 = v6;
  v12 = v13 * v13 + 0.0;
LABEL_6:
  v7 = a3[1];
  if ( a1[1] <= v7 )
  {
    if ( a2[1] >= v7 )
      goto LABEL_11;
    v8 = a2[1] - a3[1];
  }
  else
  {
    v8 = v7 - a1[1];
  }
  v14 = v8;
  v12 = v14 * v14 + v12;
LABEL_11:
  v9 = a3[2];
  if ( a1[2] > v9 )
  {
    v10 = v9 - a1[2];
LABEL_15:
    v15 = v10;
    v12 = v15 * v15 + v12;
    return v12 < a4 * a4;
  }
  if ( a2[2] < v9 )
  {
    v10 = a2[2] - a3[2];
    goto LABEL_15;
  }
  return v12 < a4 * a4;
}
