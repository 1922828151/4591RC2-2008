/*
 * func-name: sub_100F8240
 * func-address: 0x100f8240
 * callers: 0x100024dc
 * callees: 0x102c9d86
 */

int __cdecl sub_100F8240(int a1, int a2, int a3)
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
    {
      *(_DWORD *)v3 = *(_DWORD *)a1;
      std::string::string((void *)(v3 + 4), (void *)(a1 + 4));
      *(float *)(v3 + 32) = *(float *)(a1 + 32);
    }
    v3 += 36;
    LOBYTE(v7) = 0;
    a1 += 36;
  }
  return v3;
}
