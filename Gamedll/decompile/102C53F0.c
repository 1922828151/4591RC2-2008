/*
 * func-name: sub_102C53F0
 * func-address: 0x102c53f0
 * callers: 0x102c56c0, 0x102c5860, 0x102c6a50
 * callees: 0x100019d3, 0x100068c5, 0x102c9d86
 */

int __cdecl sub_102C53F0(int a1, int a2, void *a3)
{
  int v3; // esi
  int result; // eax
  _DWORD v6[7]; // [esp+0h] [ebp-28h] BYREF
  int v7; // [esp+24h] [ebp-4h]

  v6[6] = v6;
  v3 = a1;
  v6[5] = a1;
  v7 = 0;
  while ( a2 )
  {
    v6[4] = v3;
    LOBYTE(v7) = 1;
    if ( v3 )
      result = sub_100068C5(a3);
    --a2;
    v3 += 64;
    LOBYTE(v7) = 0;
  }
  return result;
}
