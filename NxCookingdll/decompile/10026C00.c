/*
 * func-name: sub_10026C00
 * func-address: 0x10026c00
 * callers: 0x10029f00
 * callees: none
 */

int __cdecl sub_10026C00(int a1, int a2, float *a3)
{
  int v3; // ebp
  int v4; // ebx
  char *v5; // edi
  float *v6; // edx
  int v7; // edi
  float *v8; // edx

  v3 = 0;
  v4 = 1;
  if ( a2 - 1 >= 4 )
  {
    v5 = 0;
    v6 = (float *)(a1 + 28);
    do
    {
      if ( *(float *)&v5[a1 + 8] * a3[2] + *(float *)&v5[a1 + 4] * a3[1] + *a3 * *(float *)&v5[a1] < *(v6 - 4) * *a3 + *(v6 - 3) * a3[1] + *(v6 - 2) * a3[2] )
      {
        v3 = v4;
        v5 = (char *)v6 - 16 - a1;
      }
      if ( *(float *)&v5[a1 + 8] * a3[2] + *(float *)&v5[a1 + 4] * a3[1] + *a3 * *(float *)&v5[a1] < *(v6 - 1) * *a3 + v6[1] * a3[2] + *v6 * a3[1] )
      {
        v3 = v4 + 1;
        v5 = (char *)v6 - 4 - a1;
      }
      if ( *(float *)&v5[a1 + 8] * a3[2] + *(float *)&v5[a1 + 4] * a3[1] + *a3 * *(float *)&v5[a1] < v6[2] * *a3 + v6[3] * a3[1] + v6[4] * a3[2] )
      {
        v3 = v4 + 2;
        v5 = (char *)v6 + 8 - a1;
      }
      if ( *(float *)&v5[a1 + 8] * a3[2] + *(float *)&v5[a1 + 4] * a3[1] + *a3 * *(float *)&v5[a1] < v6[5] * *a3 + v6[6] * a3[1] + v6[7] * a3[2] )
      {
        v3 = v4 + 3;
        v5 = (char *)v6 + 20 - a1;
      }
      v4 += 4;
      v6 += 12;
    }
    while ( v4 < a2 - 3 );
  }
  if ( v4 < a2 )
  {
    v7 = 12 * v3;
    v8 = (float *)(a1 + 12 * v4 + 4);
    do
    {
      if ( *(float *)(v7 + a1 + 8) * a3[2] + *(float *)(v7 + a1 + 4) * a3[1] + *a3 * *(float *)(v7 + a1) < v8[1] * a3[2] + *(v8 - 1) * *a3 + *v8 * a3[1] )
      {
        v3 = v4;
        v7 = (int)v8 - 4 - a1;
      }
      ++v4;
      v8 += 3;
    }
    while ( v4 < a2 );
  }
  return v3;
}
