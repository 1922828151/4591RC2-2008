/*
 * func-name: sub_1029A090
 * func-address: 0x1029a090
 * callers: 0x10009fa2
 * callees: 0x1000a31c, 0x10015910, 0x102c9d86
 */

int __cdecl sub_1029A090(int a1, int a2, int a3)
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
      result = sub_1000A31C(a3);
    --a2;
    v3 += 128;
    LOBYTE(v7) = 0;
  }
  return result;
}
