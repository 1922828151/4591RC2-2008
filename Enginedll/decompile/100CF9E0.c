/*
 * func-name: sub_100CF9E0
 * func-address: 0x100cf9e0
 * callers: 0x100d0da0, 0x100d4770
 * callees: 0x101a2522
 */

void __cdecl sub_100CF9E0(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v4; // esi
  int v5; // [esp+0h] [ebp-24h] BYREF
  CREControl *v6; // [esp+Ch] [ebp-18h]
  _DWORD *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v4 = a1;
  v8 = &v5;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    v6 = (CREControl *)v4;
    LOBYTE(v9) = 1;
    if ( v4 )
    {
      *v4 = *a3;
      v4[1] = a3[1];
      v4[2] = a3[2];
      std::wstring::wstring(v4 + 3, a3 + 3);
      v4[10] = a3[10];
    }
    --a2;
    v4 += 11;
    LOBYTE(v9) = 0;
  }
}
