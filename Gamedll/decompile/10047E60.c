/*
 * func-name: sub_10047E60
 * func-address: 0x10047e60
 * callers: 0x100055ab
 * callees: none
 */

int __cdecl sub_10047E60(void *a1, void *a2)
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
