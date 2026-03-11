/*
 * func-name: sub_10034240
 * func-address: 0x10034240
 * callers: 0x1000c6df
 * callees: none
 */

int __thiscall sub_10034240(float *this, float *a2)
{
  double v2; // st5
  double v3; // st7
  int result; // eax
  float v5; // [esp+0h] [ebp-18h]
  float v6; // [esp+0h] [ebp-18h]
  float v7; // [esp+4h] [ebp-14h]
  float v8; // [esp+4h] [ebp-14h]
  float v9; // [esp+8h] [ebp-10h]
  float v10; // [esp+8h] [ebp-10h]
  float v11; // [esp+Ch] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-Ch]
  float v13; // [esp+10h] [ebp-8h]
  float v14; // [esp+10h] [ebp-8h]
  float v15; // [esp+14h] [ebp-4h]
  float v16; // [esp+14h] [ebp-4h]

  v5 = this[7] - this[4];
  v7 = this[8] - this[5];
  v9 = this[9] - this[6];
  v11 = v5 * 0.5;
  v13 = v7 * 0.5;
  v15 = 0.5 * v9;
  v6 = *a2 - v11;
  v8 = a2[1] - v13;
  v2 = a2[2];
  this[4] = v6;
  this[5] = v8;
  v10 = v2 - v15;
  this[6] = v10;
  v12 = v11 + *a2;
  v14 = v13 + a2[1];
  v3 = v15 + a2[2];
  this[7] = v12;
  this[8] = v14;
  v16 = v3;
  result = LODWORD(v16);
  this[9] = v16;
  return result;
}
