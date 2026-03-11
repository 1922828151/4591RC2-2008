/*
 * func-name: sub_101121B0
 * func-address: 0x101121b0
 * callers: 0x101154d0
 * callees: 0x10011510
 */

int __cdecl sub_101121B0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_10011510(v4, v3);
    sub_10011510(v4 + 16, v3 + 16);
    v3 += 32;
    v4 += 32;
  }
  while ( v3 != a2 );
  return v4;
}
