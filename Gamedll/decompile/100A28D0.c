/*
 * func-name: sub_100A28D0
 * func-address: 0x100a28d0
 * callers: 0x10018b29
 * callees: none
 */

int __cdecl sub_100A28D0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
    *(_BYTE *)(v4 + 56) = *(_BYTE *)(v3 + 56);
    *(_DWORD *)(v4 + 60) = *(_DWORD *)(v3 + 60);
    v3 += 64;
    v4 += 64;
  }
  while ( v3 != a2 );
  return v4;
}
