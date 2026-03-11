/*
 * func-name: sub_100A6CE0
 * func-address: 0x100a6ce0
 * callers: 0x10005f4c
 * callees: 0x1000b613, 0x10017765, 0x102c9d86
 */

int __cdecl sub_100A6CE0(int a1, int a2, int a3)
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
    {
      sub_1000B613(a1);
      LOBYTE(v7) = 2;
      sub_1000B613(a1 + 16);
    }
    v3 += 32;
    LOBYTE(v7) = 0;
    a1 += 32;
  }
  return v3;
}
