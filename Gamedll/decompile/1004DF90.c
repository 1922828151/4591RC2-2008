/*
 * func-name: sub_1004DF90
 * func-address: 0x1004df90
 * callers: 0x1000ea89
 * callees: none
 */

void __cdecl sub_1004DF90(_DWORD *a1, int a2, _DWORD *a3)
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
