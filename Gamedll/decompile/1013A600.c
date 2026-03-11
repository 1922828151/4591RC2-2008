/*
 * func-name: sub_1013A600
 * func-address: 0x1013a600
 * callers: 0x1000a5c4
 * callees: none
 */

void __cdecl sub_1013A600(_DWORD *a1, int a2, _DWORD *a3)
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
