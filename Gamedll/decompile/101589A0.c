/*
 * func-name: sub_101589A0
 * func-address: 0x101589a0
 * callers: 0x10005cb3
 * callees: none
 */

void __cdecl sub_101589A0(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 5 )
  {
    if ( a1 )
    {
      *a1 = *a3;
      a1[1] = a3[1];
      a1[2] = a3[2];
      a1[3] = a3[3];
      a1[4] = a3[4];
    }
    --i;
  }
}
