/*
 * func-name: sub_100E8C60
 * func-address: 0x100e8c60
 * callers: 0x100e1440
 * callees: 0x101a26c0
 */

int __cdecl sub_100E8C60(float *a1)
{
  int v3; // [esp+8h] [ebp+4h]

  if ( *a1 > 1.0 )
    *a1 = 1.0;
  if ( a1[1] > 1.0 )
    a1[1] = 1.0;
  if ( *a1 < -1.0 )
    *a1 = -1.0;
  if ( a1[1] < -1.0 )
    a1[1] = -1.0;
  LOWORD(v3) = (int)(*a1 * 32767.0);
  HIWORD(v3) = (int)(32767.0 * a1[1]);
  return v3;
}
