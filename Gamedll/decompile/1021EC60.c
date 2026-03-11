/*
 * func-name: sub_1021EC60
 * func-address: 0x1021ec60
 * callers: 0x100144cf
 * callees: none
 */

void __cdecl sub_1021EC60(_DWORD *a1, int a2, _DWORD *a3)
{
  int i; // ecx

  for ( i = a2; i; ++a1 )
  {
    if ( a1 )
      *a1 = *a3;
    --i;
  }
}
