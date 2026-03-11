/*
 * func-name: sub_10012D70
 * func-address: 0x10012d70
 * callers: 0x100135b0
 * callees: 0x10011510
 */

int __cdecl sub_10012D70(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 84;
    v4 -= 84;
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
    *(_DWORD *)(v4 + 56) = *(_DWORD *)(v3 + 56);
    *(_DWORD *)(v4 + 60) = *(_DWORD *)(v3 + 60);
    sub_10011510(v4 + 64, v3 + 64);
    *(_BYTE *)(v4 + 80) = *(_BYTE *)(v3 + 80);
  }
  while ( v3 != a1 );
  return v4;
}
