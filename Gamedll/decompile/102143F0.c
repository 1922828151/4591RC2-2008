/*
 * func-name: sub_102143F0
 * func-address: 0x102143f0
 * callers: 0x10005876
 * callees: 0x1000e340, 0x1001905b, 0x102c9d86
 */

int __cdecl sub_102143F0(int a1, int a2, int a3)
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
      result = sub_1001905B(a3);
    --a2;
    v3 += 80;
    LOBYTE(v7) = 0;
  }
  return result;
}
