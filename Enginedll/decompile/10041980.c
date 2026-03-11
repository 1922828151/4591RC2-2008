/*
 * func-name: sub_10041980
 * func-address: 0x10041980
 * callers: 0x10047270
 * callees: 0x100412c0, 0x100492d0, 0x100497b0, 0x10049860, 0x10049910, 0x10049a00, 0x1004a5e0, 0x1007ec70, 0x10095c40, 0x100971c0, 0x100977a0, 0x10136530, 0x101372b0, 0x10137530, 0x101a26c0
 */

void __thiscall sub_10041980(int this, int a2, World **a3)
{
  bool v4; // zf
  int *FirstNode; // eax
  int v6; // edx
  int v7; // eax
  int ModuleName; // eax
  int v9; // esi
  const char *v10; // eax
  XMLSystem *v11; // edi
  int *v13; // esi
  int (__thiscall *v14)(int *, const wchar_t *); // edx
  int v15; // eax
  float *v16; // eax
  int v17; // edx
  double v18; // st7
  double v19; // st7
  int (__thiscall *v20)(int *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v21; // eax
  double Float; // st7
  int (__thiscall *v23)(int *, const wchar_t *, _DWORD); // eax
  struct xercesc_2_5::DOMNode *v24; // eax
  int v25; // eax
  float *Vector; // eax
  struct xercesc_2_5::DOMNode *v27; // eax
  int (__thiscall *v28)(int *); // edx
  int (__thiscall *v29)(int *, const wchar_t *); // edx
  struct xercesc_2_5::DOMNode *v30; // eax
  int (__thiscall *v31)(int *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v32; // eax
  int (__thiscall *v33)(int *, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v34; // eax
  int v35; // esi
  int (__thiscall *v36)(int, const wchar_t *); // edx
  struct xercesc_2_5::DOMNode *v37; // eax
  char *v38; // eax
  struct xercesc_2_5::DOMNode *v39; // eax
  int (__thiscall *v40)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v41; // eax
  int (__thiscall *v42)(int); // eax
  int (__thiscall *v43)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v44; // eax
  int (__thiscall *v45)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v46; // eax
  int (__thiscall *v47)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v48; // eax
  int (__thiscall *v49)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v50; // eax
  int (__thiscall *v51)(int, const wchar_t *); // eax
  int v52; // eax
  _DWORD *v53; // eax
  _DWORD *v54; // ecx
  int v55; // eax
  int v56; // esi
  int (__thiscall *v57)(int, const wchar_t *); // eax
  int v58; // eax
  int String; // eax
  World *v60; // ecx
  int (__thiscall *v61)(int, const wchar_t *); // eax
  int v62; // eax
  int (__thiscall *v63)(int, const wchar_t *); // eax
  int v64; // eax
  _DWORD *v65; // eax
  World *v66; // ecx
  int (__thiscall *v67)(int, const wchar_t *); // eax
  int v68; // eax
  _DWORD *v69; // eax
  World *v70; // ecx
  int v71; // esi
  struct xercesc_2_5::DOMNode *v72; // eax
  double v73; // st7
  int (__thiscall *v74)(int); // eax
  int (__thiscall *v75)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v76; // eax
  int (__thiscall *v77)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v78; // eax
  int (__thiscall *v79)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v80; // eax
  int *v81; // eax
  int v82; // edx
  struct xercesc_2_5::DOMNode *v83; // eax
  int v84; // eax
  int v85; // esi
  struct xercesc_2_5::DOMNode *v86; // eax
  int (__thiscall *v87)(int); // eax
  struct xercesc_2_5::DOMNode *v88; // eax
  int (__thiscall *v89)(int, const wchar_t *); // eax
  int v90; // eax
  int v91; // eax
  int (__thiscall *v92)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v93; // eax
  int (__thiscall *v94)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v95; // eax
  int (__thiscall *v96)(int, const wchar_t *); // eax
  int v97; // eax
  int v98; // eax
  int (__thiscall *v99)(int, const wchar_t *); // eax
  int v100; // eax
  int v101; // eax
  int (__thiscall *v102)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v103; // eax
  int (__thiscall *v104)(int, const wchar_t *); // eax
  int v105; // eax
  int v106; // eax
  int (__thiscall *v107)(int, const wchar_t *); // eax
  int v108; // eax
  int v109; // eax
  int (__thiscall *v110)(int, const wchar_t *); // eax
  int v111; // eax
  int v112; // eax
  int (__thiscall *v113)(int, const wchar_t *); // eax
  int v114; // eax
  int v115; // eax
  int (__thiscall *v116)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v117; // eax
  int (__thiscall *v118)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v119; // eax
  int (__thiscall *v120)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v121; // eax
  int (__thiscall *v122)(int, const wchar_t *); // eax
  int v123; // eax
  int v124; // eax
  int (__thiscall *v125)(int, const wchar_t *); // eax
  int v126; // eax
  int v127; // eax
  int (__thiscall *v128)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v129; // eax
  int (__thiscall *v130)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v131; // eax
  int (__thiscall *v132)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v133; // eax
  int (__thiscall *v134)(int); // eax
  int (__thiscall *v135)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v136; // eax
  int v137; // eax
  int v138; // eax
  int (__thiscall *v139)(int, const wchar_t *); // eax
  int v140; // eax
  int v141; // eax
  int (__thiscall *v142)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v143; // eax
  int (__thiscall *v144)(int, const wchar_t *); // eax
  int v145; // eax
  int v146; // eax
  int (__thiscall *v147)(int, const wchar_t *); // eax
  int v148; // eax
  int v149; // eax
  int (__thiscall *v150)(int, const wchar_t *); // eax
  int v151; // eax
  int v152; // eax
  int (__thiscall *v153)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v154; // eax
  int (__thiscall *v155)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v156; // eax
  int (__thiscall *v157)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v158; // eax
  int (__thiscall *v159)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v160; // eax
  int (__thiscall *v161)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v162; // eax
  int (__thiscall *v163)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v164; // eax
  int (__thiscall *v165)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v166; // eax
  int (__thiscall *v167)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v168; // eax
  int (__thiscall *v169)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v170; // eax
  int (__thiscall *v171)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v172; // eax
  int (__thiscall *v173)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v174; // eax
  int (__thiscall *v175)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v176; // eax
  int (__thiscall *v177)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v178; // eax
  int (__thiscall *v179)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v180; // eax
  int (__thiscall *v181)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v182; // eax
  int (__thiscall *v183)(int); // eax
  int (__thiscall *v184)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v185; // eax
  char *v186; // ebx
  int v187; // esi
  int v188; // eax
  _DWORD *v189; // ebx
  _DWORD *v190; // eax
  int (__thiscall *v191)(int, const wchar_t *); // edx
  int v192; // eax
  _DWORD *v193; // ebx
  struct Editor *v194; // eax
  int (__thiscall *v195)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v196; // eax
  int *v197; // eax
  int v198; // edx
  struct xercesc_2_5::DOMNode *v199; // eax
  int *v200; // eax
  int v201; // edx
  struct xercesc_2_5::DOMNode *v202; // eax
  char v203[4]; // [esp+120h] [ebp-B0h] BYREF
  int v204; // [esp+124h] [ebp-ACh]
  int v205; // [esp+128h] [ebp-A8h]
  int v206; // [esp+12Ch] [ebp-A4h]
  int v207; // [esp+130h] [ebp-A0h]
  int v208; // [esp+134h] [ebp-9Ch]
  int v209; // [esp+138h] [ebp-98h]
  int v210; // [esp+13Ch] [ebp-94h] BYREF
  float v211; // [esp+140h] [ebp-90h]
  float v212; // [esp+144h] [ebp-8Ch]
  float v213; // [esp+148h] [ebp-88h]
  float v214; // [esp+14Ch] [ebp-84h]
  float v215; // [esp+150h] [ebp-80h]
  const wchar_t *v216; // [esp+154h] [ebp-7Ch]
  bool v217[4]; // [esp+158h] [ebp-78h]
  float v218; // [esp+15Ch] [ebp-74h]
  char v219; // [esp+16Bh] [ebp-65h]
  char *v220; // [esp+16Ch] [ebp-64h]
  int *v221; // [esp+170h] [ebp-60h]
  int v222; // [esp+174h] [ebp-5Ch] BYREF
  int v223; // [esp+178h] [ebp-58h] BYREF
  int v224; // [esp+17Ch] [ebp-54h] BYREF
  float v225[2]; // [esp+184h] [ebp-4Ch] BYREF
  float v226; // [esp+18Ch] [ebp-44h] BYREF
  float v227; // [esp+190h] [ebp-40h]
  float v228; // [esp+194h] [ebp-3Ch]
  float v229; // [esp+198h] [ebp-38h]
  float v230; // [esp+19Ch] [ebp-34h]
  float v231; // [esp+1A0h] [ebp-30h]
  _BYTE v232[4]; // [esp+1A8h] [ebp-28h] BYREF
  _DWORD v233[6]; // [esp+1ACh] [ebp-24h] BYREF
  int v234; // [esp+1CCh] [ebp-4h]
  int retaddr; // [esp+1D0h] [ebp+0h]
  float v236; // [esp+1D8h] [ebp+8h]

  v4 = *(_DWORD *)(this + 180) == 0;
  v220 = (char *)this;
  if ( v4 )
  {
    if ( *((_BYTE *)Engine::Instance() + 1) )
    {
      v221 = &v210;
      std::string::string(&v210, "GameModule");
      FirstNode = (int *)XMLSystem::FindFirstNode(
                           a2,
                           v210,
                           LODWORD(v211),
                           LODWORD(v212),
                           LODWORD(v213),
                           LODWORD(v214),
                           LODWORD(v215),
                           v216);
      if ( FirstNode )
      {
        v6 = *FirstNode;
        v216 = 0;
        v7 = (*(int (__thiscall **)(int *, const wchar_t *))(v6 + 164))(FirstNode, L"Name");
        XMLSystem::GetString(&v226, v7, v216);
        v216 = (const wchar_t *)v232;
        v234 = 0;
        Engine::Instance();
        ModuleName = Engine::GetModuleName(v216);
        LOBYTE(v234) = 1;
        v219 = std::operator!=<char>(&v226, ModuleName);
        LOBYTE(v234) = 0;
        std::string::~string(v232);
        if ( v219 )
        {
          v216 = (const wchar_t *)v232;
          Engine::Instance();
          v9 = Engine::GetModuleName(v216);
          LOBYTE(v234) = 2;
          v216 = (const wchar_t *)std::string::c_str(&v226);
          v10 = (const char *)std::string::c_str(v9);
          SeriousWarning(
            "Game is running module '%s' but tried to load map of module '%s'. Continuing anyway...",
            v10,
            (const char *)v216);
          LOBYTE(v234) = 0;
          std::string::~string(v232);
        }
        v234 = -1;
        std::string::~string(&v226);
      }
    }
    v221 = &v210;
    std::string::string(&v210, "Fog");
    v11 = (XMLSystem *)(this + 84);
    v13 = (int *)XMLSystem::FindFirstNode(
                   a2,
                   v210,
                   LODWORD(v211),
                   LODWORD(v212),
                   LODWORD(v213),
                   LODWORD(v214),
                   LODWORD(v215),
                   v216);
    if ( v13 )
    {
      v4 = (*(int (__thiscall **)(int *, const wchar_t *, _DWORD))(*v13 + 164))(v13, L"Exponent", *(_DWORD *)v217) == 0;
      v14 = *(int (__thiscall **)(int *, const wchar_t *))(*v13 + 164);
      *(float *)v217 = 0.0;
      if ( v4 )
      {
        v25 = ((int (__thiscall *)(int *, const wchar_t *, _DWORD))v14)(v13, L"Color", *(_DWORD *)v217);
        Vector = (float *)XMLSystem::GetVector(v11, &v224, v25, LODWORD(v218));
        v228 = *Vector;
        v229 = Vector[1];
        v230 = Vector[2];
        v231 = 1.0;
        v218 = 0.0;
        *(float *)v217 = 2.0;
        v216 = 0;
        v215 = COERCE_FLOAT(L"Start");
      }
      else
      {
        v15 = v14(v13, L"Color");
        v16 = (float *)XMLSystem::GetVector(v11, &v223, v15, *(_DWORD *)v217);
        v17 = *v13;
        v227 = *v16;
        v18 = v16[1];
        *(float *)v217 = 0.0;
        v228 = v18;
        v216 = L"StartDistance";
        v19 = v16[2];
        v20 = *(int (__thiscall **)(int *, const wchar_t *))(v17 + 164);
        v229 = v19;
        v230 = 1.0;
        v21 = (struct xercesc_2_5::DOMNode *)v20(v13, L"StartDistance");
        Float = XMLSystem::GetFloat(v11, v21, v217[0]);
        v23 = *(int (__thiscall **)(int *, const wchar_t *, _DWORD))(*v13 + 164);
        *(float *)v217 = Float;
        v24 = (struct xercesc_2_5::DOMNode *)v23(v13, L"Exponent", 0);
        *(float *)v217 = XMLSystem::GetFloat(v11, v24, v217[0]);
        v216 = 0;
        v215 = COERCE_FLOAT(L"Start");
      }
      v27 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int *))(*v13 + 164))(v13);
      v215 = XMLSystem::GetFloat(v11, v27, SLOBYTE(v215));
      World::SetFog(
        *a3,
        LODWORD(v227),
        LODWORD(v228),
        LODWORD(v229),
        LODWORD(v230),
        LODWORD(v215),
        v216,
        *(_DWORD *)v217);
      v28 = *(int (__thiscall **)(int *))(*v13 + 164);
      *(float *)v217 = COERCE_FLOAT(L"StartVar");
      if ( v28(v13) )
      {
        v29 = *(int (__thiscall **)(int *, const wchar_t *))(*v13 + 164);
        v216 = 0;
        v30 = (struct xercesc_2_5::DOMNode *)v29(v13, L"StartVar");
        *((float *)*a3 + 11) = XMLSystem::GetFloat(v11, v30, (bool)v216);
      }
      if ( (*(int (__thiscall **)(int *, const wchar_t *))(*v13 + 164))(v13, L"ExponentVar") )
      {
        v31 = *(int (__thiscall **)(int *, const wchar_t *))(*v13 + 164);
        v216 = 0;
        v32 = (struct xercesc_2_5::DOMNode *)v31(v13, L"ExponentVar");
        *((float *)*a3 + 13) = XMLSystem::GetFloat(v11, v32, (bool)v216);
      }
      if ( (*(int (__thiscall **)(int *, const wchar_t *))(*v13 + 164))(v13, L"StartDistanceVar") )
      {
        v33 = *(int (__thiscall **)(int *, const wchar_t *))(*v13 + 164);
        v216 = 0;
        v34 = (struct xercesc_2_5::DOMNode *)v33(v13, L"StartDistanceVar");
        *((float *)*a3 + 15) = XMLSystem::GetFloat(v11, v34, (bool)v216);
      }
    }
    std::string::string(&v210, "SpatialPartition");
    v35 = XMLSystem::FindFirstNode(
            a2,
            v210,
            LODWORD(v211),
            LODWORD(v212),
            LODWORD(v213),
            LODWORD(v214),
            LODWORD(v215),
            v216);
    if ( v35 )
    {
      if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164))(v35, L"AsyncLoad") )
      {
        v36 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164);
        v216 = 0;
        v37 = (struct xercesc_2_5::DOMNode *)v36(v35, L"AsyncLoad");
        *((_BYTE *)*a3 + 724) = XMLSystem::GetBool(v11, v37, (bool)v216);
        v220[44] = *((_BYTE *)*a3 + 724);
      }
      if ( *((_BYTE *)Editor::Instance() + 2056) )
      {
        v38 = v220;
        *((_BYTE *)*a3 + 724) = 0;
        v38[44] = 0;
      }
      v39 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v35 + 164))(
                                             v35,
                                             L"IsOcTree",
                                             0);
      *((_BYTE *)*a3 + 748) = XMLSystem::GetBool(v11, v39, v217[0]);
      v40 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164);
      *(float *)v217 = 0.0;
      v41 = (struct xercesc_2_5::DOMNode *)v40(v35, L"NodesPerLeaf");
      *((_DWORD *)*a3 + 188) = XMLSystem::GetInt(v11, v41, v217[0]);
      v42 = *(int (__thiscall **)(int))(*(_DWORD *)v35 + 164);
      *(float *)v217 = COERCE_FLOAT(L"SubareaBorderX");
      if ( v42(v35)
        && (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164))(v35, L"SubareaBorderZ")
        && (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164))(v35, L"SubareaWidthX")
        && (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164))(v35, L"SubareaWidthZ") )
      {
        v43 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164);
        v216 = 0;
        v44 = (struct xercesc_2_5::DOMNode *)v43(v35, L"SubareaBorderX");
        *((float *)*a3 + 134) = XMLSystem::GetFloat(v11, v44, (bool)v216);
        v45 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164);
        v216 = 0;
        v46 = (struct xercesc_2_5::DOMNode *)v45(v35, L"SubareaBorderZ");
        *((float *)*a3 + 135) = XMLSystem::GetFloat(v11, v46, (bool)v216);
        v47 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164);
        v216 = 0;
        v48 = (struct xercesc_2_5::DOMNode *)v47(v35, L"SubareaWidthX");
        *((_DWORD *)*a3 + 136) = XMLSystem::GetInt(v11, v48, (bool)v216);
        v49 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164);
        v216 = 0;
        v50 = (struct xercesc_2_5::DOMNode *)v49(v35, L"SubareaWidthZ");
        *((_DWORD *)*a3 + 137) = XMLSystem::GetInt(v11, v50, (bool)v216);
      }
      if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164))(v35, L"LogicCoordOffset") )
      {
        v51 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v35 + 164);
        v216 = 0;
        v52 = v51(v35, L"LogicCoordOffset");
        v53 = (_DWORD *)XMLSystem::GetVector(v11, &v222, v52, v216);
        v54 = (_DWORD *)((char *)*a3 + 560);
        *v54 = *v53;
        v54[1] = v53[1];
        v54[2] = v53[2];
      }
    }
    std::string::string(&v210, "General");
    v55 = XMLSystem::FindFirstNode(
            a2,
            v210,
            LODWORD(v211),
            LODWORD(v212),
            LODWORD(v213),
            LODWORD(v214),
            LODWORD(v215),
            v216);
    v56 = v55;
    if ( v55 )
    {
      if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v55 + 164))(v55, L"SceneName") )
      {
        v57 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v56 + 164);
        v216 = 0;
        v58 = v57(v56, L"SceneName");
        String = XMLSystem::GetString(v232, v58, v216);
        v60 = *a3;
        v234 = 3;
        std::string::operator=((char *)v60 + 596, String);
        v234 = -1;
        std::string::~string(v232);
        v61 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v56 + 164);
        v216 = 0;
        v62 = v61(v56, L"LoadingTexture");
        XMLSystem::GetString(&v226, v62, v216);
        v234 = 4;
        if ( (unsigned __int8)std::operator!=<char>(&v226, "UNLOAD") && *((_DWORD *)v220 + 44) )
        {
          v216 = 0;
          v215 = 0.0;
          v214 = 1.0;
          v213 = 1.0;
          v212 = 0.0;
          v211 = 0.0;
          v210 = 0;
          std::string::string(v203, &v226);
          Texture::Load(v203[0], v204, v205, v206, v207, v208, v209, v210, v211, v212, v213, v214, v215, (int)v216);
        }
        v234 = -1;
        std::string::~string(&v226);
      }
      if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v56 + 164))(v56, L"CameraPos") )
      {
        v63 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v56 + 164);
        v216 = 0;
        v64 = v63(v56, L"CameraPos");
        v65 = (_DWORD *)XMLSystem::GetVector(v11, &v222, v64, v216);
        v66 = *a3;
        *((_DWORD *)v66 + 143) = *v65;
        *((_DWORD *)v66 + 144) = v65[1];
        *((_DWORD *)v66 + 145) = v65[2];
      }
      if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v56 + 164))(v56, L"CameraDir") )
      {
        v67 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v56 + 164);
        v216 = 0;
        v68 = v67(v56, L"CameraDir");
        v69 = (_DWORD *)XMLSystem::GetVector(v11, &v222, v68, v216);
        v70 = *a3;
        *((_DWORD *)v70 + 146) = *v69;
        *((_DWORD *)v70 + 147) = v69[1];
        *((_DWORD *)v70 + 148) = v69[2];
      }
    }
    std::string::string(&v210, "Clip");
    v71 = XMLSystem::FindFirstNode(
            a2,
            v210,
            LODWORD(v211),
            LODWORD(v212),
            LODWORD(v213),
            LODWORD(v214),
            LODWORD(v215),
            v216);
    v72 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v71 + 164))(
                                           v71,
                                           L"FarPlane",
                                           0);
    v73 = XMLSystem::GetFloat(v11, v72, v217[0]);
    World::SetClipPlane(*a3, (int)v73);
    v74 = *(int (__thiscall **)(int))(*(_DWORD *)v71 + 164);
    *(float *)v217 = COERCE_FLOAT(L"FarPlaneVar");
    if ( v74(v71) )
    {
      v75 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v71 + 164);
      v216 = 0;
      v76 = (struct xercesc_2_5::DOMNode *)v75(v71, L"FarPlaneVar");
      *((float *)*a3 + 19) = XMLSystem::GetFloat(v11, v76, (bool)v216);
    }
    if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v71 + 164))(v71, L"FarClipSpatialBatching") )
    {
      v77 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v71 + 164);
      v216 = 0;
      v78 = (struct xercesc_2_5::DOMNode *)v77(v71, L"FarClipSpatialBatching");
      *((_BYTE *)*a3 + 84) = XMLSystem::GetBool(v11, v78, (bool)v216);
    }
    if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v71 + 164))(v71, L"ScriptAllLights") )
    {
      v79 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v71 + 164);
      v216 = 0;
      v80 = (struct xercesc_2_5::DOMNode *)v79(v71, L"ScriptAllLights");
      *((_BYTE *)*a3 + 782) = XMLSystem::GetBool(v11, v80, (bool)v216);
    }
    std::string::string(&v210, "LOD");
    v81 = (int *)XMLSystem::FindFirstNode(
                   a2,
                   v210,
                   LODWORD(v211),
                   LODWORD(v212),
                   LODWORD(v213),
                   LODWORD(v214),
                   LODWORD(v215),
                   v216);
    if ( v81 )
    {
      v82 = *v81;
      v216 = 0;
      v83 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int *, const wchar_t *))(v82 + 164))(
                                             v81,
                                             L"LODCullBias");
      *((float *)*a3 + 194) = XMLSystem::GetFloat(v11, v83, (bool)v216);
    }
    std::string::string(&v210, "Sky");
    v84 = XMLSystem::FindFirstNode(
            a2,
            v210,
            LODWORD(v211),
            LODWORD(v212),
            LODWORD(v213),
            LODWORD(v214),
            LODWORD(v215),
            v216);
    v85 = v84;
    if ( v84 )
    {
      v86 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v84 + 164))(
                                             v84,
                                             L"LightCone",
                                             0);
      *((float *)*a3 + 131) = XMLSystem::GetFloat(v11, v86, v217[0]);
      v87 = *(int (__thiscall **)(int))(*(_DWORD *)v85 + 164);
      *(float *)v217 = COERCE_FLOAT(L"SkyEnabled");
      if ( v87(v85) )
      {
        v88 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v85 + 164))(
                                               v85,
                                               L"SkyEnabled",
                                               0);
        *((_BYTE *)*a3 + 3288) = XMLSystem::GetBool(v11, v88, v217[0]);
        v89 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v90 = v89(v85, L"ScriptClass");
        v91 = XMLSystem::GetString(v233, v90, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3396, v91);
        std::string::~string(v233);
        v92 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v93 = (struct xercesc_2_5::DOMNode *)v92(v85, L"DisplayTime");
        *((_BYTE *)*a3 + 3290) = XMLSystem::GetBool(v11, v93, v217[0]);
        v94 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v95 = (struct xercesc_2_5::DOMNode *)v94(v85, L"SkyBoxSize");
        *((float *)*a3 + 823) = XMLSystem::GetFloat(v11, v95, v217[0]);
        v96 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v97 = v96(v85, L"SkyShaderFile");
        v98 = XMLSystem::GetString(v233, v97, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3424, v98);
        std::string::~string(v233);
        v99 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v100 = v99(v85, L"SkyBGShaderTechnique");
        v101 = XMLSystem::GetString(v233, v100, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3452, v101);
        std::string::~string(v233);
        v102 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v103 = (struct xercesc_2_5::DOMNode *)v102(v85, L"EnvironmentMapMultiplier");
        *((float *)*a3 + 824) = XMLSystem::GetFloat(v11, v103, v217[0]);
        v104 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v105 = v104(v85, L"SunAmbientLightName");
        v106 = XMLSystem::GetString(v233, v105, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3480, v106);
        std::string::~string(v233);
        v107 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v108 = v107(v85, L"MoonAmbientLightName");
        v109 = XMLSystem::GetString(v233, v108, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3508, v109);
        std::string::~string(v233);
        v110 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v111 = v110(v85, L"MoonShaderTechnique");
        v112 = XMLSystem::GetString(v233, v111, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3536, v112);
        std::string::~string(v233);
        v113 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v114 = v113(v85, L"MoonTexture");
        v115 = XMLSystem::GetString(v233, v114, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3564, v115);
        std::string::~string(v233);
        v116 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v117 = (struct xercesc_2_5::DOMNode *)v116(v85, L"MoonCycleMinuteOffset");
        *((float *)*a3 + 825) = XMLSystem::GetFloat(v11, v117, v217[0]);
        v118 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v119 = (struct xercesc_2_5::DOMNode *)v118(v85, L"MoonYDistance");
        *((float *)*a3 + 826) = XMLSystem::GetFloat(v11, v119, v217[0]);
        v120 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v121 = (struct xercesc_2_5::DOMNode *)v120(v85, L"MoonXDistance");
        *((float *)*a3 + 827) = XMLSystem::GetFloat(v11, v121, v217[0]);
        v122 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v123 = v122(v85, L"SunShaderTechnique");
        v124 = XMLSystem::GetString(v233, v123, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3592, v124);
        std::string::~string(v233);
        v125 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v126 = v125(v85, L"SunTexture");
        v127 = XMLSystem::GetString(v233, v126, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3620, v127);
        retaddr = -1;
        std::string::~string(v233);
        v128 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v129 = (struct xercesc_2_5::DOMNode *)v128(v85, L"SunCycleMinuteOffset");
        *((float *)*a3 + 828) = XMLSystem::GetFloat(v11, v129, v217[0]);
        v130 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v131 = (struct xercesc_2_5::DOMNode *)v130(v85, L"SunYDistance");
        *((float *)*a3 + 829) = XMLSystem::GetFloat(v11, v131, v217[0]);
        v132 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v133 = (struct xercesc_2_5::DOMNode *)v132(v85, L"SunXDistance");
        *((float *)*a3 + 830) = XMLSystem::GetFloat(v11, v133, v217[0]);
        v134 = *(int (__thiscall **)(int))(*(_DWORD *)v85 + 164);
        *(float *)v217 = COERCE_FLOAT(L"FogIntensity");
        if ( v134(v85) )
        {
          v135 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
          v216 = 0;
          v136 = (struct xercesc_2_5::DOMNode *)v135(v85, L"FogIntensity");
          *((float *)*a3 + 947) = XMLSystem::GetFloat(v11, v136, (bool)v216);
        }
        v137 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v85 + 164))(v85, L"SkyTextureName", 0);
        v138 = XMLSystem::GetString(v233, v137, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3648, v138);
        std::string::~string(v233);
        v139 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v140 = v139(v85, L"SkyTextureNameEnv");
        v141 = XMLSystem::GetString(v233, v140, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3676, v141);
        std::string::~string(v233);
        v142 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v143 = (struct xercesc_2_5::DOMNode *)v142(v85, L"HasClouds");
        *((_BYTE *)*a3 + 3328) = XMLSystem::GetBool(v11, v143, v217[0]);
        v144 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v145 = v144(v85, L"CloudModel");
        v146 = XMLSystem::GetString(v233, v145, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3704, v146);
        std::string::~string(v233);
        v147 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v148 = v147(v85, L"CloudMaterialName");
        v149 = XMLSystem::GetString(v233, v148, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3732, v149);
        std::string::~string(v233);
        v150 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v151 = v150(v85, L"CloudShaderTechnique");
        v152 = XMLSystem::GetString(v233, v151, *(_DWORD *)v217);
        std::string::operator=((char *)*a3 + 3760, v152);
        retaddr = -1;
        std::string::~string(v233);
        v153 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v154 = (struct xercesc_2_5::DOMNode *)v153(v85, L"HasLightning");
        *((_BYTE *)*a3 + 3329) = XMLSystem::GetBool(v11, v154, v217[0]);
        v155 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v156 = (struct xercesc_2_5::DOMNode *)v155(v85, L"LightningStartMinutes");
        *((float *)*a3 + 833) = XMLSystem::GetFloat(v11, v156, v217[0]);
        v157 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v158 = (struct xercesc_2_5::DOMNode *)v157(v85, L"LightningEndMinutes");
        *((float *)*a3 + 834) = XMLSystem::GetFloat(v11, v158, v217[0]);
        v159 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v160 = (struct xercesc_2_5::DOMNode *)v159(v85, L"LightningFlashFrequency");
        *((float *)*a3 + 835) = XMLSystem::GetFloat(v11, v160, v217[0]);
        v161 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v162 = (struct xercesc_2_5::DOMNode *)v161(v85, L"DrawSun");
        *((_BYTE *)*a3 + 3344) = XMLSystem::GetBool(v11, v162, v217[0]);
        v163 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v164 = (struct xercesc_2_5::DOMNode *)v163(v85, L"DrawMoon");
        *((_BYTE *)*a3 + 3345) = XMLSystem::GetBool(v11, v164, v217[0]);
        v165 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v166 = (struct xercesc_2_5::DOMNode *)v165(v85, L"SkyIntensity_HDR");
        *((float *)*a3 + 837) = XMLSystem::GetFloat(v11, v166, v217[0]);
        v167 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v168 = (struct xercesc_2_5::DOMNode *)v167(v85, L"SkyIntensity_LDR");
        *((float *)*a3 + 838) = XMLSystem::GetFloat(v11, v168, v217[0]);
        v169 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v170 = (struct xercesc_2_5::DOMNode *)v169(v85, L"CloudIntensity_HDR");
        *((float *)*a3 + 839) = XMLSystem::GetFloat(v11, v170, v217[0]);
        v171 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v172 = (struct xercesc_2_5::DOMNode *)v171(v85, L"CloudIntensity_LDR");
        *((float *)*a3 + 840) = XMLSystem::GetFloat(v11, v172, v217[0]);
        v173 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v174 = (struct xercesc_2_5::DOMNode *)v173(v85, L"AntiFogBias");
        *((float *)*a3 + 841) = XMLSystem::GetFloat(v11, v174, v217[0]);
        v175 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v176 = (struct xercesc_2_5::DOMNode *)v175(v85, L"DayTimeStart");
        *((float *)*a3 + 842) = XMLSystem::GetFloat(v11, v176, v217[0]);
        v177 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v178 = (struct xercesc_2_5::DOMNode *)v177(v85, L"DayTimeSpeed");
        *((float *)*a3 + 844) = XMLSystem::GetFloat(v11, v178, v217[0]);
        v179 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v180 = (struct xercesc_2_5::DOMNode *)v179(v85, L"SunLightIntensityMultiplier");
        *((float *)*a3 + 846) = XMLSystem::GetFloat(v11, v180, v217[0]);
        v181 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
        *(float *)v217 = 0.0;
        v182 = (struct xercesc_2_5::DOMNode *)v181(v85, L"MoonLightIntensityMultiplier");
        *((float *)*a3 + 847) = XMLSystem::GetFloat(v11, v182, v217[0]);
        v183 = *(int (__thiscall **)(int))(*(_DWORD *)v85 + 164);
        *(float *)v217 = COERCE_FLOAT(L"MaxDayTime");
        if ( v183(v85) )
        {
          v184 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v85 + 164);
          v216 = 0;
          v185 = (struct xercesc_2_5::DOMNode *)v184(v85, L"MaxDayTime");
          *((float *)*a3 + 848) = XMLSystem::GetFloat(v11, v185, (bool)v216);
        }
      }
    }
    std::string::string(&v210, "EditorCam");
    v186 = (char *)a2;
    v187 = XMLSystem::FindFirstNode(
             a2,
             v210,
             LODWORD(v211),
             LODWORD(v212),
             LODWORD(v213),
             LODWORD(v214),
             LODWORD(v215),
             v216);
    if ( v187 && !*((_BYTE *)Editor::Instance() + 2076) )
    {
      v188 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v187 + 164))(v187, L"Direction", 0);
      v189 = (_DWORD *)XMLSystem::GetVector(v11, &v223, v188, *(_DWORD *)v217);
      v190 = (_DWORD *)((char *)Editor::Instance() + 628);
      *v190 = *v189;
      v190[1] = v189[1];
      v190[2] = v189[2];
      v191 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v187 + 164);
      *(float *)v217 = 0.0;
      v192 = v191(v187, L"Location");
      v193 = (_DWORD *)XMLSystem::GetVector(v11, v225, v192, *(_DWORD *)v217);
      v194 = Editor::Instance();
      *((_DWORD *)v194 + 151) = *v193;
      v194 = (struct Editor *)((char *)v194 + 604);
      *((_DWORD *)v194 + 1) = v193[1];
      *((_DWORD *)v194 + 2) = v193[2];
      if ( (*(int (__thiscall **)(int, const wchar_t *, float))(*(_DWORD *)v187 + 164))(
             v187,
             L"FOV",
             COERCE_FLOAT(LODWORD(v218))) )
      {
        v195 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v187 + 164);
        v216 = 0;
        v196 = (struct xercesc_2_5::DOMNode *)v195(v187, L"FOV");
        v236 = XMLSystem::GetFloat(v11, v196, (bool)v216);
        *((float *)Editor::Instance() + 60) = v236;
      }
      v186 = (char *)a2;
    }
    std::string::string(&v210, "Occlusion");
    v197 = (int *)XMLSystem::FindFirstNode(
                    v186,
                    v210,
                    LODWORD(v211),
                    LODWORD(v212),
                    LODWORD(v213),
                    LODWORD(v214),
                    LODWORD(v215),
                    v216);
    if ( v197 )
    {
      v198 = *v197;
      v216 = 0;
      v199 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int *, const wchar_t *))(v198 + 164))(
                                              v197,
                                              L"DisableOcclusion");
      *((_BYTE *)*a3 + 20) = XMLSystem::GetBool(v11, v199, (bool)v216);
    }
    std::string::string(&v210, "Editor");
    v200 = (int *)XMLSystem::FindFirstNode(
                    v186,
                    v210,
                    LODWORD(v211),
                    LODWORD(v212),
                    LODWORD(v213),
                    LODWORD(v214),
                    LODWORD(v215),
                    v216);
    if ( v200 )
    {
      v201 = *v200;
      v216 = 0;
      v202 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int *, const wchar_t *))(v201 + 164))(
                                              v200,
                                              L"CurrentActorID");
      dword_10283F38 = XMLSystem::GetInt(v11, v202, (bool)v216);
    }
    sub_100412C0(v220, v186, (char *)*a3 + 896);
  }
}
