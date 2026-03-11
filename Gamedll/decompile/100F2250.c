/*
 * func-name: sub_100F2250
 * func-address: 0x100f2250
 * callers: 0x100055e2
 * callees: 0x1000b767, 0x1000bfe6, 0x102c9d86
 */

int __cdecl sub_100F2250(int a1, int a2, void *a3)
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
      result = sub_1000BFE6(a3);
    --a2;
    v3 += 64;
    LOBYTE(v7) = 0;
  }
  return result;
}
