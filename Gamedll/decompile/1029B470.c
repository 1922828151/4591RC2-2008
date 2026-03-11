/*
 * func-name: sub_1029B470
 * func-address: 0x1029b470
 * callers: 0x100174b3
 * callees: 0x10015910, 0x102c9d50
 */

void __cdecl sub_1029B470(char *a1, char *a2)
{
  char *i; // esi
  int v3; // edi
  int j; // ebx
  int v5; // [esp+0h] [ebp-20h]
  int v6; // [esp+4h] [ebp-1Ch]

  for ( i = a1; i != a2; i += 60 )
  {
    v3 = *((_DWORD *)i + 12);
    if ( v3 )
    {
      for ( j = *((_DWORD *)i + 13); v3 != j; v3 += 128 )
        sub_10015910(v5, v6);
      operator delete(*((void **)i + 12));
    }
    *((_DWORD *)i + 12) = 0;
    *((_DWORD *)i + 13) = 0;
    *((_DWORD *)i + 14) = 0;
    std::wstring::~wstring(i);
  }
}
