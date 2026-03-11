/*
 * func-name: sub_10139B90
 * func-address: 0x10139b90
 * callers: 0x1000a123
 * callees: none
 */

int __cdecl sub_10139B90(void *a1, void *a2)
{
  int result; // eax

  if ( a1 )
  {
    std::string::string(a1, a2);
    result = *((_DWORD *)a2 + 7);
    *((_DWORD *)a1 + 7) = result;
  }
  return result;
}
