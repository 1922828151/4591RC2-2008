/*
 * func-name: sub_100F5D20
 * func-address: 0x100f5d20
 * callers: 0x100f5f70
 * callees: none
 */

void __cdecl sub_100F5D20(float *a1, int a2, float *a3)
{
  int v3; // ebx
  float *v4; // edx
  float *v5; // eax

  v3 = a2;
  if ( a2 )
  {
    v4 = a1;
    v5 = a1 + 6;
    do
    {
      if ( v4 )
      {
        *v4 = 0.0;
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
        qmemcpy(v4, a3, 0x40u);
        v5[10] = a3[16];
      }
      --v3;
      v4 += 17;
      v5 += 17;
    }
    while ( v3 );
  }
}
