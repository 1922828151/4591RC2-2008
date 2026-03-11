/*
 * func-name: sub_102165C0
 * func-address: 0x102165c0
 * callers: 0x100169a0
 * callees: 0x1000186b, 0x10011e37, 0x102c9d86
 */

int __cdecl sub_102165C0(int a1, int a2, int a3)
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
      sub_10011E37(a1);
    v3 += 84;
    LOBYTE(v7) = 0;
    a1 += 84;
  }
  return v3;
}
