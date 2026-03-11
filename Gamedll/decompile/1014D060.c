/*
 * func-name: sub_1014D060
 * func-address: 0x1014d060
 * callers: 0x1001635b
 * callees: 0x10015dbb, 0x102c9d86
 */

int __cdecl sub_1014D060(int a1, int a2, int a3)
{
  int v3; // esi
  _DWORD v6[6]; // [esp+0h] [ebp-24h] BYREF
  int v7; // [esp+20h] [ebp-4h]

  v6[5] = v6;
  v3 = a3;
  v6[4] = a3;
  v7 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v7) = 1;
    if ( v3 )
      sub_10015DBB(a1);
    v3 += 584;
    LOBYTE(v7) = 0;
    a1 += 584;
  }
  return v3;
}
