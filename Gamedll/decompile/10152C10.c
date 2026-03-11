/*
 * func-name: sub_10152C10
 * func-address: 0x10152c10
 * callers: 0x10004c6e
 * callees: none
 */

void __cdecl sub_10152C10(_DWORD *a1, _DWORD *a2)
{
  if ( a1 )
  {
    *a1 = *a2;
    std::string::string(a1 + 1, a2 + 1);
  }
}
