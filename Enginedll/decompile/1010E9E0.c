/*
 * func-name: sub_1010E9E0
 * func-address: 0x1010e9e0
 * callers: 0x1010f710
 * callees: none
 */

int __cdecl sub_1010E9E0(int a1, int a2)
{
  int result; // eax

  if ( a1 )
  {
    std::string::string(a1, a2);
    result = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a1 + 28) = result;
  }
  return result;
}
