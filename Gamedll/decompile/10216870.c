/*
 * func-name: sub_10216870
 * func-address: 0x10216870
 * callers: 0x10015235
 * callees: 0x1000186b, 0x10011e37, 0x102c9d86
 */

int __cdecl sub_10216870(int a1, int a2, int a3)
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
      result = sub_10011E37(a3);
    --a2;
    v3 += 84;
    LOBYTE(v7) = 0;
  }
  return result;
}
