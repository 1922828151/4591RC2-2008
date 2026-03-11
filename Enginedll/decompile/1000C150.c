/*
 * func-name: sub_1000C150
 * func-address: 0x1000c150
 * callers: 0x1000d020, 0x1000dc90
 * callees: 0x101a2522
 */

int __cdecl sub_1000C150(CREControl *a1, CREControl *a2, int a3)
{
  int v3; // esi
  int v6; // [esp+0h] [ebp-3Ch] BYREF
  _BYTE v7[28]; // [esp+Ch] [ebp-30h] BYREF
  int v8; // [esp+28h] [ebp-14h]
  int *v9; // [esp+2Ch] [ebp-10h]
  int v10; // [esp+38h] [ebp-4h]

  v3 = a3;
  v9 = &v6;
  v8 = a3;
  std::string::string(v7);
  v10 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v10) = 2;
    if ( v3 )
      std::string::string(v3, v7);
    LOBYTE(v10) = 1;
    std::string::swap(v3, a1);
    v3 += 28;
    a1 = (CREControl *)((char *)a1 + 28);
  }
  v10 = -1;
  std::string::~string(v7);
  return v3;
}
