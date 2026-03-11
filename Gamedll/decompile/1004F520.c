/*
 * func-name: sub_1004F520
 * func-address: 0x1004f520
 * callers: 0x10019dda
 * callees: 0x1000b53c, 0x10016b58, 0x102c9d86
 */

int __cdecl sub_1004F520(char *a1, char *a2, int a3)
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
      sub_1000B53C(a1);
    v3 += 120;
    LOBYTE(v7) = 0;
    a1 += 120;
  }
  return v3;
}
