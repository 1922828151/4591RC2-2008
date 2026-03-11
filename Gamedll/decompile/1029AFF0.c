/*
 * func-name: sub_1029AFF0
 * func-address: 0x1029aff0
 * callers: 0x1001289b
 * callees: 0x100152a3
 */

int __cdecl sub_1029AFF0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 60;
    v4 -= 60;
    std::wstring::operator=(v4, v3);
    *(_BYTE *)(v4 + 28) = *(_BYTE *)(v3 + 28);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(v3 + 36);
    *(_DWORD *)(v4 + 40) = *(_DWORD *)(v3 + 40);
    sub_100152A3(v3 + 44);
  }
  while ( v3 != a1 );
  return v4;
}
