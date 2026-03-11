/*
 * func-name: sub_1004F060
 * func-address: 0x1004f060
 * callers: 0x10014704
 * callees: 0x1000cf40, 0x10014c90, 0x102c9d86
 */

int __cdecl sub_1004F060(char *a1, char *a2, int a3)
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
      sub_1000CF40(a1);
    v3 += 80;
    LOBYTE(v7) = 0;
    a1 += 80;
  }
  return v3;
}
