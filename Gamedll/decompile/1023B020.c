/*
 * func-name: sub_1023B020
 * func-address: 0x1023b020
 * callers: 0x1000caef
 * callees: 0x10009bab, 0x102c9d86
 */

void __cdecl sub_1023B020(char *a1, int a2, char *a3)
{
  char *v3; // esi
  _DWORD v5[7]; // [esp+0h] [ebp-28h] BYREF
  int v6; // [esp+24h] [ebp-4h]

  v5[6] = v5;
  v3 = a1;
  v5[5] = a1;
  v6 = 0;
  while ( a2 )
  {
    v5[4] = v3;
    LOBYTE(v6) = 1;
    if ( v3 )
    {
      std::string::string(v3, a3);
      LOBYTE(v6) = 2;
      std::string::string(v3 + 28, a3 + 28);
    }
    --a2;
    v3 += 56;
    LOBYTE(v6) = 0;
  }
}
