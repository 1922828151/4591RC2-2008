/*
 * func-name: sub_1016C260
 * func-address: 0x1016c260
 * callers: 0x1016c6e0
 * callees: 0x10064610, 0x10136290, 0x1016c0d0, 0x1016c120, 0x1016c9b0, 0x1016ca50, 0x1016cee0, 0x101a2500, 0x101a2534
 */

void ***__stdcall sub_1016C260(void *a1, int a2)
{
  _DWORD *v2; // eax
  void ***v3; // esi
  Texture *v4; // eax
  Texture *v5; // eax
  struct Canvas *v6; // eax
  void ***v7; // ecx
  char v8; // bl
  int v9; // eax
  int v10; // edx
  int v11; // eax
  _BYTE v13[12]; // [esp+20h] [ebp-70h] BYREF
  _BYTE v14[28]; // [esp+2Ch] [ebp-64h] BYREF
  _BYTE v15[28]; // [esp+48h] [ebp-48h] BYREF
  _BYTE v16[28]; // [esp+64h] [ebp-2Ch] BYREF
  void ***v17; // [esp+80h] [ebp-10h]
  int v18; // [esp+8Ch] [ebp-4h]

  v2 = operator new(0x50u);
  v18 = 0;
  if ( v2 )
    v3 = (void ***)sub_1016C0D0(v2);
  else
    v3 = 0;
  v4 = (Texture *)operator new(0x9Cu);
  v18 = 1;
  if ( v4 )
    v5 = Texture::Texture(v4);
  else
    v5 = 0;
  v18 = -1;
  *((float *)v3 + 1) = 0.0;
  *v3 = (void **)v5;
  std::wstring::wstring(v15, a2);
  v18 = 2;
  v6 = Canvas::Instance();
  v7 = v3 + 2;
  LOBYTE(v7) = *(_DWORD *)(a2 + 532) == 700;
  v8 = (*(int (__thiscall **)(struct Canvas *, void **, void *, _BYTE *, _DWORD, void ***, void ***))(*(_DWORD *)v6 + 152))(
         v6,
         *v3,
         a1,
         v15,
         *(_DWORD *)(a2 + 524),
         v7,
         v3 + 2);
  v18 = -1;
  std::wstring::~wstring(v15);
  if ( v8 )
  {
    std::wstring::wstring(v14, a1);
    v18 = 3;
    std::wstring::operator+=(v14, a2);
    v9 = sub_1016C9B0(v15, *(_DWORD *)(a2 + 524));
    LOBYTE(v18) = 4;
    std::wstring::operator+=(v14, v9);
    LOBYTE(v18) = 3;
    std::wstring::~wstring(v15);
    LOBYTE(v10) = *(_DWORD *)(a2 + 532) == 700;
    v11 = sub_1016CA50(v15, v10);
    LOBYTE(v18) = 5;
    std::wstring::operator+=(v14, v11);
    LOBYTE(v18) = 3;
    std::wstring::~wstring(v15);
    std::wstring::operator=(v3 + 4, a1);
    std::wstring::operator=(v3 + 11, a2);
    v3[18] = *(void ***)(a2 + 524);
    v3[19] = *(void ***)(a2 + 532);
    std::wstring::wstring(v16, v14);
    v17 = v3;
    LOBYTE(v18) = 6;
    sub_1016CEE0(v13, v16);
    LOBYTE(v18) = 3;
    std::wstring::~wstring(v16);
    v18 = -1;
    std::wstring::~wstring(v14);
    return v3;
  }
  else
  {
    sub_1016C120(v3);
    operator delete(v3);
    return 0;
  }
}
