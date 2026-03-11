/*
 * func-name: sub_100F6CD0
 * func-address: 0x100f6cd0
 * callers: 0x10015f0a
 * callees: none
 */

int __cdecl sub_100F6CD0(void *a1, void *a2)
{
  int result; // eax

  if ( a1 )
  {
    std::string::string(a1, a2);
    *((_DWORD *)a1 + 7) = *((_DWORD *)a2 + 7);
    *((_DWORD *)a1 + 8) = *((_DWORD *)a2 + 8);
    result = *((_DWORD *)a2 + 9);
    *((_DWORD *)a1 + 9) = result;
  }
  return result;
}
