/*
 * func-name: sub_10108D90
 * func-address: 0x10108d90
 * callers: 0x101090c0
 * callees: 0x10108880, 0x101a2522
 */

int __cdecl sub_10108D90(int a1, int a2, int a3)
{
  int v4; // esi
  int result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  int v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v4 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = (CREControl *)v4;
    LOBYTE(v10) = 1;
    if ( v4 )
    {
      std::string::string(v4, a3);
      LOBYTE(v10) = 2;
      result = std::string::string(v4 + 28, a3 + 28);
      *(_DWORD *)(v4 + 56) = *(_DWORD *)(a3 + 56);
      *(_BYTE *)(v4 + 60) = *(_BYTE *)(a3 + 60);
    }
    --a2;
    v4 += 64;
    LOBYTE(v10) = 0;
  }
  return result;
}
