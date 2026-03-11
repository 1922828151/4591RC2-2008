/*
 * func-name: sub_100736C0
 * func-address: 0x100736c0
 * callers: 0x10001974
 * callees: 0x102c9d86
 */

_DWORD *__cdecl sub_100736C0(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
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
      *v3 = *a1;
      std::wstring::wstring(v3 + 1, a1 + 1);
      v3[8] = a1[8];
    }
    v3 += 9;
    LOBYTE(v7) = 0;
    a1 += 9;
  }
  return v3;
}
