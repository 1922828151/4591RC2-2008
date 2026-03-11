/*
 * func-name: sub_1006ECD0
 * func-address: 0x1006ecd0
 * callers: 0x100198d5
 * callees: none
 */

void __cdecl sub_1006ECD0(_DWORD *a1, _DWORD *a2)
{
  if ( a1 )
  {
    *a1 = *a2;
    std::string::string(a1 + 1, a2 + 1);
  }
}
