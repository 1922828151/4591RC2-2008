/*
 * func-name: sub_1016C4C0
 * func-address: 0x1016c4c0
 * callers: 0x100d5d50
 * callees: 0x1000b770, 0x1000cb70, 0x1004c080, 0x10064610, 0x10136290, 0x1016c120, 0x1016ca50, 0x1016cfe0, 0x1016d4c0, 0x101a2500, 0x101a2534
 */

void __thiscall sub_1016C4C0(_DWORD **this)
{
  _DWORD **v1; // ebx
  _DWORD **v2; // esi
  _DWORD *v3; // edi
  _DWORD *v4; // ebp
  void ***v5; // esi
  void **v6; // edi
  Texture *v7; // eax
  Texture *v8; // eax
  struct Canvas *v9; // eax
  _DWORD *v10; // ecx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  _DWORD **v14; // esi
  _DWORD *v15; // edi
  void *v16; // ebp
  _DWORD **v17; // [esp+18h] [ebp-58h] BYREF
  _DWORD *v18; // [esp+1Ch] [ebp-54h]
  char v19[8]; // [esp+20h] [ebp-50h] BYREF
  _BYTE v20[28]; // [esp+28h] [ebp-48h] BYREF
  _BYTE v21[32]; // [esp+44h] [ebp-2Ch] BYREF
  int v22; // [esp+6Ch] [ebp-4h]

  v1 = this + 1;
  v2 = this + 1;
  v3 = (_DWORD *)*this[2];
  v17 = this + 1;
  v18 = v3;
  while ( 1 )
  {
    v4 = v1[1];
    if ( !v2 || v2 != v1 )
      invalid_parameter_noinfo();
    if ( v3 == v4 )
      break;
    if ( !v2 )
      invalid_parameter_noinfo();
    if ( v3 == v2[1] )
      invalid_parameter_noinfo();
    v5 = (void ***)v3[10];
    v6 = *v5;
    *((float *)v5 + 1) = GSeconds;
    if ( v6 )
    {
      Texture::~Texture(v6);
      operator delete(v6);
    }
    v7 = (Texture *)operator new(0x9Cu);
    v22 = 0;
    if ( v7 )
      v8 = Texture::Texture(v7);
    else
      v8 = 0;
    v22 = -1;
    *v5 = (void **)v8;
    v9 = Canvas::Instance();
    v10 = v5 + 2;
    LOBYTE(v10) = v5[19] == (void **)700;
    if ( (*(unsigned __int8 (__thiscall **)(struct Canvas *, void **, void ***, void ***, void **, _DWORD *, void ***))(*(_DWORD *)v9 + 152))(
           v9,
           *v5,
           v5 + 4,
           v5 + 11,
           v5[18],
           v10,
           v5 + 2) )
    {
      sub_1000B770(&v17);
      std::wstring::wstring(v20, v5 + 4);
      v22 = 1;
      std::wstring::operator+=(v20, v5 + 11);
      v11 = sub_1004C080((int)v21, (int)v5[18]);
      LOBYTE(v22) = 2;
      std::wstring::operator+=(v20, v11);
      LOBYTE(v22) = 1;
      std::wstring::~wstring(v21);
      LOBYTE(v12) = v5[19] == (void **)700;
      v13 = sub_1016CA50(v21, v12);
      LOBYTE(v22) = 3;
      std::wstring::operator+=(v20, v13);
      LOBYTE(v22) = 1;
      std::wstring::~wstring(v21);
      *(_DWORD *)sub_1016D4C0(v20) = v5;
      v22 = -1;
      std::wstring::~wstring(v20);
      v3 = v18;
      v2 = v17;
    }
    else
    {
      v14 = v17;
      v15 = v18;
      sub_1000B770(&v17);
      if ( !v14 )
        invalid_parameter_noinfo();
      if ( v15 == v14[1] )
        invalid_parameter_noinfo();
      v16 = (void *)v15[10];
      if ( v16 )
      {
        sub_1016C120((void ***)v15[10]);
        operator delete(v16);
      }
      sub_1016CFE0(v19, v14, v15);
      v3 = v18;
      v2 = v17;
    }
  }
}
