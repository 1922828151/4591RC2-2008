/*
 * func-name: ?CreateDlgFromXML@CDlgMgr@@QAEPAVCTYDialog@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1014d2f0
 * callers: none
 * callees: 0x100490f0, 0x100497b0, 0x1004a5a0, 0x1004ae30, 0x10097220, 0x1014cc50
 */

struct CTYDialog *__thiscall CDlgMgr::CreateDlgFromXML(CDlgMgr *this, int a2, int a3)
{
  int v4; // ebx
  xercesc_2_5::AbstractDOMParser **v5; // ebp
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v7; // eax
  int v8; // edi
  struct xercesc_2_5::DOMElement *v9; // esi
  int (__thiscall *v10)(struct xercesc_2_5::DOMElement *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v11; // eax
  struct CTYDialog *v12; // esi
  char v14; // [esp-1Ch] [ebp-58h] BYREF
  int v15; // [esp-18h] [ebp-54h]
  int v16; // [esp-14h] [ebp-50h]
  int v17; // [esp-10h] [ebp-4Ch]
  int v18; // [esp-Ch] [ebp-48h]
  int v19; // [esp-8h] [ebp-44h]
  char *v20; // [esp-4h] [ebp-40h]
  CDlgMgr *v21; // [esp+10h] [ebp-2Ch]
  _BYTE v22[28]; // [esp+14h] [ebp-28h] BYREF
  int v23; // [esp+38h] [ebp-4h]

  v21 = this;
  std::string::string(v22, a2);
  v4 = 0;
  v23 = 0;
  if ( !FindMedia((int)v22, (int)"Scripts", 0, 0) )
    goto LABEL_9;
  std::string::string(&v14, v22);
  v5 = (xercesc_2_5::AbstractDOMParser **)((char *)this + 36);
  if ( !XMLSystem::Load((int)v5, v14, v15, v16, v17, v18, v19, (int)v20) )
    goto LABEL_9;
  Walker = XMLSystem::GetWalker(v5);
  v7 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
  v8 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
  (*(void (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
  {
LABEL_8:
    XMLSystem::Destroy((XMLSystem *)v5);
LABEL_9:
    v23 = -1;
    std::string::~string(v22);
    return 0;
  }
  while ( 1 )
  {
    v9 = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(int, int))(*(_DWORD *)v8 + 4))(v8, v4);
    if ( (*(unsigned __int16 (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)v9 + 12))(v9) == 1 )
    {
      v10 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)v9 + 164);
      v20 = 0;
      v11 = (struct xercesc_2_5::DOMNode *)v10(v9, L"DialogID");
      if ( XMLSystem::GetInt((XMLSystem *)v5, v11, v20) == a3 )
      {
        v12 = CDlgMgr::AddDialogFromXML(v21, v9);
        if ( v12 )
          break;
      }
    }
    if ( ++v4 >= (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8) )
      goto LABEL_8;
  }
  XMLSystem::Destroy((XMLSystem *)v5);
  v23 = -1;
  std::string::~string(v22);
  return v12;
}
