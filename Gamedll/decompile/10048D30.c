/*
 * func-name: sub_10048D30
 * func-address: 0x10048d30
 * callers: 0x1000aee3
 * callees: none
 */

int __cdecl sub_10048D30(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  if ( a1 )
  {
    *a1 = *a2;
    std::string::string(a1 + 1, a2 + 1);
    a1[8] = a2[8];
  }
  return result;
}
