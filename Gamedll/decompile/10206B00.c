/*
 * func-name: sub_10206B00
 * func-address: 0x10206b00
 * callers: 0x1000dbca
 * callees: 0x10012887, 0x10017a8a, 0x102c9d86
 */

int __cdecl sub_10206B00(int a1, int a2, int a3)
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
      result = sub_10012887(a3);
    --a2;
    v3 += 16;
    LOBYTE(v7) = 0;
  }
  return result;
}
