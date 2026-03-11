/*
 * func-name: sub_1001B6D0
 * func-address: 0x1001b6d0
 * callers: 0x1001e860
 * callees: none
 */

int __cdecl sub_1001B6D0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  if ( a1 )
  {
    *a1 = *a2;
    std::string::string(a1 + 1, a2 + 1);
    a1[8] = a2[8];
    result = a2[9];
    a1[9] = result;
  }
  return result;
}
