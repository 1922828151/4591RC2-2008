/*
 * func-name: sub_10259270
 * func-address: 0x10259270
 * callers: 0x10013278
 * callees: 0x102c9d86
 */

int __cdecl sub_10259270(_DWORD *a1, int a2, _DWORD *a3)
{
  _DWORD *v3; // esi
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
      *v3 = *a3;
      std::wstring::wstring(v3 + 1, a3 + 1);
      result = a3[8];
      v3[8] = result;
    }
    --a2;
    v3 += 9;
    LOBYTE(v7) = 0;
  }
  return result;
}
