/*
 * func-name: sub_102643F0
 * func-address: 0x102643f0
 * callers: 0x1000ee26
 * callees: 0x10004eee, 0x102c9d86
 */

int __cdecl sub_102643F0(int a1, int a2, void *a3)
{
  int v3; // edi
  int v6; // [esp+0h] [ebp-24h] BYREF
  void *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v8 = &v6;
  v3 = (int)a3;
  v7 = a3;
  v9 = 0;
  while ( a1 != a2 )
  {
    sub_10004EEE(v3, a1);
    v3 += 44;
    a1 += 44;
  }
  return v3;
}
