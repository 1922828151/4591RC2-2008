/*
 * func-name: sub_10053190
 * func-address: 0x10053190
 * callers: 0x10007978
 * callees: 0x10015451, 0x102c9d86
 */

char *__cdecl sub_10053190(char *a1, char *a2, char *a3)
{
  char *v3; // esi
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
      std::string::string(v3, a1);
      LOBYTE(v7) = 2;
      std::string::string(v3 + 28, a1 + 28);
    }
    v3 += 56;
    LOBYTE(v7) = 0;
    a1 += 56;
  }
  return v3;
}
