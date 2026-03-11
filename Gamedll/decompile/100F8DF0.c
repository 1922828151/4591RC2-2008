/*
 * func-name: sub_100F8DF0
 * func-address: 0x100f8df0
 * callers: 0x1000cfa4
 * callees: 0x102c9d86
 */

int __cdecl sub_100F8DF0(int a1, int a2, int a3)
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
    {
      *(_DWORD *)v3 = *(_DWORD *)a3;
      std::string::string((void *)(v3 + 4), (void *)(a3 + 4));
      *(float *)(v3 + 32) = *(float *)(a3 + 32);
    }
    --a2;
    v3 += 36;
    LOBYTE(v7) = 0;
  }
  return result;
}
