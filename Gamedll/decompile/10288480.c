/*
 * func-name: sub_10288480
 * func-address: 0x10288480
 * callers: 0x1000e34f
 * callees: none
 */

void __cdecl sub_10288480(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 4 )
  {
    if ( a1 )
    {
      *a1 = *a3;
      a1[1] = a3[1];
      a1[2] = a3[2];
      a1[3] = a3[3];
    }
    --i;
  }
}
