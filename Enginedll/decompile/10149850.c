/*
 * func-name: ?SaveAttrib@CDlgMgr@@QAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0PAVXMLSystem@@PAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x10149850
 * callers: none
 * callees: 0x1004a1f0, 0x10149480
 */

int __stdcall CDlgMgr::SaveAttrib(int a1, int a2, XMLSystem *a3, struct xercesc_2_5::DOMNode *a4)
{
  const WCHAR *v4; // eax
  CHAR *v5; // eax
  bool v6; // cf
  const WCHAR *v7; // eax
  CHAR *v8; // eax
  const char *v9; // ecx
  char *v10; // eax
  _BYTE v12[4]; // [esp+0h] [ebp-44h] BYREF
  char *v13[6]; // [esp+4h] [ebp-40h] BYREF
  _BYTE v14[4]; // [esp+1Ch] [ebp-28h] BYREF
  char *v15[6]; // [esp+20h] [ebp-24h] BYREF
  int v16; // [esp+40h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 24) < 8u )
    v4 = (const WCHAR *)(a1 + 4);
  else
    v4 = *(const WCHAR **)(a1 + 4);
  v5 = wtoa(v4);
  std::string::string(v14, v5);
  v6 = *(_DWORD *)(a2 + 24) < 8u;
  v16 = 0;
  if ( v6 )
    v7 = (const WCHAR *)(a2 + 4);
  else
    v7 = *(const WCHAR **)(a2 + 4);
  v8 = wtoa(v7);
  std::string::string(v12, v8);
  v9 = v13[0];
  LOBYTE(v16) = 1;
  if ( v13[5] < (char *)0x10 )
    v9 = (const char *)v13;
  v10 = v15[0];
  if ( v15[5] < (char *)0x10 )
    v10 = (char *)v15;
  XMLSystem::Attrib(a3, v10, v9, a4);
  LOBYTE(v16) = 0;
  std::string::~string(v12);
  v16 = -1;
  return std::string::~string(v14);
}
