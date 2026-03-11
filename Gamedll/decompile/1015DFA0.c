/*
 * func-name: sub_1015DFA0
 * func-address: 0x1015dfa0
 * callers: 0x1000c8e7
 * callees: none
 */

int __cdecl sub_1015DFA0(int a1, int a2, int a3)
{
  int v3; // ebx
  int v4; // esi
  int result; // eax

  v3 = a1;
  if ( a1 != a2 )
  {
    v4 = a1 + 84;
    do
    {
      std::string::operator=(v3, a3);
      std::string::operator=(v4 - 56, a3 + 28);
      std::string::operator=(v4 - 28, a3 + 56);
      std::string::operator=(v4, a3 + 84);
      std::string::operator=(v4 + 28, a3 + 112);
      result = *(_DWORD *)(a3 + 140);
      *(_DWORD *)(v4 + 56) = result;
      *(_DWORD *)(v4 + 60) = *(_DWORD *)(a3 + 144);
      v3 += 148;
      v4 += 148;
    }
    while ( v3 != a2 );
  }
  return result;
}
