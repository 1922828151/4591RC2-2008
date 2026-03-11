/*
 * func-name: sub_10105970
 * func-address: 0x10105970
 * callers: none
 * callees: none
 */

int __cdecl sub_10105970(unsigned int a1, unsigned int a2, int a3)
{
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st4
  double v13; // rt2
  double v14; // st4
  double v15; // rt0
  double v16; // st3
  double v17; // rt1
  double v18; // st4
  double v19; // st5
  double v20; // rtt
  double v21; // st4
  double v22; // st6
  float v23; // [esp+0h] [ebp-Ch]
  float v24; // [esp+0h] [ebp-Ch]
  float v25; // [esp+4h] [ebp-8h]
  float v26; // [esp+4h] [ebp-8h]
  float v27; // [esp+8h] [ebp-4h]
  int v28; // [esp+18h] [ebp+Ch]
  float v29; // [esp+18h] [ebp+Ch]

  if ( !a3 )
    return -2147024809;
  v25 = 1.0 / (double)a1;
  v5 = -1;
  v28 = -1;
  v6 = a3 + 8;
  v23 = 1.0 / (double)a2;
  v7 = v23;
  v24 = -1.0 * v23;
  v27 = 0.0 * v7;
  v8 = v7;
  v9 = v25;
  v26 = v8;
  v10 = v24;
  v11 = v27;
  v12 = v26;
  while ( 1 )
  {
    ++v5;
    v6 += 24;
    v29 = (double)v28 * v9;
    v16 = v29;
    v28 = v5;
    *(float *)(v6 - 32) = v16;
    *(float *)(v6 - 24) = v16;
    *(float *)(v6 - 16) = v16;
    v17 = v12;
    *(float *)(v6 - 28) = v10;
    v18 = v11;
    v19 = v10;
    *(float *)(v6 - 20) = v18;
    v20 = v18;
    v21 = v17;
    v22 = v20;
    *(float *)(v6 - 12) = v17;
    if ( v5 > 1 )
      break;
    v13 = v21;
    v14 = v22;
    v10 = v19;
    v15 = v14;
    v12 = v13;
    v11 = v15;
  }
  return 0;
}
