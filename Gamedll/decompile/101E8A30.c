/*
 * func-name: sub_101E8A30
 * func-address: 0x101e8a30
 * callers: 0x100073dd
 * callees: none
 */

int __cdecl sub_101E8A30(int a1, int a2, int a3)
{
  int i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 28 )
    result = std::wstring::operator=(i, a3);
  return result;
}
