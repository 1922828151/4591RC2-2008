/*
 * func-name: sub_1021F330
 * func-address: 0x1021f330
 * callers: 0x1000ddb9
 * callees: none
 */

int __cdecl sub_1021F330(int a1, int a2, int a3)
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
