/*
 * func-name: sub_10031D80
 * func-address: 0x10031d80
 * callers: 0x10032420
 * callees: none
 */

void __cdecl sub_10031D80(_DWORD *a1, int a2, _DWORD *a3)
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
