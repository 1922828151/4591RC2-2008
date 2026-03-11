/*
 * func-name: ?SaveMesh@OBJSave@@AAEXAAV?$basic_ofstream@_WU?$char_traits@_W@std@@@std@@PAVMesh@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@AAVMatrix@@AAH@Z
 * func-address: 0x10033d30
 * callers: 0x10034690, 0x10034920
 * callees: 0x10036280, 0x10036480, 0x101786e0, 0x10179050, 0x10179840, 0x1017a280, 0x101a251c
 */

int __userpurge OBJSave::SaveMesh@<eax>(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        char a7,
        int a8,
        int a9,
        int a10,
        char a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        _DWORD *a18)
{
  int v18; // ebx
  int v19; // esi
  int v20; // edi
  int v21; // eax
  int v22; // esi
  int v23; // eax
  int v24; // eax
  char v25; // al
  int v26; // edx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // ebp
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  unsigned int v37; // ebp
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  unsigned int v45; // ebx
  int v46; // ebp
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int (__cdecl *v51)(int); // edx
  int v52; // ebx
  int v53; // eax
  _DWORD *v54; // ebp
  int v55; // ebx
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  int v67; // eax
  int v68; // ebx
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int v73; // eax
  int v74; // eax
  int v75; // eax
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int v79; // eax
  int v80; // eax
  int v81; // eax
  int v82; // eax
  int v83; // eax
  int v84; // eax
  int v85; // eax
  int v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // eax
  int v90; // eax
  int (__stdcall *v91)(int); // ecx
  unsigned int v92; // eax
  float v94; // [esp+58h] [ebp-D8h]
  float v95; // [esp+60h] [ebp-D0h]
  float v96; // [esp+60h] [ebp-D0h]
  float v97; // [esp+60h] [ebp-D0h]
  int v98; // [esp+60h] [ebp-D0h]
  int v99; // [esp+60h] [ebp-D0h]
  const wchar_t *v101; // [esp+64h] [ebp-CCh]
  int v102; // [esp+64h] [ebp-CCh]
  int v103; // [esp+64h] [ebp-CCh]
  int v104; // [esp+68h] [ebp-C8h]
  int v105; // [esp+68h] [ebp-C8h]
  float v106; // [esp+68h] [ebp-C8h]
  float v107; // [esp+68h] [ebp-C8h]
  float v108; // [esp+68h] [ebp-C8h]
  int v109; // [esp+68h] [ebp-C8h]
  int v110; // [esp+68h] [ebp-C8h]
  int v111; // [esp+68h] [ebp-C8h]
  int v112; // [esp+68h] [ebp-C8h]
  int v114; // [esp+7Ch] [ebp-B4h]
  float v115; // [esp+80h] [ebp-B0h]
  float v116; // [esp+80h] [ebp-B0h]
  float v117; // [esp+80h] [ebp-B0h]
  float v118; // [esp+80h] [ebp-B0h]
  float v119; // [esp+80h] [ebp-B0h]
  float v120; // [esp+80h] [ebp-B0h]
  float v121; // [esp+84h] [ebp-ACh] BYREF
  float v122; // [esp+88h] [ebp-A8h]
  float v123; // [esp+8Ch] [ebp-A4h]
  int v124; // [esp+90h] [ebp-A0h]
  unsigned int v125; // [esp+94h] [ebp-9Ch]
  float v126[2]; // [esp+98h] [ebp-98h] BYREF
  int v127; // [esp+A0h] [ebp-90h] BYREF
  float v128[16]; // [esp+A4h] [ebp-8Ch] BYREF
  float v129; // [esp+E4h] [ebp-4Ch]
  float v130; // [esp+E8h] [ebp-48h]
  int v131; // [esp+F0h] [ebp-40h] BYREF
  int v132; // [esp+12Ch] [ebp-4h]

  v18 = 0;
  v132 = 0;
  if ( OBJSave::s_CoordSystem > 1u )
  {
    v19 = a6;
  }
  else
  {
    memset(v128, 0, sizeof(v128));
    sub_101786E0(1.0);
    v128[15] = 1.0;
    v19 = a6;
    (**(void (__thiscall ***)(struct MeshOps *, int, _DWORD, float *))MeshOps::Instance)(MeshOps::Instance, a6, 0, v128);
  }
  v20 = (*(int (__thiscall **)(int, int, int, int, int))(*(_DWORD *)v19 + 4))(v19, a3, a4, a2, a1);
  if ( !std::string::length(&a11) )
    std::string::operator=(&a11, "Unlabeled Mesh");
  v21 = sub_1017A280(&v128[4], &a11);
  v22 = a9;
  v104 = v21;
  a7 = 1;
  v23 = sub_10036280(a9, L"g ");
  v24 = std::operator<<<wchar_t>(v23, v104);
  std::wostream::operator<<(v24);
  a7 = 0;
  std::wstring::~wstring(&v128[4]);
  (*(void (__stdcall **)(int, int))(*(_DWORD *)v20 + 60))(v20, 16);
  (*(void (__stdcall **)(int, int, float *))(*(_DWORD *)v20 + 68))(v20, 16, v126);
  v25 = (*(int (__stdcall **)(int))(*(_DWORD *)v20 + 36))(v20);
  v26 = *(_DWORD *)v20;
  HIBYTE(v123) = v25 & 1;
  v124 = (*(int (__stdcall **)(int))(v26 + 32))(v20);
  sub_10179840(&v131);
  v105 = (*(int (__stdcall **)(int, const char *, _DWORD))(*(_DWORD *)v20 + 20))(v20, " vertices", std::endl);
  v27 = sub_10036480(v22, "# ");
  v28 = std::wostream::operator<<(v27, v105);
  v29 = sub_10036480(v28, &v127);
  std::wostream::operator<<(v29);
  v30 = 0;
  if ( (*(int (__cdecl **)(int))(*(_DWORD *)v20 + 20))(v20) )
  {
    while ( 1 )
    {
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)a10 + 148))(a10, &v128[4], v18 + v127);
      v121 = 0.0;
      v122 = 0.0;
      v123 = 0.0;
      sub_10179050(&v128[4], &v121);
      if ( !OBJSave::s_CoordSystem )
        break;
      if ( OBJSave::s_CoordSystem == 1 )
      {
        v115 = v121;
        v121 = v123;
        goto LABEL_11;
      }
LABEL_12:
      v116 = OBJSave::s_Scale * v123;
      v106 = v116;
      v117 = OBJSave::s_Scale * v122;
      v95 = v117;
      v118 = OBJSave::s_Scale * v121;
      v31 = sub_10036280(v22, L"v ");
      v32 = std::wostream::operator<<(v31, LODWORD(v118));
      v33 = sub_10036280(v32, " ");
      v34 = std::wostream::operator<<(v33, LODWORD(v95));
      v35 = sub_10036280(v34, " ");
      v36 = std::wostream::operator<<(v35, LODWORD(v106));
      std::wostream::operator<<(v36);
      v18 += v125;
      if ( ++v30 >= (unsigned int)(*(int (__stdcall **)(int))(*(_DWORD *)v20 + 20))(v20) )
        goto LABEL_13;
    }
    v115 = v122;
    v122 = v123;
LABEL_11:
    v123 = v115;
    goto LABEL_12;
  }
LABEL_13:
  v37 = 0;
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)v20 + 20))(v20) )
  {
    v38 = 0;
    do
    {
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)a10 + 148))(a10, &v128[4], v38 + v127);
      v121 = 0.0;
      v122 = 0.0;
      v123 = 0.0;
      sub_10179050(&v128[7], &v121);
      if ( OBJSave::s_CoordSystem )
      {
        if ( OBJSave::s_CoordSystem == 1 )
        {
          v120 = -v123;
          v126[0] = -v122;
          v128[0] = -v121;
          v128[1] = v120;
          v121 = v120;
          v128[2] = v126[0];
          v122 = v126[0];
          v128[3] = v128[0];
          v123 = v128[0];
        }
      }
      else
      {
        v119 = v122;
        v122 = v123;
        v123 = v119;
      }
      v107 = v123;
      v96 = v122;
      v94 = v121;
      v39 = sub_10036280(v22, L"vn ");
      v40 = std::wostream::operator<<(v39, LODWORD(v94));
      v41 = sub_10036280(v40, L" ");
      v42 = std::wostream::operator<<(v41, LODWORD(v96));
      v43 = sub_10036280(v42, L" ");
      v44 = std::wostream::operator<<(v43, LODWORD(v107));
      std::wostream::operator<<(v44);
      v38 += v125;
      ++v37;
    }
    while ( v37 < (*(int (__stdcall **)(int))(*(_DWORD *)v20 + 20))(v20) );
  }
  v45 = 0;
  if ( (*(int (__stdcall **)(int))(*(_DWORD *)v20 + 20))(v20) )
  {
    v46 = 0;
    do
    {
      (*(void (__thiscall **)(int, float *, int))(*(_DWORD *)a10 + 148))(a10, &v128[4], v46 + v127);
      if ( OBJSave::s_CoordSystem < 2u )
      {
        v108 = -v130;
        v101 = L" ";
        v97 = v129;
        v47 = sub_10036280(v22, L"vt ");
      }
      else
      {
        v108 = v130;
        v101 = L" ";
        v97 = v129;
        v47 = sub_10036280(v22, L"vt ");
      }
      v48 = std::wostream::operator<<(v47, LODWORD(v97));
      v49 = sub_10036280(v48, v101);
      v50 = std::wostream::operator<<(v49, LODWORD(v108));
      std::wostream::operator<<(v50);
      v46 += v125;
      ++v45;
    }
    while ( v45 < (*(int (__stdcall **)(int))(*(_DWORD *)v20 + 20))(v20) );
  }
  v51 = *(int (__cdecl **)(int))(*(_DWORD *)v20 + 16);
  v52 = 0;
  v126[0] = 0.0;
  v53 = v51(v20);
  v54 = a18;
  if ( v53 )
  {
    v114 = 0;
    v124 = 0;
    do
    {
      if ( HIBYTE(v123) )
      {
        v55 = v124 + LODWORD(v126[0]);
        v56 = *(_DWORD *)(v124 + LODWORD(v126[0]));
        v109 = *v54 + v56 + 1;
        v98 = v56 + 1;
        v57 = sub_10036280(v22, L"f ");
        v58 = std::wostream::operator<<(v57, v109);
        v59 = sub_10036480(v58, L"/");
        v60 = std::wostream::operator<<(v59, v98);
        v61 = sub_10036480(v60, L"/");
        std::wostream::operator<<(v61, v109);
        v62 = *(_DWORD *)(v55 + 4);
        v110 = *v54 + v62 + 1;
        v99 = v62 + 1;
        v63 = sub_10036280(v22, L" ");
        v64 = std::wostream::operator<<(v63, v110);
        v65 = sub_10036480(v64, L"/");
        v66 = std::wostream::operator<<(v65, v99);
        v67 = sub_10036480(v66, L"/");
        std::wostream::operator<<(v67, v110);
        v68 = *(_DWORD *)(v55 + 8);
        v102 = *v54 + v68 + 1;
        v69 = sub_10036280(v22, L" ");
        v70 = std::wostream::operator<<(v69, v102);
        v71 = sub_10036480(v70, L"/");
        v72 = std::wostream::operator<<(v71, v68 + 1);
        v73 = sub_10036480(v72, L"/");
        v74 = std::wostream::operator<<(v73, v102);
        std::wostream::operator<<(v74);
        v52 = v114;
      }
      else
      {
        v111 = *(unsigned __int16 *)(v52 + LODWORD(v126[0])) + *v54 + 1;
        v75 = sub_10036280(v22, L"f ");
        v76 = std::wostream::operator<<(v75, v111);
        v77 = sub_10036480(v76, L"/");
        v78 = std::wostream::operator<<(v77, v111);
        v79 = sub_10036480(v78, L"/");
        std::wostream::operator<<(v79, v111);
        v112 = *(unsigned __int16 *)(v52 + LODWORD(v126[0]) + 2) + *v54 + 1;
        v80 = sub_10036280(v22, L" ");
        v81 = std::wostream::operator<<(v80, v112);
        v82 = sub_10036480(v81, L"/");
        v83 = std::wostream::operator<<(v82, v112);
        v84 = sub_10036480(v83, L"/");
        std::wostream::operator<<(v84, v112);
        v103 = *(unsigned __int16 *)(v52 + LODWORD(v126[0]) + 4) + *v54 + 1;
        v85 = sub_10036280(v22, L" ");
        v86 = std::wostream::operator<<(v85, v103);
        v87 = sub_10036480(v86, L"/");
        v88 = std::wostream::operator<<(v87, v103);
        v89 = sub_10036480(v88, L"/");
        v90 = std::wostream::operator<<(v89, v103);
        std::wostream::operator<<(v90);
      }
      v91 = *(int (__stdcall **)(int))(*(_DWORD *)v20 + 16);
      ++v125;
      v124 += 12;
      v52 += 6;
      v114 = v52;
      v92 = v91(v20);
    }
    while ( v125 < v92 );
  }
  *v54 += (*(int (__cdecl **)(int))(*(_DWORD *)v20 + 20))(v20);
  (*(void (__cdecl **)(int))(*(_DWORD *)v20 + 64))(v20);
  (*(void (**)(void))(*(_DWORD *)v20 + 72))();
  if ( OBJSave::s_CoordSystem <= 1u )
  {
    memset(v128, 0, sizeof(v128));
    sub_101786E0(1.0);
    v128[15] = 1.0;
    (**(void (__thiscall ***)(struct MeshOps *, int, _DWORD, float *))MeshOps::Instance)(MeshOps::Instance, a6, 0, v128);
  }
  v132 = -1;
  return std::string::~string(&a7);
}
