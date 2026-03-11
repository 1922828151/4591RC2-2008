/*
 * func-name: sub_100F6D60
 * func-address: 0x100f6d60
 * callers: 0x1000341d
 * callees: none
 */

int __cdecl sub_100F6D60(void *a1, void *a2)
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
