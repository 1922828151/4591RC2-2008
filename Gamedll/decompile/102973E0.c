/*
 * func-name: sub_102973E0
 * func-address: 0x102973e0
 * callers: 0x10019745
 * callees: none
 */

_DWORD *__cdecl sub_102973E0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 19;
    v4 -= 19;
    std::wstring::operator=(v4, v3);
    std::wstring::operator=(v4 + 7, v3 + 7);
    v4[14] = v3[14];
    v4[15] = v3[15];
    v4[16] = v3[16];
    v4[17] = v3[17];
    v4[18] = v3[18];
  }
  while ( v3 != a1 );
  return v4;
}
