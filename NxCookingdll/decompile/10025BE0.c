/*
 * func-name: sub_10025BE0
 * func-address: 0x10025be0
 * callers: 0x10025f50, 0x10026070, 0x100291a0, 0x10029f00
 * callees: 0x10036420
 */

float *__cdecl sub_10025BE0(float *a1, float *a2)
{
  long double v2; // st7
  float *result; // eax
  long double v4; // st7

  v2 = sqrt(*a2 * *a2 + a2[1] * a2[1] + a2[2] * a2[2]);
  if ( 0.0 == v2 )
  {
    printf("Cant normalize ZERO vector\n");
    v2 = 0.1;
  }
  result = a1;
  v4 = 1.0 / v2;
  *a1 = *a2 * v4;
  a1[1] = a2[1] * v4;
  a1[2] = v4 * a2[2];
  return result;
}
