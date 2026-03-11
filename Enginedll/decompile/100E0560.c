/*
 * func-name: sub_100E0560
 * func-address: 0x100e0560
 * callers: 0x100e0590
 * callees: none
 */

float *__stdcall sub_100E0560(float *a1, int a2, float *a3)
{
  int v3; // eax
  float *i; // ecx

  v3 = a2;
  for ( i = a1; v3; ++i )
  {
    --v3;
    *i = *a3;
  }
  return &a1[a2];
}
