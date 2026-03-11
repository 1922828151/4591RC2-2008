/*
 * func-name: sub_10205A40
 * func-address: 0x10205a40
 * callers: 0x10006884
 * callees: 0x100115f9, 0x10016cf2, 0x102c9d86
 */

int __cdecl sub_10205A40(int a1, int a2, int a3)
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
      result = sub_100115F9(a3);
    --a2;
    v3 += 128;
    LOBYTE(v7) = 0;
  }
  return result;
}
