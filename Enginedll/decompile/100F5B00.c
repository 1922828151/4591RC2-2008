/*
 * func-name: sub_100F5B00
 * func-address: 0x100f5b00
 * callers: 0x100f6400, 0x100f6e10
 * callees: none
 */

float *__cdecl sub_100F5B00(float *a1, float *a2, float *a3)
{
  float *result; // eax
  float *v4; // ebx
  float *v5; // edx

  result = a3;
  v4 = a1;
  if ( a1 != a2 )
  {
    v5 = a3 + 6;
    do
    {
      if ( result )
      {
        *result = 0.0;
        *(v5 - 5) = 0.0;
        *(v5 - 4) = 0.0;
        *(v5 - 2) = 0.0;
        *(v5 - 1) = 0.0;
        *v5 = 0.0;
        v5[2] = 0.0;
        v5[3] = 0.0;
        v5[4] = 0.0;
        v5[6] = 0.0;
        v5[7] = 0.0;
        v5[8] = 0.0;
        qmemcpy(result, v4, 0x40u);
        v5[10] = v4[16];
      }
      v4 += 17;
      result += 17;
      v5 += 17;
    }
    while ( v4 != a2 );
  }
  return result;
}
