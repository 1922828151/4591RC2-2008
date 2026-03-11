/*
 * func-name: sub_101A9270
 * func-address: 0x101a9270
 * callers: 0x1000fa1f
 * callees: none
 */

float *__stdcall sub_101A9270(float *a1, int a2, float *a3)
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
