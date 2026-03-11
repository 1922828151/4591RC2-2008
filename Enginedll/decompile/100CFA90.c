/*
 * func-name: sub_100CFA90
 * func-address: 0x100cfa90
 * callers: 0x100d0de0, 0x100d3d50
 * callees: 0x101a2522
 */

void __cdecl sub_100CFA90(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-24h] BYREF
  CREControl *v6; // [esp+Ch] [ebp-18h]
  _DWORD *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v3 = a1;
  v8 = &v5;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    v6 = (CREControl *)v3;
    LOBYTE(v9) = 1;
    if ( v3 )
    {
      *v3 = *a3;
      v3[1] = a3[1];
      v3[2] = a3[2];
      std::wstring::wstring(v3 + 3, a3 + 3);
    }
    --a2;
    v3 += 10;
    LOBYTE(v9) = 0;
  }
}
