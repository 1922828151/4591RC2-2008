/*
 * func-name: sub_1025EE80
 * func-address: 0x1025ee80
 * callers: 0x1000b94c
 * callees: none
 */

void __cdecl sub_1025EE80(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; ++a1 )
  {
    if ( a1 )
      *a1 = *a3;
    --i;
  }
}
