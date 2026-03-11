/*
 * func-name: sub_100481F0
 * func-address: 0x100481f0
 * callers: 0x10019d76
 * callees: none
 */

int __cdecl sub_100481F0(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // ebp
  int v5; // esi
  int v6; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  v5 = a3 + 84;
  v6 = a1 + 84;
  do
  {
    std::string::operator=(v4, v3);
    std::string::operator=(v5 - 56, v6 - 56);
    std::string::operator=(v5 - 28, v6 - 28);
    std::string::operator=(v5, v6);
    std::string::operator=(v5 + 28, v6 + 28);
    *(_DWORD *)(v5 + 56) = *(_DWORD *)(v6 + 56);
    *(_DWORD *)(v5 + 60) = *(_DWORD *)(v6 + 60);
    v3 += 148;
    v4 += 148;
    v5 += 148;
    v6 += 148;
  }
  while ( v3 != a2 );
  return v4;
}
