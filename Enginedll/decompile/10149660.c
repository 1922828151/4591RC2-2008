/*
 * func-name: ?CheckUIXMLVer@CDlgMgr@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAM@Z
 * func-address: 0x10149660
 * callers: none
 * callees: 0x10049860, 0x1004a5a0, 0x1004ae30, 0x10097220
 */

char __thiscall CDlgMgr::CheckUIXMLVer(xercesc_2_5::AbstractDOMParser **this, int a2, float *a3)
{
  XMLSystem *v5; // edi
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v7; // esi
  int (__thiscall *v8)(int); // eax
  struct xercesc_2_5::DOMNode *v9; // eax
  char v10; // [esp-1Ch] [ebp-50h] BYREF
  int v11; // [esp-18h] [ebp-4Ch]
  int v12; // [esp-14h] [ebp-48h]
  int v13; // [esp-10h] [ebp-44h]
  int v14; // [esp-Ch] [ebp-40h]
  int v15; // [esp-8h] [ebp-3Ch]
  char *v16; // [esp-4h] [ebp-38h]
  int v17; // [esp+0h] [ebp-34h]
  _BYTE v18[20]; // [esp+Ch] [ebp-28h] BYREF
  int v19; // [esp+20h] [ebp-14h]
  int v20; // [esp+30h] [ebp-4h]

  if ( !a3 )
    return 0;
  std::string::string(v18, a2);
  v20 = 0;
  if ( !v19 )
    std::string::operator=(v18, &unk_11241CE8);
  if ( !FindMedia((int)v18, (int)"Scripts", 0, 0)
    || (std::string::string(&v10, v18),
        v5 = (XMLSystem *)(this + 9),
        !XMLSystem::Load((int)(this + 9), v10, v11, v12, v13, v14, v15, (int)v16)) )
  {
    v20 = -1;
    std::string::~string(v18);
    return 0;
  }
  Walker = XMLSystem::GetWalker(this + 9);
  v7 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *, int))(*(_DWORD *)Walker + 4))(Walker, v17);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
  v8 = *(int (__thiscall **)(int))(*(_DWORD *)v7 + 164);
  v17 = 0;
  v16 = (char *)L"Ver";
  v9 = (struct xercesc_2_5::DOMNode *)v8(v7);
  *a3 = XMLSystem::GetFloat(v5, v9, v16);
  v20 = -1;
  std::string::~string(v18);
  return 1;
}
