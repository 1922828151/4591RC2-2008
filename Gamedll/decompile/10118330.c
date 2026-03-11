/*
 * func-name: sub_10118330
 * func-address: 0x10118330
 * callers: 0x1000c5fe
 * callees: 0x102c9d62, 0x102c9d86
 */

char *__cdecl sub_10118330(int a1, int a2, char *a3)
{
  char *v3; // esi
  _DWORD v6[7]; // [esp+0h] [ebp-50h] BYREF
  char *v7; // [esp+1Ch] [ebp-34h]
  _BYTE v8[28]; // [esp+20h] [ebp-30h] BYREF
  _DWORD *v9; // [esp+40h] [ebp-10h]
  int v10; // [esp+4Ch] [ebp-4h]

  v9 = v6;
  v3 = a3;
  v7 = a3;
  v6[6] = a3;
  std::string::string(v8);
  v10 = 0;
  while ( a1 != a2 )
  {
    v6[5] = v3;
    v6[4] = v3;
    LOBYTE(v10) = 2;
    if ( v3 )
      std::string::string(v3, v8);
    LOBYTE(v10) = 1;
    std::string::swap(v3, a1);
    v3 += 28;
    v7 = v3;
    a1 += 28;
  }
  v10 = -1;
  std::string::~string(v8);
  return v3;
}
