/*
 * func-name: sub_101788E0
 * func-address: 0x101788e0
 * callers: none
 * callees: 0x101a281a, 0x101a2820
 */

void __thiscall sub_101788E0(float *this, float a2, float a3, float a4)
{
  double v4; // st7
  float v5; // [esp+0h] [ebp-10h]
  float v6; // [esp+4h] [ebp-Ch]
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]
  float v9; // [esp+14h] [ebp+4h]
  float v10; // [esp+14h] [ebp+4h]
  float v11; // [esp+14h] [ebp+4h]
  float v12; // [esp+14h] [ebp+4h]
  float v13; // [esp+14h] [ebp+4h]
  float v14; // [esp+14h] [ebp+4h]
  float v15; // [esp+18h] [ebp+8h]
  float v16; // [esp+18h] [ebp+8h]
  float v17; // [esp+1Ch] [ebp+Ch]

  v5 = cos(a2);
  v9 = sin(a2);
  v6 = v9;
  v10 = cos(a3);
  v8 = v10;
  v11 = sin(a3);
  v15 = v11;
  v12 = cos(a4);
  v7 = v12;
  v13 = sin(a4);
  v17 = v13;
  v4 = v15;
  v16 = v15 * v5;
  v14 = v4 * v6;
  *this = v7 * v8;
  this[1] = -v8 * v17;
  this[2] = v4;
  this[4] = v14 * v7 + v17 * v5;
  this[5] = v7 * v5 - v14 * v17;
  this[6] = -v6 * v8;
  this[8] = v17 * v6 - v16 * v7;
  this[9] = v6 * v7 + v17 * v16;
  this[10] = v8 * v5;
  this[3] = 0.0;
  this[7] = 0.0;
  this[11] = 0.0;
  this[15] = 1.0;
}
