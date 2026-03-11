/*
 * func-name: sub_100DBF30
 * func-address: 0x100dbf30
 * callers: 0x10017846
 * callees: none
 */

int __cdecl sub_100DBF30(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 120;
    v4 -= 120;
    std::string::operator=(v4, v3);
    std::string::operator=(v4 + 28, v3 + 28);
    std::string::operator=(v4 + 56, v3 + 56);
    std::string::operator=(v4 + 84, v3 + 84);
    *(_DWORD *)(v4 + 112) = *(_DWORD *)(v3 + 112);
    *(_DWORD *)(v4 + 116) = *(_DWORD *)(v3 + 116);
  }
  while ( v3 != a1 );
  return v4;
}
