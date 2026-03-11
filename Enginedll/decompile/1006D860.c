/*
 * func-name: sub_1006D860
 * func-address: 0x1006d860
 * callers: 0x100700d0
 * callees: 0x101a2522
 */

CREControl *__cdecl sub_1006D860(char *a1, char *a2, CREControl *a3)
{
  CREControl *v3; // esi
  int v6; // [esp+0h] [ebp-24h] BYREF
  CREControl *v7; // [esp+Ch] [ebp-18h]
  void *v8; // [esp+10h] [ebp-14h]
  int *v9; // [esp+14h] [ebp-10h]
  int v10; // [esp+20h] [ebp-4h]

  v3 = a3;
  v9 = &v6;
  v8 = a3;
  v10 = 0;
  while ( a1 != a2 )
  {
    v7 = v3;
    LOBYTE(v10) = 1;
    if ( v3 )
    {
      std::wstring::wstring(v3, a1);
      *((_DWORD *)v3 + 7) = *((_DWORD *)a1 + 7);
      *((_BYTE *)v3 + 32) = a1[32];
    }
    v3 = (CREControl *)((char *)v3 + 36);
    LOBYTE(v10) = 0;
    a1 += 36;
  }
  return v3;
}
