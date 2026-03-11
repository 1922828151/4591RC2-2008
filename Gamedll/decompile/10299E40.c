/*
 * func-name: sub_10299E40
 * func-address: 0x10299e40
 * callers: 0x1000a402
 * callees: 0x1000a31c, 0x10015910, 0x102c9d86
 */

int __cdecl sub_10299E40(int a1, int a2, int a3)
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
      sub_1000A31C(a1);
    v3 += 128;
    LOBYTE(v7) = 0;
    a1 += 128;
  }
  return v3;
}
