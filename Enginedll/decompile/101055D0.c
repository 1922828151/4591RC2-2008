/*
 * func-name: sub_101055D0
 * func-address: 0x101055d0
 * callers: 0x10106ce0
 * callees: none
 */

int __cdecl sub_101055D0(unsigned int a1, unsigned int a2, int a3)
{
  int v5; // ecx
  int v6; // eax
  double v7; // st7
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // rtt
  double v13; // st2
  double v14; // rt1
  double v15; // st2
  double v16; // rt2
  double v17; // rtt
  double v18; // st1
  double v19; // st2
  double v20; // st4
  double v21; // rt1
  double v22; // st2
  double v23; // st3
  double v24; // rt2
  double v25; // st2
  double v26; // st5
  float v27; // [esp+0h] [ebp-14h]
  float v28; // [esp+0h] [ebp-14h]
  float v29; // [esp+4h] [ebp-10h]
  float v30; // [esp+8h] [ebp-Ch]
  float v31; // [esp+Ch] [ebp-8h]
  float v32; // [esp+10h] [ebp-4h]
  int v33; // [esp+20h] [ebp+Ch]
  float v34; // [esp+20h] [ebp+Ch]

  if ( !a3 )
    return -2147024809;
  v27 = 1.0 / (double)a1;
  v5 = 0;
  v33 = 0;
  v6 = a3 + 8;
  v7 = v27;
  v28 = (0.0 - 1.5) * v27;
  v30 = v7 * -0.5;
  v31 = v7 * 0.5;
  v32 = v7 * 1.5;
  v8 = v28;
  v9 = v30;
  v10 = v31;
  v11 = v32;
  while ( 1 )
  {
    v17 = v11;
    ++v5;
    *(float *)(v6 - 8) = v8;
    v6 += 32;
    v29 = 1.0 / (double)a2;
    v34 = ((double)v33 - 1.5) * v29;
    v18 = v34;
    v33 = v5;
    *(float *)(v6 - 36) = v18;
    *(float *)(v6 - 28) = v18;
    *(float *)(v6 - 20) = v18;
    *(float *)(v6 - 12) = v18;
    v19 = v9;
    v20 = v8;
    *(float *)(v6 - 32) = v19;
    v21 = v19;
    v22 = v10;
    v23 = v21;
    *(float *)(v6 - 24) = v22;
    v24 = v22;
    v25 = v17;
    v26 = v24;
    *(float *)(v6 - 16) = v17;
    if ( v5 >= 4 )
      break;
    v12 = v25;
    v13 = v26;
    v8 = v20;
    v14 = v13;
    v15 = v23;
    v10 = v14;
    v16 = v15;
    v11 = v12;
    v9 = v16;
  }
  return 0;
}
