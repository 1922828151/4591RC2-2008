/*
 * func-name: sub_1009D440
 * func-address: 0x1009d440
 * callers: none
 * callees: 0x101a2516, 0x101a28f2
 */

float *__thiscall sub_1009D440(_DWORD *this, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st7
  float *result; // eax
  float v7; // [esp+8h] [ebp+8h]
  float v8; // [esp+8h] [ebp+8h]
  float v9; // [esp+8h] [ebp+8h]
  float v10; // [esp+8h] [ebp+8h]

  v4 = 0.0;
  if ( 0.0 != *a3 && 1.0 / *a4 > 1.0 )
  {
    v7 = (*a3 - (double)((1u / this[42]) >> 1)) * (double)(unsigned int)this[42] / (double)(unsigned int)(this[42] - 1);
    v8 = sqrt(v7);
    v9 = pow(v8, 16.0);
    v5 = v9 * 0.6000000238418579;
    if ( v5 < 0.0 || v5 <= 1.0 )
    {
      if ( v5 < 0.0 )
        v5 = 0.0;
    }
    else
    {
      v5 = 1.0;
    }
    v10 = v5;
    v4 = v10;
  }
  result = a2;
  *a2 = v4;
  a2[1] = v4;
  a2[2] = v4;
  a2[3] = v4;
  return result;
}
