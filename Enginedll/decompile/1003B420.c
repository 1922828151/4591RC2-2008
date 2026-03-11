/*
 * func-name: sub_1003B420
 * func-address: 0x1003b420
 * callers: 0x1003b620
 * callees: none
 */

int __cdecl sub_1003B420(int a1, int a2)
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
