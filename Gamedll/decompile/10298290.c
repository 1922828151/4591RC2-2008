/*
 * func-name: sub_10298290
 * func-address: 0x10298290
 * callers: 0x10011022
 * callees: 0x102c9d86
 */

int __cdecl sub_10298290(int a1, int a2, int a3)
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
      std::wstring::wstring(v3, a1);
    v3 += 28;
    LOBYTE(v7) = 0;
    a1 += 28;
  }
  return v3;
}
