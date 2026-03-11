/*
 * func-name: sub_100CE620
 * func-address: 0x100ce620
 * callers: 0x100cea50
 * callees: none
 */

_DWORD *__cdecl sub_100CE620(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  _DWORD *v4; // edi
  int v5; // eax

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v5 = *(v3 - 11);
    v3 -= 11;
    v4 -= 11;
    *v4 = v5;
    v4[1] = v3[1];
    v4[2] = v3[2];
    std::wstring::operator=(v4 + 3, v3 + 3);
    v4[10] = v3[10];
  }
  while ( v3 != a1 );
  return v4;
}
