/*
 * func-name: sub_10205D30
 * func-address: 0x10205d30
 * callers: 0x1000b0dc
 * callees: 0x10016cf2
 */

int __stdcall sub_10205D30(int a1, int a2)
{
  int i; // esi
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  for ( i = a1; i != a2; i += 128 )
    result = sub_10016CF2(v4, v5);
  return result;
}
