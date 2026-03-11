/*
 * func-name: sub_100D4100
 * func-address: 0x100d4100
 * callers: 0x100d4820
 * callees: 0x10070f20
 */

int __cdecl sub_100D4100(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 20;
    v4 -= 20;
    sub_10070F20(v4, v3);
    *(_DWORD *)(v4 + 16) = *(_DWORD *)(v3 + 16);
  }
  while ( v3 != a1 );
  return v4;
}
