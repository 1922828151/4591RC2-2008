/*
 * func-name: ?CreateControl@CDlgMgr@@IAEPAVCREControl@@PAVCTYDialog@@PAVDOMElement@xercesc_2_5@@@Z
 * func-address: 0x1014a540
 * callers: 0x1014a750, 0x1014c910, 0x1014cc50
 * callees: 0x100492d0, 0x100493a0, 0x10075e80, 0x10149420, 0x1014e8e0, 0x1014eba0, 0x1014f720, 0x1014f930, 0x101a2500, 0x101a28ec
 */

struct CREControl *__thiscall CDlgMgr::CreateControl(
        CDlgMgr *this,
        struct CTYDialog *a2,
        struct xercesc_2_5::DOMElement *a3)
{
  int v3; // edi
  int *v5; // eax
  GUISystem *v6; // ecx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebp
  int v10; // ebx
  const CHAR *v11; // eax
  int (__thiscall **v12)(struct xercesc_2_5::DOMElement *, WCHAR *); // esi
  WCHAR *v13; // eax
  int *v14; // eax
  char *v15; // esi
  int v16; // [esp+10h] [ebp-58h]
  int v17; // [esp+14h] [ebp-54h] BYREF
  void *v18; // [esp+18h] [ebp-50h]
  int v19; // [esp+1Ch] [ebp-4Ch]
  int v20; // [esp+20h] [ebp-48h]
  _BYTE v21[28]; // [esp+24h] [ebp-44h] BYREF
  _BYTE v22[28]; // [esp+40h] [ebp-28h] BYREF
  int v23; // [esp+64h] [ebp-4h]

  v3 = 0;
  if ( !a3 )
    return 0;
  v5 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                a3,
                L"Type");
  XMLSystem::GetString((int)v22, v5, 0);
  v23 = 0;
  GUISystem::GetControlFactory(v6);
  v7 = sub_1014EBA0(v22);
  if ( v7 )
  {
    v8 = _RTDynamicCast(v7, 0, &PropertyHolder `RTTI Type Descriptor', &CREControl `RTTI Type Descriptor', 0);
    v16 = v8;
    if ( v8 )
      *(_DWORD *)(v8 + 112) = a2;
    v18 = 0;
    v19 = 0;
    v20 = 0;
    LOBYTE(v23) = 1;
    sub_1014F720(&v17);
    v9 = 0;
    v10 = 0;
    while ( v18 && v9 < (v19 - (int)v18) / 68 )
    {
      if ( *(_DWORD *)((char *)v18 + v10 + 24) < 0x10u )
        v11 = (char *)v18 + v10 + 4;
      else
        v11 = *(const CHAR **)((char *)v18 + v10 + 4);
      v12 = (int (__thiscall **)(struct xercesc_2_5::DOMElement *, WCHAR *))(*(_DWORD *)a3 + 164);
      v13 = atow(v11);
      v14 = (int *)(*v12)(a3, v13);
      if ( v14 )
      {
        XMLSystem::GetStringW(v21, v14, 1);
        v15 = (char *)v18;
        LOBYTE(v23) = 2;
        if ( !v18 || v9 >= (v19 - (int)v18) / 68 )
        {
          invalid_parameter_noinfo();
          v15 = (char *)v18;
        }
        sub_1014F930(&v15[v10], v21);
        LOBYTE(v23) = 1;
        std::wstring::~wstring(v21);
      }
      ++v9;
      v10 += 68;
    }
    LOBYTE(v23) = 0;
    if ( v18 )
    {
      sub_1014E8E0(v18, v19);
      operator delete(v18);
    }
    v3 = v16;
    v18 = 0;
    v19 = 0;
    v20 = 0;
  }
  v23 = -1;
  std::string::~string(v22);
  return (struct CREControl *)v3;
}
