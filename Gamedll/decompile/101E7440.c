/*
 * func-name: sub_101E7440
 * func-address: 0x101e7440
 * callers: 0x1000c860
 * callees: none
 */

void __cdecl sub_101E7440(_DWORD *a1, _DWORD *a2)
{
  if ( a1 )
  {
    *a1 = *a2;
    std::string::string(a1 + 1, a2 + 1);
  }
}
