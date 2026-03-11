/*
 * func-name: sub_10015420
 * func-address: 0x10015420
 * callers: 0x1001fda0
 * callees: none
 */

bool __thiscall sub_10015420(_DWORD *this, int a2, float *a3)
{
  float *v3; // eax
  double v4; // st7
  float *v5; // edx
  double v6; // st6
  float *v7; // ecx
  double v8; // st5
  double v9; // st4
  double v10; // st3

  if ( !a2 )
    return 0;
  v3 = (float *)(a2 + 12 * *this);
  v4 = *v3 - *(float *)(a2 + 12 * this[1]);
  v5 = (float *)(a2 + 12 * this[1]);
  v6 = v3[1] - v5[1];
  v7 = (float *)(a2 + 12 * this[2]);
  v8 = v3[2] - v5[2];
  v9 = *v7 - *v5;
  v10 = v7[1] - v5[1];
  return ((v7[2] - v5[2]) * v4 - v8 * v9) * (a3[1] - v3[1])
       + (v6 * v9 - v4 * v10) * (a3[2] - v3[2])
       + (v8 * v10 - (v7[2] - v5[2]) * v6) * (*a3 - *v3) >= 0.0;
}
