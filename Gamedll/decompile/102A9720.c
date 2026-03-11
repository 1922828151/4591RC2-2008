/*
 * func-name: sub_102A9720
 * func-address: 0x102a9720
 * callers: 0x100192d6
 * callees: none
 */

void __cdecl sub_102A9720(_DWORD *a1, int a2, _DWORD *a3)
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
