/*
 * func-name: sub_1001EE80
 * func-address: 0x1001ee80
 * callers: 0x1002bae0
 * callees: 0x101a2522
 */

int __cdecl sub_1001EE80(int a1, int a2, int a3)
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
      *(_DWORD *)v3 = *(_DWORD *)a1;
      std::string::string(v3 + 4, a1 + 4);
      *(_DWORD *)(v3 + 32) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v3 + 36) = *(_DWORD *)(a1 + 36);
      *(_BYTE *)(v3 + 40) = *(_BYTE *)(a1 + 40);
      *(_BYTE *)(v3 + 41) = *(_BYTE *)(a1 + 41);
      *(_BYTE *)(v3 + 42) = *(_BYTE *)(a1 + 42);
      *(_BYTE *)(v3 + 43) = *(_BYTE *)(a1 + 43);
      *(_DWORD *)(v3 + 44) = *(_DWORD *)(a1 + 44);
      *(_DWORD *)(v3 + 48) = *(_DWORD *)(a1 + 48);
    }
    v3 += 52;
    LOBYTE(v10) = 0;
    a1 += 52;
  }
  return v3;
}
