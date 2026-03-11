/*
 * func-name: sub_10052C60
 * func-address: 0x10052c60
 * callers: 0x100117c5
 * callees: 0x100019d3, 0x100068c5, 0x102c9d86
 */

int __cdecl sub_10052C60(char *a1, char *a2, int a3)
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
      sub_100068C5(a1);
    v3 += 64;
    LOBYTE(v7) = 0;
    a1 += 64;
  }
  return v3;
}
