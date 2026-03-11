/*
 * func-name: sub_1017A970
 * func-address: 0x1017a970
 * callers: 0x10001cf0
 * callees: none
 */

int __cdecl sub_1017A970(int a1, int a2, int a3)
{
  int v3; // esi
  int result; // eax
  int v5; // eax

  v3 = std::string::find(a1, a2, 0);
  result = std::string::npos;
  if ( v3 != std::string::npos )
  {
    do
    {
      v5 = std::string::length(a2);
      std::string::replace(a1, v3, v5, a3);
      result = std::string::find(a1, a2, 0);
      v3 = result;
    }
    while ( result != std::string::npos );
  }
  return result;
}
