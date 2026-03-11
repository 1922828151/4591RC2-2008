/*
 * func-name: sub_10038CA0
 * func-address: 0x10038ca0
 * callers: 0x1015c120
 * callees: 0x10009330, 0x10009450, 0x10009550, 0x1000a0a0, 0x1000bc40, 0x10011140, 0x100111d0, 0x100116a0, 0x10011e50, 0x10012750, 0x10012c20, 0x10019ec0, 0x10036a40, 0x100384a0, 0x100492d0, 0x10049910, 0x10049a00, 0x1004a5e0, 0x1004a8d0, 0x1004bcb0, 0x10050b80, 0x10051b50, 0x100977a0, 0x1009db20, 0x100de9e0, 0x100ee2e0, 0x100f2ca0, 0x10136530, 0x10179840, 0x101a2534
 */

int __thiscall sub_10038CA0(int this, float *a2, int *a3)
{
  int (__thiscall *v3)(float *, const wchar_t *); // edx
  int result; // eax
  XMLSystem *v6; // ebx
  int v7; // eax
  int (__thiscall *v8)(float *, const wchar_t *); // eax
  int v9; // eax
  int FirstNode; // esi
  int (__thiscall *v11)(int, const wchar_t *); // eax
  int v12; // eax
  float *Vector; // eax
  int (__thiscall *v14)(int, const wchar_t *); // edx
  int v15; // eax
  float *v16; // eax
  int (__thiscall *v17)(int, const wchar_t *); // eax
  int v18; // eax
  int *v19; // eax
  int (__thiscall *v20)(int, const wchar_t *); // edx
  int v21; // eax
  int *v22; // eax
  int v23; // eax
  float v24; // esi
  float v25; // eax
  bool v26; // zf
  int v27; // edx
  int v28; // eax
  int v29; // eax
  int v30; // esi
  int (__thiscall *v31)(int, const wchar_t *); // eax
  int v32; // eax
  unsigned __int8 *v33; // eax
  int v34; // eax
  _DWORD *v35; // edi
  int v36; // esi
  int (__thiscall *v37)(int, const wchar_t *); // edx
  int v38; // eax
  _DWORD *v39; // eax
  _DWORD *v40; // edi
  int (__thiscall *v41)(int, const wchar_t *); // eax
  int v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // edi
  int (__thiscall *v45)(int, const wchar_t *); // edx
  int v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48; // edi
  int (__thiscall *v49)(int, const wchar_t *); // eax
  int v50; // eax
  _DWORD *v51; // eax
  int v52; // eax
  _DWORD *v53; // eax
  int v54; // ecx
  int v55; // eax
  int v56; // esi
  int v57; // ecx
  unsigned int v58; // edi
  int (__thiscall *v59)(int, unsigned int); // eax
  struct xercesc_2_5::DOMNode *v60; // eax
  int (__thiscall *v61)(int); // eax
  int (__thiscall *v62)(int); // edx
  int v63; // eax
  int v64; // eax
  unsigned int i; // edi
  int v66; // eax
  int v67; // eax
  int v68; // eax
  int (__thiscall *v69)(int, StaticModel *); // edx
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  int (__thiscall *v73)(int); // eax
  StaticModel *v74; // edi
  int v75; // esi
  int v76; // esi
  struct xercesc_2_5::DOMNode *v77; // eax
  int (__thiscall *v78)(int); // edx
  int v79; // esi
  unsigned int j; // edi
  int (__thiscall *v81)(int); // edx
  int v82; // eax
  int v83; // eax
  void *String; // eax
  int v85; // ecx
  int v86; // eax
  int v87; // eax
  int v88; // esi
  unsigned int v89; // edi
  int (__thiscall *v90)(int); // eax
  int v91; // eax
  int v92; // eax
  void *v93; // eax
  int v94; // ecx
  int v95; // esi
  int v96; // eax
  int v97; // esi
  int v98; // eax
  int v99; // eax
  int (__thiscall *v100)(int, const wchar_t *); // eax
  int v101; // eax
  int v102; // eax
  int (__thiscall *v103)(int, const wchar_t *); // eax
  int v104; // eax
  int v105; // eax
  int (__thiscall *v106)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v107; // eax
  int (__thiscall *v108)(int); // eax
  int v109; // eax
  int v110; // esi
  unsigned int v111; // edi
  int (__thiscall *v112)(int); // eax
  int v113; // eax
  int v114; // eax
  void *v115; // eax
  int (__thiscall *v116)(int); // eax
  int v117; // eax
  int v118; // eax
  void *v119; // eax
  Prefab *v120; // eax
  Prefab *v121; // eax
  _DWORD *v122; // eax
  unsigned int v123; // esi
  int v124; // eax
  int v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // eax
  char v129; // al
  Model *v130; // eax
  Model *v131; // esi
  StaticModel *v132; // esi
  double v133; // st7
  int v134; // eax
  int v135; // eax
  int v136; // eax
  int v137; // ecx
  int v138; // esi
  int (__thiscall *v139)(int, const wchar_t *); // eax
  int v140; // eax
  float *v141; // eax
  int (__thiscall *v142)(int, const wchar_t *); // edx
  int v143; // eax
  float *v144; // eax
  int (__thiscall *v145)(int, const wchar_t *); // eax
  int v146; // eax
  float *v147; // eax
  int (__thiscall *v148)(int, const wchar_t *); // edx
  int v149; // eax
  float *v150; // eax
  int v151; // ecx
  float *v152; // edi
  Model *v153; // eax
  char *v154; // esi
  int v155; // eax
  Actor *v156; // eax
  Actor *v157; // eax
  int v158; // edx
  _DWORD *v159; // eax
  Light *v160; // eax
  Light *v161; // eax
  _DWORD *v162; // eax
  unsigned int m; // esi
  int v164; // eax
  int v165; // eax
  int v166; // eax
  float *v167; // eax
  double v168; // st7
  double v169; // st7
  _DWORD *v170; // eax
  int v171; // edx
  struct EditorVar *v172; // eax
  int v173; // ecx
  struct EditorVar *v174; // eax
  int v175; // ecx
  unsigned int v176; // edi
  int k; // ebx
  int v178; // edx
  int v179; // eax
  int v180; // esi
  int v181; // edx
  int v182; // eax
  int v183; // esi
  int v184; // esi
  struct EditorVar *v185; // eax
  int v186; // ecx
  struct World *v187; // eax
  const char *v188; // ecx
  const char *v189; // eax
  char v190[4]; // [esp+24h] [ebp-27Ch] BYREF
  int v191; // [esp+28h] [ebp-278h]
  int v192; // [esp+2Ch] [ebp-274h]
  int v193; // [esp+30h] [ebp-270h]
  int v194; // [esp+34h] [ebp-26Ch]
  int v195; // [esp+38h] [ebp-268h]
  int v196; // [esp+3Ch] [ebp-264h]
  int v197; // [esp+40h] [ebp-260h]
  int v198[16]; // [esp+44h] [ebp-25Ch] BYREF
  wchar_t *v199; // [esp+84h] [ebp-21Ch]
  int v200; // [esp+94h] [ebp-20Ch]
  StaticModel *v201; // [esp+98h] [ebp-208h]
  int v202; // [esp+9Ch] [ebp-204h] BYREF
  int v203; // [esp+A0h] [ebp-200h] BYREF
  float v204; // [esp+A4h] [ebp-1FCh]
  struct World **v205; // [esp+A8h] [ebp-1F8h]
  float v206; // [esp+ACh] [ebp-1F4h] BYREF
  float v207; // [esp+B0h] [ebp-1F0h]
  float v208; // [esp+B4h] [ebp-1ECh]
  _BYTE v209[4]; // [esp+B8h] [ebp-1E8h] BYREF
  _DWORD v210[6]; // [esp+BCh] [ebp-1E4h] BYREF
  float v211[4]; // [esp+D4h] [ebp-1CCh] BYREF
  float v212; // [esp+E4h] [ebp-1BCh]
  float v213; // [esp+E8h] [ebp-1B8h]
  float v214; // [esp+ECh] [ebp-1B4h]
  int v215; // [esp+F4h] [ebp-1ACh]
  int v216; // [esp+F8h] [ebp-1A8h]
  int v217; // [esp+FCh] [ebp-1A4h]
  int v218; // [esp+104h] [ebp-19Ch]
  int v219; // [esp+108h] [ebp-198h]
  int v220; // [esp+10Ch] [ebp-194h]
  _BYTE v221[4]; // [esp+114h] [ebp-18Ch] BYREF
  _DWORD v222[6]; // [esp+118h] [ebp-188h] BYREF
  _BYTE v223[4]; // [esp+130h] [ebp-170h] BYREF
  _DWORD v224[6]; // [esp+134h] [ebp-16Ch] BYREF
  int v225; // [esp+14Ch] [ebp-154h] BYREF
  RPC_CSTR StringUuid[6]; // [esp+150h] [ebp-150h] BYREF
  float v227[24]; // [esp+168h] [ebp-138h] BYREF
  int v228[7]; // [esp+1C8h] [ebp-D8h] BYREF
  _BYTE v229[4]; // [esp+1E4h] [ebp-BCh] BYREF
  _BYTE v230[24]; // [esp+1E8h] [ebp-B8h] BYREF
  _BYTE v231[4]; // [esp+200h] [ebp-A0h] BYREF
  _BYTE v232[16]; // [esp+204h] [ebp-9Ch] BYREF
  int v233; // [esp+214h] [ebp-8Ch]
  _BYTE v234[52]; // [esp+220h] [ebp-80h] BYREF
  int v235; // [esp+254h] [ebp-4Ch] BYREF
  int v236; // [esp+258h] [ebp-48h]
  int v237; // [esp+25Ch] [ebp-44h]
  int v238[5]; // [esp+264h] [ebp-3Ch] BYREF
  _BYTE v239[28]; // [esp+278h] [ebp-28h] BYREF
  int v240; // [esp+29Ch] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+2A0h] [ebp+0h]

  v3 = *(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164);
  v205 = (struct World **)this;
  result = v3(a2, L"Name");
  if ( result )
  {
    result = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"NodeType");
    if ( result )
    {
      v6 = (XMLSystem *)(this + 84);
      v7 = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"Name");
      XMLSystem::GetString(v221, v7, 0);
      v8 = *(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164);
      v240 = 0;
      v9 = v8(a2, L"NodeType");
      XMLSystem::GetString(v223, v9, 0);
      v204 = COERCE_FLOAT(&v198[9]);
      LOBYTE(v240) = 1;
      std::string::string(&v198[9], "NodeTM");
      FirstNode = XMLSystem::FindFirstNode(a2, v198[9], v198[10], v198[11], v198[12], v198[13], v198[14], v198[15]);
      sub_1000BC40(v211);
      v11 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v198[15] = 0;
      v12 = v11(FirstNode, L"Row0");
      Vector = (float *)XMLSystem::GetVector(this + 84, &v206, v12, v198[15]);
      v211[0] = *Vector;
      v211[1] = Vector[1];
      v211[2] = Vector[2];
      v14 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v198[15] = 0;
      v15 = v14(FirstNode, L"Row1");
      v16 = (float *)XMLSystem::GetVector(this + 84, &v206, v15, v198[15]);
      v212 = *v16;
      v213 = v16[1];
      v214 = v16[2];
      v17 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v198[15] = 0;
      v18 = v17(FirstNode, L"Row2");
      v19 = (int *)XMLSystem::GetVector(this + 84, &v206, v18, v198[15]);
      v215 = *v19;
      v216 = v19[1];
      v217 = v19[2];
      v20 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v198[15] = 0;
      v21 = v20(FirstNode, L"Row3");
      v22 = (int *)XMLSystem::GetVector(this + 84, &v206, v21, v198[15]);
      v218 = *v22;
      v219 = v22[1];
      v23 = v22[2];
      v204 = COERCE_FLOAT(&v198[9]);
      v220 = v23;
      std::string::string(&v198[9], "CustomProperties");
      v24 = COERCE_FLOAT(XMLSystem::FindFirstNode(a2, v198[9], v198[10], v198[11], v198[12], v198[13], v198[14], v198[15]));
      v204 = v24;
      HIBYTE(v200) = Serializer::s_UseSkinning;
      Serializer::s_UseSkinning = 1;
      if ( v24 != 0.0 )
      {
        *(float *)&v203 = COERCE_FLOAT(&v198[9]);
        std::string::string(&v198[9], "Actor");
        v25 = COERCE_FLOAT(
                XMLSystem::FindFirstNode(
                  LODWORD(v24),
                  v198[9],
                  v198[10],
                  v198[11],
                  v198[12],
                  v198[13],
                  v198[14],
                  v198[15]));
        v26 = *(_DWORD *)(this + 176) == 0;
        *(float *)&v203 = v25;
        if ( !v26 && v25 != 0.0 )
        {
          v27 = *(_DWORD *)LODWORD(v25);
          v198[15] = 0;
          v28 = (*(int (__thiscall **)(float, const wchar_t *))(v27 + 164))(COERCE_FLOAT(LODWORD(v25)), L"Class");
          XMLSystem::GetString(v228, v28, v198[15]);
          v198[15] = 0;
          *(float *)&v201 = COERCE_FLOAT(&v198[8]);
          LOBYTE(v240) = 2;
          std::string::string(&v198[8], v228);
          v29 = Factory::create(v198[8], v198[9], v198[10], v198[11], v198[12], v198[13], v198[14], v198[15]);
          *a3 = v29;
          if ( v29 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v29 + 96))(v29) )
            {
              if ( *a3 )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)*a3 + 80))(*a3, 1);
              LOBYTE(v240) = 1;
              std::string::~string(v228);
              goto LABEL_136;
            }
            v30 = v203;
            if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v203 + 164))(v203, L"GUID") )
            {
              v31 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v30 + 164);
              v198[15] = 0;
              v32 = v31(v30, L"GUID");
              XMLSystem::GetString(&v225, v32, v198[15]);
              v33 = StringUuid[0];
              if ( StringUuid[5] < (RPC_CSTR)0x10 )
                v33 = (unsigned __int8 *)StringUuid;
              UuidFromStringA(v33, (UUID *)(*a3 + 256));
              std::string::~string(&v225);
            }
            if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v30 + 164))(v30, L"BakedTM") )
            {
              *(float *)&v201 = COERCE_FLOAT(&v198[9]);
              std::string::string(&v198[9], "BakedTM");
              v34 = XMLSystem::FindFirstNode(v30, v198[9], v198[10], v198[11], v198[12], v198[13], v198[14], v198[15]);
              v35 = (_DWORD *)*a3;
              v36 = v34;
              v37 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v34 + 164);
              v198[15] = 0;
              v35 += 158;
              v38 = v37(v34, L"Row0");
              v39 = (_DWORD *)XMLSystem::GetVector(v6, &v206, v38, v198[15]);
              *v35 = *v39;
              v35[1] = v39[1];
              v35[2] = v39[2];
              v40 = (_DWORD *)*a3;
              v41 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v36 + 164);
              v198[15] = 0;
              v40 += 162;
              v42 = v41(v36, L"Row1");
              v43 = (_DWORD *)XMLSystem::GetVector(v6, &v206, v42, v198[15]);
              *v40 = *v43;
              v40[1] = v43[1];
              v40[2] = v43[2];
              v44 = (_DWORD *)*a3;
              v45 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v36 + 164);
              v198[15] = 0;
              v44 += 166;
              v46 = v45(v36, L"Row2");
              v47 = (_DWORD *)XMLSystem::GetVector(v6, &v206, v46, v198[15]);
              *v44 = *v47;
              v44[1] = v47[1];
              v44[2] = v47[2];
              v48 = (_DWORD *)*a3;
              v49 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v36 + 164);
              v198[15] = 0;
              v48 += 170;
              v50 = v49(v36, L"Row3");
              v51 = (_DWORD *)XMLSystem::GetVector(v6, &v206, v50, v198[15]);
              *v48 = *v51;
              v48[1] = v51[1];
              v48[2] = v51[2];
            }
            v52 = *a3;
            v26 = *a3 == 0;
            BYTE2(v200) = 0;
            if ( !v26 )
              BYTE2(v200) = *(_BYTE *)(v52 + 213) != 0;
            std::string::operator=(v52 + 444, v221);
            qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v227), 0x40u);
            v53 = (_DWORD *)*a3;
            v53[214] = v218;
            v53 += 214;
            v53[1] = v219;
            v53[2] = v220;
            v54 = v203;
            *(_BYTE *)(*a3 + 440) = 1;
            v55 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v54 + 168))(v54, L"Param");
            v56 = v55;
            v57 = v55;
            if ( BYTE2(v200) )
            {
              v58 = 0;
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v55 + 8))(v55) )
              {
                do
                {
                  v59 = *(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v56 + 4);
                  v203 = *(int *)(*a3 + 216);
                  v60 = (struct xercesc_2_5::DOMNode *)v59(v56, v58);
                  XMLSystem::ReadParameter(v6, v203, v60);
                  ++v58;
                }
                while ( v58 < (*(int (__thiscall **)(int))(*(_DWORD *)v56 + 8))(v56) );
              }
            }
            else
            {
              v61 = *(int (__thiscall **)(int))(*(_DWORD *)v55 + 8);
              *(float *)&v201 = 0.0;
              if ( v61(v57) )
              {
                do
                {
                  v62 = *(int (__thiscall **)(int))(*(_DWORD *)v56 + 4);
                  v198[15] = (int)v201;
                  v63 = v62(v56);
                  v64 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v63 + 164))(v63, L"Name", 0);
                  XMLSystem::GetString(v209, v64, v198[15]);
                  LOBYTE(v240) = 3;
                  for ( i = 0; ; ++i )
                  {
                    v66 = *(_DWORD *)(*a3 + 428);
                    if ( !v66 || i >= (*(_DWORD *)(*a3 + 432) - v66) / 96 )
                      break;
                    v67 = std::vector<EditorVar>::operator[]((_DWORD *)(*a3 + 424), i);
                    std::string::string(v239, v67 + 4);
                    LOBYTE(v240) = 4;
                    if ( (unsigned __int8)std::operator==<char>(v209, v239) )
                    {
                      std::string::string(&v225);
                      v68 = *(_DWORD *)v56;
                      v198[15] = (int)&v225;
                      v198[14] = (int)&v203;
                      v69 = *(int (__thiscall **)(int, StaticModel *))(v68 + 4);
                      LOBYTE(v240) = 5;
                      v70 = v69(v56, v201);
                      v71 = *a3;
                      v198[13] = v70;
                      v72 = std::vector<EditorVar>::operator[]((_DWORD *)(v71 + 424), i);
                      XMLSystem::ReadParameter(v6, (int)&v202, *(_DWORD *)(v72 + 88), v198[13], v198[14], v198[15]);
                      LOBYTE(v240) = 4;
                      std::string::~string(&v225);
                    }
                    LOBYTE(v240) = 3;
                    std::string::~string(v239);
                  }
                  LOBYTE(v240) = 2;
                  std::string::~string(v209);
                  v73 = *(int (__thiscall **)(int))(*(_DWORD *)v56 + 8);
                  v201 = (StaticModel *)((char *)v201 + 1);
                  v74 = v201;
                }
                while ( (unsigned int)v74 < v73(v56) );
              }
            }
            v202 = (int)&v198[9];
            std::string::string(&v198[9], "ExcludeList");
            v75 = XMLSystem::FindFirstNode(a2, v198[9], v198[10], v198[11], v198[12], v198[13], v198[14], v198[15]);
            if ( v75
              || (v202 = (int)&v198[9],
                  std::string::string(&v198[9], "LightData"),
                  (v76 = XMLSystem::FindFirstNode(
                           a2,
                           v198[9],
                           v198[10],
                           v198[11],
                           v198[12],
                           v198[13],
                           v198[14],
                           v198[15])) != 0)
              && (v202 = (int)&v198[9],
                  std::string::string(&v198[9], "ExcludeList"),
                  (v75 = XMLSystem::FindFirstNode(
                           v76,
                           v198[9],
                           v198[10],
                           v198[11],
                           v198[12],
                           v198[13],
                           v198[14],
                           v198[15])) != 0) )
            {
              v77 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v75 + 164))(
                                                     v75,
                                                     L"Include",
                                                     0);
              *(_BYTE *)(*a3 + 332) = !XMLSystem::GetBool(v6, v77, (bool)v199);
              v78 = *(int (__thiscall **)(int))(*(_DWORD *)v75 + 168);
              v199 = L"Light";
              v79 = v78(v75);
              if ( v79 )
              {
                for ( j = 0; j < (*(int (__thiscall **)(int))(*(_DWORD *)v79 + 8))(v79); ++j )
                {
                  v81 = *(int (__thiscall **)(int))(*(_DWORD *)v79 + 4);
                  v198[15] = j;
                  v82 = v81(v79);
                  v83 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v82 + 164))(v82, L"Name", 0);
                  String = (void *)XMLSystem::GetString(v209, v83, v198[15]);
                  v85 = *a3;
                  LOBYTE(v240) = 6;
                  sub_100116A0((_DWORD *)(v85 + 336), String);
                  LOBYTE(v240) = 2;
                  std::string::~string(v209);
                }
              }
            }
            v202 = (int)&v198[9];
            std::string::string(&v198[9], "OcclusionList");
            v86 = XMLSystem::FindFirstNode(a2, v198[9], v198[10], v198[11], v198[12], v198[13], v198[14], v198[15]);
            if ( v86 )
            {
              v87 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v86 + 168))(v86, L"Actor");
              v88 = v87;
              if ( v87 )
              {
                v89 = 0;
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v87 + 8))(v87) )
                {
                  do
                  {
                    v90 = *(int (__thiscall **)(int))(*(_DWORD *)v88 + 4);
                    v198[15] = v89;
                    v91 = v90(v88);
                    v92 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v91 + 164))(v91, L"Name", 0);
                    v93 = (void *)XMLSystem::GetString(v209, v92, v198[15]);
                    v94 = *a3;
                    LOBYTE(v240) = 7;
                    sub_100116A0((_DWORD *)(v94 + 400), v93);
                    LOBYTE(v240) = 2;
                    std::string::~string(v209);
                    ++v89;
                  }
                  while ( v89 < (*(int (__thiscall **)(int))(*(_DWORD *)v88 + 8))(v88) );
                }
              }
            }
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3) )
            {
              v95 = *a3;
              if ( std::string::find(*a3 + 1364, L".", 0, 1) != -1 )
              {
                v198[15] = 0;
                *(float *)&v198[14] = 0.0;
                *(float *)&v198[13] = 1.0;
                *(float *)&v198[12] = 1.0;
                *(float *)&v198[11] = 0.0;
                *(float *)&v198[10] = 0.0;
                v198[9] = 0;
                v202 = (int)&v198[2];
                std::string::string(&v198[2], v95 + 1364);
                Texture::Load(
                  v198[2],
                  v198[3],
                  v198[4],
                  v198[5],
                  v198[6],
                  v198[7],
                  v198[8],
                  v198[9],
                  *(float *)&v198[10],
                  *(float *)&v198[11],
                  *(float *)&v198[12],
                  *(float *)&v198[13],
                  *(float *)&v198[14],
                  v198[15]);
              }
            }
          }
          LOBYTE(v240) = 1;
          std::string::~string(v228);
          v24 = v204;
        }
      }
      ScriptData::ScriptData((ScriptData *)v229);
      LOBYTE(v240) = 8;
      if ( v24 != 0.0 )
      {
        v202 = (int)&v198[9];
        std::string::string(&v198[9], "Script");
        v96 = XMLSystem::FindFirstNode(
                LODWORD(v24),
                v198[9],
                v198[10],
                v198[11],
                v198[12],
                v198[13],
                v198[14],
                v198[15]);
        v97 = v96;
        if ( v96 )
        {
          v98 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v96 + 164))(v96, L"File", 0);
          v99 = XMLSystem::GetString(v210, v98, v199);
          std::string::operator=(v230, v99);
          std::string::~string(v210);
          v100 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v97 + 164);
          v199 = 0;
          v101 = v100(v97, L"Class");
          v102 = XMLSystem::GetString(v210, v101, v199);
          std::string::operator=(v232, v102);
          std::string::~string(v210);
          v103 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v97 + 164);
          v199 = 0;
          v104 = v103(v97, L"Parent");
          v105 = XMLSystem::GetString(v210, v104, v199);
          std::string::operator=(v234, v105);
          LOBYTE(retaddr) = 8;
          std::string::~string(v210);
          v106 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v97 + 164);
          v199 = 0;
          v107 = (struct xercesc_2_5::DOMNode *)v106(v97, L"IncludeModel");
          v239[0] = XMLSystem::GetBool(v6, v107, (bool)v199);
          v108 = *(int (__thiscall **)(int))(*(_DWORD *)v97 + 168);
          v199 = L"Param";
          v109 = v108(v97);
          v110 = v109;
          if ( v109 )
          {
            v111 = 0;
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v109 + 8))(v109) )
            {
              do
              {
                v112 = *(int (__thiscall **)(int))(*(_DWORD *)v110 + 4);
                v198[15] = v111;
                v113 = v112(v110);
                v114 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v113 + 164))(v113, L"Name", 0);
                v115 = (void *)XMLSystem::GetString(v209, v114, v198[15]);
                LOBYTE(v240) = 12;
                sub_100116A0(&v235, v115);
                LOBYTE(v240) = 8;
                std::string::~string(v209);
                v116 = *(int (__thiscall **)(int))(*(_DWORD *)v110 + 4);
                v198[15] = v111;
                v117 = v116(v110);
                v118 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v117 + 164))(v117, L"Value", 0);
                v119 = (void *)XMLSystem::GetString(v209, v118, v198[15]);
                LOBYTE(v240) = 13;
                sub_100116A0(v238, v119);
                LOBYTE(v240) = 8;
                std::string::~string(v209);
                ++v111;
              }
              while ( v111 < (*(int (__thiscall **)(int))(*(_DWORD *)v110 + 8))(v110) );
            }
          }
        }
      }
      Serializer::s_UseSkinning = HIBYTE(v200);
      if ( *a3 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3)
        || (unsigned __int8)std::operator==<char>(v223, "GeomObject") )
      {
        if ( !*a3 )
        {
          v120 = (Prefab *)operator new(0x494u);
          v202 = (int)v120;
          LOBYTE(v240) = 14;
          if ( v120 )
            v121 = Prefab::Prefab(v120, v205[44]);
          else
            v121 = 0;
          v198[15] = (int)v221;
          LOBYTE(v240) = 8;
          *a3 = (int)v121;
          std::string::operator=((char *)v121 + 444, v198[15]);
          qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v227), 0x40u);
          v122 = (_DWORD *)(*a3 + 856);
          *v122 = v218;
          v122[1] = v219;
          v198[15] = (int)"StaticMesh";
          v198[14] = (int)v231;
          v122[2] = v220;
          HIWORD(v200) = 0;
          if ( (unsigned __int8)std::operator==<char>(v198[14], v198[15]) )
          {
            v123 = 0;
            *(float *)&v201 = 0.0;
            while ( v236 && v123 < (v237 - v236) / 28 )
            {
              if ( (unsigned __int8)std::operator==<char>((char *)v201 + v236, "noclip") )
              {
                v198[15] = (int)"true";
                v124 = sub_1000A0A0(v238, v123);
                if ( (unsigned __int8)std::operator==<char>(v124, v198[15])
                  || (v198[15] = (int)"1",
                      v125 = sub_1000A0A0(v238, v123),
                      (unsigned __int8)std::operator==<char>(v125, v198[15])) )
                {
                  ++v123;
                  v201 = (StaticModel *)((char *)v201 + 28);
                  HIBYTE(v200) = 1;
                }
                else
                {
                  ++v123;
                  v201 = (StaticModel *)((char *)v201 + 28);
                  HIBYTE(v200) = 0;
                }
              }
              else
              {
                v198[15] = (int)"invisible";
                v126 = sub_1000A0A0(&v235, v123);
                if ( (unsigned __int8)std::operator==<char>(v126, v198[15]) )
                {
                  v198[15] = (int)"true";
                  v127 = sub_1000A0A0(v238, v123);
                  if ( (unsigned __int8)std::operator==<char>(v127, v198[15])
                    || (v198[15] = (int)"1",
                        v128 = sub_1000A0A0(v238, v123),
                        v129 = std::operator==<char>(v128, v198[15]),
                        BYTE2(v200) = 0,
                        v129) )
                  {
                    BYTE2(v200) = 1;
                  }
                }
                ++v123;
                v201 = (StaticModel *)((char *)v201 + 28);
              }
            }
            std::string::clear(v231);
          }
          *(_BYTE *)(*a3 + 724) = HIBYTE(v200);
          *(_BYTE *)(*a3 + 816) = BYTE2(v200);
        }
        v130 = (Model *)operator new(0x1C8u);
        v202 = (int)v130;
        LOBYTE(v240) = 15;
        if ( v130 )
        {
          *(float *)&v131 = COERCE_FLOAT(Model::Model(v130));
          v201 = v131;
        }
        else
        {
          *(float *)&v131 = 0.0;
          *(float *)&v201 = 0.0;
        }
        v26 = *(_BYTE *)(*a3 + 724) == 0;
        LOBYTE(v240) = 8;
        v202 = (int)&v198[9];
        v198[8] = (int)"CollisionModel";
        *((_BYTE *)v131 + 137) = v26;
        std::string::string(&v198[9], v198[8]);
        *(float *)&v203 = COERCE_FLOAT(
                            XMLSystem::FindFirstNode(
                              a2,
                              v198[9],
                              v198[10],
                              v198[11],
                              v198[12],
                              v198[13],
                              v198[14],
                              v198[15]));
        if ( sub_100384A0((char *)v205, v131, a2, (char *)v131 + 308, 0) )
        {
          v202 = (int)v198;
          qmemcpy(v198, (char *)v201 + 224, sizeof(v198));
          ModelFrame::UpdateMatrices(
            *((_DWORD *)v201 + 77),
            v198[0],
            v198[1],
            v198[2],
            v198[3],
            v198[4],
            v198[5],
            v198[6],
            v198[7],
            v198[8],
            v198[9],
            v198[10],
            v198[11],
            v198[12],
            v198[13],
            v198[14],
            v198[15]);
          (*(void (__thiscall **)(StaticModel *))(*(_DWORD *)v201 + 8))(v201);
          v132 = v201;
          if ( !ISave::IsConverting )
            StaticModel::RemoveSceneOffset(v201);
          v133 = *(float *)(*((_DWORD *)v132 + 77) + 368);
          v198[15] = (int)"_";
          v204 = v133;
          *((float *)v132 + 13) = v204;
          *(_DWORD *)(*a3 + 716) = v132;
          v134 = std::string::string(v228, v198[15]);
          LOBYTE(v240) = 16;
          v135 = std::operator+<char>(v239, v205 + 14, v134);
          v198[12] = *a3 + 444;
          LOBYTE(v240) = 17;
          v136 = std::operator+<char>(v209, v135, v198[12]);
          v137 = *(_DWORD *)(*a3 + 716);
          LOBYTE(v240) = 18;
          std::string::operator=(v137 + 320, v136);
          LOBYTE(v240) = 17;
          std::string::~string(v209);
          LOBYTE(v240) = 16;
          std::string::~string(v239);
          LOBYTE(v240) = 8;
          std::string::~string(v228);
          v26 = v203 == 0;
          *(_BYTE *)(*(_DWORD *)(*a3 + 716) + 312) = 1;
          if ( !v26 )
          {
            v202 = (int)&v198[9];
            std::string::string(&v198[9], "RelativeTransform");
            v138 = XMLSystem::FindFirstNode(v203, v198[9], v198[10], v198[11], v198[12], v198[13], v198[14], v198[15]);
            sub_1000BC40(v227);
            v139 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v138 + 164);
            v198[15] = 0;
            v140 = v139(v138, L"Row0");
            v141 = (float *)XMLSystem::GetVector(v6, &v206, v140, v198[15]);
            v227[0] = *v141;
            v227[1] = v141[1];
            v227[2] = v141[2];
            v142 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v138 + 164);
            v198[15] = 0;
            v143 = v142(v138, L"Row1");
            v144 = (float *)XMLSystem::GetVector(v6, &v206, v143, v198[15]);
            v227[4] = *v144;
            v227[5] = v144[1];
            v227[6] = v144[2];
            v145 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v138 + 164);
            v198[15] = 0;
            v146 = v145(v138, L"Row2");
            v147 = (float *)XMLSystem::GetVector(v6, &v206, v146, v198[15]);
            v227[8] = *v147;
            v227[9] = v147[1];
            v227[10] = v147[2];
            v148 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v138 + 164);
            v198[15] = 0;
            v149 = v148(v138, L"Row3");
            v150 = (float *)XMLSystem::GetVector(v6, &v206, v149, v198[15]);
            v227[12] = *v150;
            v151 = *a3;
            v227[13] = v150[1];
            v227[14] = v150[2];
            v152 = (float *)(*(_DWORD *)(v151 + 716) + 148);
            v198[15] = 456;
            qmemcpy(v152, v227, 0x40u);
            v153 = (Model *)operator new(v198[15]);
            v202 = (int)v153;
            LOBYTE(v240) = 19;
            if ( v153 )
              v154 = (char *)Model::Model(v153);
            else
              v154 = 0;
            LOBYTE(v240) = 8;
            if ( sub_100384A0((char *)v205, (struct StaticModel *)v154, (float *)v203, v154 + 308, 0) )
            {
              *(_DWORD *)(*(_DWORD *)(*a3 + 716) + 144) = v154;
              (*(void (__thiscall **)(char *))(*(_DWORD *)v154 + 8))(v154);
              v204 = *(float *)(*((_DWORD *)v154 + 77) + 368);
              *((float *)v154 + 13) = v204;
            }
            else
            {
              (*(void (__thiscall **)(char *))(*(_DWORD *)v154 + 8))(v154);
              (*(void (__thiscall **)(char *, int))(*(_DWORD *)v154 + 12))(v154, 1);
            }
          }
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*a3 + 716) + 28))(
            *(_DWORD *)(*a3 + 716),
            *a3 + 868,
            *a3 + 856);
        }
        else
        {
          (*(void (__thiscall **)(Model *))(*(_DWORD *)v131 + 8))(v131);
          (*(void (__thiscall **)(Model *, int))(*(_DWORD *)v131 + 12))(v131, 1);
        }
        goto LABEL_113;
      }
      if ( !(unsigned __int8)std::operator==<char>(v223, "Light")
        && (!*a3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3)) )
      {
        if ( v233 )
        {
          v155 = *a3;
          if ( *a3 )
            goto LABEL_114;
          v156 = (Actor *)operator new(0x41Cu);
          v202 = (int)v156;
          LOBYTE(v240) = 21;
          if ( v156 )
            v157 = Actor::Actor(v156, v205[44]);
          else
            v157 = 0;
          v198[15] = (int)v221;
          LOBYTE(v240) = 8;
          *a3 = (int)v157;
          std::string::operator=((char *)v157 + 444, v198[15]);
          v158 = *a3;
          v198[15] = (int)v227;
          *(_BYTE *)(v158 + 724) = 1;
          qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v198[15]), 0x40u);
          v159 = (_DWORD *)*a3;
          v159[214] = v218;
          v159 += 214;
          v159[1] = v219;
          v159[2] = v220;
          *(_BYTE *)(*a3 + 440) = 1;
        }
LABEL_113:
        v155 = *a3;
        if ( !*a3 )
        {
LABEL_130:
          v188 = (const char *)v222[0];
          if ( v222[5] < 0x10u )
            v188 = (const char *)v222;
          v189 = (const char *)v224[0];
          if ( v224[5] < 0x10u )
            v189 = (const char *)v224;
          SeriousWarning("Unexpected type: %s on %s", v189, v188);
LABEL_135:
          LOBYTE(v240) = 1;
          ScriptData::~ScriptData((ScriptData *)v229);
LABEL_136:
          LOBYTE(v240) = 0;
          std::string::~string(v223);
          v240 = -1;
          return std::string::~string(v221);
        }
LABEL_114:
        if ( v233 )
        {
          ScriptData::operator=((_BYTE *)(v155 + 472), (int)v229);
          v171 = *a3;
          v198[15] = 0;
          v198[14] = 1;
          v202 = (int)&v198[7];
          v198[6] = (int)"Script name";
          *(_BYTE *)(v171 + 726) = 0;
          std::string::string(&v198[7], v198[6]);
          v204 = COERCE_FLOAT(v198);
          LOBYTE(v240) = 22;
          std::string::string(v198, "Scripting");
          v197 = *a3 + 500;
          *(float *)&v203 = COERCE_FLOAT(v190);
          LOBYTE(v240) = 23;
          std::string::string(v190, "Name");
          LOBYTE(v240) = 8;
          v172 = (struct EditorVar *)EditorVar::EditorVar(
                                       v227,
                                       v190[0],
                                       v191,
                                       v192,
                                       v193,
                                       v194,
                                       v195,
                                       v196,
                                       v197,
                                       v198[0],
                                       v198[1],
                                       v198[2],
                                       v198[3],
                                       v198[4],
                                       v198[5],
                                       v198[6],
                                       v198[7],
                                       v198[8],
                                       v198[9],
                                       v198[10],
                                       v198[11],
                                       v198[12],
                                       v198[13],
                                       v198[14],
                                       v198[15]);
          v173 = *a3;
          LOBYTE(v240) = 24;
          std::vector<EditorVar>::push_back((_DWORD *)(v173 + 424), v172);
          LOBYTE(v240) = 8;
          EditorVar::~EditorVar((EditorVar *)v227);
          v198[15] = 0;
          v198[14] = 1;
          v202 = (int)&v198[7];
          std::string::string(&v198[7], "Script includes model?");
          v204 = COERCE_FLOAT(v198);
          LOBYTE(v240) = 25;
          std::string::string(v198, "Scripting");
          v197 = *a3 + 616;
          *(float *)&v203 = COERCE_FLOAT(v190);
          LOBYTE(v240) = 26;
          std::string::string(v190, "IncludeModel");
          LOBYTE(v240) = 8;
          v174 = (struct EditorVar *)EditorVar::EditorVar(
                                       v227,
                                       v190[0],
                                       v191,
                                       v192,
                                       v193,
                                       v194,
                                       v195,
                                       v196,
                                       v197,
                                       v198[0],
                                       v198[1],
                                       v198[2],
                                       v198[3],
                                       v198[4],
                                       v198[5],
                                       v198[6],
                                       v198[7],
                                       v198[8],
                                       v198[9],
                                       v198[10],
                                       v198[11],
                                       v198[12],
                                       v198[13],
                                       v198[14],
                                       v198[15]);
          v175 = *a3;
          LOBYTE(v240) = 27;
          std::vector<EditorVar>::push_back((_DWORD *)(v175 + 424), v174);
          LOBYTE(v240) = 8;
          EditorVar::~EditorVar((EditorVar *)v227);
          v176 = 0;
          for ( k = 0; ; k += 28 )
          {
            v178 = *(_DWORD *)(*a3 + 588);
            if ( !v178 || v176 >= (*(_DWORD *)(*a3 + 592) - v178) / 28 )
              break;
            v198[15] = 0;
            v198[14] = 1;
            v202 = (int)&v198[7];
            std::string::string(&v198[7], "Script Parameter");
            v204 = COERCE_FLOAT(v198);
            LOBYTE(v240) = 28;
            std::string::string(v198, "Scripting");
            v179 = *(_DWORD *)(*a3 + 604);
            v180 = *a3 + 600;
            LOBYTE(v240) = 29;
            if ( !v179 || v176 >= (*(_DWORD *)(v180 + 8) - v179) / 28 )
              invalid_parameter_noinfo();
            v181 = *(_DWORD *)(v180 + 4);
            v182 = *(_DWORD *)(*a3 + 588);
            v183 = *a3 + 584;
            v197 = k + v181;
            if ( !v182 || v176 >= (*(_DWORD *)(v183 + 8) - v182) / 28 )
              invalid_parameter_noinfo();
            v184 = k + *(_DWORD *)(v183 + 4);
            *(float *)&v203 = COERCE_FLOAT(v190);
            std::string::string(v190, v184);
            LOBYTE(v240) = 8;
            v185 = (struct EditorVar *)EditorVar::EditorVar(
                                         v227,
                                         v190[0],
                                         v191,
                                         v192,
                                         v193,
                                         v194,
                                         v195,
                                         v196,
                                         v197,
                                         v198[0],
                                         v198[1],
                                         v198[2],
                                         v198[3],
                                         v198[4],
                                         v198[5],
                                         v198[6],
                                         v198[7],
                                         v198[8],
                                         v198[9],
                                         v198[10],
                                         v198[11],
                                         v198[12],
                                         v198[13],
                                         v198[14],
                                         v198[15]);
            v186 = *a3;
            LOBYTE(v240) = 30;
            std::vector<EditorVar>::push_back((_DWORD *)(v186 + 424), v185);
            LOBYTE(v240) = 8;
            EditorVar::~EditorVar((EditorVar *)v227);
            ++v176;
          }
        }
        if ( *a3 )
        {
          *(_BYTE *)(*a3 + 440) = 1;
          v187 = v205[44];
          if ( v187 && *((_BYTE *)v187 + 3284) )
            (*(void (__thiscall **)(int))(*(_DWORD *)*a3 + 12))(*a3);
          if ( *a3 )
            goto LABEL_135;
        }
        goto LABEL_130;
      }
      if ( *a3 )
        goto LABEL_112;
      v160 = (Light *)operator new(0x5B0u);
      v202 = (int)v160;
      LOBYTE(v240) = 20;
      v161 = v160 ? Light::Light(v160, v205[44]) : 0;
      v198[15] = (int)v221;
      LOBYTE(v240) = 8;
      *a3 = (int)v161;
      std::string::operator=((char *)v161 + 444, v198[15]);
      qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v227), 0x40u);
      v162 = (_DWORD *)(*a3 + 856);
      *v162 = v218;
      v162[1] = v219;
      v198[15] = (int)"Light";
      v198[14] = (int)v231;
      v162[2] = v220;
      if ( !(unsigned __int8)std::operator==<char>(v198[14], v198[15]) )
      {
LABEL_112:
        sub_10036A40((int)v205, a2, a3, (float **)v199);
        v167 = (float *)*a3;
        v204 = -v212;
        v167 += 281;
        *(float *)&v203 = -v213;
        *(float *)&v201 = -v214;
        v206 = v204;
        v168 = *(float *)&v203;
        *v167 = v204;
        v207 = v168;
        v169 = *(float *)&v201;
        v167[1] = v207;
        v208 = v169;
        v167[2] = v208;
        v170 = (_DWORD *)(*a3 + 1112);
        *v170 = v218;
        v170[1] = v219;
        v170[2] = v220;
        *(_BYTE *)(*a3 + 1053) = 1;
        goto LABEL_113;
      }
      for ( m = 0; ; ++m )
      {
        while ( 1 )
        {
          if ( !v236 || m >= (v237 - v236) / 28 )
          {
            std::string::clear(v231);
            goto LABEL_112;
          }
          v198[15] = (int)"SphericalHarmonics";
          v164 = sub_1000A0A0(&v235, m);
          if ( (unsigned __int8)std::operator==<char>(v164, v198[15]) )
            break;
LABEL_110:
          ++m;
        }
        v198[15] = (int)"true";
        v165 = sub_1000A0A0(v238, m);
        if ( (unsigned __int8)std::operator==<char>(v165, v198[15])
          || (v198[15] = (int)"1", v166 = sub_1000A0A0(v238, m), (unsigned __int8)std::operator==<char>(v166, v198[15])) )
        {
          *(_DWORD *)(*a3 + 1432) = 1;
          goto LABEL_110;
        }
        *(_DWORD *)(*a3 + 1432) = 0;
      }
    }
  }
  return result;
}
