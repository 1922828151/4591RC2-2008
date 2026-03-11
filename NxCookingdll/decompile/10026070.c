/*
 * func-name: sub_10026070
 * func-address: 0x10026070
 * callers: 0x100291a0
 * callees: 0x10025be0
 */

bool __cdecl sub_10026070(int a1, int a2, int a3, int a4, int a5)
{
  float *v5; // ecx
  float *v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  float *v10; // eax
  double v11; // st4
  double v12; // st3
  double v13; // st2
  double v14; // st1
  double v15; // st2
  double v16; // st5
  double v17; // st5
  float *v19; // eax
  float *v20; // eax
  double v21; // st7
  float v22; // [esp+0h] [ebp-24h]
  float v23; // [esp+4h] [ebp-20h]
  float v24; // [esp+8h] [ebp-1Ch]
  float v25[3]; // [esp+Ch] [ebp-18h] BYREF
  float v26[3]; // [esp+18h] [ebp-Ch] BYREF

  v5 = (float *)(a1 + 12 * a2);
  v6 = (float *)(a1 + 12 * a4);
  v7 = *v6 - *v5;
  v8 = v6[1] - v5[1];
  v9 = v6[2] - v5[2];
  v10 = (float *)(a1 + 12 * a3);
  v11 = *v10 - *v5;
  v12 = v10[1] - v5[1];
  v13 = v10[2] - v5[2];
  v14 = v12 * v9 - v13 * v8;
  v25[0] = v14;
  v15 = v13 * v7 - v9 * v11;
  v25[1] = v15;
  v16 = v11 * v8 - v7 * v12;
  v25[2] = v16;
  v17 = v16 * v16;
  if ( sqrt(v15 * v15 + v17 + v14 * v14) < 9.9999997e-21 && sqrt(v14 * v14 + v15 * v15 + v17) > -9.9999997e-21 )
    return 0;
  v19 = (float *)(a1 + 12 * a5);
  v22 = *v19 - *v5;
  v23 = v19[1] - v5[1];
  v24 = v19[2] - v5[2];
  v20 = sub_10025BE0(v26, v25);
  v21 = v20[2] * v24 + v20[1] * v23 + *v20 * v22;
  return v21 > 9.9999997e-21 || v21 < -9.9999997e-21;
}
