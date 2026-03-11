/*
 * func-name: sub_1017B860
 * func-address: 0x1017b860
 * callers: none
 * callees: none
 */

float *__thiscall sub_1017B860(float *this, float *a2)
{
  double v2; // st7
  float *result; // eax
  double v4; // st5
  double v5; // st6
  float v6; // [esp+0h] [ebp-Ch]
  float v7; // [esp+0h] [ebp-Ch]
  float v8; // [esp+0h] [ebp-Ch]
  float v9; // [esp+4h] [ebp-8h]
  float v10; // [esp+8h] [ebp-4h]

  v6 = fabs(*this);
  v9 = v6;
  v7 = fabs(this[1]);
  v10 = v7;
  v8 = fabs(this[2]);
  v2 = v9;
  if ( v10 >= (double)v9 || v8 >= v2 )
  {
    v4 = v10;
    v5 = v8;
    if ( v10 <= v2 || v4 <= v5 )
    {
      if ( v9 >= v5 || v5 <= v4 )
      {
        result = a2;
        *a2 = 0.0;
        a2[1] = 0.0;
        a2[2] = 0.0;
      }
      else
      {
        result = a2;
        *a2 = 0.0;
        a2[1] = 0.0;
        a2[2] = 1.0;
      }
    }
    else
    {
      result = a2;
      *a2 = 0.0;
      a2[1] = 1.0;
      a2[2] = 0.0;
    }
  }
  else
  {
    result = a2;
    *a2 = 1.0;
    a2[1] = 0.0;
    a2[2] = 0.0;
  }
  return result;
}
