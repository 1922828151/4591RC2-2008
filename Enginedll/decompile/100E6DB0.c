/*
 * func-name: ?Load@Material@@QAE_NPBD@Z
 * func-address: 0x100e6db0
 * callers: 0x1010bad0, 0x1010c090
 * callees: 0x10001720, 0x100017b0, 0x10009dd0, 0x10012320, 0x100492d0, 0x100497b0, 0x10049860, 0x10049910, 0x1004a5a0, 0x1004a5e0, 0x1004a8d0, 0x1004ae30, 0x10097220, 0x100977a0, 0x100e3020, 0x100e3ef0, 0x100e68a0, 0x10122bb0, 0x10122ce0, 0x10136290, 0x10136530, 0x101a24ac, 0x101a251c, 0x101a252e, 0x101a2534, 0x101a253a
 */

char __thiscall Material::Load(Material *this, char *a2)
{
  Material *v2; // edi
  char *v3; // esi
  struct DOMDocument *Document; // eax
  int v6; // esi
  int *v7; // eax
  int String; // eax
  int (__thiscall *v9)(int, const wchar_t *); // eax
  int *v10; // eax
  int v11; // eax
  int (__thiscall *v12)(int); // eax
  int (__thiscall *v13)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v14; // eax
  int FirstNode; // eax
  int v16; // ebx
  struct xercesc_2_5::DOMNode *v17; // eax
  int (__thiscall *v18)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v19; // eax
  int (__thiscall *v20)(int); // eax
  int (__thiscall *v21)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v22; // eax
  int v23; // eax
  int v24; // esi
  int *v25; // eax
  int v26; // eax
  int (__thiscall *v27)(int, const wchar_t *); // eax
  int *v28; // eax
  int v29; // eax
  int (__thiscall *v30)(int); // eax
  int v31; // eax
  int v32; // ebx
  int (__thiscall *v33)(int); // eax
  Texture *v34; // ebp
  int v35; // esi
  char *v36; // edi
  int (__thiscall *v37)(int, int); // edx
  int v38; // eax
  Texture *v39; // eax
  char *v40; // esi
  struct MaterialManager *v41; // eax
  int Type; // eax
  char *v43; // ebp
  void *v44; // eax
  int (__thiscall *v45)(int); // edx
  unsigned int v46; // esi
  const char *v47; // eax
  const char *v48; // eax
  char v49[4]; // [esp+14h] [ebp-FCh] BYREF
  int v50; // [esp+18h] [ebp-F8h]
  int v51; // [esp+1Ch] [ebp-F4h]
  int v52; // [esp+20h] [ebp-F0h]
  int v53; // [esp+24h] [ebp-ECh] BYREF
  int v54; // [esp+28h] [ebp-E8h]
  _BYTE *v55; // [esp+2Ch] [ebp-E4h] BYREF
  int v56; // [esp+30h] [ebp-E0h] BYREF
  int v57; // [esp+34h] [ebp-DCh]
  int v58; // [esp+38h] [ebp-D8h]
  int v59; // [esp+3Ch] [ebp-D4h]
  int v60; // [esp+40h] [ebp-D0h]
  int v61; // [esp+44h] [ebp-CCh]
  char *v62; // [esp+48h] [ebp-C8h]
  wchar_t *v63; // [esp+4Ch] [ebp-C4h]
  int v64; // [esp+5Ch] [ebp-B4h] BYREF
  int *v65; // [esp+60h] [ebp-B0h]
  Material *v66; // [esp+64h] [ebp-ACh]
  int v67; // [esp+68h] [ebp-A8h]
  size_t Size; // [esp+6Ch] [ebp-A4h] BYREF
  _BYTE v69[4]; // [esp+70h] [ebp-A0h] BYREF
  _BYTE v70[24]; // [esp+74h] [ebp-9Ch] BYREF
  xercesc_2_5::AbstractDOMParser *v71; // [esp+8Ch] [ebp-84h] BYREF
  _BYTE v72[84]; // [esp+90h] [ebp-80h] BYREF
  xercesc_2_5::AbstractDOMParser *v73; // [esp+E4h] [ebp-2Ch]
  _BYTE v74[28]; // [esp+E8h] [ebp-28h] BYREF
  int v75; // [esp+10Ch] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+110h] [ebp+0h]

  v2 = this;
  v3 = (char *)this + 292;
  v62 = a2;
  v66 = this;
  *((_BYTE *)this + 16) = 1;
  std::string::operator=((char *)this + 292, v62);
  if ( !FindMedia((int)v3, (int)"Materials", 0, 0) )
    return 0;
  XMLSystem::XMLSystem((XMLSystem *)&v71);
  v64 = (int)&v56;
  v75 = 0;
  std::string::string(&v56, v3);
  if ( !XMLSystem::Load((int)&v71, v56, v57, v58, v59, v60, v61, (int)v62) )
  {
    v75 = -1;
    XMLSystem::~XMLSystem((XMLSystem *)&v71);
    return 0;
  }
  XMLSystem::GetWalker(&v71);
  Document = xercesc_2_5::AbstractDOMParser::getDocument(v73);
  v6 = (*(int (__thiscall **)(struct DOMDocument *))(*(_DWORD *)Document + 48))(Document);
  v7 = (int *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v6 + 164))(v6, L"Name", 0);
  String = XMLSystem::GetString((int)v70, v7, (char *)v63);
  std::string::operator=((char *)v2 + 184, String);
  std::string::~string(v70);
  v9 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v6 + 164);
  v63 = 0;
  v10 = (int *)v9(v6, L"Category");
  v11 = XMLSystem::GetString((int)v70, v10, (char *)v63);
  std::string::operator=((char *)v2 + 116, v11);
  LOBYTE(retaddr) = 0;
  std::string::~string(v70);
  v12 = *(int (__thiscall **)(int))(*(_DWORD *)v6 + 164);
  v63 = L"Collidable";
  if ( v12(v6) )
  {
    v13 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v6 + 164);
    v62 = 0;
    v14 = (struct xercesc_2_5::DOMNode *)v13(v6, L"Collidable");
    *((_BYTE *)v2 + 144) = XMLSystem::GetBool((XMLSystem *)&v71, v14, v62);
  }
  v64 = (int)&v56;
  std::string::string(&v56, "Physics");
  FirstNode = XMLSystem::FindFirstNode(v6, v56, v57, v58, v59, v60, v61, (int)v62);
  v16 = FirstNode;
  if ( FirstNode )
  {
    v17 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)FirstNode + 164))(
                                           FirstNode,
                                           L"Friction",
                                           0);
    *((float *)v2 + 83) = XMLSystem::GetFloat((XMLSystem *)v72, v17, (char *)v63);
    v18 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v16 + 164);
    v63 = 0;
    v19 = (struct xercesc_2_5::DOMNode *)v18(v16, L"Restitution");
    *((float *)v2 + 84) = XMLSystem::GetFloat((XMLSystem *)v72, v19, (char *)v63);
    v20 = *(int (__thiscall **)(int))(*(_DWORD *)v16 + 164);
    v63 = L"SortingOrder";
    if ( v20(v16) )
    {
      v21 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v16 + 164);
      v62 = 0;
      v22 = (struct xercesc_2_5::DOMNode *)v21(v16, L"SortingOrder");
      *((_DWORD *)v2 + 53) = XMLSystem::GetInt((XMLSystem *)&v71, v22, v62);
    }
  }
  v64 = (int)&v56;
  std::string::string(&v56, "Shader");
  v23 = XMLSystem::FindFirstNode(v6, v56, v57, v58, v59, v60, v61, (int)v62);
  v24 = v23;
  if ( v23 )
  {
    v25 = (int *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v23 + 164))(v23, L"File", 0);
    v26 = XMLSystem::GetString((int)v70, v25, (char *)v63);
    std::string::operator=((char *)v2 + 156, v26);
    std::string::~string(v70);
    v27 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v24 + 164);
    v63 = 0;
    v28 = (int *)v27(v24, L"Technique");
    v29 = XMLSystem::GetString((int)v70, v28, (char *)v63);
    std::string::operator=((char *)v2 + 56, v29);
    LOBYTE(retaddr) = 0;
    std::string::~string(v70);
    v30 = *(int (__thiscall **)(int))(*(_DWORD *)v24 + 168);
    v63 = L"Parameter";
    v31 = v30(v24);
    v32 = v31;
    if ( !v31 || !(*(int (__thiscall **)(int))(*(_DWORD *)v31 + 8))(v31) )
      v32 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v24 + 168))(v24, L"Param");
    v33 = *(int (__thiscall **)(int))(*(_DWORD *)v32 + 8);
    v67 = 0;
    if ( v33(v32) )
    {
      do
      {
        v64 = (int)operator new(0x118u);
        v34 = 0;
        LOBYTE(v75) = 5;
        if ( v64 )
        {
          v62 = 0;
          *(float *)&v61 = 0.0;
          v60 = 3;
          v65 = &v53;
          std::string::string(&v53, &unk_101C6EF2);
          v35 = ShaderVar::ShaderVar(v53, v54, v55, v56, v57, v58, v59, v60, v61, v62);
        }
        else
        {
          v35 = 0;
        }
        LOBYTE(v75) = 0;
        v64 = v35;
        v36 = (char *)operator new(0x400u);
        memset(v36, 0, 0x400u);
        v37 = *(int (__thiscall **)(int, int))(*(_DWORD *)v32 + 4);
        v62 = (char *)(v35 + 4);
        *(float *)&v61 = COERCE_FLOAT(&Size);
        Size = 0;
        v38 = v37(v32, v67);
        XMLSystem::ReadParameter((XMLSystem *)&v71, (int *)v35, (int)v36, v38, (_DWORD *)v61, (int)v62, (int)v63);
        if ( *(_DWORD *)v35 == 9 )
        {
          std::string::string(v69, v36 + 100);
          LOBYTE(v75) = 6;
          v39 = (Texture *)operator new(0x9Cu);
          v65 = (int *)v39;
          LOBYTE(v75) = 7;
          if ( v39 )
            v34 = Texture::Texture(v39);
          LOBYTE(v75) = 6;
          std::string::operator=((char *)v34 + 100, v69);
          v62 = 0;
          *(float *)&v61 = 0.0;
          *(float *)&v60 = 1.0;
          *(float *)&v59 = 1.0;
          *(float *)&v58 = 0.0;
          *(float *)&v57 = 0.0;
          v56 = 0;
          v65 = (int *)v49;
          std::string::string(v49, v69);
          Texture::Load(
            v49[0],
            v50,
            v51,
            v52,
            v53,
            v54,
            (int)v55,
            v56,
            *(float *)&v57,
            *(float *)&v58,
            *(float *)&v59,
            *(float *)&v60,
            *(float *)&v61,
            (int)v62);
          v62 = (char *)v34;
          v65 = (int *)&v55;
          std::string::string(&v55, v35 + 4);
          ShaderVar::Set((ShaderVar *)v35, (char)v55, v56, v57, v58, v59, v60, v61, (int)v62);
          if ( *((_DWORD *)v34 + 24) == 1 )
          {
            v40 = (char *)v66 + 220;
            if ( !std::string::length((char *)v66 + 220) )
            {
              v65 = &v56;
              std::string::string(&v56, v69);
              v55 = v74;
              LOBYTE(v75) = 8;
              v41 = MaterialManager::Instance();
              LOBYTE(v75) = 6;
              Type = MaterialManager::GetType(v41, (int)v55, v56, v57, v58, v59, v60, v61, (int)v62);
              LOBYTE(v75) = 9;
              std::string::operator=(v40, Type);
              LOBYTE(v75) = 6;
              std::string::~string(v74);
            }
          }
          LOBYTE(v75) = 0;
          std::string::~string(v69);
        }
        else
        {
          v43 = (char *)Size;
          ShaderVar::Destroy((ShaderVar *)v35);
          v62 = v43;
          *(_DWORD *)(v35 + 64) = v43;
          v44 = operator new((unsigned int)v62);
          v61 = (int)v43;
          v60 = (int)v36;
          v59 = (int)v44;
          *(_DWORD *)(v35 + 60) = v44;
          memcpy((void *)v59, (const void *)v60, v61);
          *(_DWORD *)(v35 + 276) = 2;
        }
        operator delete[](v36);
        sub_10012320((_DWORD *)v66 + 69, &v64);
        v45 = *(int (__thiscall **)(int))(*(_DWORD *)v32 + 8);
        v46 = ++v67;
      }
      while ( v46 < v45(v32) );
      v2 = v66;
    }
    v62 = 0;
    *(float *)&v61 = COERCE_FLOAT(std::string::c_str((char *)v2 + 56));
    v47 = (const char *)std::string::c_str((char *)v2 + 156);
    Material::Initialize(v2, v47, (const char *)v61, (bool)v62);
  }
  else
  {
    v48 = (const char *)std::string::c_str((char *)v2 + 184);
    SeriousWarning("Material '%s' lacks shader!", v48);
  }
  v75 = -1;
  XMLSystem::~XMLSystem((XMLSystem *)&v71);
  return 1;
}
