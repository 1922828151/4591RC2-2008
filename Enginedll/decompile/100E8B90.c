/*
 * func-name: sub_100E8B90
 * func-address: 0x100e8b90
 * callers: 0x100e1440
 * callees: 0x101a26c0
 */

__int64 __cdecl sub_100E8B90(float *a1)
{
  __int64 v2; // [esp+4h] [ebp-8h]

  if ( *a1 > 1.0 )
    *a1 = 1.0;
  if ( a1[1] > 1.0 )
    a1[1] = 1.0;
  if ( a1[2] > 1.0 )
    a1[2] = 1.0;
  if ( a1[3] > 1.0 )
    a1[3] = 1.0;
  if ( *a1 < -1.0 )
    *a1 = -1.0;
  if ( a1[1] < -1.0 )
    a1[1] = -1.0;
  if ( a1[2] < -1.0 )
    a1[2] = -1.0;
  if ( a1[3] < -1.0 )
    a1[3] = -1.0;
  LOWORD(v2) = (int)(*a1 * 32767.0);
  WORD1(v2) = (int)(a1[1] * 32767.0);
  WORD2(v2) = (int)(a1[2] * 32767.0);
  HIWORD(v2) = (int)(32767.0 * a1[3]);
  return v2;
}
