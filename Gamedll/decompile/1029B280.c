/*
 * func-name: sub_1029B280
 * func-address: 0x1029b280
 * callers: 0x100131c4
 * callees: 0x10002cc5, 0x1001a645, 0x102c9d86
 */

int __cdecl sub_1029B280(int a1, int a2, int a3)
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
      sub_10002CC5(a1);
    v3 += 60;
    LOBYTE(v7) = 0;
    a1 += 60;
  }
  return v3;
}
