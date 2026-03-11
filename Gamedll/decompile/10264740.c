/*
 * func-name: sub_10264740
 * func-address: 0x10264740
 * callers: 0x10016720
 * callees: 0x10004eee, 0x102c9d86
 */

int __cdecl sub_10264740(void *a1, int a2, int a3)
{
  int v3; // edi
  int result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  void *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = (int)a1;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    result = sub_10004EEE(v3, a3);
    --a2;
    v3 += 44;
  }
  return result;
}
