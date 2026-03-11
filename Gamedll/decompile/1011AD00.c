/*
 * func-name: sub_1011AD00
 * func-address: 0x1011ad00
 * callers: 0x1000b933
 * callees: 0x100129d6
 */

int __stdcall sub_1011AD00(char *a1, char *a2)
{
  char *i; // esi
  int result; // eax
  int v4; // [esp+0h] [ebp-8h]
  int v5; // [esp+4h] [ebp-4h]

  for ( i = a1; i != a2; i += 936 )
    result = sub_100129D6(v4, v5);
  return result;
}
