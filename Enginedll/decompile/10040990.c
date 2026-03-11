/*
 * func-name: sub_10040990
 * func-address: 0x10040990
 * callers: 0x10047270
 * callees: 0x1000d3d0, 0x10010b20, 0x100117e0, 0x100492d0, 0x100497b0, 0x10049860, 0x10049910, 0x1004a5e0, 0x1004a8d0, 0x10097800, 0x100e2f30, 0x100e3020, 0x100e3ef0, 0x100e40e0, 0x100e4400, 0x100e6830, 0x100e68a0, 0x100e6ae0, 0x10122bb0, 0x10122ce0, 0x10136290, 0x10136530, 0x10138500, 0x101a24ac, 0x101a2500, 0x101a251c, 0x101a252e, 0x101a2534, 0x101a253a
 */

unsigned int __thiscall sub_10040990(int *this, int a2, _DWORD *a3)
{
  int *v3; // esi
  int (__thiscall *v4)(int, const wchar_t *); // edx
  int v5; // ebp
  int (__thiscall *v6)(int); // edx
  unsigned int result; // eax
  int (__thiscall *v8)(int); // edx
  int v9; // ebx
  int v10; // eax
  XMLSystem *v11; // edi
  double v12; // st7
  int v13; // eax
  int v14; // eax
  Material *Material; // eax
  int v16; // ebp
  int (__thiscall *v17)(int, const wchar_t *); // eax
  int (__thiscall *v18)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v19; // eax
  int FirstNode; // eax
  int v21; // esi
  struct xercesc_2_5::DOMNode *v22; // eax
  int (__thiscall *v23)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v24; // eax
  int (__thiscall *v25)(int); // eax
  int (__thiscall *v26)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v27; // eax
  int v28; // eax
  int v29; // esi
  int v30; // eax
  int (__thiscall *v31)(int, const wchar_t *); // eax
  int v32; // eax
  int (__thiscall *v33)(int); // eax
  int v34; // eax
  int v35; // edi
  int (__thiscall *v36)(int); // eax
  _DWORD *v37; // ebp
  ShaderVar *v38; // esi
  void *v39; // edi
  int (__thiscall *v40)(int, int *); // edx
  int v41; // eax
  unsigned int i; // edi
  int v43; // ecx
  Texture *v44; // eax
  Texture *v45; // edi
  int v46; // edi
  int Type; // eax
  const char *v48; // edi
  void *v49; // eax
  unsigned int v50; // ecx
  unsigned int v51; // edx
  ShaderVar **v52; // eax
  char *v53; // esi
  int (__thiscall *v54)(int); // edx
  unsigned int v55; // esi
  const char *v56; // eax
  struct Material *v57; // esi
  Material **v58; // eax
  const char *v59; // eax
  struct Material *v60; // esi
  Material **v61; // eax
  unsigned int v62; // edx
  unsigned int v63; // ecx
  int *v64; // eax
  char *v65; // ebx
  int (__thiscall *v66)(int); // eax
  unsigned int v67; // edi
  char v68[4]; // [esp+18h] [ebp-120h] BYREF
  int v69; // [esp+1Ch] [ebp-11Ch]
  int v70; // [esp+20h] [ebp-118h]
  int v71; // [esp+24h] [ebp-114h]
  int v72; // [esp+28h] [ebp-110h] BYREF
  int v73; // [esp+2Ch] [ebp-10Ch]
  _BYTE *v74; // [esp+30h] [ebp-108h]
  int v75; // [esp+34h] [ebp-104h] BYREF
  float v76; // [esp+38h] [ebp-100h]
  float v77; // [esp+3Ch] [ebp-FCh]
  float v78; // [esp+40h] [ebp-F8h]
  int v79; // [esp+44h] [ebp-F4h]
  float v80; // [esp+48h] [ebp-F0h]
  unsigned int v81; // [esp+4Ch] [ebp-ECh]
  const wchar_t *v82; // [esp+50h] [ebp-E8h]
  int v83; // [esp+60h] [ebp-D8h] BYREF
  float v84; // [esp+64h] [ebp-D4h]
  int v85; // [esp+68h] [ebp-D0h]
  void *Src; // [esp+6Ch] [ebp-CCh]
  int v87; // [esp+70h] [ebp-C8h] BYREF
  int *v88; // [esp+74h] [ebp-C4h]
  int v89; // [esp+78h] [ebp-C0h]
  int *v90; // [esp+7Ch] [ebp-BCh]
  unsigned int v91; // [esp+80h] [ebp-B8h]
  int *v92; // [esp+84h] [ebp-B4h]
  int v93; // [esp+88h] [ebp-B0h]
  size_t Size; // [esp+8Ch] [ebp-ACh] BYREF
  char v95[4]; // [esp+90h] [ebp-A8h] BYREF
  char v96[24]; // [esp+94h] [ebp-A4h] BYREF
  _BYTE v97[28]; // [esp+ACh] [ebp-8Ch] BYREF
  _BYTE v98[28]; // [esp+C8h] [ebp-70h] BYREF
  _BYTE v99[28]; // [esp+E4h] [ebp-54h] BYREF
  int v100; // [esp+100h] [ebp-38h] BYREF
  int v101; // [esp+108h] [ebp-30h] BYREF
  int v102; // [esp+110h] [ebp-28h] BYREF
  char v103[24]; // [esp+114h] [ebp-24h] BYREF
  int v104; // [esp+134h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+138h] [ebp+0h]

  v3 = this;
  v4 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 168);
  v92 = this;
  v5 = v4(a2, L"Material");
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 8);
  v93 = v5;
  v91 = 0;
  result = v6(v5);
  if ( result )
  {
    do
    {
      v8 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 4);
      v81 = v91;
      v9 = v8(v5);
      v10 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v9 + 164))(v9, L"Name", 0);
      v11 = (XMLSystem *)(v3 + 21);
      XMLSystem::GetString(v99, v10, v81);
      v12 = (double)v3[13];
      v104 = 0;
      v84 = v12 / (double)v3[12] * 100.0;
      if ( v84 > 100.0 )
        v84 = 100.0;
      v13 = v3[44];
      if ( v13 && *(_DWORD *)(v13 + 3792) )
      {
        v14 = std::string::string(v95, "Loading Material: ");
        v83 = (int)&v75;
        LOBYTE(v104) = 1;
        std::operator+<char>(&v75, v14, v99);
        (*(void (__cdecl **)(float))(v3[44] + 3792))(COERCE_FLOAT(LODWORD(v84)));
        LOBYTE(v104) = 0;
        std::string::~string(v95);
      }
      ++v3[13];
      v83 = (int)&v75;
      std::string::string(&v75, v99);
      LOBYTE(v104) = 2;
      MaterialManager::Instance();
      LOBYTE(v104) = 0;
      Material = (Material *)MaterialManager::FindMaterial(
                               v75,
                               LODWORD(v76),
                               LODWORD(v77),
                               LODWORD(v78),
                               v79,
                               LODWORD(v80),
                               v81);
      v87 = (int)Material;
      if ( Material )
      {
        Material::AddRef(Material);
      }
      else
      {
        v83 = (int)operator new(0x154u);
        LOBYTE(v104) = 3;
        if ( v83 )
        {
          v88 = &v75;
          std::string::string(&v75, v99);
          v16 = Material::Material(v75, LODWORD(v76), LODWORD(v77), LODWORD(v78), v79, LODWORD(v80), v81);
          v84 = *(float *)&v16;
        }
        else
        {
          v84 = 0.0;
          v16 = 0;
        }
        v17 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v9 + 164);
        LOBYTE(v104) = 0;
        v87 = v16;
        if ( v17(v9, L"Collidable") )
        {
          v18 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v9 + 164);
          v81 = 0;
          v19 = (struct xercesc_2_5::DOMNode *)v18(v9, L"Collidable");
          *(_BYTE *)(v16 + 144) = XMLSystem::GetBool(v11, v19, v81);
        }
        v83 = (int)&v75;
        std::string::string(&v75, "Physics");
        FirstNode = XMLSystem::FindFirstNode(v9, v75, LODWORD(v76), LODWORD(v77), LODWORD(v78), v79, LODWORD(v80), v81);
        v21 = FirstNode;
        if ( FirstNode )
        {
          v22 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)FirstNode + 164))(
                                                 FirstNode,
                                                 L"Friction",
                                                 0);
          *(float *)(v16 + 332) = XMLSystem::GetFloat(v11, v22, (bool)v82);
          v23 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v21 + 164);
          v82 = 0;
          v24 = (struct xercesc_2_5::DOMNode *)v23(v21, L"Restitution");
          *(float *)(v16 + 336) = XMLSystem::GetFloat(v11, v24, (bool)v82);
          v25 = *(int (__thiscall **)(int))(*(_DWORD *)v21 + 164);
          v82 = L"SortingOrder";
          if ( v25(v21) )
          {
            v26 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v21 + 164);
            v81 = 0;
            v27 = (struct xercesc_2_5::DOMNode *)v26(v21, L"SortingOrder");
            *(_DWORD *)(v16 + 212) = XMLSystem::GetInt(v11, v27, v81);
          }
        }
        v83 = (int)&v75;
        std::string::string(&v75, "Shader");
        v28 = XMLSystem::FindFirstNode(v9, v75, LODWORD(v76), LODWORD(v77), LODWORD(v78), v79, LODWORD(v80), v81);
        v29 = v28;
        if ( v28 )
        {
          v30 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v28 + 164))(v28, L"File", 0);
          XMLSystem::GetString(v96, v30, v82);
          v31 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v29 + 164);
          v82 = 0;
          v32 = v31(v29, L"Technique");
          XMLSystem::GetString(v103, v32, v82);
          v33 = *(int (__thiscall **)(int))(*(_DWORD *)v29 + 168);
          v82 = L"Parameter";
          LOBYTE(retaddr) = 5;
          v34 = v33(v29);
          v35 = v34;
          v89 = v34;
          if ( !v34 || !(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34) )
          {
            v89 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v29 + 168))(v29, L"Param");
            v35 = v89;
          }
          v36 = *(int (__thiscall **)(int))(*(_DWORD *)v35 + 8);
          v88 = 0;
          if ( v36(v35) )
          {
            v37 = (_DWORD *)(v16 + 276);
            do
            {
              v83 = (int)operator new(0x118u);
              LOBYTE(v104) = 6;
              if ( v83 )
              {
                v81 = 0;
                v80 = 0.0;
                v79 = 3;
                Src = &v72;
                std::string::string(&v72, &unk_101BCE52);
                v38 = (ShaderVar *)ShaderVar::ShaderVar(
                                     v72,
                                     v73,
                                     v74,
                                     v75,
                                     LODWORD(v76),
                                     LODWORD(v77),
                                     LODWORD(v78),
                                     v79,
                                     LODWORD(v80),
                                     v81);
              }
              else
              {
                v38 = 0;
              }
              LOBYTE(v104) = 5;
              v83 = (int)v38;
              v39 = operator new(0x400u);
              Src = v39;
              memset(v39, 0, 0x400u);
              v81 = (unsigned int)v38 + 4;
              v80 = COERCE_FLOAT(&Size);
              v40 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v89 + 4);
              Size = 0;
              v41 = v40(v89, v88);
              HIBYTE(v85) = XMLSystem::ReadParameter(
                              (XMLSystem *)(v92 + 21),
                              (int)v38,
                              (int)v39,
                              v41,
                              SLODWORD(v80),
                              v81);
              for ( i = 0; ; ++i )
              {
                v43 = v37[1];
                if ( !v43 || i >= (v37[2] - v43) >> 2 )
                  break;
                if ( (unsigned __int8)std::operator==<char>(*(_DWORD *)(v37[1] + 4 * i) + 4, (char *)v38 + 4) )
                  goto LABEL_50;
              }
              if ( !HIBYTE(v85) )
              {
LABEL_50:
                operator delete[](Src);
                if ( v38 )
                {
                  ShaderVar::~ShaderVar(v38);
                  operator delete(v38);
                }
                goto LABEL_52;
              }
              if ( *(_DWORD *)v38 == 9 )
              {
                std::string::string(v98, (char *)Src + 100);
                LOBYTE(v104) = 7;
                v44 = (Texture *)operator new(0x9Cu);
                v90 = (int *)v44;
                LOBYTE(v104) = 8;
                if ( v44 )
                  v45 = Texture::Texture(v44);
                else
                  v45 = 0;
                LOBYTE(v104) = 7;
                std::string::operator=((char *)v45 + 100, v98);
                v81 = 0;
                v80 = 0.0;
                *(float *)&v79 = 1.0;
                v78 = 1.0;
                v77 = 0.0;
                v76 = 0.0;
                v75 = 0;
                v90 = (int *)v68;
                std::string::string(v68, v98);
                Texture::Load(v68[0], v69, v70, v71, v72, v73, (int)v74, v75, v76, v77, v78, *(float *)&v79, v80, v81);
                std::string::string(v97, (char *)v38 + 4);
                LOBYTE(v104) = 9;
                std::string::operator=((char *)v38 + 4, v97);
                ShaderVar::Destroy(v38);
                *(_DWORD *)v38 = 9;
                *((_DWORD *)v38 + 69) = 3;
                *((_DWORD *)v38 + 15) = v45;
                LOBYTE(v104) = 7;
                std::string::~string(v97);
                if ( *((_DWORD *)v45 + 24) == 1 )
                {
                  v46 = LODWORD(v84) + 220;
                  if ( !std::string::length(LODWORD(v84) + 220) )
                  {
                    v90 = &v75;
                    std::string::string(&v75, v98);
                    v74 = v97;
                    LOBYTE(v104) = 10;
                    MaterialManager::Instance();
                    LOBYTE(v104) = 7;
                    Type = MaterialManager::GetType(
                             v74,
                             v75,
                             LODWORD(v76),
                             LODWORD(v77),
                             LODWORD(v78),
                             v79,
                             LODWORD(v80),
                             v81);
                    LOBYTE(v104) = 11;
                    std::string::operator=(v46, Type);
                    LOBYTE(v104) = 7;
                    std::string::~string(v97);
                  }
                }
                LOBYTE(v104) = 5;
                std::string::~string(v98);
              }
              else
              {
                v48 = (const char *)Size;
                ShaderVar::Destroy(v38);
                v81 = (unsigned int)v48;
                *((_DWORD *)v38 + 16) = v48;
                v49 = operator new(v81);
                v80 = *(float *)&v48;
                v79 = (int)Src;
                v78 = *(float *)&v49;
                *((_DWORD *)v38 + 15) = v49;
                memcpy((void *)LODWORD(v78), (const void *)v79, LODWORD(v80));
                *((_DWORD *)v38 + 69) = 2;
              }
              operator delete[](Src);
              v50 = v37[1];
              if ( v50 )
                v51 = (int)(v37[2] - v50) >> 2;
              else
                v51 = 0;
              if ( v50 && v51 < (int)(v37[3] - v50) >> 2 )
              {
                v52 = (ShaderVar **)v37[2];
                *v52 = v38;
                v37[2] = v52 + 1;
              }
              else
              {
                v53 = (char *)v37[2];
                if ( v50 > (unsigned int)v53 )
                  invalid_parameter_noinfo();
                sub_10010B20(v37, &v101, v37, v53, &v83);
              }
LABEL_52:
              v54 = *(int (__thiscall **)(int))(*(_DWORD *)v89 + 8);
              v88 = (int *)((char *)v88 + 1);
              v55 = (unsigned int)v88;
            }
            while ( v55 < v54(v89) );
            v16 = LODWORD(v84);
          }
          v81 = 0;
          v80 = COERCE_FLOAT(std::string::c_str(&v102));
          v56 = (const char *)std::string::c_str(v95);
          if ( !Material::Initialize((Material *)v16, v56, (const char *)LODWORD(v80), v81) )
          {
            std::string::string(v97, v16 + 184);
            LOBYTE(v104) = 12;
            Material::Release((Material *)v16);
            v90 = (int *)operator new(0x154u);
            LOBYTE(v104) = 13;
            if ( v90 )
            {
              v83 = (int)&v75;
              std::string::string(&v75, v97);
              v57 = (struct Material *)Material::Material(
                                         v75,
                                         LODWORD(v76),
                                         LODWORD(v77),
                                         LODWORD(v78),
                                         v79,
                                         LODWORD(v80),
                                         v81);
            }
            else
            {
              v57 = 0;
            }
            LOBYTE(v104) = 12;
            v87 = (int)v57;
            v58 = (Material **)MaterialManager::Instance();
            Material::CloneTo(*v58, v57);
            Material::AddRef(v57);
            LOBYTE(v104) = 5;
            std::string::~string(v97);
          }
          LOBYTE(v104) = 4;
          std::string::~string(&v102);
        }
        else
        {
          v59 = (const char *)std::string::c_str(v16 + 184);
          Warning("Material '%s' lacks shader, using Default Material values", v59);
          std::string::string(v95, v16 + 184);
          LOBYTE(v104) = 14;
          Material::Release((Material *)v16);
          v90 = (int *)operator new(0x154u);
          LOBYTE(v104) = 15;
          if ( v90 )
          {
            v83 = (int)&v75;
            std::string::string(&v75, v95);
            v60 = (struct Material *)Material::Material(
                                       v75,
                                       LODWORD(v76),
                                       LODWORD(v77),
                                       LODWORD(v78),
                                       v79,
                                       LODWORD(v80),
                                       v81);
          }
          else
          {
            v60 = 0;
          }
          LOBYTE(v104) = 14;
          v87 = (int)v60;
          v61 = (Material **)MaterialManager::Instance();
          Material::CloneTo(*v61, v60);
          Material::AddRef(v60);
        }
        LOBYTE(v104) = 0;
        std::string::~string(v95);
        v5 = v93;
        v3 = v92;
      }
      v62 = a3[1];
      if ( v62 )
        v63 = (int)(a3[2] - v62) >> 2;
      else
        v63 = 0;
      if ( v62 && v63 < (int)(a3[3] - v62) >> 2 )
      {
        v64 = (int *)a3[2];
        *v64 = v87;
        a3[2] = v64 + 1;
      }
      else
      {
        v65 = (char *)a3[2];
        if ( v62 > (unsigned int)v65 )
          invalid_parameter_noinfo();
        std::vector<Material *>::insert(a3, &v100, a3, v65, &v87);
      }
      v104 = -1;
      std::string::~string(v99);
      v66 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 8);
      v67 = ++v91;
      result = v66(v5);
    }
    while ( v67 < result );
  }
  if ( v3[44] )
  {
    if ( *((_BYTE *)v3 + 44) )
      return World::SetMaterialList(a3);
  }
  return result;
}
