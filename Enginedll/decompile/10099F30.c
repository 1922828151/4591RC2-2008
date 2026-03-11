/*
 * func-name: sub_10099F30
 * func-address: 0x10099f30
 * callers: 0x1009a450, 0x1009ad30
 * callees: 0x101a2522
 */

void __cdecl sub_10099F30(CREControl *a1, int a2, void *a3)
{
  CREControl *v3; // esi
  int v5; // [esp+0h] [ebp-24h] BYREF
  CREControl *v6; // [esp+Ch] [ebp-18h]
  void *v7; // [esp+10h] [ebp-14h]
  int *v8; // [esp+14h] [ebp-10h]
  int v9; // [esp+20h] [ebp-4h]

  v3 = a1;
  v8 = &v5;
  v7 = a1;
  v9 = 0;
  while ( a2 )
  {
    v6 = v3;
    LOBYTE(v9) = 1;
    if ( v3 )
      std::wstring::wstring(v3, a3);
    --a2;
    v3 = (CREControl *)((char *)v3 + 28);
    LOBYTE(v9) = 0;
  }
}
