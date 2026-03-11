/*
 * func-name: ?_loadFlyweight@FlyweightManager@GameClient@@IAE_NAAVXMLSystem@@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x1022e1f0
 * callers: 0x10018ec1
 * callees: 0x100028dd, 0x10003fe9, 0x10007545, 0x1000ab4b, 0x1000e944, 0x10015e60, 0x102c33f0, 0x102c4300, 0x102c9d62, 0x102c9ea8
 */

char __thiscall GameClient::FlyweightManager::_loadFlyweight(void *this, XMLSystem *a2, int a3)
{
  struct xercesc_2_5::DOMTreeWalker *Walker; // eax
  xercesc_2_5::AbstractDOMParser *v4; // ecx
  struct xercesc_2_5::DOMTreeWalker *v5; // edi
  struct DOMDocument *Document; // eax
  int v7; // eax
  int v8; // esi
  int FirstNode; // esi
  int v10; // eax
  int v11; // esi
  int v12; // eax
  int (__thiscall *v13)(int, const wchar_t *, _DWORD); // eax
  int v14; // eax
  int (__thiscall *v15)(int, const wchar_t *, _DWORD); // eax
  struct xercesc_2_5::DOMNode *v16; // eax
  struct xercesc_2_5::DOMNode *v17; // eax
  int Int; // eax
  int v19; // esi
  int v20; // eax
  int v22; // eax
  int *v23; // esi
  int v24; // esi
  int k; // esi
  int v26; // eax
  int (__thiscall *v27)(int, const wchar_t *, _DWORD); // eax
  int v28; // eax
  int (__thiscall *v29)(struct xercesc_2_5::DOMTreeWalker *); // eax
  int i; // esi
  int v31; // eax
  int v32; // ebp
  int v33; // edi
  int v34; // eax
  int (__thiscall **v35)(int, int); // edi
  int v36; // eax
  int j; // eax
  int v38; // edi
  int v39; // eax
  int (__thiscall **v40)(int, int); // edi
  int v41; // eax
  int v42; // [esp+D8h] [ebp-184h] BYREF
  int v43; // [esp+DCh] [ebp-180h]
  int v44; // [esp+E0h] [ebp-17Ch]
  int v45; // [esp+E4h] [ebp-178h]
  int v46; // [esp+E8h] [ebp-174h]
  int v47; // [esp+ECh] [ebp-170h]
  char *v48; // [esp+F0h] [ebp-16Ch]
  bool v49; // [esp+F4h] [ebp-168h]
  int *v50; // [esp+108h] [ebp-154h]
  void *v51; // [esp+10Ch] [ebp-150h]
  _DWORD v52[2]; // [esp+110h] [ebp-14Ch] BYREF
  int *v53; // [esp+118h] [ebp-144h]
  struct xercesc_2_5::DOMTreeWalker *v54; // [esp+11Ch] [ebp-140h]
  int v55[4]; // [esp+120h] [ebp-13Ch] BYREF
  _BYTE v56[28]; // [esp+130h] [ebp-12Ch] BYREF
  _BYTE v57[28]; // [esp+14Ch] [ebp-110h] BYREF
  _BYTE v58[28]; // [esp+168h] [ebp-F4h] BYREF
  int *v59; // [esp+184h] [ebp-D8h]
  char v60[4]; // [esp+188h] [ebp-D4h] BYREF
  char v61[24]; // [esp+18Ch] [ebp-D0h] BYREF
  _BYTE v62[28]; // [esp+1A4h] [ebp-B8h] BYREF
  char v63[4]; // [esp+1C0h] [ebp-9Ch] BYREF
  int v64[6]; // [esp+1C4h] [ebp-98h] BYREF
  char v65[4]; // [esp+1DCh] [ebp-80h] BYREF
  char v66[24]; // [esp+1E0h] [ebp-7Ch] BYREF
  int v67; // [esp+1F8h] [ebp-64h] BYREF
  char v68[24]; // [esp+1FCh] [ebp-60h] BYREF
  _BYTE v69[28]; // [esp+214h] [ebp-48h] BYREF
  char v70[4]; // [esp+230h] [ebp-2Ch] BYREF
  char v71[24]; // [esp+234h] [ebp-28h] BYREF
  int v72; // [esp+258h] [ebp-4h]

  v51 = this;
  v52[0] = a3;
  Walker = XMLSystem::GetWalker(a2);
  v4 = (xercesc_2_5::AbstractDOMParser *)*((_DWORD *)a2 + 22);
  v5 = Walker;
  v54 = Walker;
  Document = xercesc_2_5::AbstractDOMParser::getDocument(v4);
  v7 = (*(int (__thiscall **)(struct DOMDocument *))(*(_DWORD *)Document + 48))(Document);
  (*(void (__thiscall **)(int))(*(_DWORD *)v7 + 20))(v7);
  v8 = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)v5 + 4))(v5);
  v50 = &v42;
  v53 = (int *)v8;
  std::string::string(&v42, "FileInfo");
  FirstNode = XMLSystem::FindFirstNode(a2, v8, v42, v43, v44, v45, v46, v47, v48);
  if ( !FirstNode )
    return 0;
  v50 = &v42;
  std::string::string(&v42, "Info");
  v10 = XMLSystem::FindFirstNode(a2, FirstNode, v42, v43, v44, v45, v46, v47, v48);
  v11 = v10;
  if ( !v10
    || !(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v10 + 164))(v10, L"ClassName")
    || !(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v11 + 164))(v11, L"ObjectName")
    || !(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v11 + 164))(v11, L"ClassID")
    || !(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v11 + 164))(v11, L"ObjectID") )
  {
    return 0;
  }
  v12 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v11 + 164))(v11, L"ClassName", 0);
  XMLSystem::GetString(a2, v64, v12);
  v13 = *(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v11 + 164);
  v72 = 0;
  v14 = v13(v11, L"ObjectName", 0);
  XMLSystem::GetString(a2, v61, v14);
  v15 = *(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v11 + 164);
  LOBYTE(v72) = 1;
  v16 = (struct xercesc_2_5::DOMNode *)v15(v11, L"ClassID", 0);
  XMLSystem::GetInt(a2, v16, v49);
  v17 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v11 + 164))(
                                         v11,
                                         L"ObjectID",
                                         0);
  Int = XMLSystem::GetInt(a2, v17, v49);
  v48 = v63;
  v19 = Int;
  GameClient::LogicFactory::Instance();
  v20 = GameClient::LogicFactory::create((int)v48);
  v50 = (int *)v20;
  if ( !v20 )
    goto LABEL_8;
  v48 = 0;
  v22 = _RTDynamicCast(v20, 0, &SerializeObject `RTTI Type Descriptor', &GameClient::Flyweight `RTTI Type Descriptor');
  if ( !v22 )
    goto LABEL_8;
  v48 = (char *)v52[0];
  *(_DWORD *)(v22 + 48) = v19;
  std::string::operator=(v22 + 52, v48);
  v52[0] = v19;
  v23 = v50;
  v52[1] = v50;
  sub_10007545((int)v55, (int)v52);
  std::string::string(v58, v60);
  v59 = v23;
  LOBYTE(v72) = 2;
  sub_10015E60((int)v55, v58);
  LOBYTE(v72) = 1;
  std::string::~string(v58);
  v52[0] = &v42;
  std::string::string(&v42, "FileData");
  v24 = XMLSystem::FindFirstNode(a2, v53, v42, v43, v44, v45, v46, v47, v48);
  if ( !v24 )
  {
LABEL_8:
    LOBYTE(v72) = 0;
    std::string::~string(v60);
    v72 = -1;
    std::string::~string(v63);
    return 0;
  }
  v53 = &v42;
  std::string::string(&v42, "DataInfo");
  k = XMLSystem::FindFirstNode(a2, v24, v42, v43, v44, v45, v46, v47, v48);
  if ( k )
  {
    (*(void (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *, int))(*(_DWORD *)v5 + 52))(v5, k);
    do
    {
      v26 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)k + 164))(k, L"DataName", 0);
      XMLSystem::GetString(a2, v66, v26);
      v27 = *(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)k + 164);
      LOBYTE(v72) = 3;
      v28 = v27(k, L"DataType", 0);
      XMLSystem::GetString(a2, v68, v28);
      v29 = *(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)v5 + 40);
      LOBYTE(v72) = 4;
      for ( i = v29(v5); i; i = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)v5 + 40))(v5) )
      {
        if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)i + 12))(i) == 1 )
          break;
      }
      XMLSystem::GetName(a2, v58, i);
      LOBYTE(v72) = 5;
      if ( (unsigned __int8)std::operator==<char>(v58, "NormalData") )
      {
        v31 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)i + 164))(i, L"data", 0);
        XMLSystem::GetString(a2, v71, v31);
        LOBYTE(v72) = 6;
        sub_102C33F0(v65, &v67, v70);
        LOBYTE(v72) = 5;
        std::string::~string(v70);
      }
      else
      {
        memset(&v55[1], 0, 12);
        v32 = 1;
        LOBYTE(v72) = 7;
        _itow(1, &Buffer, 10);
        v33 = std::wstring::wstring(v56, &Buffer);
        LOBYTE(v72) = 8;
        v34 = std::wstring::wstring(v57, L"data");
        LOBYTE(v72) = 9;
        std::operator+<wchar_t>(v62, v34, v33);
        LOBYTE(v72) = 11;
        std::wstring::~wstring(v57);
        LOBYTE(v72) = 12;
        std::wstring::~wstring(v56);
        v35 = (int (__thiscall **)(int, int))(*(_DWORD *)i + 164);
        v36 = std::wstring::c_str(v62);
        for ( j = (*v35)(i, v36); j; j = (*v40)(i, v41) )
        {
          v48 = 0;
          XMLSystem::GetString(a2, v69, j);
          LOBYTE(v72) = 13;
          sub_1000AB4B(v55, v69);
          LOBYTE(v72) = 12;
          std::string::~string(v69);
          LOBYTE(v72) = 7;
          std::wstring::~wstring(v62);
          _itow(++v32, &Buffer, 10);
          v38 = std::wstring::wstring(v56, &Buffer);
          LOBYTE(v72) = 8;
          v39 = std::wstring::wstring(v57, L"data");
          LOBYTE(v72) = 9;
          std::operator+<wchar_t>(v62, v39, v38);
          LOBYTE(v72) = 11;
          std::wstring::~wstring(v57);
          LOBYTE(v72) = 12;
          std::wstring::~wstring(v56);
          v40 = (int (__thiscall **)(int, int))(*(_DWORD *)i + 164);
          v41 = std::wstring::c_str(v62);
        }
        LOBYTE(v72) = 7;
        std::wstring::~wstring(v62);
        sub_102C4300(v65, &v67, v55);
        LOBYTE(v72) = 5;
        sub_10003FE9();
        v5 = v54;
      }
      for ( k = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)v5 + 40))(v5);
            k;
            k = (*(int (__thiscall **)(struct xercesc_2_5::DOMTreeWalker *))(*(_DWORD *)v5 + 40))(v5) )
      {
        if ( (*(unsigned __int16 (__thiscall **)(int))(*(_DWORD *)k + 12))(k) == 1 )
          break;
      }
      LOBYTE(v72) = 4;
      std::string::~string(v58);
      LOBYTE(v72) = 3;
      std::string::~string(&v67);
      LOBYTE(v72) = 1;
      std::string::~string(v65);
    }
    while ( k );
  }
  LOBYTE(v72) = 0;
  std::string::~string(v60);
  v72 = -1;
  std::string::~string(v63);
  return 1;
}
