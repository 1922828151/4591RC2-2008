/*
 * func-name: ?SaveDialog@CDlgMgr@@QAE_NPAVCTYDialog@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
 * func-address: 0x1014d940
 * callers: none
 * callees: 0x100490f0, 0x1004a5a0, 0x1004ae30, 0x1004b530, 0x10097220, 0x1014d460
 */

char __thiscall CDlgMgr::SaveDialog(xercesc_2_5::AbstractDOMParser **this, struct CTYDialog *a2, int a3)
{
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  struct xercesc_2_5::DOMNode *v6; // edi
  int v7; // eax
  char v8; // [esp-1Ch] [ebp-50h] BYREF
  int v9; // [esp-18h] [ebp-4Ch]
  int v10; // [esp-14h] [ebp-48h]
  int v11; // [esp-10h] [ebp-44h]
  int v12; // [esp-Ch] [ebp-40h]
  int v13; // [esp-8h] [ebp-3Ch]
  int v14; // [esp-4h] [ebp-38h]
  _BYTE v15[20]; // [esp+Ch] [ebp-28h] BYREF
  int v16; // [esp+20h] [ebp-14h]
  int v17; // [esp+30h] [ebp-4h]

  std::string::string(v15, a3);
  v17 = 0;
  if ( !v16 )
    std::string::operator=(v15, &unk_11241CE8);
  if ( FindMedia((int)v15, (int)"Scripts", 0, 0)
    && (std::string::string(&v8, v15), XMLSystem::Load((int)(this + 9), v8, v9, v10, v11, v12, v13, v14)) )
  {
    Walker = XMLSystem::GetWalker(this + 9);
    v6 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
    v7 = (*(int (__thiscall **)(struct xercesc_2_5::DOMNode *))(*(_DWORD *)v6 + 20))(v6);
    (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7);
    CDlgMgr::WriteDlgData(this, v6, a2);
    std::string::string(&v8, v15);
    XMLSystem::Save((int)(this + 9), v8, v9, v10, v11, v12, v13, v14);
    XMLSystem::Destroy((XMLSystem *)(this + 9));
    v17 = -1;
    std::string::~string(v15);
    return 1;
  }
  else
  {
    v17 = -1;
    std::string::~string(v15);
    return 0;
  }
}
