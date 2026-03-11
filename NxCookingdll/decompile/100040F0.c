/*
 * func-name: sub_100040F0
 * func-address: 0x100040f0
 * callers: 0x100040f0, 0x100042e0
 * callees: 0x10003c90, 0x10003cf0, 0x10003ea0, 0x100040f0
 */

float *__cdecl sub_100040F0(float *a1, int a2, unsigned int a3, int a4)
{
  double v4; // st6
  double v5; // st5
  double v7; // st4
  double v8; // st3
  double v9; // st7
  float *v10; // eax
  double v11; // st5
  double v12; // st3
  float *v13; // eax
  double v14; // rt2
  unsigned int i; // edi
  float *v16; // eax
  double v17; // st0
  unsigned int j; // eax
  int v19; // ecx
  float *v20; // eax
  float *result; // eax
  float *v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st4
  float v27[4]; // [esp+8h] [ebp-30h] BYREF
  float v28[4]; // [esp+18h] [ebp-20h] BYREF
  float v29[4]; // [esp+28h] [ebp-10h] BYREF
  float v30; // [esp+48h] [ebp+10h]

  v4 = -0.001;
  v5 = 0.0;
  v7 = 0.0;
  v8 = 0.0;
  switch ( a4 )
  {
    case 0:
      v9 = 0.0;
      v4 = -0.001;
      v8 = 0.0;
      v7 = 0.0;
      goto LABEL_7;
    case 1:
      v10 = *(float **)(a2 - 4);
      v11 = v10[1];
      v7 = v10[2];
      v4 = 0.000099999997;
      v12 = 0.0;
      v9 = *v10;
      goto LABEL_6;
    case 2:
      v13 = sub_10003C90(v27, *(float **)(a2 - 4), *(float **)(a2 - 8));
      goto LABEL_5;
    case 3:
      v13 = sub_10003CF0(v28, *(float **)(a2 - 4), *(float **)(a2 - 8), *(float **)(a2 - 12));
LABEL_5:
      v11 = v13[1];
      v7 = v13[2];
      v9 = *v13;
      v12 = 0.0;
      v4 = v13[3];
LABEL_6:
      v14 = v12;
      v8 = v11;
      v5 = v14;
      goto LABEL_7;
    case 4:
      v22 = sub_10003EA0(v29, *(float **)(a2 - 4), *(float **)(a2 - 8), *(float **)(a2 - 12), *(float **)(a2 - 16));
      v23 = v22[3];
      v24 = *v22;
      v25 = v22[1];
      v26 = v22[2];
      result = a1;
      a1[3] = v23;
      *a1 = v24;
      a1[1] = v25;
      a1[2] = v26;
      return result;
    default:
      v9 = 0.0;
LABEL_7:
      for ( i = 0; i < a3; ++i )
      {
        v16 = *(float **)(a2 + 4 * i);
        v30 = *v16 - v9;
        v17 = v16[1] - v8;
        if ( v17 * v17 + (v16[2] - v7) * (v16[2] - v7) + v30 * v30 - v4 * v4 > v5 )
        {
          for ( j = i; j; *(_DWORD *)(a2 + 4 * j) = v19 )
          {
            --j;
            v19 = *(_DWORD *)(a2 + 4 * j + 4);
            *(_DWORD *)(a2 + 4 * j + 4) = *(_DWORD *)(a2 + 4 * j);
          }
          v20 = (float *)sub_100040F0(v29, a2 + 4, i, a4 + 1);
          v7 = v20[2];
          v9 = *v20;
          v4 = v20[3];
          v8 = v20[1];
          v5 = 0.0;
        }
      }
      result = a1;
      a1[3] = v4;
      *a1 = v9;
      a1[1] = v8;
      a1[2] = v7;
      return result;
  }
}
