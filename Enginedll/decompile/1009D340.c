/*
 * func-name: sub_1009D340
 * func-address: 0x1009d340
 * callers: none
 * callees: none
 */

float *__thiscall sub_1009D340(unsigned int *this, float *a2, float *a3, int a4)
{
  double v4; // st7
  float *result; // eax
  double v6; // st5
  double v7; // st6
  double v8; // st4
  double v9; // st6
  double v10; // st5
  float v11; // [esp+0h] [ebp-4h]
  float v12; // [esp+0h] [ebp-4h]
  float v13; // [esp+Ch] [ebp+8h]
  float v14; // [esp+Ch] [ebp+8h]
  float v15; // [esp+Ch] [ebp+8h]

  v11 = (float)this[42];
  v4 = 1.0;
  v13 = (*a3 - 1.0 / v11 * 0.5) * v11 / (v11 - 1.0);
  if ( v13 == 0.0 )
  {
    result = a2;
    *a2 = 1.0;
    a2[1] = 1.0;
    a2[2] = 1.0;
    a2[3] = 1.0;
  }
  else
  {
    v14 = 0.0625 / v13 - 0.0625;
    v6 = v14;
    v7 = 0.0625 * v14;
    v8 = 0.0;
    if ( v7 < 0.0 || v7 <= 1.0 )
    {
      if ( v7 >= 0.0 )
        v8 = v7;
      v9 = 0.0;
    }
    else
    {
      v9 = 0.0;
      v8 = 1.0;
    }
    v15 = v8;
    v10 = v6 * 0.25;
    if ( v10 < v9 || v10 <= 1.0 )
    {
      v4 = v10;
      if ( v9 > v10 )
        v4 = v9;
    }
    result = a2;
    v12 = v4;
    *a2 = v15;
    a2[1] = v12;
    a2[3] = v12;
    a2[2] = v15;
  }
  return result;
}
