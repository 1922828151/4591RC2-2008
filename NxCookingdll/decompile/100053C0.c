/*
 * func-name: sub_100053C0
 * func-address: 0x100053c0
 * callers: 0x100054a0
 * callees: none
 */

double *__thiscall sub_100053C0(_DWORD *this, double *a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // edi
  int v5; // edx
  int v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  float *v10; // edx
  int v11; // eax
  double v12; // st4
  double v13; // st3
  double v14; // st2
  double v15; // st1
  double v16; // st5
  double v17; // rt1
  double v18; // st1
  double v19; // st2
  double v20; // st3
  double v21; // st4
  double v22; // st7
  double v23; // st6
  long double v24; // st4
  long double v25; // st4
  double *result; // eax

  v3 = this[20];
  v4 = this[18];
  v5 = v4 * a3[1];
  v6 = v4 * *a3;
  v7 = *(float *)(v5 + v3) - *(float *)(v6 + v3);
  v8 = *(float *)(v5 + v3 + 4) - *(float *)(v6 + v3 + 4);
  v9 = *(float *)(v5 + v3 + 8) - *(float *)(v6 + v3 + 8);
  v10 = (float *)(v3 + v5);
  v11 = v4 * a3[2];
  v12 = *(float *)(v11 + v3) - *v10;
  v13 = *(float *)(v11 + v3 + 4) - v10[1];
  v14 = *(float *)(v11 + v3 + 8) - v10[2];
  v15 = v9;
  v16 = v14 * v8 - v13 * v9;
  v17 = v15 * v12;
  v18 = v14 * v7;
  v19 = v13;
  v20 = v12;
  v21 = v7 * v19;
  v22 = v17 - v18;
  v23 = v21 - v8 * v20;
  v24 = sqrt(v23 * v23 + v22 * v22 + v16 * v16);
  if ( 0.0 != v24 )
  {
    v25 = 1.0 / v24;
    v16 = v16 * v25;
    v22 = v22 * v25;
    v23 = v23 * v25;
  }
  result = a2;
  a2[3] = -(*(float *)(*a3 * v4 + v3 + 8) * v23 + *(float *)(*a3 * v4 + v3 + 4) * v22 + *(float *)(*a3 * v4 + v3) * v16);
  *a2 = v16;
  a2[1] = v22;
  a2[2] = v23;
  return result;
}
