/*
 * func-name: ?ReadMaterial@MaterialSerializer@@AAEXPAVDOMElement@xercesc_2_5@@@Z
 * func-address: 0x10042bf0
 * callers: 0x10043050
 * callees: 0x10009dd0, 0x10012320, 0x10012aa0, 0x100492d0, 0x1004a5e0, 0x1004a8d0, 0x10097800, 0x100e3020, 0x100e3ef0, 0x100e42b0, 0x100e4400, 0x100e6830, 0x10122bb0, 0x10122ce0, 0x10136290, 0x101a24ac, 0x101a251c, 0x101a252e, 0x101a2534, 0x101a253a
 */

void __thiscall MaterialSerializer::ReadMaterial(MaterialSerializer *this, struct xercesc_2_5::DOMElement *a2)
{
  XMLSystem *v2; // ebx
  Material *v3; // eax
  Material *v4; // edi
  struct xercesc_2_5::DOMElement *v5; // esi
  int (__thiscall *v6)(struct xercesc_2_5::DOMElement *, const wchar_t *); // edx
  int v7; // eax
  int String; // eax
  int v9; // eax
  int v10; // eax
  int FirstNode; // eax
  int v12; // esi
  int v13; // eax
  int v14; // eax
  int (__thiscall *v15)(int, const wchar_t *); // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  int (__thiscall *v20)(int); // eax
  _DWORD *v21; // esi
  char *v22; // edi
  int (__thiscall *v23)(int, int); // edx
  int v24; // eax
  struct xercesc_2_5::DOMElement *v25; // eax
  char *v26; // esi
  int Type; // eax
  struct xercesc_2_5::DOMElement *v28; // ebx
  void *v29; // eax
  int (__thiscall *v30)(int); // eax
  unsigned int v31; // esi
  const char *v32; // eax
  char v33; // [esp-1Ch] [ebp-98h] BYREF
  int v34; // [esp-18h] [ebp-94h]
  _BYTE *v35; // [esp-14h] [ebp-90h] BYREF
  int v36; // [esp-10h] [ebp-8Ch] BYREF
  int v37; // [esp-Ch] [ebp-88h]
  int v38; // [esp-8h] [ebp-84h]
  void *v39; // [esp-4h] [ebp-80h]
  int v40; // [esp+0h] [ebp-7Ch]
  size_t *p_Size; // [esp+4h] [ebp-78h]
  struct xercesc_2_5::DOMElement *v42; // [esp+8h] [ebp-74h]
  int v43; // [esp+Ch] [ebp-70h]
  Material *v44; // [esp+1Ch] [ebp-60h]
  int v45; // [esp+20h] [ebp-5Ch]
  size_t Size; // [esp+24h] [ebp-58h] BYREF
  XMLSystem *v47; // [esp+28h] [ebp-54h]
  Material *v48; // [esp+2Ch] [ebp-50h]
  int v49[2]; // [esp+30h] [ebp-4Ch] BYREF
  char v50[4]; // [esp+38h] [ebp-44h] BYREF
  _BYTE v51[24]; // [esp+3Ch] [ebp-40h] BYREF
  _BYTE v52[28]; // [esp+54h] [ebp-28h] BYREF
  int v53; // [esp+78h] [ebp-4h]
  int retaddr; // [esp+7Ch] [ebp+0h]

  v2 = this;
  v47 = this;
  v3 = (Material *)operator new(0x154u);
  v49[0] = (int)v3;
  v53 = 0;
  if ( v3 )
  {
    v4 = Material::Material(v3);
    v44 = v4;
  }
  else
  {
    v44 = 0;
    v4 = 0;
  }
  v42 = 0;
  v5 = a2;
  v6 = *(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)a2 + 164);
  v53 = -1;
  v48 = v4;
  v7 = v6(a2, L"Name");
  String = XMLSystem::GetString(v50, v7, 0);
  v53 = 1;
  std::string::operator=((char *)v4 + 184, String);
  v53 = -1;
  std::string::~string(v50);
  v9 = (*(int (__thiscall **)(struct xercesc_2_5::DOMElement *, const wchar_t *))(*(_DWORD *)v5 + 164))(v5, L"Category");
  v10 = XMLSystem::GetString(v50, v9, 0);
  v53 = 2;
  std::string::operator=((char *)v4 + 116, v10);
  v53 = -1;
  std::string::~string(v50);
  a2 = (struct xercesc_2_5::DOMElement *)&v36;
  std::string::string(&v36, "Shader");
  FirstNode = XMLSystem::FindFirstNode(v5, v36, v37, v38, v39, v40, p_Size, v42);
  v12 = FirstNode;
  if ( FirstNode )
  {
    v13 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)FirstNode + 164))(FirstNode, L"File", 0);
    v14 = XMLSystem::GetString(v51, v13, v43);
    std::string::operator=((char *)v4 + 156, v14);
    std::string::~string(v51);
    v15 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v12 + 164);
    v43 = 0;
    v16 = v15(v12, L"Technique");
    v17 = XMLSystem::GetString(v51, v16, v43);
    std::string::operator=((char *)v4 + 56, v17);
    retaddr = -1;
    std::string::~string(v51);
    v18 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v12 + 168))(v12, L"Parameter");
    v19 = v18;
    if ( !v18 || !(*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18) )
      v19 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v12 + 168))(v12, L"Param");
    v20 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 8);
    v45 = 0;
    if ( v20(v19) )
    {
      do
      {
        a2 = (struct xercesc_2_5::DOMElement *)operator new(0x118u);
        v53 = 5;
        if ( a2 )
        {
          v42 = 0;
          p_Size = 0;
          v40 = 3;
          v49[0] = (int)&v33;
          std::string::string(&v33, &unk_101BCE9B);
          v21 = (_DWORD *)ShaderVar::ShaderVar(v33, v34, v35, v36, v37, v38, v39, v40, p_Size, v42);
        }
        else
        {
          v21 = 0;
        }
        v53 = -1;
        v49[0] = (int)v21;
        v22 = (char *)operator new(0x400u);
        memset(v22, 0, 0x400u);
        v23 = *(int (__thiscall **)(int, int))(*(_DWORD *)v19 + 4);
        v42 = (struct xercesc_2_5::DOMElement *)(v21 + 1);
        p_Size = &Size;
        Size = 0;
        v24 = v23(v19, v45);
        XMLSystem::ReadParameter(v47, (int)v21, (int)v22, v24, (int)p_Size, (int)v42);
        if ( *v21 == 9 )
        {
          std::string::string(v50, v22 + 100);
          v53 = 6;
          v25 = (struct xercesc_2_5::DOMElement *)operator new(0x9Cu);
          a2 = v25;
          LOBYTE(v53) = 7;
          if ( v25 )
            a2 = Texture::Texture(v25);
          else
            a2 = 0;
          LOBYTE(v53) = 6;
          std::string::operator=((char *)a2 + 100, v50);
          v42 = a2;
          v49[1] = (int)&v35;
          std::string::string(&v35, v21 + 1);
          ShaderVar::Set((ShaderVar *)v21, (char)v35, v36, v37, v38, (int)v39, v40, (int)p_Size, (int)v42);
          if ( *((_DWORD *)a2 + 24) == 1 )
          {
            v26 = (char *)v44 + 220;
            if ( !std::string::length((char *)v44 + 220) )
            {
              a2 = (struct xercesc_2_5::DOMElement *)&v36;
              std::string::string(&v36, v50);
              v35 = v52;
              LOBYTE(v53) = 8;
              MaterialManager::Instance();
              LOBYTE(v53) = 6;
              Type = MaterialManager::GetType(v35, v36, v37, v38, v39, v40, p_Size, v42);
              LOBYTE(v53) = 9;
              std::string::operator=(v26, Type);
              LOBYTE(v53) = 6;
              std::string::~string(v52);
            }
          }
          v53 = -1;
          std::string::~string(v50);
        }
        else
        {
          v28 = (struct xercesc_2_5::DOMElement *)Size;
          ShaderVar::Destroy((ShaderVar *)v21);
          v42 = v28;
          v21[16] = v28;
          v29 = operator new((unsigned int)v42);
          p_Size = (size_t *)v28;
          v40 = (int)v22;
          v39 = v29;
          v21[15] = v29;
          memcpy(v39, (const void *)v40, (size_t)p_Size);
          v21[69] = 2;
        }
        operator delete[](v22);
        sub_10012320((_DWORD *)v44 + 69, v49);
        v30 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 8);
        v31 = ++v45;
      }
      while ( v31 < v30(v19) );
      v2 = v47;
    }
  }
  else
  {
    v32 = (const char *)std::string::c_str((char *)v4 + 184);
    Warning("Material '%s' lacks shader, using default mat", v32);
    Material::Release(v4);
    v48 = *(Material **)MaterialManager::Instance();
    Material::AddRef(v48);
  }
  a2 = v48;
  std::vector<Material *>::push_back(*((_DWORD **)v2 + 23), (int *)&a2);
}
