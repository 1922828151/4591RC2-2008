/*
 * func-name: sub_1013FED0
 * func-address: 0x1013fed0
 * callers: 0x1000f4bb
 * callees: none
 */

int __cdecl sub_1013FED0(void *a1, void *a2)
{
  int result; // eax

  if ( a1 )
  {
    std::string::string(a1, a2);
    *((float *)a1 + 7) = *((float *)a2 + 7);
    *((float *)a1 + 8) = *((float *)a2 + 8);
    *((_DWORD *)a1 + 9) = *((_DWORD *)a2 + 9);
    *((_DWORD *)a1 + 10) = *((_DWORD *)a2 + 10);
    *((_DWORD *)a1 + 11) = *((_DWORD *)a2 + 11);
    result = *((_DWORD *)a2 + 12);
    *((_DWORD *)a1 + 12) = result;
  }
  return result;
}
