/*
 * func-name: ?LoadOldFile@CDlgMgr@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAM@Z
 * func-address: 0x1014dc70
 * callers: none
 * callees: 0x100490f0, 0x10049860, 0x10049910, 0x1004a5a0, 0x1004ae30, 0x1007ec70, 0x10097220, 0x100aef10, 0x1014a050, 0x1014cfa0
 */

char __thiscall CDlgMgr::LoadOldFile(CDlgMgr *this, int a2, float *a3)
{
  xercesc_2_5::AbstractDOMParser **v5; // ebx
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v7; // esi
  int v8; // ebp
  int (__thiscall *v9)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v10; // eax
  unsigned int v11; // esi
  struct xercesc_2_5::DOMElement *v12; // esi
  int (__thiscall *v13)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v14; // eax
  struct CTYDialog *v15; // eax
  CTYDialog *v16; // edi
  int (__thiscall *v17)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v18; // eax
  char Bool; // al
  char v20; // [esp-Ch] [ebp-58h] BYREF
  int v21; // [esp-8h] [ebp-54h]
  int v22; // [esp-4h] [ebp-50h]
  int v23; // [esp+0h] [ebp-4Ch]
  int v24; // [esp+4h] [ebp-48h]
  char *v25; // [esp+8h] [ebp-44h]
  float v26; // [esp+Ch] [ebp-40h]
  CDlgMgr *v27; // [esp+20h] [ebp-2Ch]
  _BYTE v28[20]; // [esp+24h] [ebp-28h] BYREF
  int v29; // [esp+38h] [ebp-14h]
  int v30; // [esp+48h] [ebp-4h]
  char v31; // [esp+50h] [ebp+4h]
  unsigned int i; // [esp+54h] [ebp+8h]

  v27 = this;
  std::string::string(v28, a2);
  v30 = 0;
  if ( !v29 )
    std::string::operator=(v28, &unk_11241CE8);
  if ( FindMedia((int)v28, (int)"Scripts", 0, 0)
    && (std::string::string(&v20, v28),
        v5 = (xercesc_2_5::AbstractDOMParser **)((char *)this + 36),
        XMLSystem::Load((int)v5, v20, v21, v22, v23, v24, (int)v25, SLODWORD(v26))) )
  {
    Walker = XMLSystem::GetWalker(v5);
    v7 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
    v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
    if ( a3 )
    {
      v9 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v7 + 164);
      v26 = 0.0;
      v10 = (struct xercesc_2_5::DOMNode *)v9(v7, L"Ver");
      *a3 = XMLSystem::GetFloat((XMLSystem *)v5, v10, (char *)LODWORD(v26));
    }
    (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
    v31 = *((_BYTE *)Editor::Instance() + 2056);
    v11 = 0;
    for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8); v11 = i )
    {
      v12 = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v8 + 4))(v8, v11);
      if ( (*(unsigned __int16 (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)v12 + 12))(v12) == 1 )
      {
        v13 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)v12 + 164);
        v26 = 0.0;
        v14 = (struct xercesc_2_5::DOMNode *)v13(v12, L"InitOnStart");
        if ( XMLSystem::GetBool((XMLSystem *)v5, v14, (char *)LODWORD(v26)) || v31 )
        {
          v15 = CDlgMgr::AddOldDialogFromXML(v27, v12);
          v16 = v15;
          if ( v15 )
          {
            CDlgMgr::AddDialog(v27, v15);
            v17 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)v12 + 164);
            v26 = 0.0;
            v25 = 0;
            v18 = (struct xercesc_2_5::DOMNode *)v17(v12, L"Visible");
            Bool = XMLSystem::GetBool((XMLSystem *)v5, v18, v25);
            CTYDialog::ShowDialog(v16, Bool, v26);
          }
        }
      }
      ++i;
    }
    XMLSystem::Destroy((XMLSystem *)v5);
    v30 = -1;
    std::string::~string(v28);
    return 1;
  }
  else
  {
    v30 = -1;
    std::string::~string(v28);
    return 0;
  }
}
