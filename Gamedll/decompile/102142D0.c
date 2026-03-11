/*
 * func-name: sub_102142D0
 * func-address: 0x102142d0
 * callers: 0x10009b60
 * callees: 0x1000c252
 */

int __cdecl sub_102142D0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *i; // esi
  int result; // eax

  for ( i = a1; i != a2; i += 20 )
  {
    *i = *a3;
    i[1] = a3[1];
    std::string::operator=(i + 2, a3 + 2);
    i[9] = a3[9];
    i[10] = a3[10];
    i[11] = a3[11];
    sub_1000C252((int)(a3 + 12));
    result = sub_1000C252((int)(a3 + 16));
  }
  return result;
}
