/*
 * func-name: ?ReadParameter@XMLSystem@@QAEXHPAVDOMNode@xercesc_2_5@@@Z
 * func-address: 0x1004bcb0
 * callers: 0x10038ca0, 0x10045740
 * callees: 0x100116a0, 0x10016f70, 0x100492d0, 0x100497b0, 0x10049860, 0x10049910, 0x10049a00, 0x1004a5e0, 0x1004c080, 0x10097800, 0x101a24ac, 0x101a2500, 0x101a2534
 */

void __thiscall XMLSystem::ReadParameter(XMLSystem *this, int a2, struct xercesc_2_5::DOMNode *a3)
{
  int *v4; // eax
  int (__thiscall *v5)(struct xercesc_2_5::DOMNode *, const wchar_t *); // eax
  int *v6; // eax
  struct xercesc_2_5::DOMNode *v7; // edi
  const char *v8; // eax
  int v9; // esi
  float *v10; // esi
  float v11; // ecx
  float v12; // edx
  int String; // eax
  int FirstNode; // edi
  int (__thiscall *v15)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v16; // eax
  int Int; // ebx
  _DWORD *v18; // eax
  int v19; // esi
  int v20; // eax
  const wchar_t *v21; // eax
  int (__thiscall *v22)(int, wchar_t *); // edx
  int *v23; // eax
  void *v24; // eax
  char v25; // [esp-1Ch] [ebp-FCh] BYREF
  int v26; // [esp-18h] [ebp-F8h]
  int v27; // [esp-14h] [ebp-F4h]
  int v28; // [esp-10h] [ebp-F0h]
  int v29; // [esp-Ch] [ebp-ECh]
  int v30; // [esp-8h] [ebp-E8h]
  char *v31; // [esp-4h] [ebp-E4h]
  int v32; // [esp+14h] [ebp-CCh]
  int v33; // [esp+18h] [ebp-C8h]
  float v34[3]; // [esp+1Ch] [ebp-C4h] BYREF
  _BYTE v35[28]; // [esp+28h] [ebp-B8h] BYREF
  _BYTE v36[28]; // [esp+44h] [ebp-9Ch] BYREF
  _BYTE v37[28]; // [esp+60h] [ebp-80h] BYREF
  _BYTE v38[28]; // [esp+7Ch] [ebp-64h] BYREF
  wchar_t Destination[30]; // [esp+98h] [ebp-48h] BYREF
  int v40; // [esp+DCh] [ebp-4h]

  v4 = (int *)(*(int (__thiscall **)(struct xercesc_2_5::DOMNode *, const wchar_t *))(*(_DWORD *)a3 + 164))(a3, L"Name");
  XMLSystem::GetString((int)v37, v4, 0);
  v5 = *(int (__thiscall **)(struct xercesc_2_5::DOMNode *, const wchar_t *))(*(_DWORD *)a3 + 164);
  v40 = 0;
  v6 = (int *)v5(a3, L"Type");
  XMLSystem::GetString((int)v35, v6, 0);
  LOBYTE(v40) = 1;
  v7 = 0;
  if ( !(unsigned __int8)std::operator!=<char>(v35, "StringArray")
    || (v7 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(struct xercesc_2_5::DOMNode *, const wchar_t *))(*(_DWORD *)a3 + 164))(
                                              a3,
                                              L"Value")) != 0 )
  {
    v33 = (int)&v25;
    std::string::string(&v25, v35);
    v9 = EditorVar::FromString(v25);
    HIBYTE(v32) = 0;
    std::string::string(v38);
    LOBYTE(v40) = 2;
    switch ( v9 )
    {
      case 1:
        v10 = (float *)operator new(2u);
        LOBYTE(v33) = XMLSystem::GetBool(this, v7, 0);
        *(_WORD *)v10 = v33;
        break;
      case 2:
        v10 = (float *)operator new(4u);
        *(_DWORD *)v10 = XMLSystem::GetInt(this, v7, 0);
        break;
      case 3:
        v10 = (float *)operator new(4u);
        *v10 = XMLSystem::GetFloat(this, v7, 0);
        break;
      case 4:
        goto LABEL_10;
      case 5:
        v10 = (float *)operator new(0xCu);
        XMLSystem::GetVector(v34, (int *)v7, 0);
        v11 = v34[1];
        v12 = v34[2];
        *v10 = v34[0];
        v10[1] = v11;
        v10[2] = v12;
        break;
      case 6:
        goto LABEL_10;
      case 11:
        String = XMLSystem::GetString((int)v36, (int *)v7, 0);
        LOBYTE(v40) = 3;
        std::string::operator=(v38, String);
        LOBYTE(v40) = 2;
        std::string::~string(v36);
        v10 = (float *)std::string::c_str(v38);
        HIBYTE(v32) = 1;
        break;
      case 13:
        v33 = (int)&v25;
        std::string::string(&v25, "Value");
        FirstNode = XMLSystem::FindFirstNode((int)a3, v25, v26, v27, v28, v29, v30, (int)v31);
        v15 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
        v31 = 0;
        v16 = (struct xercesc_2_5::DOMNode *)v15(FirstNode, L"Count");
        Int = XMLSystem::GetInt(this, v16, v31);
        v18 = operator new(0x10u);
        v19 = 0;
        if ( v18 )
        {
          v18[1] = 0;
          v18[2] = 0;
          v18[3] = 0;
          v33 = (int)v18;
        }
        else
        {
          v33 = 0;
        }
        LOBYTE(v40) = 2;
        if ( Int > 0 )
        {
          do
          {
            wcscpy_s(Destination, 0x1Eu, L"Value_");
            v20 = sub_1004C080(v36, v19);
            LOBYTE(v40) = 5;
            v21 = (const wchar_t *)std::wstring::c_str(v20);
            wcscat_s(Destination, 0x1Eu, v21);
            LOBYTE(v40) = 2;
            std::wstring::~wstring(v36);
            v22 = *(int (__thiscall **)(int, wchar_t *))(*(_DWORD *)FirstNode + 164);
            v31 = 0;
            v23 = (int *)v22(FirstNode, Destination);
            v24 = (void *)XMLSystem::GetString((int)v36, v23, v31);
            LOBYTE(v40) = 6;
            sub_100116A0((_DWORD *)v33, v24);
            LOBYTE(v40) = 2;
            std::string::~string(v36);
            ++v19;
          }
          while ( v19 < Int );
        }
        v31 = (char *)v33;
        goto LABEL_9;
      default:
        goto LABEL_10;
    }
    if ( !v10 || HIBYTE(v32) )
      goto LABEL_10;
    v31 = (char *)v10;
LABEL_9:
    operator delete(v31);
LABEL_10:
    LOBYTE(v40) = 1;
    std::string::~string(v38);
    goto LABEL_11;
  }
  v8 = (const char *)std::string::c_str(v37);
  Warning("XMLSystem: No Value for '%s'", v8);
LABEL_11:
  LOBYTE(v40) = 0;
  std::string::~string(v35);
  v40 = -1;
  std::string::~string(v37);
}
