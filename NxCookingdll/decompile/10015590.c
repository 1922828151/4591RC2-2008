/*
 * func-name: sub_10015590
 * func-address: 0x10015590
 * callers: 0x1000e570, 0x1001e590, 0x1001efc0, 0x100201a0, 0x10020e00
 * callees: none
 */

float *__thiscall sub_10015590(float *this, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st3
  double v8; // st2
  double v9; // st1
  long double v10; // st7
  long double v11; // st7
  float *result; // eax
  float v13; // [esp+0h] [ebp-Ch]
  float v14; // [esp+4h] [ebp-8h]
  float v15; // [esp+8h] [ebp-4h]

  v4 = *a3 - *a2;
  v5 = a3[1] - a2[1];
  v6 = a3[2] - a2[2];
  v7 = a4[1] - a2[1];
  v8 = a4[2] - a2[2];
  v13 = v8 * v5 - v7 * v6;
  v9 = *a4 - *a2;
  *this = v13;
  v14 = v6 * v9 - v8 * v4;
  this[1] = v14;
  v15 = v7 * v4 - v5 * v9;
  this[2] = v15;
  v10 = this[2] * this[2] + this[1] * this[1] + *this * *this;
  if ( 0.0 != v10 )
  {
    v11 = 1.0 / sqrt(v10);
    *this = *this * v11;
    this[1] = v11 * this[1];
    this[2] = v11 * this[2];
  }
  result = this;
  this[3] = -(a2[2] * this[2] + *a2 * *this + a2[1] * this[1]);
  return result;
}
