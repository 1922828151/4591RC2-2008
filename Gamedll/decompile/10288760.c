/*
 * func-name: sub_10288760
 * func-address: 0x10288760
 * callers: 0x10015ae6
 * callees: 0x100031cf
 */

int __cdecl sub_10288760(int a1, int a2)
{
  int result; // eax
  int i; // esi
  int v4; // eax

  result = ((a2 - a1) >> 2) - ((a2 - a1) >> 31);
  for ( i = ((a2 - a1) >> 2) / 2; i > 0; result = sub_100031CF(a1, i, (a2 - a1) >> 2, v4) )
    v4 = *(_DWORD *)(a1 + 4 * i-- - 4);
  return result;
}
