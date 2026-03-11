/*
 * func-name: sub_101B0B40
 * func-address: 0x101b0b40
 * callers: 0x1000a5b0
 * callees: none
 */

double __cdecl sub_101B0B40(float a1, float a2)
{
  double v2; // st7
  double result; // st7
  double v4; // st5
  double v5; // st5
  float v6; // [esp+4h] [ebp+4h]
  float v7; // [esp+4h] [ebp+4h]

  v2 = a1;
  v6 = fabs(a1);
  if ( v6 < 0.0001 )
    return 0.0;
  v7 = v2;
  if ( v2 <= 0.0 )
  {
    if ( v2 >= 0.0 )
      goto LABEL_8;
    v4 = v2 + a2;
  }
  else
  {
    v4 = v2 - a2;
  }
  v7 = v4;
LABEL_8:
  v5 = v2 * v7;
  result = v7;
  if ( v5 < 0.0 )
    return 0.0;
  return result;
}
