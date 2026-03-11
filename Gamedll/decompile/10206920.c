/*
 * func-name: sub_10206920
 * func-address: 0x10206920
 * callers: 0x100154d8
 * callees: 0x10012887, 0x10017a8a, 0x102c9d50, 0x102c9d86
 */

_DWORD *__cdecl sub_10206920(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // esi
  char *v4; // ecx
  int v6; // eax
  int v7; // eax
  int v8; // eax
  char *v9; // ebx
  char *v10; // edi
  int v12; // [esp+0h] [ebp-34h] BYREF
  char v13[4]; // [esp+10h] [ebp-24h] BYREF
  char *v14; // [esp+14h] [ebp-20h]
  char *v15; // [esp+18h] [ebp-1Ch]
  int v16; // [esp+1Ch] [ebp-18h]
  _DWORD *v17; // [esp+20h] [ebp-14h]
  int *v18; // [esp+24h] [ebp-10h]
  int v19; // [esp+30h] [ebp-4h]

  v18 = &v12;
  v3 = a3;
  v4 = 0;
  v17 = a3;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v19 = 0;
  while ( a1 != a2 )
  {
    LOBYTE(v19) = 2;
    if ( v3 )
    {
      sub_10012887((int)v13);
      v4 = v14;
    }
    v6 = v3[1];
    v3[1] = a1[1];
    a1[1] = v6;
    v7 = v3[2];
    v3[2] = a1[2];
    a1[2] = v7;
    v8 = v3[3];
    v3[3] = a1[3];
    v3 += 4;
    a1[3] = v8;
    a1 += 4;
  }
  v19 = -1;
  if ( v4 )
  {
    v9 = v15;
    v10 = v4;
    if ( v4 != v15 )
    {
      do
      {
        v19 = 8;
        std::wstring::~wstring(v10 + 100);
        LOBYTE(v19) = 7;
        std::wstring::~wstring(v10 + 72);
        v19 = -1;
        std::string::~string(v10 + 4);
        v10 += 128;
      }
      while ( v10 != v9 );
      v4 = v14;
    }
    operator delete(v4);
  }
  return v3;
}
