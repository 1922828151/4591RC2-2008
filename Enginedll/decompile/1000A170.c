/*
 * func-name: sub_1000A170
 * func-address: 0x1000a170
 * callers: 0x10006780, 0x1000b840, 0x10028930
 * callees: none
 */

int __cdecl sub_1000A170(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *(_DWORD *)v4 = *(_DWORD *)v3;
    std::string::operator=(v4 + 4, v3 + 4);
    std::string::operator=(v4 + 32, v3 + 32);
    std::string::operator=(v4 + 60, v3 + 60);
    *(_DWORD *)(v4 + 88) = *(_DWORD *)(v3 + 88);
    *(_BYTE *)(v4 + 92) = *(_BYTE *)(v3 + 92);
    *(_BYTE *)(v4 + 93) = *(_BYTE *)(v3 + 93);
    v3 += 96;
    v4 += 96;
  }
  while ( v3 != a2 );
  return v4;
}
