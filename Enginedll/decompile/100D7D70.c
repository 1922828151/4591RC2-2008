/*
 * func-name: sub_100D7D70
 * func-address: 0x100d7d70
 * callers: 0x100d8a50
 * callees: none
 */

int __cdecl sub_100D7D70(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 36;
    v4 -= 36;
    std::wstring::operator=(v4, v3);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v3 + 28);
    *(_BYTE *)(v4 + 32) = *(_BYTE *)(v3 + 32);
  }
  while ( v3 != a1 );
  return v4;
}
