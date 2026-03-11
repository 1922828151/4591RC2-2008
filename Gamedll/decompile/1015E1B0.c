/*
 * func-name: sub_1015E1B0
 * func-address: 0x1015e1b0
 * callers: 0x1000bd5c
 * callees: 0x1000b53c, 0x100102cb, 0x102c9d86
 */

int __cdecl sub_1015E1B0(char *a1, int a2, char *a3)
{
  char *v3; // esi
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
      std::string::string(v3, a3);
      LOBYTE(v7) = 2;
      result = sub_1000B53C(a3 + 28);
    }
    --a2;
    v3 += 148;
    LOBYTE(v7) = 0;
  }
  return result;
}
