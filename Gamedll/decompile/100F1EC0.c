/*
 * func-name: sub_100F1EC0
 * func-address: 0x100f1ec0
 * callers: 0x1000b27b
 * callees: none
 */

int __cdecl sub_100F1EC0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 64;
    v4 -= 64;
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
    *(_BYTE *)(v4 + 56) = *(_BYTE *)(v3 + 56);
    *(_DWORD *)(v4 + 60) = *(_DWORD *)(v3 + 60);
  }
  while ( v3 != a1 );
  return v4;
}
