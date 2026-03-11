/*
 * func-name: ?LoadTextResource@Precacher@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1010b030
 * callers: 0x1010cb00
 * callees: 0x10001720, 0x100017b0, 0x100490f0, 0x100493a0, 0x1004a5a0, 0x1004ae30, 0x10097220, 0x10115310
 */

char __cdecl Precacher::LoadTextResource(char a1)
{
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v3; // eax
  int v4; // esi
  unsigned int i; // edi
  int (__thiscall *v6)(int); // eax
  int v7; // eax
  int *v8; // eax
  int (__thiscall *v9)(int); // eax
  int v10; // eax
  int *v11; // eax
  int v12; // eax
  char v13; // [esp-18h] [ebp-CCh] BYREF
  int v14; // [esp-14h] [ebp-C8h]
  int v15; // [esp-10h] [ebp-C4h]
  int v16; // [esp-Ch] [ebp-C0h]
  int v17; // [esp-8h] [ebp-BCh]
  int v18; // [esp-4h] [ebp-B8h]
  _BYTE *v19; // [esp+0h] [ebp-B4h]
  char *v20; // [esp+10h] [ebp-A4h]
  _BYTE v21[28]; // [esp+14h] [ebp-A0h] BYREF
  _BYTE v22[28]; // [esp+30h] [ebp-84h] BYREF
  xercesc_2_5::AbstractDOMParser *v23[8]; // [esp+4Ch] [ebp-68h] BYREF
  _BYTE v24[60]; // [esp+6Ch] [ebp-48h] BYREF
  int v25; // [esp+B0h] [ebp-4h]

  v25 = 0;
  if ( !FindMedia((int)&a1, (int)"Language", 0, 0) )
    goto LABEL_4;
  XMLSystem::XMLSystem((XMLSystem *)v23);
  v20 = &v13;
  LOBYTE(v25) = 1;
  std::string::string(&v13, &a1);
  if ( !XMLSystem::Load((int)v23, v13, v14, v15, v16, v17, v18, (int)v19) )
  {
    LOBYTE(v25) = 0;
    XMLSystem::~XMLSystem((XMLSystem *)v23);
LABEL_4:
    v25 = -1;
    std::string::~string(&a1);
    return 0;
  }
  Walker = XMLSystem::GetWalker(v23);
  v3 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
  v4 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v3 + 168))(v3, L"Node");
  for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); ++i )
  {
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 4);
    v19 = (_BYTE *)i;
    v7 = v6(v4);
    v8 = (int *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v7 + 164))(v7, L"key", 0);
    XMLSystem::GetStringW(v22, v8, (char)v19);
    v9 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 4);
    v19 = (_BYTE *)i;
    LOBYTE(v25) = 2;
    v10 = v9(v4);
    v11 = (int *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v10 + 164))(v10, L"value", 0);
    XMLSystem::GetStringW(v21, v11, (char)v19);
    v19 = v21;
    LOBYTE(v25) = 3;
    v12 = sub_10115310(v22);
    std::wstring::operator=(v12, v19);
    LOBYTE(v25) = 2;
    std::wstring::~wstring(v21);
    LOBYTE(v25) = 1;
    std::wstring::~wstring(v22);
  }
  XMLSystem::Destroy((XMLSystem *)v23);
  LOBYTE(v25) = 4;
  std::string::~string(v24);
  LOBYTE(v25) = 0;
  std::string::~string(v23);
  v25 = -1;
  std::string::~string(&a1);
  return 1;
}
