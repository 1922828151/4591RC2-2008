/*
 * func-name: sub_1029A300
 * func-address: 0x1029a300
 * callers: 0x1000f38f
 * callees: 0x10015910
 */

int __stdcall sub_1029A300(char *a1, char *a2)
{
  char *i; // esi
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  for ( i = a1; i != a2; i += 128 )
    result = sub_10015910(v4, v5);
  return result;
}
