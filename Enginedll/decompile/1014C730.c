/*
 * func-name: ?WriteControl@CDlgMgr@@IAE_NPAVDOMElement@xercesc_2_5@@PAVCREControl@@@Z
 * func-address: 0x1014c730
 * callers: 0x1014d460
 * callees: 0x1004a170, 0x1004a1f0, 0x10149480, 0x1014e8e0, 0x1014f720, 0x1014f9e0, 0x101a2500
 */

char __thiscall CDlgMgr::WriteControl(CDlgMgr *this, struct xercesc_2_5::DOMElement *a2, struct CREControl *a3)
{
  XMLSystem *v3; // esi
  struct xercesc_2_5::DOMNode *Node; // ecx
  const char *v6; // eax
  unsigned int v7; // edi
  int v8; // ebx
  char *v9; // esi
  const WCHAR *v10; // ebp
  char *v11; // esi
  char *v12; // esi
  CHAR *v13; // eax
  XMLSystem *v14; // [esp+8h] [ebp-3Ch]
  _BYTE v15[4]; // [esp+Ch] [ebp-38h] BYREF
  void *v16; // [esp+10h] [ebp-34h]
  int v17; // [esp+14h] [ebp-30h]
  int v18; // [esp+18h] [ebp-2Ch]
  _BYTE v19[4]; // [esp+1Ch] [ebp-28h] BYREF
  LPCWCH lpWideCharStr[6]; // [esp+20h] [ebp-24h] BYREF
  int v21; // [esp+40h] [ebp-4h]
  struct xercesc_2_5::DOMNode *v22; // [esp+48h] [ebp+4h]

  v3 = (CDlgMgr *)((char *)this + 36);
  v14 = (CDlgMgr *)((char *)this + 36);
  Node = XMLSystem::CreateNode((CDlgMgr *)((char *)this + 36), a2, "Control");
  v22 = Node;
  if ( !Node )
    return 0;
  if ( *((_DWORD *)a3 + 10) < 0x10u )
    v6 = (char *)a3 + 20;
  else
    v6 = (const char *)*((_DWORD *)a3 + 5);
  XMLSystem::Attrib(v3, "Type", v6, Node);
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v21 = 0;
  sub_1014F720(v15);
  v7 = 0;
  v8 = 0;
  while ( v16 && v7 < (v17 - (int)v16) / 68 )
  {
    std::wstring::wstring(v19);
    v9 = (char *)v16;
    LOBYTE(v21) = 1;
    if ( !v16 || v7 >= (v17 - (int)v16) / 68 )
    {
      invalid_parameter_noinfo();
      v9 = (char *)v16;
    }
    if ( (unsigned __int8)sub_1014F9E0(&v9[v8], v19) )
    {
      v10 = lpWideCharStr[0];
      if ( lpWideCharStr[5] < (LPCWCH)8 )
        v10 = (const WCHAR *)lpWideCharStr;
      v11 = (char *)v16;
      if ( !v16 || v7 >= (v17 - (int)v16) / 68 )
      {
        invalid_parameter_noinfo();
        v11 = (char *)v16;
      }
      if ( *(_DWORD *)&v11[v8 + 24] < 0x10u )
        v12 = &v11[v8 + 4];
      else
        v12 = *(char **)&v11[v8 + 4];
      v13 = wtoa(v10);
      XMLSystem::Attrib(v14, v12, v13, v22);
    }
    LOBYTE(v21) = 0;
    std::wstring::~wstring(v19);
    ++v7;
    v8 += 68;
  }
  v21 = -1;
  if ( v16 )
  {
    sub_1014E8E0(v16, v17);
    operator delete(v16);
  }
  return 1;
}
