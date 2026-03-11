/*
 * func-name: sub_1001CA30
 * func-address: 0x1001ca30
 * callers: 0x1001ec50, 0x10126ca0
 * callees: none
 */

int __cdecl sub_1001CA30(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a1;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    std::string::operator=(v4, v3);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v3 + 28);
    v3 += 32;
    v4 += 32;
  }
  while ( v3 != a2 );
  return v4;
}
