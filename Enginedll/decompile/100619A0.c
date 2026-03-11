/*
 * func-name: sub_100619A0
 * func-address: 0x100619a0
 * callers: 0x10062030
 * callees: none
 */

int __cdecl sub_100619A0(int a1, int a2, int a3)
{
  int v3; // ecx
  int result; // eax
  __int16 v5; // di

  v3 = a2;
  for ( result = a3 - 2 * ((a2 - a1) >> 1); v3 != a1; *(_WORD *)(a3 - a2 + v3) = v5 )
  {
    v5 = *(_WORD *)(v3 - 2);
    v3 -= 2;
  }
  return result;
}
