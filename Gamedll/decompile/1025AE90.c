/*
 * func-name: sub_1025AE90
 * func-address: 0x1025ae90
 * callers: 0x1000d82d
 * callees: 0x10001fc8, 0x10013b42, 0x102c9d86
 */

int __cdecl sub_1025AE90(int a1, int a2, int a3)
{
  int v3; // esi
  _DWORD v6[7]; // [esp+0h] [ebp-28h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  v6[6] = v6;
  v3 = a3;
  v6[5] = a3;
  v7 = 0;
  while ( a1 != a2 )
  {
    v6[4] = v3;
    LOBYTE(v7) = 1;
    if ( v3 )
      sub_10001FC8(a1);
    v3 += 80;
    LOBYTE(v7) = 0;
    a1 += 80;
  }
  return v3;
}
