/*
 * func-name: ?ToNxVec3@NxHelper@@SA?AVNxVec3@@ABVNxQuat@@@Z
 * func-address: 0x10100cc0
 * callers: 0x10100dc0
 * callees: 0x101a2516, 0x101a28da
 */

float *__cdecl NxHelper::ToNxVec3(float *a1, float *a2)
{
  long double v3; // st7
  double v4; // st7
  double v5; // st6
  float *result; // eax
  float v7; // [esp+4h] [ebp-10h]
  float v8; // [esp+4h] [ebp-10h]
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+1Ch] [ebp+8h]
  float v13; // [esp+1Ch] [ebp+8h]
  float v14; // [esp+1Ch] [ebp+8h]

  v3 = a2[3];
  if ( v3 < 1.0 )
  {
    if ( v3 > -1.0 )
    {
      v12 = acos(v3);
      v4 = v12;
    }
    else
    {
      v4 = 3.1415927;
    }
  }
  else
  {
    v4 = 0.0;
  }
  v13 = v4;
  v14 = v13 + v13;
  v7 = 1.0 - a2[3] * a2[3];
  v8 = sqrt(v7);
  v5 = v8;
  if ( v8 == 0.0 )
  {
    v9 = 1.0;
    v10 = 0.0;
    v11 = 0.0;
  }
  else
  {
    v9 = *a2 / v5;
    v10 = a2[1] / v5;
    v11 = a2[2] / v8;
    v14 = v14 * 57.29578018188477;
  }
  result = a1;
  *a1 = v9 * v14;
  a1[1] = v10 * v14;
  a1[2] = v14 * v11;
  return result;
}
