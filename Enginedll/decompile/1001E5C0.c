/*
 * func-name: sub_1001E5C0
 * func-address: 0x1001e5c0
 * callers: 0x1000d780, 0x100208a0, 0x1007df50
 * callees: none
 */

float *__cdecl sub_1001E5C0(char *a1, char *a2, float *a3)
{
  float *result; // eax
  char *v4; // ebx
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
      }
      v4 += 64;
      result += 16;
      v5 += 16;
    }
    while ( v4 != a2 );
  }
  return result;
}
