/*
 * func-name: sub_101174D0
 * func-address: 0x101174d0
 * callers: 0x100087d8
 * callees: none
 */

int __cdecl sub_101174D0(void *a1, void *a2)
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
