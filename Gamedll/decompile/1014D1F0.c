/*
 * func-name: sub_1014D1F0
 * func-address: 0x1014d1f0
 * callers: 0x10019f47
 * callees: 0x10015dbb, 0x102c9d86
 */

int __cdecl sub_1014D1F0(int a1, int a2, int a3)
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
      result = sub_10015DBB(a3);
    --a2;
    v3 += 584;
    LOBYTE(v7) = 0;
  }
  return result;
}
