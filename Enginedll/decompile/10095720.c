/*
 * func-name: ?LoadCharset@Engine@@IAEXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x10095720
 * callers: 0x10097ea0
 * callees: 0x10001720, 0x100017b0, 0x100493a0, 0x1004a5a0, 0x1004ae30, 0x100e2550
 */

int __thiscall Engine::LoadCharset(char *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  const char *v9; // eax
  struct xercesc_2_5::DOMTreeWalker *Walker; // edi
  int i; // esi
  int (__thiscall *v12)(int, const wchar_t *); // eax
  int *v13; // eax
  void *StringW; // eax
  const char *v15; // eax
  char v17; // [esp-1Ch] [ebp-B0h] BYREF
  int v18; // [esp-18h] [ebp-ACh]
  int v19; // [esp-14h] [ebp-A8h]
  int v20; // [esp-10h] [ebp-A4h]
  int v21; // [esp-Ch] [ebp-A0h]
  int v22; // [esp-8h] [ebp-9Ch]
  int v23; // [esp-4h] [ebp-98h]
  char *v24; // [esp+Ch] [ebp-88h]
  _BYTE v25[28]; // [esp+10h] [ebp-84h] BYREF
  xercesc_2_5::AbstractDOMParser *v26[8]; // [esp+2Ch] [ebp-68h] BYREF
  _BYTE v27[60]; // [esp+4Ch] [ebp-48h] BYREF
  int v28; // [esp+90h] [ebp-4h]

  v28 = 0;
  XMLSystem::XMLSystem((XMLSystem *)v26);
  v24 = &v17;
  LOBYTE(v28) = 1;
  std::string::string(&v17, &a2);
  if ( XMLSystem::Load((int)v26, v17, v18, v19, v20, v21, v22, v23) )
  {
    Walker = XMLSystem::GetWalker(v26);
    for ( i = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 48))(Walker);
          i;
          i = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 40))(Walker) )
    {
      if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)i + 12))(i) == 1 )
      {
        v12 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)i + 164);
        v23 = 0;
        v13 = (int *)v12(i, L"Value");
        StringW = XMLSystem::GetStringW(v25, v13, v23);
        LOBYTE(v28) = 2;
        std::wstring::operator+=(this + 48, StringW);
        LOBYTE(v28) = 1;
        std::wstring::~wstring(v25);
      }
    }
    v15 = (const char *)std::string::c_str(&a2);
    LogPrintf("LanguageCharset: \"%s\"", v15);
    LOBYTE(v28) = 3;
    std::string::~string(v27);
    LOBYTE(v28) = 0;
    std::string::~string(v26);
  }
  else
  {
    v9 = (const char *)std::string::c_str(&a2);
    LogPrintf("WARNING: Unable to load LanguageCharset \"%s\"", v9);
    LOBYTE(v28) = 0;
    XMLSystem::~XMLSystem((XMLSystem *)v26);
  }
  v28 = -1;
  return std::string::~string(&a2);
}
