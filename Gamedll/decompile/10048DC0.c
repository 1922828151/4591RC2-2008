/*
 * func-name: sub_10048DC0
 * func-address: 0x10048dc0
 * callers: 0x10006c3a
 * callees: none
 */

int __cdecl sub_10048DC0(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  if ( a1 )
  {
    *a1 = *a2;
    a1[1] = a2[1];
    std::string::string(a1 + 2, a2 + 2);
    result = a2[9];
    a1[9] = result;
  }
  return result;
}
