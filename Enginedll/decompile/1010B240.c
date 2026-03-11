/*
 * func-name: ?LoadErrorTextResource@Precacher@@SA_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1010b240
 * callers: 0x1010cb00
 * callees: 0x10001720, 0x100017b0, 0x100490f0, 0x100493a0, 0x100497b0, 0x1004a5a0, 0x1004ae30, 0x10097220, 0x101153f0
 */

char __cdecl Precacher::LoadErrorTextResource(char a1)
{
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v3; // eax
  int v4; // esi
  char *i; // edi
  int (__thiscall *v6)(int); // eax
  int v7; // eax
  struct xercesc_2_5::DOMNode *v8; // eax
  int Int; // eax
  int v10; // edx
  int (__thiscall *v11)(int); // eax
  int v12; // eax
  int *v13; // eax
  int v14; // eax
  char v15; // [esp-10h] [ebp-ACh] BYREF
  int v16; // [esp-Ch] [ebp-A8h]
  int v17; // [esp-8h] [ebp-A4h]
  int v18; // [esp-4h] [ebp-A0h]
  int v19; // [esp+0h] [ebp-9Ch]
  int v20; // [esp+4h] [ebp-98h]
  char *v21; // [esp+8h] [ebp-94h]
  char *v22; // [esp+14h] [ebp-88h] BYREF
  _BYTE v23[28]; // [esp+18h] [ebp-84h] BYREF
  xercesc_2_5::AbstractDOMParser *v24[8]; // [esp+34h] [ebp-68h] BYREF
  _BYTE v25[60]; // [esp+54h] [ebp-48h] BYREF
  int v26; // [esp+98h] [ebp-4h]

  v26 = 0;
  if ( !FindMedia((int)&a1, (int)"Language", 0, 0) )
    goto LABEL_4;
  XMLSystem::XMLSystem((XMLSystem *)v24);
  v22 = &v15;
  LOBYTE(v26) = 1;
  std::string::string(&v15, &a1);
  if ( !XMLSystem::Load((int)v24, v15, v16, v17, v18, v19, v20, (int)v21) )
  {
    LOBYTE(v26) = 0;
    XMLSystem::~XMLSystem((XMLSystem *)v24);
LABEL_4:
    v26 = -1;
    std::string::~string(&a1);
    return 0;
  }
  Walker = XMLSystem::GetWalker(v24);
  v3 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
  v4 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v3 + 168))(v3, L"ErrorInfo");
  for ( i = 0; (unsigned int)i < (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); ++i )
  {
    v6 = *(int (__thiscall **)(int))(*(_DWORD *)v4 + 4);
    v21 = i;
    v7 = v6(v4);
    v8 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v7 + 164))(
                                          v7,
                                          L"ErrorCode",
                                          0);
    Int = XMLSystem::GetInt((XMLSystem *)v24, v8, v21);
    v10 = *(_DWORD *)v4;
    v22 = (char *)Int;
    v11 = *(int (__thiscall **)(int))(v10 + 4);
    v21 = i;
    v12 = v11(v4);
    v13 = (int *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v12 + 164))(v12, L"ErrorMessage", 0);
    XMLSystem::GetStringW(v23, v13, (char)v21);
    v21 = v23;
    LOBYTE(v26) = 2;
    v14 = sub_101153F0(&v22);
    std::wstring::operator=(v14, v21);
    LOBYTE(v26) = 1;
    std::wstring::~wstring(v23);
  }
  XMLSystem::Destroy((XMLSystem *)v24);
  LOBYTE(v26) = 3;
  std::string::~string(v25);
  LOBYTE(v26) = 0;
  std::string::~string(v24);
  v26 = -1;
  std::string::~string(&a1);
  return 1;
}
