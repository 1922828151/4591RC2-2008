/*
 * func-name: sub_1003EF60
 * func-address: 0x1003ef60
 * callers: 0x10045740
 * callees: 0x100492d0, 0x10049860, 0x10049a00, 0x1004a5e0, 0x10136530
 */

int __userpurge sub_1003EF60@<eax>(int a1@<ecx>, _DWORD *a2, int *a3, float **a4)
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
  _DWORD *v24; // eax
  float *v25; // ebx
  int v26; // edx
  _DWORD *v27; // ecx
  int (__thiscall *v28)(_DWORD *); // eax
  int v29; // eax
  float *Vector; // eax
  double v31; // st7
  float v32; // eax
  float v33; // ecx
  float v34; // edx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int (__thiscall *v38)(int); // eax
  _DWORD *v39; // eax
  int v40; // edx
  float *v41; // ebx
  _DWORD *v42; // ecx
  int (__thiscall *v43)(_DWORD *); // eax
  struct xercesc_2_5::DOMNode *v44; // eax
  int v45; // eax
  int v46; // eax
  int (__thiscall *v47)(int); // eax
  _DWORD *v48; // eax
  int v49; // edx
  float *v50; // ebx
  _DWORD *v51; // ecx
  int (__thiscall *v52)(_DWORD *); // eax
  struct xercesc_2_5::DOMNode *v53; // eax
  int v54; // eax
  int v55; // eax
  int (__thiscall *v56)(int); // eax
  _DWORD *v57; // eax
  int v58; // edx
  float *v59; // ebx
  _DWORD *v60; // ecx
  int (__thiscall *v61)(_DWORD *); // eax
  struct xercesc_2_5::DOMNode *v62; // eax
  _DWORD *v63; // ecx
  int (__thiscall *v64)(_DWORD *); // eax
  int v65; // eax
  int v66; // eax
  int (__thiscall *v67)(int); // eax
  int v68; // eax
  int v69; // ebx
  struct xercesc_2_5::DOMNode *v70; // eax
  char v72; // [esp-16h] [ebp-CCh] BYREF
  int v73; // [esp-12h] [ebp-C8h]
  int v74; // [esp-Eh] [ebp-C4h]
  int v75; // [esp-Ah] [ebp-C0h]
  int v76; // [esp-6h] [ebp-BCh]
  int v77; // [esp-2h] [ebp-B8h]
  int v78; // [esp+2h] [ebp-B4h]
  int v79; // [esp+6h] [ebp-B0h] BYREF
  float v80; // [esp+Ah] [ebp-ACh]
  float v81; // [esp+Eh] [ebp-A8h]
  float v82; // [esp+12h] [ebp-A4h]
  float v83; // [esp+16h] [ebp-A0h]
  float v84; // [esp+1Ah] [ebp-9Ch]
  const wchar_t *v85; // [esp+1Eh] [ebp-98h]
  const wchar_t *v86; // [esp+22h] [ebp-94h]
  const wchar_t *v87; // [esp+26h] [ebp-90h]
  int v88; // [esp+32h] [ebp-84h]
  int *v89; // [esp+36h] [ebp-80h]
  char v90[3]; // [esp+3Ah] [ebp-7Ch] BYREF
  char v91; // [esp+3Dh] [ebp-79h]
  float v92; // [esp+46h] [ebp-70h]
  float v93; // [esp+4Ah] [ebp-6Ch]
  float v94; // [esp+4Eh] [ebp-68h]
  float v95; // [esp+52h] [ebp-64h]
  _BYTE v96[32]; // [esp+56h] [ebp-60h] BYREF
  int v97; // [esp+76h] [ebp-40h] BYREF
  _BYTE v98[20]; // [esp+7Ah] [ebp-3Ch] BYREF
  _DWORD v99[7]; // [esp+8Eh] [ebp-28h] BYREF
  int v100; // [esp+B2h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+B6h] [ebp+0h]

  v89 = &v79;
  std::string::string(&v79, "LightData");
  v5 = (XMLSystem *)(a1 + 84);
  FirstNode = XMLSystem::FindFirstNode(
                a2,
                v79,
                LODWORD(v80),
                LODWORD(v81),
                LODWORD(v82),
                LODWORD(v83),
                LODWORD(v84),
                v85);
  v7 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
  v85 = 0;
  v8 = v7(FirstNode, L"Type");
  XMLSystem::GetString(v96, v8, v85);
  v9 = (int (__cdecl *)(int, const char *))std::operator==<char>;
  v100 = 0;
  if ( (unsigned __int8)std::operator==<char>(v96, "Omni") )
  {
    *(_DWORD *)(*a3 + 1428) = 1;
  }
  else if ( (unsigned __int8)std::operator==<char>(v96, "Targeted")
         || (unsigned __int8)std::operator==<char>(v96, "Free") )
  {
    *(_DWORD *)(*a3 + 1428) = 2;
  }
  else if ( (unsigned __int8)std::operator==<char>(v96, "Directional")
         || (unsigned __int8)std::operator==<char>(v96, "TargetedDirectional") )
  {
    *(_DWORD *)(*a3 + 1428) = 4;
  }
  else if ( (unsigned __int8)std::operator==<char>(v96, "OmniProjector") )
  {
    *(_DWORD *)(*a3 + 1428) = 8;
  }
  v89 = &v79;
  std::string::string(&v79, "ShadowMap");
  if ( XMLSystem::FindFirstNode(
         FirstNode,
         v79,
         LODWORD(v80),
         LODWORD(v81),
         LODWORD(v82),
         LODWORD(v83),
         LODWORD(v84),
         v85)
    && *(_DWORD *)(*a3 + 1428) == 2 )
  {
    *(_BYTE *)(*a3 + 1420) = 1;
  }
  else if ( std::string::find(*a3 + 1364, ".", 0) == -1 )
  {
    v89 = &v79;
    std::string::string(&v79, "ProjectionMap");
    v10 = (_DWORD *)XMLSystem::FindFirstNode(
                      FirstNode,
                      v79,
                      LODWORD(v80),
                      LODWORD(v81),
                      LODWORD(v82),
                      LODWORD(v83),
                      LODWORD(v84),
                      v85);
    if ( v10 )
    {
      v11 = *a3;
      v12 = *(_DWORD *)(*a3 + 1428);
      if ( v12 == 2 || v12 == 8 )
      {
        v85 = 0;
        v84 = 0.0;
        *(_BYTE *)(v11 + 1420) = 0;
        v13 = *v10;
        v83 = 1.0;
        v82 = 1.0;
        v14 = v10;
        v15 = *(int (__thiscall **)(_DWORD *, const wchar_t *))(v13 + 164);
        v81 = 0.0;
        v80 = 0.0;
        v79 = 0;
        v89 = (int *)&v72;
        v16 = v15(v14, L"Name");
        XMLSystem::GetString(&v72, v16, 0);
        Texture::Load(v72, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, (int)v85);
      }
    }
  }
  v89 = &v79;
  std::string::string(&v79, "Properties");
  v17 = XMLSystem::FindFirstNode(
          FirstNode,
          v79,
          LODWORD(v80),
          LODWORD(v81),
          LODWORD(v82),
          LODWORD(v83),
          LODWORD(v84),
          v85);
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
        String = XMLSystem::GetString(&v97, v22, v86);
        HIBYTE(v89) = v9(String, "Color");
        LOBYTE(retaddr) = 0;
        std::string::~string(&v97);
        v86 = v20;
        if ( HIBYTE(v89) )
          break;
        v35 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v19 + 4))(v19, v86);
        v36 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v35 + 164))(v35, L"name", 0);
        v37 = XMLSystem::GetString(v98, v36, v87);
        v91 = v9(v37, "Multiplier");
        std::string::~string(v98);
        v38 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
        v87 = v20;
        v39 = (_DWORD *)v38(v19);
        v40 = *v39;
        v86 = 0;
        if ( HIBYTE(v89) )
        {
          v41 = *a4;
          v42 = v39;
          v43 = *(int (__thiscall **)(_DWORD *))(v40 + 164);
          v85 = L"value";
          v44 = (struct xercesc_2_5::DOMNode *)v43(v42);
          v41[273] = XMLSystem::GetFloat(v5, v44, (bool)v85);
          goto LABEL_31;
        }
        v45 = (*(int (__thiscall **)(_DWORD *, const wchar_t *, const wchar_t *))(v40 + 164))(v39, L"name", v86);
        v46 = XMLSystem::GetString(v98, v45, v87);
        v91 = v9(v46, "AttenuationFarEnd");
        std::string::~string(v98);
        v47 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
        v87 = v20;
        v48 = (_DWORD *)v47(v19);
        v49 = *v48;
        v86 = 0;
        if ( HIBYTE(v89) )
        {
          v50 = *a4;
          v51 = v48;
          v52 = *(int (__thiscall **)(_DWORD *))(v49 + 164);
          v85 = L"value";
          v53 = (struct xercesc_2_5::DOMNode *)v52(v51);
          v50[284] = XMLSystem::GetFloat(v5, v53, (bool)v85);
          goto LABEL_31;
        }
        v54 = (*(int (__thiscall **)(_DWORD *, const wchar_t *, const wchar_t *))(v49 + 164))(v48, L"name", v86);
        v55 = XMLSystem::GetString(v98, v54, v87);
        v91 = v9(v55, "Falloff");
        LOBYTE(a2) = 0;
        std::string::~string(v98);
        v56 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
        v87 = v20;
        v57 = (_DWORD *)v56(v19);
        v58 = *v57;
        v86 = 0;
        if ( HIBYTE(v89) )
        {
          v59 = *a4;
          v60 = v57;
          v61 = *(int (__thiscall **)(_DWORD *))(v58 + 164);
          v85 = L"value";
          v62 = (struct xercesc_2_5::DOMNode *)v61(v60);
          v59[285] = XMLSystem::GetFloat(v5, v62, (bool)v85);
          goto LABEL_31;
        }
        v63 = v57;
        v64 = *(int (__thiscall **)(_DWORD *))(v58 + 164);
        v85 = L"name";
        v65 = v64(v63);
        v66 = XMLSystem::GetString(v99, v65, v85);
        LOBYTE(v100) = 5;
        HIBYTE(v88) = v9(v66, "Hotspot");
        LOBYTE(v100) = 0;
        std::string::~string(v99);
        if ( HIBYTE(v88) )
        {
          v67 = *(int (__thiscall **)(int))(*(_DWORD *)v19 + 4);
          v85 = v20;
          v68 = v67(v19);
          v69 = *a2 + 1076;
          v70 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v68 + 164))(
                                                 v68,
                                                 L"value",
                                                 0);
          *(float *)(v69 + 68) = XMLSystem::GetFloat(v5, v70, (bool)v85);
          goto LABEL_31;
        }
LABEL_32:
        v20 = (const wchar_t *)((char *)v20 + 1);
        if ( (unsigned int)v20 >= (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 8))(v19) )
          goto LABEL_33;
      }
      v24 = (_DWORD *)(*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v19 + 4))(v19, v86);
      v25 = *a4;
      v26 = *v24;
      v86 = 0;
      v27 = v24;
      v28 = *(int (__thiscall **)(_DWORD *))(v26 + 164);
      v85 = L"value";
      v25 += 269;
      v29 = v28(v27);
      Vector = (float *)XMLSystem::GetVector(v5, v90, v29, v85);
      v92 = *Vector;
      v93 = Vector[1];
      v31 = Vector[2];
      v32 = v93;
      v94 = v31;
      v33 = v94;
      *v25 = v92;
      v95 = 1.0;
      v25[1] = v32;
      v34 = v95;
      v25[2] = v33;
      v25[3] = v34;
LABEL_31:
      v9 = (int (__cdecl *)(int, const char *))std::operator==<char>;
      goto LABEL_32;
    }
  }
LABEL_33:
  v100 = -1;
  return std::string::~string(v96);
}
