/*
 * func-name: sub_1006DA00
 * func-address: 0x1006da00
 * callers: 0x100d2980, 0x100d3260
 * callees: 0x101a2522
 */

_DWORD *__cdecl sub_1006DA00(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  _DWORD *v8; // [esp+10h] [ebp-14h]
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
      *v3 = *a1;
      v3[1] = a1[1];
      v3[2] = a1[2];
      std::wstring::wstring(v3 + 3, a1 + 3);
      v3[10] = a1[10];
    }
    v3 += 11;
    LOBYTE(v10) = 0;
    a1 += 11;
  }
  return v3;
}
