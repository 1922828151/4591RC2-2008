/*
 * func-name: sub_10139B10
 * func-address: 0x10139b10
 * callers: 0x10016572
 * callees: none
 */

int __cdecl sub_10139B10(void *a1, void *a2)
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
