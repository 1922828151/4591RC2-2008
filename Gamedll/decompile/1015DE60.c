/*
 * func-name: sub_1015DE60
 * func-address: 0x1015de60
 * callers: 0x10001b68
 * callees: none
 */

int __cdecl sub_1015DE60(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // edi
  int v6; // esi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  v5 = a3 + 84;
  v6 = a2 + 84;
  do
  {
    v3 -= 148;
    v4 -= 148;
    v6 -= 148;
    v5 -= 148;
    std::string::operator=(v4, v3);
    std::string::operator=(v5 - 56, v6 - 56);
    std::string::operator=(v5 - 28, v6 - 28);
    std::string::operator=(v5, v6);
    std::string::operator=(v5 + 28, v6 + 28);
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v5 + 60) = *(_DWORD *)(v6 + 60);
  }
  while ( v3 != a1 );
  return v4;
}
