/*
 * func-name: sub_10005820
 * func-address: 0x10005820
 * callers: 0x10001ba0
 * callees: none
 */

int __cdecl sub_10005820(int a1, int a2, int a3)
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
