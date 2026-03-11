/*
 * func-name: sub_10075D00
 * func-address: 0x10075d00
 * callers: 0x10075ef0
 * callees: 0x10070f20
 */

int __cdecl sub_10075D00(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    sub_10070F20(v4, v3);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v3 + 16);
    v3 += 20;
    v4 += 20;
  }
  while ( v3 != a2 );
  return v4;
}
