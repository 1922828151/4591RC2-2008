/*
 * func-name: sub_10032530
 * func-address: 0x10032530
 * callers: 0x10006181
 * callees: 0x102c9dbc
 */

double __thiscall sub_10032530(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  float v6; // [esp+0h] [ebp-4h]
  float v7; // [esp+8h] [ebp+4h]
  float v8; // [esp+8h] [ebp+4h]
  float v9; // [esp+8h] [ebp+4h]

  v2 = a2[1];
  v3 = *a2;
  v4 = a2[2];
  v7 = this[1] * v2 + v3 * *this + this[2] * v4;
  v6 = v7;
  v8 = v4 * v4 + v3 * v3 + v2 * v2;
  v9 = sqrt(v8);
  return (float)(v6 / v9);
}
