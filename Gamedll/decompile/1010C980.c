/*
 * func-name: sub_1010C980
 * func-address: 0x1010c980
 * callers: 0x1000cea5
 * callees: 0x10003bed
 */

int __stdcall sub_1010C980(char *a1, char *a2)
{
  char *i; // esi
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  for ( i = a1; i != a2; i += 84 )
    result = sub_10003BED(v4, v5);
  return result;
}
