/*
 * func-name: sub_100CFA20
 * func-address: 0x100cfa20
 * callers: 0x1000fabf
 * callees: 0x100089c7
 */

int __cdecl sub_100CFA20(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 184;
    v4 -= 184;
    sub_100089C7(v3);
  }
  while ( v3 != a1 );
  return v4;
}
