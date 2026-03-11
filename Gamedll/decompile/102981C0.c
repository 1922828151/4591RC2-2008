/*
 * func-name: sub_102981C0
 * func-address: 0x102981c0
 * callers: 0x10015fc3
 * callees: 0x1000464c, 0x1000fd3f, 0x102c9d86
 */

int __cdecl sub_102981C0(int a1, int a2, int a3)
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
      sub_1000FD3F(a1);
    v3 += 76;
    LOBYTE(v7) = 0;
    a1 += 76;
  }
  return v3;
}
