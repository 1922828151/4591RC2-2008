/*
 * func-name: sub_1006EB50
 * func-address: 0x1006eb50
 * callers: 0x1000c4aa
 * callees: none
 */

void __cdecl sub_1006EB50(_DWORD *a1, _DWORD *a2)
{
  if ( a1 )
  {
    *a1 = *a2;
    std::string::string(a1 + 1, a2 + 1);
  }
}
