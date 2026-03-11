/*
 * func-name: sub_1025F1E0
 * func-address: 0x1025f1e0
 * callers: 0x10001a37
 * callees: none
 */

int __cdecl sub_1025F1E0(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // edi

  v3 = a2;
  for ( result = a3 - 4 * ((a2 - a1) >> 2); v3 != a1; *(_DWORD *)(a3 - a2 + v3) = v5 )
  {
    v5 = *(_DWORD *)(v3 - 4);
    v3 -= 4;
  }
  return result;
}
