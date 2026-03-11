/*
 * func-name: sub_102C19E0
 * func-address: 0x102c19e0
 * callers: none
 * callees: 0x100029cd, 0x102c09f0, 0x102c1930
 */

int __thiscall sub_102C19E0(float *this, float *a2, float *a3, float *a4)
{
  float *v5; // eax
  float v6; // ecx
  double v7; // st7
  double v8; // st7
  int result; // eax
  float v10; // [esp+4h] [ebp-3Ch]
  float v11; // [esp+4h] [ebp-3Ch]
  float v12; // [esp+4h] [ebp-3Ch]
  float v13; // [esp+8h] [ebp-38h]
  float v14; // [esp+8h] [ebp-38h]
  float v15; // [esp+8h] [ebp-38h]
  float v16; // [esp+Ch] [ebp-34h]
  float v17; // [esp+Ch] [ebp-34h]
  float v18; // [esp+Ch] [ebp-34h]
  float v19; // [esp+10h] [ebp-30h] BYREF
  float v20; // [esp+14h] [ebp-2Ch]
  float v21; // [esp+18h] [ebp-28h]
  float v22; // [esp+1Ch] [ebp-24h] BYREF
  float v23; // [esp+20h] [ebp-20h]
  float v24; // [esp+24h] [ebp-1Ch]
  float v25[3]; // [esp+28h] [ebp-18h] BYREF
  float v26[3]; // [esp+34h] [ebp-Ch] BYREF

  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = *a4 - *a2;
  v23 = a4[1] - a2[1];
  v24 = a4[2] - a2[2];
  v25[0] = *a3 - *a2;
  v25[1] = a3[1] - a2[1];
  v25[2] = a3[2] - a2[2];
  v5 = sub_102C09F0(v26, v25, &v22);
  v10 = *v5;
  v13 = v5[1];
  v16 = v5[2];
  sub_100029CD();
  v6 = v10;
  v11 = *a2 + *a3;
  v19 = v6;
  v7 = a3[1];
  v20 = v13;
  v8 = v7 + a2[1];
  v21 = v16;
  v14 = v8;
  v17 = a3[2] + a2[2];
  v22 = *a4 + v11;
  v23 = v14 + a4[1];
  v24 = a4[2] + v17;
  v12 = v22 * 0.3333329856395721;
  v15 = v23 * 0.3333329856395721;
  v18 = 0.3333329856395721 * v24;
  sub_102C1930((int)this, (int)&v19);
  result = LODWORD(v15);
  this[12] = v12;
  this[13] = v15;
  this[14] = v18;
  return result;
}
