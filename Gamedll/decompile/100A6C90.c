/*
 * func-name: sub_100A6C90
 * func-address: 0x100a6c90
 * callers: 0x1000ebc9
 * callees: 0x1000d5c1
 */

int __cdecl sub_100A6C90(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_1000D5C1(v3);
    sub_1000D5C1(v3 + 16);
    v3 += 32;
    v4 += 32;
  }
  while ( v3 != a2 );
  return v4;
}
