/*
 * func-name: sub_10061900
 * func-address: 0x10061900
 * callers: 0x10061bb0, 0x100628e0
 * callees: none
 */

void __cdecl sub_10061900(_WORD *a1, int a2, _WORD *a3)
{
  int i; // ecx

  for ( i = a2; i; ++a1 )
  {
    if ( a1 )
      *a1 = *a3;
    --i;
  }
}
