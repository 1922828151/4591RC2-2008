/*
 * func-name: sub_10056D10
 * func-address: 0x10056d10
 * callers: 0x10013da9
 * callees: 0x10016b58
 */

int __stdcall sub_10056D10(char *a1, char *a2)
{
  char *i; // esi
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  for ( i = a1; i != a2; i += 120 )
    result = sub_10016B58(v4, v5);
  return result;
}
