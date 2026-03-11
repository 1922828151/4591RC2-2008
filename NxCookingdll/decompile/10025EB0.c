/*
 * func-name: sub_10025EB0
 * func-address: 0x10025eb0
 * callers: 0x10027180, 0x100295d0, 0x10029f00
 * callees: none
 */

float *__cdecl sub_10025EB0(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // st3
  double v9; // st2
  double v10; // st5
  double v11; // rt2
  double v12; // st2
  double v13; // st6
  double v14; // st7
  long double v15; // st4
  float *result; // eax
  long double v17; // rtt

  v4 = *a4 - *a3;
  v5 = a4[1] - a3[1];
  v6 = a4[2] - a3[2];
  v7 = *a3 - *a2;
  v8 = a3[1] - a2[1];
  v9 = v6 * v8 - (a3[2] - a2[2]) * v5;
  v10 = (a3[2] - a2[2]) * v4 - v6 * v7;
  v11 = v9;
  v12 = v5;
  v13 = v11;
  v14 = v7 * v12 - v4 * v8;
  v15 = sqrt(v14 * v14 + v10 * v10 + v11 * v11);
  result = a1;
  if ( 0.0 == v15 )
  {
    *a1 = 1.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
  }
  else
  {
    v17 = 1.0 / v15;
    *a1 = v13 * v17;
    a1[1] = v10 * v17;
    a1[2] = v14 * v17;
  }
  return result;
}
