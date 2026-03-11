/*
 * func-name: sub_10004610
 * func-address: 0x10004610
 * callers: 0x10023900, 0x1002f680
 * callees: none
 */

void __cdecl sub_10004610(float *a1, float *a2, int a3, float *a4)
{
  int v4; // edi
  float *v5; // ecx

  v4 = a3;
  if ( a3 )
  {
    v5 = a4;
    if ( a4 )
    {
      *a2 = -3.4028235e38;
      a2[1] = -3.4028235e38;
      a2[2] = -3.4028235e38;
      *a1 = 3.4028235e38;
      a1[1] = 3.4028235e38;
      a1[2] = 3.4028235e38;
      do
      {
        --v4;
        if ( *a2 < (double)*v5 )
          *a2 = *v5;
        if ( *a1 > (double)*v5 )
          *a1 = *v5;
        if ( a2[1] < (double)v5[1] )
          a2[1] = v5[1];
        if ( a1[1] > (double)v5[1] )
          a1[1] = v5[1];
        if ( a2[2] < (double)v5[2] )
          a2[2] = v5[2];
        if ( a1[2] > (double)v5[2] )
          a1[2] = v5[2];
        v5 += 3;
      }
      while ( v4 );
    }
  }
}
