/*
 * func-name: ?AddDialogFromXML@CDlgMgr@@IAEPAVCTYDialog@@PAVDOMElement@xercesc_2_5@@@Z
 * func-address: 0x1014cc50
 * callers: 0x1014d2f0, 0x1014da70
 * callees: 0x100493a0, 0x100497b0, 0x10049910, 0x10049c70, 0x10049e00, 0x1007ec70, 0x100af0a0, 0x100b3510, 0x100baf70, 0x100ccaf0, 0x1014a540, 0x101a2534, 0x101a26c0
 */

struct CTYDialog *__thiscall CDlgMgr::AddDialogFromXML(CDlgMgr *this, struct xercesc_2_5::DOMElement *a2)
{
  CTYDialog *v2; // edi
  XMLSystem *v3; // ebp
  struct xercesc_2_5::DOMNode *v4; // eax
  int Int; // ebx
  CTYDialog *v6; // eax
  int (__thiscall *v7)(struct xercesc_2_5::DOMElement *, const wchar_t *); // edx
  int *v8; // eax
  int v9; // eax
  int *v10; // eax
  float *Vector2; // eax
  int v12; // edx
  int *v13; // eax
  char *StringW; // eax
  const wchar_t *v15; // eax
  struct xercesc_2_5::DOMNode *v16; // eax
  int *v17; // eax
  void *v18; // eax
  int *v19; // eax
  int *v20; // eax
  struct xercesc_2_5::DOMNode *v21; // eax
  struct xercesc_2_5::DOMNode *v22; // eax
  int v23; // ebx
  int v24; // esi
  unsigned int i; // ebx
  struct xercesc_2_5::DOMElement *v26; // ebp
  struct CREControl *Control; // eax
  float v30; // [esp+34h] [ebp-74h] BYREF
  float v31; // [esp+38h] [ebp-70h]
  float v32[2]; // [esp+3Ch] [ebp-6Ch] BYREF
  float v33[4]; // [esp+44h] [ebp-64h] BYREF
  _DWORD v34[4]; // [esp+54h] [ebp-54h] BYREF
  _BYTE v35[20]; // [esp+64h] [ebp-44h] BYREF
  int v36; // [esp+78h] [ebp-30h]
  _BYTE v37[28]; // [esp+80h] [ebp-28h] BYREF
  int v38; // [esp+A4h] [ebp-4h]

  v2 = 0;
  v3 = (CDlgMgr *)((char *)this + 36);
  v4 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                                        a2,
                                        L"DialogID");
  Int = XMLSystem::GetInt(v3, v4, 0);
  v6 = (CTYDialog *)operator new(0xF20u);
  v38 = 0;
  if ( v6 )
    v2 = CTYDialog::CTYDialog(v6);
  *((_DWORD *)v2 + 22) = Int;
  v7 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164);
  v38 = -1;
  v8 = (int *)v7(a2, L"Size");
  XMLSystem::GetVector2(&v30, v8, 0);
  v9 = (int)v31;
  *((_DWORD *)v2 + 175) = (int)v30;
  *((_DWORD *)v2 + 176) = v9;
  v10 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                 a2,
                 L"Location");
  Vector2 = XMLSystem::GetVector2(v32, v10, 0);
  v30 = *Vector2;
  v12 = *(_DWORD *)a2;
  v31 = Vector2[1];
  v13 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(v12 + 164))(a2, L"Caption");
  StringW = (char *)XMLSystem::GetStringW(v37, v13, 0);
  if ( *((_DWORD *)StringW + 6) < 8u )
    v15 = (const wchar_t *)(StringW + 4);
  else
    v15 = (const wchar_t *)*((_DWORD *)StringW + 1);
  wcsncpy((wchar_t *)v2 + 90, v15, 0x100u);
  *((_WORD *)v2 + 345) = 0;
  std::wstring::~wstring(v37);
  v16 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                                         a2,
                                         L"DlgType");
  *((_DWORD *)v2 + 959) = XMLSystem::GetInt(v3, v16, 0);
  v17 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                 a2,
                 L"DialogName");
  v18 = XMLSystem::GetStringW(v37, v17, 0);
  v38 = 1;
  std::wstring::operator=((char *)v2 + 3840, v18);
  v38 = -1;
  std::wstring::~wstring(v37);
  v19 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                 a2,
                 L"BackGround");
  XMLSystem::GetStringW(v35, v19, 0);
  v38 = 2;
  if ( v36 )
  {
    v20 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                   a2,
                   L"BackGroundPos");
    XMLSystem::GetVector4(v33, v20, 0);
    v34[0] = (int)v33[0];
    v34[1] = (int)v33[1];
    v34[2] = (int)v33[2];
    v34[3] = (int)v33[3];
    CREDialog::SetBackGroundPic((char *)v2, (int)v35, v34);
  }
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    v21 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                                           a2,
                                           L"InitOnStart");
    *((_BYTE *)v2 + 3770) = XMLSystem::GetBool(v3, v21, 0);
    v22 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164))(
                                           a2,
                                           L"Visible");
    *((_BYTE *)v2 + 3771) = XMLSystem::GetBool(v3, v22, 0);
  }
  v23 = (int)v31;
  *((_DWORD *)v2 + 173) = (int)v30;
  *((_DWORD *)v2 + 174) = v23;
  CTYDialog::MoveNestedDialog(v2);
  v24 = (*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 168))(a2, L"Control");
  for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v24 + 8))(v24); ++i )
  {
    v26 = (struct xercesc_2_5::DOMElement *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v24 + 4))(v24, i);
    if ( (*(unsigned __int16 (__thiscall **)(struct xercesc_2_5::DOMElement *))(*(_DWORD *)v26 + 12))(v26) == 1 )
    {
      Control = CDlgMgr::CreateControl(this, v2, v26);
      if ( Control )
        CREDialog::AddControl(v2, Control);
    }
  }
  v38 = -1;
  std::wstring::~wstring(v35);
  return v2;
}
