/*
 * func-name: sub_10015390
 * func-address: 0x10015390
 * callers: 0x1000c970
 * callees: none
 */

double __thiscall sub_10015390(_DWORD *this, int a2)
{
  int v3; // edx
  double v4; // st7
  float *v5; // eax
  int v6; // ecx
  double v7; // st7
  int v8; // ecx
  double v9; // st6
  float *v10; // edx
  double v11; // st5
  double v12; // st3
  double v13; // st1
  double v14; // rt1
  double v15; // st2

  if ( !a2 )
    return 0.0;
  v3 = this[1];
  v4 = *(float *)(a2 + 12 * *this);
  v5 = (float *)(a2 + 12 * *this);
  v6 = 3 * this[2];
  v7 = v4 - *(float *)(a2 + 4 * v6);
  v8 = a2 + 4 * v6;
  v9 = v5[1] - *(float *)(v8 + 4);
  v10 = (float *)(a2 + 12 * v3);
  v11 = v5[2] - *(float *)(v8 + 8);
  v12 = v5[1] - v10[1];
  v13 = (v5[2] - v10[2]) * v7;
  v14 = v12 * v11 - (v5[2] - v10[2]) * v9;
  v15 = *v5 - *v10;
  return sqrt((v9 * v15 - v7 * v12) * (v9 * v15 - v7 * v12) + (v13 - v11 * v15) * (v13 - v11 * v15) + v14 * v14) * 0.5;
}
