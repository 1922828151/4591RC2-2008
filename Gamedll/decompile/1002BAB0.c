/*
 * func-name: sub_1002BAB0
 * func-address: 0x1002bab0
 * callers: 0x1000fa97
 * callees: 0x102c9d86
 */

char *__cdecl sub_1002BAB0(char *a1, char *a2, char *a3)
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
      std::string::string(v3, a1);
    v3 += 28;
    LOBYTE(v7) = 0;
    a1 += 28;
  }
  return v3;
}
