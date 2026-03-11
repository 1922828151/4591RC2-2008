/*
 * func-name: sub_100DC280
 * func-address: 0x100dc280
 * callers: 0x100106a9
 * callees: 0x1000b53c, 0x10016b58, 0x102c9d86
 */

int __cdecl sub_100DC280(int a1, int a2, void *a3)
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
      result = sub_1000B53C(a3);
    --a2;
    v3 += 120;
    LOBYTE(v7) = 0;
  }
  return result;
}
