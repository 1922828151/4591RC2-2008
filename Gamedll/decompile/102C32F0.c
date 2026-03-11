/*
 * func-name: sub_102C32F0
 * func-address: 0x102c32f0
 * callers: 0x102c4d70, 0x102c5120, 0x102c53a0
 * callees: none
 */

int __cdecl sub_102C32F0(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edi

  v3 = a2;
  if ( a1 == a2 )
    return a3;
  v4 = a3;
  do
  {
    v3 -= 64;
    v4 -= 64;
    std::string::operator=(v4, v3);
    *(_DWORD *)(v4 + 28) = *(_DWORD *)(v3 + 28);
    *(_DWORD *)(v4 + 32) = *(_DWORD *)(v3 + 32);
    std::string::operator=(v4 + 36, v3 + 36);
  }
  while ( v3 != a1 );
  return v4;
}
