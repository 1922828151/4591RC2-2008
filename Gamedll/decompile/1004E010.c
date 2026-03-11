/*
 * func-name: sub_1004E010
 * func-address: 0x1004e010
 * callers: 0x10016a04
 * callees: none
 */

void __cdecl sub_1004E010(_DWORD *a1, int a2, _DWORD *a3)
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
