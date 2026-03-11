/*
 * func-name: sub_100F8190
 * func-address: 0x100f8190
 * callers: 0x10010f78
 * callees: none
 */

void __cdecl sub_100F8190(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; a1 += 2 )
  {
    if ( a1 )
    {
      *a1 = *a3;
      a1[1] = a3[1];
    }
    --i;
  }
}
