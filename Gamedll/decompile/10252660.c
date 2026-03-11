/*
 * func-name: sub_10252660
 * func-address: 0x10252660
 * callers: 0x1000b753
 * callees: 0x1000d8a5, 0x102c9d86
 */

int __cdecl sub_10252660(int a1, int a2, int a3)
{
  int v3; // edi
  _DWORD v6[9]; // [esp+0h] [ebp-24h] BYREF

  v6[5] = v6;
  v3 = a3;
  v6[4] = a3;
  v6[8] = 0;
  while ( a1 != a2 )
  {
    sub_1000D8A5(v3, a1);
    v3 += 56;
    a1 += 56;
  }
  return v3;
}
