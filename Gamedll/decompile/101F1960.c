/*
 * func-name: sub_101F1960
 * func-address: 0x101f1960
 * callers: 0x1000eb06
 * callees: 0x1000c252
 */

_DWORD *__cdecl sub_101F1960(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    *v4 = *v3;
    v4[1] = v3[1];
    std::string::operator=(v4 + 2, v3 + 2);
    v4[9] = v3[9];
    v4[10] = v3[10];
    v4[11] = v3[11];
    sub_1000C252((int)(v3 + 12));
    sub_1000C252((int)(v3 + 16));
    v3 += 20;
    v4 += 20;
  }
  while ( v3 != a2 );
  return v4;
}
