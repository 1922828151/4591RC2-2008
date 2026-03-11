/*
 * func-name: sub_10099E40
 * func-address: 0x10099e40
 * callers: 0x1009a420, 0x1009a680
 * callees: 0x101a2522
 */

char *__cdecl sub_10099E40(CREControl *a1, CREControl *a2, char *a3)
{
  char *v3; // esi
  int v6; // [esp+0h] [ebp-3Ch] BYREF
  _BYTE v7[28]; // [esp+Ch] [ebp-30h] BYREF
  void *v8; // [esp+28h] [ebp-14h]
  int *v9; // [esp+2Ch] [ebp-10h]
  int v10; // [esp+38h] [ebp-4h]

  v3 = a3;
  v9 = &v6;
  v8 = a3;
  std::wstring::wstring(v7);
  v10 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v10) = 2;
    if ( v3 )
      std::wstring::wstring(v3, v7);
    LOBYTE(v10) = 1;
    std::wstring::swap(v3, a1);
    v3 += 28;
    a1 = (CREControl *)((char *)a1 + 28);
  }
  v10 = -1;
  std::wstring::~wstring(v7);
  return v3;
}
