/*
 * func-name: sub_10036A40
 * func-address: 0x10036a40
 * callers: 0x10038ca0
 * callees: 0x100492d0, 0x10049860, 0x10049a00, 0x1004a5e0, 0x10136530
 */

int __userpurge sub_10036A40@<eax>(int a1@<ecx>, _DWORD *a2, int *a3, float **a4)
{
  XMLSystem *v5; // edi
  int FirstNode; // esi
  int (__thiscall *v7)(int, const wchar_t *); // eax
  int v8; // eax
  int (__cdecl *v9)(int, const char *); // ebx
  _DWORD *v10; // eax
  int v11; // ecx
  int v12; // edx
  int v13; // edx
  _DWORD *v14; // ecx
  int (__thiscall *v15)(_DWORD *, const wchar_t *); // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // esi
  const wchar_t *v20; // ebp
  int v21; // eax
  int v22; // eax
  int String; // eax
  int *v24; // eax
  float *v25; // ebx
  int v26; // edx
  int v27; // eax
  float *Vector; // eax
  double v29; // st7
  float v30; // eax
  float v31; // ecx
  float v32; // edx
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int (__thiscall *v36)(int); // eax
  _DWORD *v37; // eax
  int v38; // edx
  float *v39; // ebx
  _DWORD *v40; // ecx
  int (__thiscall *v41)(_DWORD *); // eax
  struct xercesc_2_5::DOMNode *v42; // eax
  int v43; // eax
  int v44; // eax
  int (__thiscall *v45)(int); // eax
  _DWORD *v46; // eax
  int v47; // edx
  float *v48; // ebx
  _DWORD *v49; // ecx
  int (__thiscall *v50)(_DWORD *); // eax
  struct xercesc_2_5::DOMNode *v51; // eax
  int v52; // eax
  int v53; // eax
  int (__thiscall *v54)(int); // eax
  _DWORD *v55; // eax
  int v56; // edx
  float *v57; // ebx
  _DWORD *v58; // ecx
  int (__thiscall *v59)(_DWORD *); // eax
  struct xercesc_2_5::DOMNode *v60; // eax
  _DWORD *v61; // ecx
  int (__thiscall *v62)(_DWORD *); // eax
  int v63; // eax
  int v64; // eax
  int (__thiscall *v65)(int); // eax
  int v66; // eax
  int v67; // ebx
  struct xercesc_2_5::DOMNode *v68; // eax
  char v70; // [esp-16h] [ebp-CCh] BYREF
  int v71; // [esp-12h] [ebp-C8h]
  int v72; // [esp-Eh] [ebp-C4h]
  int v73; // [esp-Ah] [ebp-C0h]
  int v74; // [esp-6h] [ebp-BCh]
  int v75; // [esp-2h] [ebp-B8h]
  int v76; // [esp+2h] [ebp-B4h]
  int v77; // [esp+6h] [ebp-B0h] BYREF
  float v78; // [esp+Ah] [ebp-ACh]
  float v79; // [esp+Eh] [ebp-A8h]
  float v80; // [esp+12h] [ebp-A4h]
  float v81; // [esp+16h] [ebp-A0h]
  float v82; // [esp+1Ah] [ebp-9Ch]
  const wchar_t *v83; // [esp+1Eh] [ebp-98h]
  const wchar_t *v84; // [esp+22h] [ebp-94h]
  const wchar_t *v85; // [esp+26h] [ebp-90h]
  int v86; // [esp+32h] [ebp-84h]
  int *v87; // [esp+36h] [ebp-80h]
  char v88[3]; // [esp+3Ah] [ebp-7Ch] BYREF
  char v89; // [esp+3Dh] [ebp-79h]
  float v90; // [esp+46h] [ebp-70h]
  float v91; // [esp+4Ah] [ebp-6Ch]
  float v92; // [esp+4Eh] [ebp-68h]
  float v93; // [esp+52h] [ebp-64h]
  _BYTE v94[32]; // [esp+56h] [ebp-60h] BYREF
  int v95; // [esp+76h] [ebp-40h] BYREF
  _BYTE v96[20]; // [esp+7Ah] [ebp-3Ch] BYREF
  _DWORD v97[7]; // [esp+8Eh] [ebp-28h] BYREF
  int v98; // [esp+B2h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+B6h] [ebp+0h]

  v87 = &v77;
  std::string::string(&v77, "LightData");
  v5 = (XMLSystem *)(a1 + 84);
  FirstNode = XMLSystem::FindFirstNode(
                a2,
                v77,
                LODWORD(v78),
                LODWORD(v79),
                LODWORD(v80),
                LODWORD(v81),
                LODWORD(v82),
                v83);
  v7 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v83 = 0;
  v8 = v7(FirstNode, L"Type");
  XMLSystem::GetString(v94, v8, v83);
  v9 = (int (__cdecl *)(int, const char *))std::operator==<char>;
  v98 = 0;
  if ( (unsigned __int8)std::operator==<char>(v94, "Omni") )
  {
    *(_DWORD *)(*a3 + 1428) = 1;
  }
  else if ( (unsigned __int8)std::operator==<char>(v94, "Targeted")
         || (unsigned __int8)std::operator==<char>(v94, "Free") )
  {
    *(_DWORD *)(*a3 + 1428) = 2;
  }
  else if ( (unsigned __int8)std::operator==<char>(v94, "Directional")
         || (unsigned __int8)std::operator==<char>(v94, "TargetedDirectional") )
  {
    *(_DWORD *)(*a3 + 1428) = 4;
  }
  else if ( (unsigned __int8)std::operator==<char>(v94, "OmniProjector") )
  {
    *(_DWORD *)(*a3 + 1428) = 8;
  }
  v87 = &v77;
  std::string::string(&v77, "ShadowMap");
  if ( XMLSystem::FindFirstNode(
         FirstNode,
         v77,
         LODWORD(v78),
         LODWORD(v79),
         LODWORD(v80),
         LODWORD(v81),
         LODWORD(v82),
         v83)
    && *(_DWORD *)(*a3 + 1428) == 2 )
  {
    *(_BYTE *)(*a3 + 1420) = 1;
  }
  else if ( std::string::find(*a3 + 1364, ".", 0, 1) == -1 )
  {
    v87 = &v77;
    std::string::string(&v77, "ProjectionMap");
    v10 = (_DWORD *)XMLSystem::FindFirstNode(
                      FirstNode,
                      v77,
                      LODWORD(v78),
                      LODWORD(v79),
                      LODWORD(v80),
                      LODWORD(v81),
                      LODWORD(v82),
                      v83);
    if ( v10 )
    {
      v11 = *a3;
      v12 = *(_DWORD *)(*a3 + 1428);
      if ( v12 == 2 || v12 == 8 )
      {
        v83 = 0;
        v82 = 0.0;
        *(_BYTE *)(v11 + 1420) = 0;
        v13 = *v10;
        v81 = 1.0;
        v80 = 1.0;
        v14 = v10;
        v15 = *(int (__thiscall **)(_DWORD *, const wchar_t *))(v13 + 164);
        v79 = 0.0;
        v78 = 0.0;
        v77 = 0;
        v87 = (int *)&v70;
        v16 = v15(v14, L"Name");
        XMLSystem::GetString(&v70, v16, 0);
        Texture::Load(v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, (int)v83);
      }
    }
  }
  v87 = &v77;
  std::string::string(&v77, "Properties");
  v17 = XMLSystem::FindFirstNode(
          FirstNode,
          v77,
          LODWORD(v78),
          LODWORD(v79),
          LODWORD(v80),
          LODWORD(v81),
          LODWORD(v82),
          v83);
  v18 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v17 + 168))(v17, L"Prop");
  v19 = v18;
  if ( v18 )
  {
    v20 = 0;
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v18 + 8))(v18) )
    {
      while ( 1 )
      {
        v21 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v19 + 4))(v19, v20);
        v22 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v21 + 164))(v21, L"name", 0);
        String = XMLSystem::GetString(&v95, v22, v84);
        HIBYTE(v87) = v9(String, "Color");
        LOBYTE(retaddr) = 0;
        std::string::~string(&v95);
        v84 = v20;
        if ( HIBYTE(v87) )
          break;
        v33 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v19 + 4))(v19, v84);
        v34 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v33 + 164))(v33, L"name", 0);
        v35 = XMLSystem::GetString(v96, v34, v85);
        v89 = v9(v35, "Multiplier");
        std::string::~string(v96);
        v36 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
        v85 = v20;
        v37 = (_DWORD *)v36(v19);
        v38 = *v37;
        v84 = 0;
        if ( HIBYTE(v87) )
        {
          v39 = *a4;
          v40 = v37;
          v41 = *(int (__thiscall **)(_DWORD *))(v38 + 164);
          v83 = L"value";
          v42 = (struct xercesc_2_5::DOMNode *)v41(v40);
          v39[273] = XMLSystem::GetFloat(v5, v42, (bool)v83);
          goto LABEL_31;
        }
        v43 = (*(int (__thiscall **)(_DWORD *, const wchar_t *, const wchar_t *))(v38 + 164))(v37, L"name", v84);
        v44 = XMLSystem::GetString(v96, v43, v85);
        v89 = v9(v44, "AttenuationFarEnd");
        std::string::~string(v96);
        v45 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
        v85 = v20;
        v46 = (_DWORD *)v45(v19);
        v47 = *v46;
        v84 = 0;
        if ( HIBYTE(v87) )
        {
          v48 = *a4;
          v49 = v46;
          v50 = *(int (__thiscall **)(_DWORD *))(v47 + 164);
          v83 = L"value";
          v51 = (struct xercesc_2_5::DOMNode *)v50(v49);
          v48[284] = XMLSystem::GetFloat(v5, v51, (bool)v83);
          goto LABEL_31;
        }
        v52 = (*(int (__thiscall **)(_DWORD *, const wchar_t *, const wchar_t *))(v47 + 164))(v46, L"name", v84);
        v53 = XMLSystem::GetString(v96, v52, v85);
        v89 = v9(v53, "Falloff");
        LOBYTE(a2) = 0;
        std::string::~string(v96);
        v54 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
        v85 = v20;
        v55 = (_DWORD *)v54(v19);
        v56 = *v55;
        v84 = 0;
        if ( HIBYTE(v87) )
        {
          v57 = *a4;
          v58 = v55;
          v59 = *(int (__thiscall **)(_DWORD *))(v56 + 164);
          v83 = L"value";
          v60 = (struct xercesc_2_5::DOMNode *)v59(v58);
          v57[285] = XMLSystem::GetFloat(v5, v60, (bool)v83);
          goto LABEL_31;
        }
        v61 = v55;
        v62 = *(int (__thiscall **)(_DWORD *))(v56 + 164);
        v83 = L"name";
        v63 = v62(v61);
        v64 = XMLSystem::GetString(v97, v63, v83);
        LOBYTE(v98) = 5;
        HIBYTE(v86) = v9(v64, "Hotspot");
        LOBYTE(v98) = 0;
        std::string::~string(v97);
        if ( HIBYTE(v86) )
        {
          v65 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
          v83 = v20;
          v66 = v65(v19);
          v67 = *a2 + 1076;
          v68 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v66 + 164))(
                                                 v66,
                                                 L"value",
                                                 0);
          *(float *)(v67 + 68) = XMLSystem::GetFloat(v5, v68, (bool)v83);
          goto LABEL_31;
        }
LABEL_32:
        v20 = (const wchar_t *)((char *)v20 + 1);
        if ( (unsigned int)v20 >= (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) )
          goto LABEL_33;
      }
      v24 = (int *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v19 + 4))(v19, v84);
      v25 = *a4;
      v26 = *v24;
      v84 = 0;
      v25 += 269;
      v27 = (*(int (__thiscall **)(int *, const wchar_t *))(v26 + 164))(v24, L"value");
      Vector = (float *)XMLSystem::GetVector(v5, v88, v27, v83);
      v90 = *Vector;
      v91 = Vector[1];
      v29 = Vector[2];
      v30 = v91;
      v92 = v29;
      v31 = v92;
      *v25 = v90;
      v93 = 1.0;
      v25[1] = v30;
      v32 = v93;
      v25[2] = v31;
      v25[3] = v32;
LABEL_31:
      v9 = (int (__cdecl *)(int, const char *))std::operator==<char>;
      goto LABEL_32;
    }
  }
LABEL_33:
  v98 = -1;
  return std::string::~string(v94);
}
