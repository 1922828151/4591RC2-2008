/*
 * func-name: sub_10203980
 * func-address: 0x10203980
 * callers: 0x10019e5c
 * callees: 0x10011fc2
 */

int __cdecl sub_10203980(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_10011FC2(v3);
    v3 += 128;
    v4 += 128;
  }
  while ( v3 != a2 );
  return v4;
}
