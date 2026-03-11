/*
 * func-name: sub_1003A4C0
 * func-address: 0x1003a4c0
 * callers: 0x1003adf0
 * callees: 0x1000d3d0, 0x10010b20, 0x100117e0, 0x100492d0, 0x100497b0, 0x10049860, 0x10049910, 0x1004a5e0, 0x1004a8d0, 0x10097800, 0x100e2f30, 0x100e3020, 0x100e3ef0, 0x100e40e0, 0x100e4400, 0x100e6830, 0x100e68a0, 0x100e6ae0, 0x10122bb0, 0x10122ce0, 0x10136290, 0x10136530, 0x101a24ac, 0x101a2500, 0x101a251c, 0x101a252e, 0x101a2534, 0x101a253a
 */

unsigned int __thiscall sub_1003A4C0(int *this, int a2, _DWORD *a3)
{
  int *v3; // ebx
  int (__thiscall *v4)(int, const wchar_t *); // edx
  int v5; // edi
  int (__thiscall *v6)(int); // edx
  unsigned int result; // eax
  int (__thiscall *v8)(int); // edx
  int v9; // ebp
  int v10; // eax
  XMLSystem *v11; // edi
  double v12; // st7
  int v13; // eax
  int v14; // eax
  Material *Material; // eax
  int v16; // ebx
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
  ShaderVar *v37; // esi
  void *v38; // edi
  int (__thiscall *v39)(int, int *); // edx
  int v40; // eax
  unsigned int i; // edi
  int v42; // ecx
  Texture *v43; // eax
  Texture *v44; // edi
  float v45; // edi
  int Type; // eax
  size_t v47; // edi
  float v48; // eax
  unsigned int v49; // ecx
  unsigned int v50; // edx
  ShaderVar **v51; // eax
  char *v52; // esi
  int (__thiscall *v53)(int); // edx
  unsigned int v54; // esi
  const char *v55; // ecx
  const char *v56; // eax
  struct Material *v57; // esi
  Material **v58; // eax
  char *v59; // ecx
  const char *v60; // eax
  struct Material *v61; // esi
  Material **v62; // eax
  unsigned int v63; // edx
  unsigned int v64; // ecx
  int *v65; // eax
  char *v66; // edi
  int (__thiscall *v67)(int); // eax
  unsigned int v68; // esi
  char v69[4]; // [esp+18h] [ebp-120h] BYREF
  int v70; // [esp+1Ch] [ebp-11Ch]
  int v71; // [esp+20h] [ebp-118h]
  int v72; // [esp+24h] [ebp-114h]
  int v73; // [esp+28h] [ebp-110h] BYREF
  int v74; // [esp+2Ch] [ebp-10Ch]
  _BYTE *v75; // [esp+30h] [ebp-108h]
  int v76; // [esp+34h] [ebp-104h] BYREF
  float v77; // [esp+38h] [ebp-100h]
  float v78; // [esp+3Ch] [ebp-FCh]
  float v79; // [esp+40h] [ebp-F8h]
  int v80; // [esp+44h] [ebp-F4h]
  float v81; // [esp+48h] [ebp-F0h]
  unsigned int v82; // [esp+4Ch] [ebp-ECh]
  const wchar_t *v83; // [esp+50h] [ebp-E8h]
  int v84; // [esp+60h] [ebp-D8h] BYREF
  float v85; // [esp+64h] [ebp-D4h]
  int v86; // [esp+68h] [ebp-D0h]
  void *Src; // [esp+6Ch] [ebp-CCh]
  int v88; // [esp+70h] [ebp-C8h] BYREF
  int *v89; // [esp+74h] [ebp-C4h]
  int v90; // [esp+78h] [ebp-C0h]
  int *v91; // [esp+7Ch] [ebp-BCh]
  unsigned int v92; // [esp+80h] [ebp-B8h]
  int *v93; // [esp+84h] [ebp-B4h]
  int v94; // [esp+88h] [ebp-B0h]
  size_t Size; // [esp+8Ch] [ebp-ACh] BYREF
  _BYTE v96[28]; // [esp+90h] [ebp-A8h] BYREF
  _BYTE v97[28]; // [esp+ACh] [ebp-8Ch] BYREF
  char v98; // [esp+C8h] [ebp-70h] BYREF
  char *v99[6]; // [esp+CCh] [ebp-6Ch] BYREF
  _BYTE v100[28]; // [esp+E4h] [ebp-54h] BYREF
  char v101[4]; // [esp+100h] [ebp-38h] BYREF
  char *v102[6]; // [esp+104h] [ebp-34h] BYREF
  int v103; // [esp+11Ch] [ebp-1Ch] BYREF
  int v104; // [esp+124h] [ebp-14h] BYREF
  int v105; // [esp+134h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+138h] [ebp+0h]

  v3 = this;
  v4 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)a2 + 168);
  v93 = this;
  v5 = v4(a2, L"Material");
  v6 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 8);
  v94 = v5;
  v92 = 0;
  result = v6(v5);
  if ( result )
  {
    while ( 1 )
    {
      v8 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 4);
      v82 = v92;
      v9 = v8(v5);
      v10 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v9 + 164))(v9, L"Name", 0);
      v11 = (XMLSystem *)(v3 + 21);
      XMLSystem::GetString(v100, v10, v82);
      v12 = (double)v3[13];
      v105 = 0;
      v85 = v12 / (double)v3[12] * 40.0;
      if ( v85 > 40.0 )
        v85 = 40.0;
      v13 = v3[44];
      if ( v13 && *(_DWORD *)(v13 + 3792) )
      {
        v14 = std::string::string(v96, "Loading Material: ");
        v84 = (int)&v76;
        LOBYTE(v105) = 1;
        std::operator+<char>(&v76, v14, v100);
        (*(void (__cdecl **)(float))(v3[44] + 3792))(COERCE_FLOAT(LODWORD(v85)));
        LOBYTE(v105) = 0;
        std::string::~string(v96);
      }
      ++v3[13];
      v84 = (int)&v76;
      std::string::string(&v76, v100);
      LOBYTE(v105) = 2;
      MaterialManager::Instance();
      LOBYTE(v105) = 0;
      Material = (Material *)MaterialManager::FindMaterial(
                               v76,
                               LODWORD(v77),
                               LODWORD(v78),
                               LODWORD(v79),
                               v80,
                               LODWORD(v81),
                               v82);
      v88 = (int)Material;
      if ( Material )
      {
        Material::AddRef(Material);
      }
      else
      {
        v84 = (int)operator new(0x154u);
        LOBYTE(v105) = 3;
        if ( v84 )
        {
          v89 = &v76;
          std::string::string(&v76, v100);
          *(float *)&v16 = COERCE_FLOAT(Material::Material(v76, LODWORD(v77), LODWORD(v78), LODWORD(v79), v80, LODWORD(v81), v82));
          v85 = *(float *)&v16;
        }
        else
        {
          v85 = 0.0;
          *(float *)&v16 = 0.0;
        }
        v17 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v9 + 164);
        LOBYTE(v105) = 0;
        v88 = v16;
        if ( v17(v9, L"Collidable") )
        {
          v18 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v9 + 164);
          v82 = 0;
          v19 = (struct xercesc_2_5::DOMNode *)v18(v9, L"Collidable");
          *(_BYTE *)(v16 + 144) = XMLSystem::GetBool(v11, v19, v82);
        }
        v84 = (int)&v76;
        std::string::string(&v76, "Physics");
        FirstNode = XMLSystem::FindFirstNode(v9, v76, LODWORD(v77), LODWORD(v78), LODWORD(v79), v80, LODWORD(v81), v82);
        v21 = FirstNode;
        if ( FirstNode )
        {
          v22 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)FirstNode + 164))(
                                                 FirstNode,
                                                 L"Friction",
                                                 0);
          *(float *)(v16 + 332) = XMLSystem::GetFloat(v11, v22, (bool)v83);
          v23 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v21 + 164);
          v83 = 0;
          v24 = (struct xercesc_2_5::DOMNode *)v23(v21, L"Restitution");
          *(float *)(v16 + 336) = XMLSystem::GetFloat(v11, v24, (bool)v83);
          v25 = *(int (__thiscall **)(int))(*(_DWORD *)v21 + 164);
          v83 = L"SortingOrder";
          if ( v25(v21) )
          {
            v26 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v21 + 164);
            v82 = 0;
            v27 = (struct xercesc_2_5::DOMNode *)v26(v21, L"SortingOrder");
            *(_DWORD *)(v16 + 212) = XMLSystem::GetInt(v11, v27, v82);
          }
        }
        v84 = (int)&v76;
        std::string::string(&v76, "Shader");
        v28 = XMLSystem::FindFirstNode(v9, v76, LODWORD(v77), LODWORD(v78), LODWORD(v79), v80, LODWORD(v81), v82);
        v29 = v28;
        if ( v28 )
        {
          v30 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v28 + 164))(v28, L"File", 0);
          XMLSystem::GetString(v99, v30, v83);
          v31 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v29 + 164);
          v83 = 0;
          v32 = v31(v29, L"Technique");
          XMLSystem::GetString(v102, v32, v83);
          v33 = *(int (__thiscall **)(int))(*(_DWORD *)v29 + 168);
          v83 = L"Parameter";
          LOBYTE(retaddr) = 5;
          v34 = v33(v29);
          v35 = v34;
          v90 = v34;
          if ( !v34 || !(*(int (__thiscall **)(int))(*(_DWORD *)v34 + 8))(v34) )
          {
            v90 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v29 + 168))(v29, L"Param");
            v35 = v90;
          }
          v36 = *(int (__thiscall **)(int))(*(_DWORD *)v35 + 8);
          v89 = 0;
          if ( v36(v35) )
          {
            do
            {
              v84 = (int)operator new(0x118u);
              LOBYTE(v105) = 6;
              if ( v84 )
              {
                v82 = 0;
                v81 = 0.0;
                v80 = 3;
                *(float *)&Src = COERCE_FLOAT(&v73);
                std::string::string(&v73, &unk_101BBD9B);
                v37 = (ShaderVar *)ShaderVar::ShaderVar(
                                     v73,
                                     v74,
                                     v75,
                                     v76,
                                     LODWORD(v77),
                                     LODWORD(v78),
                                     LODWORD(v79),
                                     v80,
                                     LODWORD(v81),
                                     v82);
              }
              else
              {
                v37 = 0;
              }
              LOBYTE(v105) = 5;
              v84 = (int)v37;
              v38 = operator new(0x400u);
              Src = v38;
              memset(v38, 0, 0x400u);
              v82 = (unsigned int)v37 + 4;
              v81 = COERCE_FLOAT(&Size);
              v39 = *(int (__thiscall **)(int, int *))(*(_DWORD *)v90 + 4);
              Size = 0;
              v40 = v39(v90, v89);
              HIBYTE(v86) = XMLSystem::ReadParameter(
                              (XMLSystem *)(v93 + 21),
                              (int)v37,
                              (int)v38,
                              v40,
                              SLODWORD(v81),
                              v82);
              for ( i = 0; ; ++i )
              {
                v42 = *(_DWORD *)(v16 + 280);
                if ( !v42 || i >= (*(_DWORD *)(v16 + 284) - v42) >> 2 )
                  break;
                if ( (unsigned __int8)std::operator==<char>(
                                        *(_DWORD *)(*(_DWORD *)(v16 + 280) + 4 * i) + 4,
                                        (char *)v37 + 4) )
                  goto LABEL_51;
              }
              if ( !HIBYTE(v86) )
              {
LABEL_51:
                operator delete[](Src);
                if ( v37 )
                {
                  ShaderVar::~ShaderVar(v37);
                  operator delete(v37);
                }
                goto LABEL_53;
              }
              if ( *(_DWORD *)v37 == 9 )
              {
                std::string::string(v97, (char *)Src + 100);
                LOBYTE(v105) = 7;
                v43 = (Texture *)operator new(0x9Cu);
                v91 = (int *)v43;
                LOBYTE(v105) = 8;
                if ( v43 )
                  v44 = Texture::Texture(v43);
                else
                  v44 = 0;
                LOBYTE(v105) = 7;
                std::string::operator=((char *)v44 + 100, v97);
                v82 = 0;
                v81 = 0.0;
                *(float *)&v80 = 1.0;
                v79 = 1.0;
                v78 = 0.0;
                v77 = 0.0;
                v76 = 0;
                v91 = (int *)v69;
                std::string::string(v69, v97);
                Texture::Load(v69[0], v70, v71, v72, v73, v74, (int)v75, v76, v77, v78, v79, *(float *)&v80, v81, v82);
                std::string::string(v96, (char *)v37 + 4);
                LOBYTE(v105) = 9;
                std::string::operator=((char *)v37 + 4, v96);
                ShaderVar::Destroy(v37);
                *(_DWORD *)v37 = 9;
                *((_DWORD *)v37 + 69) = 3;
                *((_DWORD *)v37 + 15) = v44;
                LOBYTE(v105) = 7;
                std::string::~string(v96);
                if ( *((_DWORD *)v44 + 24) == 1 )
                {
                  v45 = v85;
                  if ( !*(_DWORD *)(LODWORD(v85) + 240) )
                  {
                    v91 = &v76;
                    std::string::string(&v76, v97);
                    v75 = v96;
                    LOBYTE(v105) = 10;
                    MaterialManager::Instance();
                    LOBYTE(v105) = 7;
                    Type = MaterialManager::GetType(
                             v75,
                             v76,
                             LODWORD(v77),
                             LODWORD(v78),
                             LODWORD(v79),
                             v80,
                             LODWORD(v81),
                             v82);
                    LOBYTE(v105) = 11;
                    std::string::operator=(LODWORD(v45) + 220, Type);
                    LOBYTE(v105) = 7;
                    std::string::~string(v96);
                  }
                }
                LOBYTE(v105) = 5;
                std::string::~string(v97);
              }
              else
              {
                v47 = Size;
                ShaderVar::Destroy(v37);
                v82 = v47;
                *((float *)v37 + 16) = *(float *)&v47;
                v48 = COERCE_FLOAT(operator new(v82));
                v81 = *(float *)&v47;
                v80 = (int)Src;
                v79 = v48;
                *((float *)v37 + 15) = v48;
                memcpy((void *)LODWORD(v79), (const void *)v80, LODWORD(v81));
                *((_DWORD *)v37 + 69) = 2;
              }
              operator delete[](Src);
              v49 = *(_DWORD *)(v16 + 280);
              if ( v49 )
                v50 = (int)(*(_DWORD *)(v16 + 284) - v49) >> 2;
              else
                v50 = 0;
              if ( v49 && v50 < (int)(*(_DWORD *)(v16 + 288) - v49) >> 2 )
              {
                v51 = *(ShaderVar ***)(v16 + 284);
                *v51 = v37;
                *(_DWORD *)(v16 + 284) = v51 + 1;
              }
              else
              {
                v52 = *(char **)(v16 + 284);
                if ( v49 > (unsigned int)v52 )
                  invalid_parameter_noinfo();
                sub_10010B20((_DWORD *)(v16 + 276), &v103, (_DWORD *)(v16 + 276), v52, &v84);
              }
LABEL_53:
              v53 = *(int (__thiscall **)(int))(*(_DWORD *)v90 + 8);
              v89 = (int *)((char *)v89 + 1);
              v54 = (unsigned int)v89;
            }
            while ( v54 < v53(v90) );
            *(float *)&v16 = v85;
          }
          v55 = v102[0];
          if ( v102[5] < (char *)0x10 )
            v55 = (const char *)v102;
          v56 = v99[0];
          if ( v99[5] < (char *)0x10 )
            v56 = (const char *)v99;
          if ( !Material::Initialize((Material *)v16, v56, v55, 0) )
          {
            std::string::string(v96, v16 + 184);
            LOBYTE(v105) = 12;
            Material::Release((Material *)v16);
            v91 = (int *)operator new(0x154u);
            LOBYTE(v105) = 13;
            if ( v91 )
            {
              v84 = (int)&v76;
              std::string::string(&v76, v96);
              v57 = (struct Material *)Material::Material(
                                         v76,
                                         LODWORD(v77),
                                         LODWORD(v78),
                                         LODWORD(v79),
                                         v80,
                                         LODWORD(v81),
                                         v82);
            }
            else
            {
              v57 = 0;
            }
            LOBYTE(v105) = 12;
            v88 = (int)v57;
            v58 = (Material **)MaterialManager::Instance();
            Material::CloneTo(*v58, v57);
            Material::AddRef(v57);
            LOBYTE(v105) = 5;
            std::string::~string(v96);
          }
          LOBYTE(v105) = 4;
          std::string::~string(v101);
          v59 = &v98;
        }
        else
        {
          v60 = *(_DWORD *)(v16 + 208) < 0x10u ? (const char *)(v16 + 188) : *(const char **)(v16 + 188);
          Warning("Material '%s' lacks shader, using Default Material values", v60);
          std::string::string(v96, v16 + 184);
          LOBYTE(v105) = 14;
          Material::Release((Material *)v16);
          v91 = (int *)operator new(0x154u);
          LOBYTE(v105) = 15;
          if ( v91 )
          {
            v84 = (int)&v76;
            std::string::string(&v76, v96);
            v61 = (struct Material *)Material::Material(
                                       v76,
                                       LODWORD(v77),
                                       LODWORD(v78),
                                       LODWORD(v79),
                                       v80,
                                       LODWORD(v81),
                                       v82);
          }
          else
          {
            v61 = 0;
          }
          LOBYTE(v105) = 14;
          v88 = (int)v61;
          v62 = (Material **)MaterialManager::Instance();
          Material::CloneTo(*v62, v61);
          Material::AddRef(v61);
          v59 = v96;
        }
        LOBYTE(v105) = 0;
        std::string::~string(v59);
        v3 = v93;
      }
      v63 = a3[1];
      v64 = v63 ? (int)(a3[2] - v63) >> 2 : 0;
      if ( v63 && v64 < (int)(a3[3] - v63) >> 2 )
      {
        v65 = (int *)a3[2];
        *v65 = v88;
        a3[2] = v65 + 1;
      }
      else
      {
        v66 = (char *)a3[2];
        if ( v63 > (unsigned int)v66 )
          invalid_parameter_noinfo();
        std::vector<Material *>::insert(a3, &v104, a3, v66, &v88);
      }
      v105 = -1;
      std::string::~string(v100);
      v67 = *(int (__thiscall **)(int))(*(_DWORD *)v94 + 8);
      v68 = ++v92;
      result = v67(v94);
      if ( v68 >= result )
        break;
      v5 = v94;
    }
  }
  return result;
}
