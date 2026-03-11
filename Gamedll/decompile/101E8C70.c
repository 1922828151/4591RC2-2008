/*
 * func-name: sub_101E8C70
 * func-address: 0x101e8c70
 * callers: 0x100072ca
 * callees: none
 */

int __cdecl sub_101E8C70(int a1, int a2, int a3)
{
  int i; // esi

  for ( i = a2; i != a1; std::wstring::swap(i + a3 - a2, i) )
    i -= 28;
  return a3 - 28 * ((a2 - a1) / 28);
}
