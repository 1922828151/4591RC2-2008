/*
 * func-name: sub_10118F50
 * func-address: 0x10118f50
 * callers: 0x10005a79
 * callees: 0x100129d6, 0x10016531, 0x102c9d86
 */

char *__cdecl sub_10118F50(char *a1, char *a2, char *a3)
{
  char *v3; // edi
  int v6; // [esp+0h] [ebp-24h] BYREF
  void *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = a3;
  v7 = a3;
  v9 = 0;
  while ( a1 != a2 )
  {
    sub_10016531(v3, a1);
    v3 += 936;
    a1 += 936;
  }
  return v3;
}
