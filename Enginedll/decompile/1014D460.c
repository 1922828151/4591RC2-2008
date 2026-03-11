/*
 * func-name: ?WriteDlgData@CDlgMgr@@IAE_NPAVDOMNode@xercesc_2_5@@PAVCTYDialog@@@Z
 * func-address: 0x1014d460
 * callers: 0x1014d940
 * callees: 0x100497b0, 0x1004a170, 0x1004a1f0, 0x1004a340, 0x1004a380, 0x1004a5a0, 0x10069780, 0x10069980, 0x1006b6c0, 0x1007ec70, 0x100a78a0, 0x100a9bb0, 0x1014c730, 0x101a251c
 */

char __thiscall CDlgMgr::WriteDlgData(
        xercesc_2_5::AbstractDOMParser **this,
        struct xercesc_2_5::DOMNode *a2,
        struct CTYDialog *a3)
{
  XMLSystem *v3; // edi
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  int v5; // eax
  int v6; // ebp
  int v7; // ebx
  struct xercesc_2_5::DOMNode *v8; // eax
  struct xercesc_2_5::DOMNode *Node; // ebp
  char *DlgName; // eax
  bool v12; // cf
  const unsigned __int16 *v13; // ebx
  int CaptionText; // eax
  int v15; // eax
  bool v16; // bl
  char *BackGroundPicFileName; // eax
  const unsigned __int16 *v18; // ebx
  int v19; // ebx
  int v20; // edi
  struct CREControl *ControlAtIndex; // eax
  bool Visible; // [esp-8h] [ebp-ACh]
  int v23; // [esp+10h] [ebp-94h]
  unsigned int i; // [esp+10h] [ebp-94h]
  bool v25[4]; // [esp+14h] [ebp-90h]
  int v26; // [esp+18h] [ebp-8Ch]
  int v27; // [esp+18h] [ebp-8Ch]
  _BYTE v29[28]; // [esp+20h] [ebp-84h] BYREF
  char Buffer[64]; // [esp+3Ch] [ebp-68h] BYREF
  _BYTE v31[28]; // [esp+7Ch] [ebp-28h] BYREF
  int v32; // [esp+A0h] [ebp-4h]

  v3 = (XMLSystem *)(this + 9);
  v26 = *((_DWORD *)a3 + 22);
  Walker = XMLSystem::GetWalker(this + 9);
  v5 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)Walker + 4))(Walker);
  v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 20))(v5);
  (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6);
  v23 = 0;
  if ( (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) )
  {
    while ( 1 )
    {
      v7 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v6 + 4))(v6, v23);
      if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)v7 + 12))(v7) == 1 )
      {
        v8 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v7 + 164))(
                                              v7,
                                              L"DialogID");
        if ( XMLSystem::GetInt(v3, v8, 0) == v26 )
          break;
      }
      if ( ++v23 >= (unsigned int)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 8))(v6) )
        goto LABEL_5;
    }
    Node = (struct xercesc_2_5::DOMNode *)v7;
    v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
    for ( i = 0; i < (*(int (__thiscall **)(int))(*(_DWORD *)v27 + 8))(v27); ++i )
    {
      *(_DWORD *)v25 = (*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v27 + 4))(v27, i);
      if ( (*(unsigned __int16 (__thiscall **)(bool *))(**(_DWORD **)v25 + 12))(*(bool **)v25) == 1 )
        (*(void (__thiscall **)(int, bool *))(*(_DWORD *)v7 + 60))(v7, *(bool **)v25);
    }
  }
  else
  {
LABEL_5:
    Node = XMLSystem::CreateNode(v3, a2, "Dialog");
    if ( !Node )
      return 0;
  }
  XMLSystem::Attrib(v3, "InitOnStart", *((_BYTE *)a3 + 3770), Node);
  DlgName = (char *)CTYDialog::GetDlgName((int)a3, v29);
  v12 = *((_DWORD *)DlgName + 6) < 8u;
  v32 = 0;
  if ( v12 )
    v13 = (const unsigned __int16 *)(DlgName + 4);
  else
    v13 = (const unsigned __int16 *)*((_DWORD *)DlgName + 1);
  memset(MultiByteStr, 0, sizeof(MultiByteStr));
  dword_11242514 = wcslen(v13);
  dword_11242510 = WideCharToMultiByte(0, 0, v13, dword_11242514, MultiByteStr, 1024, 0, 0);
  MultiByteStr[dword_11242510] = 0;
  XMLSystem::Attrib(v3, "DialogName", MultiByteStr, Node);
  v32 = -1;
  std::wstring::~wstring(v29);
  XMLSystem::Attrib(v3, "DialogID", *((_DWORD *)a3 + 22), Node);
  XMLSystem::Attrib(v3, "DlgType", *((_DWORD *)a3 + 959), Node);
  XMLSystem::Attrib(v3, "DialogID", *((_DWORD *)a3 + 22), Node);
  if ( *((_BYTE *)Editor::Instance() + 2056) )
  {
    XMLSystem::Attrib(v3, "Visible", *((_BYTE *)a3 + 3771), Node);
  }
  else
  {
    Visible = CTYDialog::GetVisible(a3);
    XMLSystem::Attrib(v3, "Visible", Visible, Node);
  }
  CaptionText = CREDialog::GetCaptionText((char *)a3, (int)v29);
  v12 = *(_DWORD *)(CaptionText + 24) < 8u;
  v32 = 1;
  if ( v12 )
    v15 = CaptionText + 4;
  else
    v15 = *(_DWORD *)(CaptionText + 4);
  XMLSystem::Attrib(v3, "Caption", v15 != 0, Node);
  v32 = -1;
  std::wstring::~wstring(v29);
  memset(Buffer, 0, sizeof(Buffer));
  sprintf(Buffer, "%d %d", *((_DWORD *)a3 + 175), *((_DWORD *)a3 + 176));
  XMLSystem::Attrib(v3, "Size", Buffer, Node);
  memset(Buffer, 0, sizeof(Buffer));
  sprintf(Buffer, "%d %d", *((_DWORD *)a3 + 173), *((_DWORD *)a3 + 174));
  XMLSystem::Attrib(v3, "Location", Buffer, Node);
  v16 = *((_DWORD *)CREDialog::GetBackGroundPicFileName((int)a3, v29) + 5) != 0;
  std::wstring::~wstring(v29);
  if ( v16 )
  {
    BackGroundPicFileName = (char *)CREDialog::GetBackGroundPicFileName((int)a3, v31);
    v12 = *((_DWORD *)BackGroundPicFileName + 6) < 8u;
    v32 = 2;
    if ( v12 )
      v18 = (const unsigned __int16 *)(BackGroundPicFileName + 4);
    else
      v18 = (const unsigned __int16 *)*((_DWORD *)BackGroundPicFileName + 1);
    memset(MultiByteStr, 0, sizeof(MultiByteStr));
    dword_11242514 = wcslen(v18);
    dword_11242510 = WideCharToMultiByte(0, 0, v18, dword_11242514, MultiByteStr, 1024, 0, 0);
    MultiByteStr[dword_11242510] = 0;
    XMLSystem::Attrib(v3, "BackGround", MultiByteStr, Node);
    v32 = -1;
    std::wstring::~wstring(v31);
    memset(Buffer, 0, sizeof(Buffer));
    sprintf(
      Buffer,
      "%d %d %d %d",
      *((_DWORD *)a3 + 33),
      *((_DWORD *)a3 + 34),
      *((_DWORD *)a3 + 35),
      *((_DWORD *)a3 + 36));
    XMLSystem::Attrib(v3, "BackGroundPos", Buffer, Node);
  }
  else
  {
    XMLSystem::Attrib(v3, "BackGround", &byte_101CC933, Node);
    XMLSystem::Attrib(v3, "BackGroundPos", "0 0 0 0", Node);
  }
  v19 = *((_DWORD *)a3 + 192);
  v20 = 0;
  if ( v19 > 0 )
  {
    while ( 1 )
    {
      ControlAtIndex = CREDialog::GetControlAtIndex(a3, v20);
      if ( ControlAtIndex )
      {
        if ( !CDlgMgr::WriteControl((CDlgMgr *)this, Node, ControlAtIndex) )
          break;
      }
      if ( ++v20 >= v19 )
        return 1;
    }
    return 0;
  }
  return 1;
}
