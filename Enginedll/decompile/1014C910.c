/*
 * func-name: ?FillControls@CDlgMgr@@QAE_NPAVCTYDialog@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1014c910
 * callers: 0x1015bad0
 * callees: 0x100490f0, 0x100493a0, 0x100497b0, 0x10049c70, 0x10049e00, 0x1004a5a0, 0x1004ae30, 0x10097220, 0x100b3510, 0x100baf70, 0x1014a540, 0x101a26c0
 */

char __thiscall CDlgMgr::FillControls(CDlgMgr *this, CREDialog *a2, int a3, int a4)
{
  int v5; // ebx
  xercesc_2_5::AbstractDOMParser **v6; // ebp
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v8; // eax
  int v9; // edi
  int v10; // esi
  int (__thiscall *v11)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v12; // eax
  int (__thiscall *v14)(int, const wchar_t *); // eax
  int *v15; // eax
  void *StringW; // eax
  int (__thiscall *v17)(int, const wchar_t *); // eax
  int *v18; // eax
  double v19; // st7
  int (__thiscall *v20)(int, const wchar_t *); // eax
  int *v21; // eax
  int (__thiscall *v22)(int, const wchar_t *); // eax
  int *v23; // eax
  int v24; // esi
  int (__thiscall *v25)(int); // eax
  struct xercesc_2_5::DOMElement *v26; // edi
  struct CREControl *Control; // eax
  int (__thiscall *v28)(int); // edx
  unsigned int v29; // edi
  char v30; // [esp-10h] [ebp-ACh] BYREF
  int v31; // [esp-Ch] [ebp-A8h]
  int v32; // [esp-8h] [ebp-A4h]
  int v33; // [esp-4h] [ebp-A0h]
  int v34; // [esp+0h] [ebp-9Ch]
  int v35; // [esp+4h] [ebp-98h]
  char *v36; // [esp+8h] [ebp-94h]
  char *v37; // [esp+1Ch] [ebp-80h]
  CDlgMgr *v38; // [esp+20h] [ebp-7Ch]
  float v39; // [esp+24h] [ebp-78h] BYREF
  float v40; // [esp+28h] [ebp-74h]
  float v41[4]; // [esp+2Ch] [ebp-70h] BYREF
  struct tagRECT rc; // [esp+3Ch] [ebp-60h] BYREF
  _BYTE v43[28]; // [esp+58h] [ebp-44h] BYREF
  _DWORD v44[7]; // [esp+74h] [ebp-28h] BYREF
  int v45; // [esp+98h] [ebp-4h]

  v38 = this;
  std::string::string(v43, a3);
  v5 = 0;
  v45 = 0;
  if ( !FindMedia((int)v43, (int)"Scripts", 0, 0) )
    goto LABEL_8;
  v37 = &v30;
  std::string::string(&v30, v43);
  v6 = (xercesc_2_5::AbstractDOMParser **)((char *)this + 36);
  if ( !XMLSystem::Load((int)v6, v30, v31, v32, v33, v34, v35, (int)v36) )
    goto LABEL_8;
  Walker = XMLSystem::GetWalker(v6);
  v8 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
  v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 20))(v8);
  (*(void (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9);
  if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9) )
  {
LABEL_7:
    XMLSystem::Destroy((XMLSystem *)v6);
LABEL_8:
    v45 = -1;
    std::string::~string(v43);
    return 0;
  }
  while ( 1 )
  {
    v10 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v9 + 4))(v9, v5);
    if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v10 + 12))(v10) == 1 )
    {
      v11 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v10 + 164);
      v36 = 0;
      v12 = (struct xercesc_2_5::DOMNode *)v11(v10, L"DialogID");
      if ( XMLSystem::GetInt((XMLSystem *)v6, v12, v36) == a4 )
        break;
    }
    if ( ++v5 >= (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v9 + 8))(v9) )
      goto LABEL_7;
  }
  v14 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v10 + 164);
  v36 = 0;
  v15 = (int *)v14(v10, L"DialogName");
  StringW = XMLSystem::GetStringW(&rc, v15, (char)v36);
  LOBYTE(v45) = 1;
  std::wstring::operator=((char *)a2 + 3840, StringW);
  LOBYTE(v45) = 0;
  std::wstring::~wstring(&rc);
  v17 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v10 + 164);
  v36 = 0;
  v18 = (int *)v17(v10, L"Size");
  XMLSystem::GetVector2(&v39, v18, v36);
  if ( v39 > 0.0 )
  {
    v19 = v40;
    goto LABEL_20;
  }
  v19 = v40;
  if ( v40 > 0.0 )
  {
LABEL_20:
    *((_DWORD *)a2 + 175) = (int)v39;
    *((_DWORD *)a2 + 176) = (int)v19;
  }
  v20 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v10 + 164);
  v36 = 0;
  v21 = (int *)v20(v10, L"BackGround");
  XMLSystem::GetStringW(v44, v21, (char)v36);
  LOBYTE(v45) = 2;
  if ( v44[5] )
  {
    v22 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v10 + 164);
    v36 = 0;
    v23 = (int *)v22(v10, L"BackGroundPos");
    XMLSystem::GetVector4(v41, v23, v36);
    SetRect(&rc, (int)v41[0], (int)v41[1], (int)v41[2], (int)v41[3]);
    CREDialog::SetBackGroundPic((char *)a2, (int)v44, &rc);
  }
  v24 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 20))(v10);
  (*(void (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24);
  v25 = *(int (__thiscall **)(int))(*(_DWORD *)v24 + 8);
  v37 = 0;
  if ( v25(v24) )
  {
    do
    {
      v26 = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(int, char *))(*(_DWORD *)v24 + 4))(v24, v37);
      if ( (*(unsigned __int16 (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)v26 + 12))(v26) == 1 )
      {
        Control = CDlgMgr::CreateControl(v38, a2, v26);
        if ( Control )
          CREDialog::AddControl(a2, Control);
      }
      v28 = *(int (__thiscall **)(int))(*(_DWORD *)v24 + 8);
      v29 = (unsigned int)++v37;
    }
    while ( v29 < v28(v24) );
  }
  XMLSystem::Destroy((XMLSystem *)v6);
  LOBYTE(v45) = 0;
  std::wstring::~wstring(v44);
  v45 = -1;
  std::string::~string(v43);
  return 1;
}
