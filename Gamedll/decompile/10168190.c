/*
 * func-name: sub_10168190
 * func-address: 0x10168190
 * callers: 0x10002e91
 * callees: none
 */

void __cdecl sub_10168190(_DWORD *a1, int a2, _DWORD *a3)
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
