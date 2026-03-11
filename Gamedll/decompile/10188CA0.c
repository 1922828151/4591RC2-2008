/*
 * func-name: sub_10188CA0
 * func-address: 0x10188ca0
 * callers: 0x10004f34
 * callees: 0x100129d6, 0x10016531, 0x102c9d86
 */

int __cdecl sub_10188CA0(char *a1, int a2, void *a3)
{
  char *v3; // edi
  int result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  void *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = a1;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    result = sub_10016531(v3, a3);
    --a2;
    v3 += 936;
  }
  return result;
}
