/*
 * func-name: sub_100A4320
 * func-address: 0x100a4320
 * callers: 0x1000df44
 * callees: 0x1000b767, 0x1000bfe6, 0x102c9d86
 */

int __cdecl sub_100A4320(char *a1, char *a2, int a3)
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
      sub_1000BFE6(a1);
    v3 += 64;
    LOBYTE(v7) = 0;
    a1 += 64;
  }
  return v3;
}
