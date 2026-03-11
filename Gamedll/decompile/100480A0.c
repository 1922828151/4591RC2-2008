/*
 * func-name: sub_100480A0
 * func-address: 0x100480a0
 * callers: 0x1000bdd4
 * callees: none
 */

int __cdecl sub_100480A0(int a1, int a2, int a3)
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
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v3 + 28);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    std::string::operator=(v4 + 36, v3 + 36);
    v3 += 64;
    v4 += 64;
  }
  while ( v3 != a2 );
  return v4;
}
