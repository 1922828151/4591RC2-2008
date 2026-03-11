/*
 * func-name: sub_10108C00
 * func-address: 0x10108c00
 * callers: 0x10109450, 0x10109510
 * callees: 0x10108880, 0x101a2522
 */

int __cdecl sub_10108C00(int a1, int a2, int a3)
{
  int v3; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  int v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a3;
  v9 = &v6;
  v8 = a3;
  v10 = 0;
  while ( a1 != a2 )
  {
    v7 = (CREControl *)v3;
    LOBYTE(v10) = 1;
    if ( v3 )
    {
      std::string::string(v3, a1);
      LOBYTE(v10) = 2;
      std::string::string(v3 + 28, a1 + 28);
      *(_DWORD *)(v3 + 56) = *(_DWORD *)(a1 + 56);
      *(_BYTE *)(v3 + 60) = *(_BYTE *)(a1 + 60);
    }
    v3 += 64;
    LOBYTE(v10) = 0;
    a1 += 64;
  }
  return v3;
}
