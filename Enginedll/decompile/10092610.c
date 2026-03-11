/*
 * func-name: sub_10092610
 * func-address: 0x10092610
 * callers: 0x100927e0
 * callees: 0x101780f8, 0x101a2516
 */

float *__cdecl sub_10092610(float *a1, float a2, float a3, float a4, float a5, float a6, float a7)
{
  double v7; // st5
  double v8; // st6
  double v9; // st3
  double v10; // st2
  double v11; // st4
  long double v12; // st2
  long double v13; // st7
  float *result; // eax
  double v15; // st7
  float v16; // ecx
  float v17; // edx
  float v18; // [esp+0h] [ebp-Ch]
  float v19; // [esp+4h] [ebp-8h]
  float v20; // [esp+8h] [ebp-4h]

  v7 = a6;
  v8 = a5;
  v9 = a7;
  a5 = a4 * a7 + a2 * a5 + a3 * a6;
  v10 = a5;
  a5 = a5 * v8;
  a6 = v10 * a6;
  a7 = v10 * a7;
  v18 = a2 - a5;
  a5 = v18;
  v19 = a3 - a6;
  a6 = v19;
  v20 = a4 - a7;
  a7 = v20;
  v11 = v20;
  a2 = v20 * v20 + v19 * v19 + v18 * v18;
  if ( a2 <= 0.0 )
  {
    if ( 1.0 == v9 )
    {
      result = a1;
      *a1 = 1.0;
      v16 = 0.0;
      a1[1] = 0.0;
    }
    else
    {
      a2 = -v7;
      a3 = v8;
      a4 = 0.0;
      D3DXVec3Normalize(&a5, &a2);
      result = a1;
      v17 = a6;
      v16 = a7;
      *a1 = a5;
      a1[1] = v17;
    }
    a1[2] = v16;
  }
  else
  {
    v12 = a2;
    if ( v11 >= 0.0 )
    {
      v13 = a2;
    }
    else
    {
      a2 = -v18;
      a5 = a2;
      a3 = -v19;
      v13 = v12;
      a6 = a3;
      a4 = -v11;
      a7 = a4;
    }
    a2 = sqrt(v13);
    result = a1;
    a2 = 1.0 / a2;
    v15 = a2;
    *a1 = a2 * a5;
    a1[1] = a6 * v15;
    a1[2] = v15 * a7;
  }
  return result;
}
