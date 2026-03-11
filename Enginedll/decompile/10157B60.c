/*
 * func-name: sub_10157B60
 * func-address: 0x10157b60
 * callers: 0x10157cc0, 0x10159060
 * callees: 0x101a2522
 */

int __cdecl sub_10157B60(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int result; // eax
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  _DWORD *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a1;
  v9 = &v6;
  v8 = a1;
  v10 = 0;
  while ( a2 )
  {
    v7 = (CREControl *)v3;
    LOBYTE(v10) = 1;
    if ( v3 )
    {
      *v3 = *a3;
      std::wstring::wstring(v3 + 1, a3 + 1);
      result = a3[8];
      v3[8] = result;
    }
    --a2;
    v3 += 9;
    LOBYTE(v10) = 0;
  }
  return result;
}
