/*
 * func-name: sub_1001E7F0
 * func-address: 0x1001e7f0
 * callers: 0x10020d90
 * callees: none
 */

int __cdecl sub_1001E7F0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  if ( a1 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    std::string::string(a1 + 2, a2 + 2);
    result = a2[9];
    a1[9] = result;
    a1[10] = a2[10];
  }
  return result;
}
