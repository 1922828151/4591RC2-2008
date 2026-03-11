/*
 * func-name: sub_10126870
 * func-address: 0x10126870
 * callers: 0x10127420
 * callees: none
 */

char __cdecl sub_10126870(_BYTE *a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *i; // esi
  char result; // al

  for ( i = a1; i != a2; i += 60 )
  {
    std::string::operator=(i, a3);
    std::string::operator=(i + 28, a3 + 28);
    result = a3[56];
    i[56] = result;
    i[57] = a3[57];
    i[58] = a3[58];
  }
  return result;
}
