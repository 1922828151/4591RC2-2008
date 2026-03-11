/*
 * func-name: sub_10045740
 * func-address: 0x10045740
 * callers: 0x10047270
 * callees: 0x10009330, 0x10009450, 0x10009550, 0x1000a0a0, 0x1000bc40, 0x10011140, 0x100111d0, 0x100116a0, 0x10011e50, 0x10012750, 0x10012c20, 0x10019ec0, 0x1003ef60, 0x10044cf0, 0x100492d0, 0x10049910, 0x10049a00, 0x1004a5e0, 0x1004a8d0, 0x1004bcb0, 0x10050b80, 0x10051b50, 0x100977a0, 0x1009db20, 0x100de9e0, 0x100ee2e0, 0x100f2ca0, 0x10136530, 0x1015c790, 0x10174960, 0x10179840, 0x101a2534
 */

int __thiscall sub_10045740(int *this, float *a2, int *a3)
{
  int (__thiscall *v3)(float *, const wchar_t *); // edx
  int result; // eax
  XMLSystem *v6; // ebx
  int v7; // eax
  int (__thiscall *v8)(float *); // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int (__thiscall *v12)(float *, const wchar_t *); // eax
  int v13; // eax
  int FirstNode; // esi
  int (__thiscall *v15)(int, const wchar_t *); // eax
  int v16; // eax
  float *Vector; // eax
  int (__thiscall *v18)(int, const wchar_t *); // edx
  int v19; // eax
  float *v20; // eax
  int (__thiscall *v21)(int, const wchar_t *); // eax
  int v22; // eax
  int *v23; // eax
  int (__thiscall *v24)(int, const wchar_t *); // edx
  int v25; // eax
  int *v26; // eax
  int v27; // eax
  float v28; // esi
  float v29; // eax
  bool v30; // zf
  int v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // esi
  int (__thiscall *v35)(int, const wchar_t *); // eax
  int v36; // eax
  unsigned __int8 *v37; // eax
  int v38; // eax
  _DWORD *v39; // edi
  int v40; // esi
  int (__thiscall *v41)(int, const wchar_t *); // edx
  int v42; // eax
  _DWORD *v43; // eax
  _DWORD *v44; // edi
  int (__thiscall *v45)(int, const wchar_t *); // eax
  int v46; // eax
  _DWORD *v47; // eax
  _DWORD *v48; // edi
  int (__thiscall *v49)(int, const wchar_t *); // edx
  int v50; // eax
  _DWORD *v51; // eax
  _DWORD *v52; // edi
  int (__thiscall *v53)(int, const wchar_t *); // eax
  int v54; // eax
  _DWORD *v55; // eax
  int v56; // eax
  _DWORD *v57; // eax
  int v58; // ecx
  int v59; // eax
  int v60; // edi
  int v61; // ecx
  unsigned int v62; // esi
  int (__thiscall *v63)(int, unsigned int); // eax
  struct xercesc_2_5::DOMNode *v64; // eax
  int (__thiscall *v65)(int); // eax
  int (__thiscall *v66)(int); // edx
  int v67; // eax
  int v68; // eax
  unsigned int i; // esi
  int v70; // eax
  int v71; // eax
  int v72; // eax
  int (__thiscall *v73)(int, StaticModel *); // edx
  int v74; // eax
  int v75; // ecx
  int v76; // eax
  int v77; // eax
  int v78; // eax
  int (__thiscall *v79)(int); // eax
  StaticModel *v80; // esi
  int v81; // esi
  int v82; // esi
  struct xercesc_2_5::DOMNode *v83; // eax
  int (__thiscall *v84)(int); // edx
  int v85; // esi
  unsigned int j; // edi
  int (__thiscall *v87)(int); // edx
  int v88; // eax
  int v89; // eax
  void *String; // eax
  int v91; // ecx
  int v92; // eax
  int v93; // eax
  int v94; // esi
  unsigned int v95; // edi
  int (__thiscall *v96)(int); // eax
  int v97; // eax
  int v98; // eax
  void *v99; // eax
  int v100; // ecx
  int v101; // esi
  int v102; // eax
  int v103; // esi
  int v104; // eax
  int v105; // eax
  int (__thiscall *v106)(int, const wchar_t *); // eax
  int v107; // eax
  int v108; // eax
  int (__thiscall *v109)(int, const wchar_t *); // eax
  int v110; // eax
  int v111; // eax
  int (__thiscall *v112)(int, const wchar_t *); // eax
  struct xercesc_2_5::DOMNode *v113; // eax
  int (__thiscall *v114)(int); // eax
  int v115; // eax
  int v116; // esi
  unsigned int v117; // edi
  int (__thiscall *v118)(int); // eax
  int v119; // eax
  int v120; // eax
  void *v121; // eax
  int (__thiscall *v122)(int); // eax
  int v123; // eax
  int v124; // eax
  void *v125; // eax
  Prefab *v126; // eax
  Prefab *v127; // eax
  _DWORD *v128; // eax
  unsigned int v129; // esi
  int v130; // eax
  int v131; // eax
  int v132; // eax
  int v133; // eax
  int v134; // eax
  int v135; // eax
  char v136; // al
  Model *v137; // eax
  Model *v138; // esi
  int v139; // eax
  int v140; // eax
  int v141; // eax
  struct World **v142; // eax
  StaticModel *v143; // esi
  double v144; // st7
  int v145; // eax
  int v146; // eax
  int v147; // ecx
  int v148; // esi
  int (__thiscall *v149)(int, const wchar_t *); // eax
  int v150; // eax
  float *v151; // eax
  int (__thiscall *v152)(int, const wchar_t *); // edx
  int v153; // eax
  float *v154; // eax
  int (__thiscall *v155)(int, const wchar_t *); // eax
  int v156; // eax
  float *v157; // eax
  int (__thiscall *v158)(int, const wchar_t *); // edx
  int v159; // eax
  float *v160; // eax
  int v161; // ecx
  float *v162; // edi
  Model *v163; // eax
  struct ModelFrame **v164; // esi
  Actor *v165; // eax
  Actor *v166; // eax
  int v167; // edx
  _DWORD *v168; // eax
  Light *v169; // eax
  Light *v170; // eax
  _DWORD *v171; // eax
  unsigned int m; // esi
  int v173; // eax
  int v174; // eax
  int v175; // eax
  float *v176; // eax
  double v177; // st7
  double v178; // st7
  _DWORD *v179; // eax
  int v180; // ecx
  struct EditorVar *v181; // eax
  int v182; // ecx
  struct EditorVar *v183; // eax
  int v184; // ecx
  unsigned int v185; // edi
  int k; // ebx
  int v187; // edx
  int v188; // eax
  int v189; // esi
  int v190; // ecx
  int v191; // eax
  int v192; // esi
  int v193; // esi
  struct EditorVar *v194; // eax
  int v195; // ecx
  struct World **v196; // edx
  struct World *v197; // eax
  const char *v198; // eax
  char v199[4]; // [esp+28h] [ebp-28Ch] BYREF
  int v200; // [esp+2Ch] [ebp-288h]
  int v201; // [esp+30h] [ebp-284h]
  int v202; // [esp+34h] [ebp-280h]
  int v203; // [esp+38h] [ebp-27Ch]
  int v204; // [esp+3Ch] [ebp-278h]
  int v205; // [esp+40h] [ebp-274h]
  int v206; // [esp+44h] [ebp-270h]
  int v207[16]; // [esp+48h] [ebp-26Ch] BYREF
  wchar_t *v208; // [esp+88h] [ebp-22Ch]
  bool v209; // [esp+9Ah] [ebp-21Ah]
  char v210; // [esp+9Bh] [ebp-219h]
  StaticModel *v211; // [esp+9Ch] [ebp-218h]
  int v212; // [esp+A0h] [ebp-214h] BYREF
  float v213; // [esp+A4h] [ebp-210h]
  int v214; // [esp+A8h] [ebp-20Ch]
  struct World **v215; // [esp+ACh] [ebp-208h]
  _BYTE v216[12]; // [esp+B0h] [ebp-204h] BYREF
  int v217; // [esp+BCh] [ebp-1F8h] BYREF
  _BYTE v218[4]; // [esp+C0h] [ebp-1F4h] BYREF
  _BYTE v219[24]; // [esp+C4h] [ebp-1F0h] BYREF
  float v220; // [esp+DCh] [ebp-1D8h] BYREF
  float v221; // [esp+E0h] [ebp-1D4h]
  float v222; // [esp+E4h] [ebp-1D0h]
  float v223[4]; // [esp+E8h] [ebp-1CCh] BYREF
  float v224; // [esp+F8h] [ebp-1BCh]
  float v225; // [esp+FCh] [ebp-1B8h]
  float v226; // [esp+100h] [ebp-1B4h]
  int v227; // [esp+108h] [ebp-1ACh]
  int v228; // [esp+10Ch] [ebp-1A8h]
  int v229; // [esp+110h] [ebp-1A4h]
  int v230; // [esp+118h] [ebp-19Ch]
  int v231; // [esp+11Ch] [ebp-198h]
  int v232; // [esp+120h] [ebp-194h]
  _BYTE v233[4]; // [esp+128h] [ebp-18Ch] BYREF
  _BYTE v234[24]; // [esp+12Ch] [ebp-188h] BYREF
  int v235[7]; // [esp+144h] [ebp-170h] BYREF
  _BYTE v236[28]; // [esp+160h] [ebp-154h] BYREF
  float v237[24]; // [esp+17Ch] [ebp-138h] BYREF
  int v238[7]; // [esp+1DCh] [ebp-D8h] BYREF
  _DWORD v239[7]; // [esp+1F8h] [ebp-BCh] BYREF
  _BYTE v240[4]; // [esp+214h] [ebp-A0h] BYREF
  _DWORD v241[6]; // [esp+218h] [ebp-9Ch] BYREF
  _BYTE v242[4]; // [esp+230h] [ebp-84h] BYREF
  _BYTE v243[28]; // [esp+234h] [ebp-80h] BYREF
  _BYTE v244[52]; // [esp+250h] [ebp-64h] BYREF
  int v245; // [esp+284h] [ebp-30h] BYREF
  int v246; // [esp+288h] [ebp-2Ch]
  int v247; // [esp+28Ch] [ebp-28h]
  int v248[5]; // [esp+294h] [ebp-20h] BYREF
  int v249; // [esp+2A8h] [ebp-Ch]
  int v250; // [esp+2B0h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+2B4h] [ebp+0h]

  v3 = *(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164);
  v215 = (struct World **)this;
  result = v3(a2, L"Name");
  if ( result )
  {
    result = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"NodeType");
    if ( result )
    {
      v6 = (XMLSystem *)(this + 21);
      v7 = (*(int (__thiscall **)(float *, const wchar_t *, _DWORD))(*(_DWORD *)a2 + 164))(a2, L"Name", 0);
      XMLSystem::GetString(v234, v7, v208);
      v8 = *(int (__thiscall **)(float *))(*(_DWORD *)a2 + 164);
      v208 = L"WorldBoxMin";
      retaddr = 0;
      if ( v8(a2) )
      {
        if ( (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"WorldBoxMax") )
        {
          v9 = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"WorldBoxMin");
          XMLSystem::GetVector(this + 21, v216, v9, 0);
          v10 = (*(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164))(a2, L"WorldBoxMax");
          XMLSystem::GetVector(this + 21, &v220, v10, 0);
          if ( byte_10282ED4 )
          {
            v207[15] = 0;
            v207[14] = (int)&v220;
            v207[13] = (int)v216;
            v213 = COERCE_FLOAT(&v207[6]);
            std::string::string(&v207[6], v233);
            SubareaManager::Register(
              v207[6],
              v207[7],
              v207[8],
              v207[9],
              v207[10],
              v207[11],
              v207[12],
              v207[13],
              v207[14],
              v207[15]);
LABEL_145:
            v250 = -1;
            return std::string::~string(v233);
          }
        }
      }
      *(float *)&v211 = (double)this[13] / (double)this[12] * 100.0;
      if ( *(float *)&v211 > 100.0 )
        *(float *)&v211 = 100.0;
      v11 = this[44];
      if ( v11 && *(_DWORD *)(v11 + 3792) )
      {
        v213 = COERCE_FLOAT(&v207[9]);
        std::operator+<char>(&v207[9], "Loading Scene Actor: ", v233);
        (*(void (__cdecl **)(StaticModel *))(this[44] + 3792))(v211);
      }
      ++this[13];
      v12 = *(int (__thiscall **)(float *, const wchar_t *))(*(_DWORD *)a2 + 164);
      v207[15] = 0;
      v13 = v12(a2, L"NodeType");
      XMLSystem::GetString(v239, v13, v207[15]);
      v213 = COERCE_FLOAT(&v207[9]);
      LOBYTE(v250) = 1;
      std::string::string(&v207[9], "NodeTM");
      FirstNode = XMLSystem::FindFirstNode(a2, v207[9], v207[10], v207[11], v207[12], v207[13], v207[14], v207[15]);
      sub_1000BC40(v223);
      v15 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v207[15] = 0;
      v16 = v15(FirstNode, L"Row0");
      Vector = (float *)XMLSystem::GetVector(this + 21, v216, v16, v207[15]);
      v223[0] = *Vector;
      v223[1] = Vector[1];
      v223[2] = Vector[2];
      v18 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v207[15] = 0;
      v19 = v18(FirstNode, L"Row1");
      v20 = (float *)XMLSystem::GetVector(this + 21, v216, v19, v207[15]);
      v224 = *v20;
      v225 = v20[1];
      v226 = v20[2];
      v21 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v207[15] = 0;
      v22 = v21(FirstNode, L"Row2");
      v23 = (int *)XMLSystem::GetVector(this + 21, v216, v22, v207[15]);
      v227 = *v23;
      v228 = v23[1];
      v229 = v23[2];
      v24 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)FirstNode + 164);
      v207[15] = 0;
      v25 = v24(FirstNode, L"Row3");
      v26 = (int *)XMLSystem::GetVector(this + 21, v216, v25, v207[15]);
      v230 = *v26;
      v231 = v26[1];
      v27 = v26[2];
      v213 = COERCE_FLOAT(&v207[9]);
      v232 = v27;
      std::string::string(&v207[9], "CustomProperties");
      v28 = COERCE_FLOAT(XMLSystem::FindFirstNode(a2, v207[9], v207[10], v207[11], v207[12], v207[13], v207[14], v207[15]));
      v213 = v28;
      v210 = Serializer::s_UseSkinning;
      Serializer::s_UseSkinning = 1;
      if ( v28 != 0.0 )
      {
        *(float *)&v214 = COERCE_FLOAT(&v207[9]);
        std::string::string(&v207[9], "Actor");
        v29 = COERCE_FLOAT(
                XMLSystem::FindFirstNode(
                  LODWORD(v28),
                  v207[9],
                  v207[10],
                  v207[11],
                  v207[12],
                  v207[13],
                  v207[14],
                  v207[15]));
        v30 = this[44] == 0;
        *(float *)&v214 = v29;
        if ( !v30 && v29 != 0.0 )
        {
          v31 = *(_DWORD *)LODWORD(v29);
          v207[15] = 0;
          v32 = (*(int (__thiscall **)(float, const wchar_t *))(v31 + 164))(COERCE_FLOAT(LODWORD(v29)), L"Class");
          XMLSystem::GetString(v235, v32, v207[15]);
          v207[15] = this[44];
          *(float *)&v211 = COERCE_FLOAT(&v207[8]);
          LOBYTE(v250) = 2;
          std::string::string(&v207[8], v235);
          v33 = Factory::create(v207[8], v207[9], v207[10], v207[11], v207[12], v207[13], v207[14], v207[15]);
          *a3 = v33;
          if ( v33 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v33 + 96))(v33) )
            {
              if ( *a3 )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)*a3 + 80))(*a3, 1);
              LOBYTE(v250) = 1;
              std::string::~string(v235);
              goto LABEL_144;
            }
            v34 = v214;
            if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v214 + 164))(v214, L"GUID") )
            {
              v35 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v34 + 164);
              v207[15] = 0;
              v36 = v35(v34, L"GUID");
              XMLSystem::GetString(v236, v36, v207[15]);
              v207[15] = *a3 + 256;
              LOBYTE(v250) = 3;
              v37 = (unsigned __int8 *)std::string::c_str(v236);
              UuidFromStringA(v37, (UUID *)v207[15]);
              LOBYTE(v250) = 2;
              std::string::~string(v236);
            }
            if ( (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v34 + 164))(v34, L"BakedTM") )
            {
              *(float *)&v211 = COERCE_FLOAT(&v207[9]);
              std::string::string(&v207[9], "BakedTM");
              v38 = XMLSystem::FindFirstNode(v34, v207[9], v207[10], v207[11], v207[12], v207[13], v207[14], v207[15]);
              v39 = (_DWORD *)*a3;
              v40 = v38;
              v41 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v38 + 164);
              v207[15] = 0;
              v39 += 158;
              v42 = v41(v38, L"Row0");
              v43 = (_DWORD *)XMLSystem::GetVector(v6, v216, v42, v207[15]);
              *v39 = *v43;
              v39[1] = v43[1];
              v39[2] = v43[2];
              v44 = (_DWORD *)*a3;
              v45 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v40 + 164);
              v207[15] = 0;
              v44 += 162;
              v46 = v45(v40, L"Row1");
              v47 = (_DWORD *)XMLSystem::GetVector(v6, v216, v46, v207[15]);
              *v44 = *v47;
              v44[1] = v47[1];
              v44[2] = v47[2];
              v48 = (_DWORD *)*a3;
              v49 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v40 + 164);
              v207[15] = 0;
              v48 += 166;
              v50 = v49(v40, L"Row2");
              v51 = (_DWORD *)XMLSystem::GetVector(v6, v216, v50, v207[15]);
              *v48 = *v51;
              v48[1] = v51[1];
              v48[2] = v51[2];
              v52 = (_DWORD *)*a3;
              v53 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v40 + 164);
              v207[15] = 0;
              v52 += 170;
              v54 = v53(v40, L"Row3");
              v55 = (_DWORD *)XMLSystem::GetVector(v6, v216, v54, v207[15]);
              *v52 = *v55;
              v52[1] = v55[1];
              v52[2] = v55[2];
            }
            v56 = *a3;
            v30 = *a3 == 0;
            v209 = 0;
            if ( !v30 )
              v209 = *(_BYTE *)(v56 + 213) != 0;
            std::string::operator=(v56 + 444, v233);
            qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v237), 0x40u);
            v57 = (_DWORD *)*a3;
            v57[214] = v230;
            v57 += 214;
            v57[1] = v231;
            v57[2] = v232;
            v58 = v214;
            *(_BYTE *)(*a3 + 440) = 1;
            v59 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v58 + 168))(v58, L"Param");
            v60 = v59;
            v61 = v59;
            if ( v209 )
            {
              v62 = 0;
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v59 + 8))(v59) )
              {
                do
                {
                  v63 = *(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v60 + 4);
                  v214 = *(int *)(*a3 + 216);
                  v64 = (struct xercesc_2_5::DOMNode *)v63(v60, v62);
                  XMLSystem::ReadParameter(v6, v214, v64);
                  ++v62;
                }
                while ( v62 < (*(int (__thiscall **)(int))(*(_DWORD *)v60 + 8))(v60) );
              }
            }
            else
            {
              v65 = *(int (__thiscall **)(int))(*(_DWORD *)v59 + 8);
              *(float *)&v211 = 0.0;
              if ( v65(v61) )
              {
                do
                {
                  v66 = *(int (__thiscall **)(int))(*(_DWORD *)v60 + 4);
                  v207[15] = (int)v211;
                  v67 = v66(v60);
                  v68 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v67 + 164))(v67, L"Name", 0);
                  XMLSystem::GetString(v218, v68, v207[15]);
                  LOBYTE(v250) = 4;
                  for ( i = 0; ; ++i )
                  {
                    v70 = *(_DWORD *)(*a3 + 428);
                    if ( !v70 || i >= (*(_DWORD *)(*a3 + 432) - v70) / 96 )
                      break;
                    v71 = std::vector<EditorVar>::operator[]((_DWORD *)(*a3 + 424), i);
                    std::string::string(v236, v71 + 4);
                    LOBYTE(v250) = 5;
                    if ( (unsigned __int8)std::operator==<char>(v218, v236) )
                    {
                      std::string::string(v238);
                      v72 = *(_DWORD *)v60;
                      v207[15] = (int)v238;
                      v207[14] = (int)&v217;
                      v73 = *(int (__thiscall **)(int, StaticModel *))(v72 + 4);
                      LOBYTE(v250) = 6;
                      v74 = v73(v60, v211);
                      v75 = *a3;
                      v207[13] = v74;
                      v76 = std::vector<EditorVar>::operator[]((_DWORD *)(v75 + 424), i);
                      if ( (unsigned __int8)XMLSystem::ReadParameter(
                                              v6,
                                              (int)&v212,
                                              *(_DWORD *)(v76 + 88),
                                              v207[13],
                                              v207[14],
                                              v207[15])
                        && *(_BYTE *)(std::vector<EditorVar>::operator[]((_DWORD *)(*a3 + 424), i) + 93) )
                      {
                        v77 = *a3;
                        v214 = *(_DWORD *)*a3 + 8;
                        v78 = std::vector<EditorVar>::operator[]((_DWORD *)(v77 + 424), i);
                        (*(void (__thiscall **)(int, _BYTE *, _DWORD))v214)(*a3, v236, *(_DWORD *)(v78 + 88));
                      }
                      LOBYTE(v250) = 5;
                      std::string::~string(v238);
                    }
                    LOBYTE(v250) = 4;
                    std::string::~string(v236);
                  }
                  LOBYTE(v250) = 2;
                  std::string::~string(v218);
                  v79 = *(int (__thiscall **)(int))(*(_DWORD *)v60 + 8);
                  v211 = (StaticModel *)((char *)v211 + 1);
                  v80 = v211;
                }
                while ( (unsigned int)v80 < v79(v60) );
              }
            }
            v212 = (int)&v207[9];
            std::string::string(&v207[9], "ExcludeList");
            v81 = XMLSystem::FindFirstNode(a2, v207[9], v207[10], v207[11], v207[12], v207[13], v207[14], v207[15]);
            if ( v81
              || (v212 = (int)&v207[9],
                  std::string::string(&v207[9], "LightData"),
                  (v82 = XMLSystem::FindFirstNode(
                           a2,
                           v207[9],
                           v207[10],
                           v207[11],
                           v207[12],
                           v207[13],
                           v207[14],
                           v207[15])) != 0)
              && (v212 = (int)&v207[9],
                  std::string::string(&v207[9], "ExcludeList"),
                  (v81 = XMLSystem::FindFirstNode(
                           v82,
                           v207[9],
                           v207[10],
                           v207[11],
                           v207[12],
                           v207[13],
                           v207[14],
                           v207[15])) != 0) )
            {
              v83 = (struct xercesc_2_5::DOMNode *)(*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v81 + 164))(
                                                     v81,
                                                     L"Include",
                                                     0);
              *(_BYTE *)(*a3 + 332) = !XMLSystem::GetBool(v6, v83, (bool)v208);
              v84 = *(int (__thiscall **)(int))(*(_DWORD *)v81 + 168);
              v208 = L"Light";
              v85 = v84(v81);
              if ( v85 )
              {
                for ( j = 0; j < (*(int (__thiscall **)(int))(*(_DWORD *)v85 + 8))(v85); ++j )
                {
                  v87 = *(int (__thiscall **)(int))(*(_DWORD *)v85 + 4);
                  v207[15] = j;
                  v88 = v87(v85);
                  v89 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v88 + 164))(v88, L"Name", 0);
                  String = (void *)XMLSystem::GetString(v218, v89, v207[15]);
                  v91 = *a3;
                  LOBYTE(v250) = 7;
                  sub_100116A0((_DWORD *)(v91 + 336), String);
                  LOBYTE(v250) = 2;
                  std::string::~string(v218);
                }
              }
            }
            v212 = (int)&v207[9];
            std::string::string(&v207[9], "OcclusionList");
            v92 = XMLSystem::FindFirstNode(a2, v207[9], v207[10], v207[11], v207[12], v207[13], v207[14], v207[15]);
            if ( v92 )
            {
              v93 = (*(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v92 + 168))(v92, L"Actor");
              v94 = v93;
              if ( v93 )
              {
                v95 = 0;
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v93 + 8))(v93) )
                {
                  do
                  {
                    v96 = *(int (__thiscall **)(int))(*(_DWORD *)v94 + 4);
                    v207[15] = v95;
                    v97 = v96(v94);
                    v98 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v97 + 164))(v97, L"Name", 0);
                    v99 = (void *)XMLSystem::GetString(v218, v98, v207[15]);
                    v100 = *a3;
                    LOBYTE(v250) = 8;
                    sub_100116A0((_DWORD *)(v100 + 400), v99);
                    LOBYTE(v250) = 2;
                    std::string::~string(v218);
                    ++v95;
                  }
                  while ( v95 < (*(int (__thiscall **)(int))(*(_DWORD *)v94 + 8))(v94) );
                }
              }
            }
            if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3) )
            {
              v101 = *a3;
              if ( std::string::find(*a3 + 1364, L".", 0) != -1 )
              {
                v207[15] = 0;
                *(float *)&v207[14] = 0.0;
                *(float *)&v207[13] = 1.0;
                *(float *)&v207[12] = 1.0;
                *(float *)&v207[11] = 0.0;
                *(float *)&v207[10] = 0.0;
                v207[9] = 0;
                v212 = (int)&v207[2];
                std::string::string(&v207[2], v101 + 1364);
                Texture::Load(
                  v207[2],
                  v207[3],
                  v207[4],
                  v207[5],
                  v207[6],
                  v207[7],
                  v207[8],
                  v207[9],
                  *(float *)&v207[10],
                  *(float *)&v207[11],
                  *(float *)&v207[12],
                  *(float *)&v207[13],
                  *(float *)&v207[14],
                  v207[15]);
              }
            }
          }
          LOBYTE(v250) = 1;
          std::string::~string(v235);
          v28 = v213;
        }
      }
      ScriptData::ScriptData((ScriptData *)v240);
      LOBYTE(v250) = 9;
      if ( v28 != 0.0 )
      {
        v212 = (int)&v207[9];
        std::string::string(&v207[9], "Script");
        v102 = XMLSystem::FindFirstNode(
                 LODWORD(v28),
                 v207[9],
                 v207[10],
                 v207[11],
                 v207[12],
                 v207[13],
                 v207[14],
                 v207[15]);
        v103 = v102;
        if ( v102 )
        {
          v104 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v102 + 164))(v102, L"File", 0);
          v105 = XMLSystem::GetString(v219, v104, v208);
          std::string::operator=(v241, v105);
          std::string::~string(v219);
          v106 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v103 + 164);
          v208 = 0;
          v107 = v106(v103, L"Class");
          v108 = XMLSystem::GetString(v219, v107, v208);
          std::string::operator=(v243, v108);
          std::string::~string(v219);
          v109 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v103 + 164);
          v208 = 0;
          v110 = v109(v103, L"Parent");
          v111 = XMLSystem::GetString(v219, v110, v208);
          std::string::operator=(v244, v111);
          LOBYTE(retaddr) = 9;
          std::string::~string(v219);
          v112 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v103 + 164);
          v208 = 0;
          v113 = (struct xercesc_2_5::DOMNode *)v112(v103, L"IncludeModel");
          LOBYTE(v249) = XMLSystem::GetBool(v6, v113, (bool)v208);
          v114 = *(int (__thiscall **)(int))(*(_DWORD *)v103 + 168);
          v208 = L"Param";
          v115 = v114(v103);
          v116 = v115;
          if ( v115 )
          {
            v117 = 0;
            if ( (*(int (__thiscall **)(int))(*(_DWORD *)v115 + 8))(v115) )
            {
              do
              {
                v118 = *(int (__thiscall **)(int))(*(_DWORD *)v116 + 4);
                v207[15] = v117;
                v119 = v118(v116);
                v120 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v119 + 164))(v119, L"Name", 0);
                v121 = (void *)XMLSystem::GetString(v218, v120, v207[15]);
                LOBYTE(v250) = 13;
                sub_100116A0(&v245, v121);
                LOBYTE(v250) = 9;
                std::string::~string(v218);
                v122 = *(int (__thiscall **)(int))(*(_DWORD *)v116 + 4);
                v207[15] = v117;
                v123 = v122(v116);
                v124 = (*(int (__thiscall **)(int, const wchar_t *, _DWORD))(*(_DWORD *)v123 + 164))(v123, L"Value", 0);
                v125 = (void *)XMLSystem::GetString(v218, v124, v207[15]);
                LOBYTE(v250) = 14;
                sub_100116A0(v248, v125);
                LOBYTE(v250) = 9;
                std::string::~string(v218);
                ++v117;
              }
              while ( v117 < (*(int (__thiscall **)(int))(*(_DWORD *)v116 + 8))(v116) );
            }
          }
        }
      }
      Serializer::s_UseSkinning = v210;
      if ( *a3 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3)
        || (unsigned __int8)std::operator==<char>(v239, "GeomObject") )
      {
        if ( !*a3 )
        {
          v126 = (Prefab *)operator new(0x494u);
          v212 = (int)v126;
          LOBYTE(v250) = 15;
          if ( v126 )
            v127 = Prefab::Prefab(v126, v215[44]);
          else
            v127 = 0;
          v207[15] = (int)v233;
          LOBYTE(v250) = 9;
          *a3 = (int)v127;
          std::string::operator=((char *)v127 + 444, v207[15]);
          qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v237), 0x40u);
          v128 = (_DWORD *)(*a3 + 856);
          *v128 = v230;
          v128[1] = v231;
          v207[15] = (int)"StaticMesh";
          v207[14] = (int)v242;
          v128[2] = v232;
          v210 = 0;
          v209 = 0;
          if ( (unsigned __int8)std::operator==<char>(v207[14], v207[15]) )
          {
            v129 = 0;
            while ( v246 && v129 < (v247 - v246) / 28 )
            {
              v207[15] = (int)"noclip";
              v130 = sub_1000A0A0(&v245, v129);
              if ( (unsigned __int8)std::operator==<char>(v130, v207[15]) )
              {
                v207[15] = (int)"true";
                v131 = sub_1000A0A0(v248, v129);
                if ( (unsigned __int8)std::operator==<char>(v131, v207[15])
                  || (v207[15] = (int)"1",
                      v132 = sub_1000A0A0(v248, v129),
                      (unsigned __int8)std::operator==<char>(v132, v207[15])) )
                {
                  v210 = 1;
                  ++v129;
                }
                else
                {
                  v210 = 0;
                  ++v129;
                }
              }
              else
              {
                v207[15] = (int)"invisible";
                v133 = sub_1000A0A0(&v245, v129);
                if ( (unsigned __int8)std::operator==<char>(v133, v207[15]) )
                {
                  v207[15] = (int)"true";
                  v134 = sub_1000A0A0(v248, v129);
                  if ( (unsigned __int8)std::operator==<char>(v134, v207[15])
                    || (v207[15] = (int)"1",
                        v135 = sub_1000A0A0(v248, v129),
                        v136 = std::operator==<char>(v135, v207[15]),
                        v209 = 0,
                        v136) )
                  {
                    v209 = 1;
                  }
                }
                ++v129;
              }
            }
            std::string::clear(v242);
          }
          *(_BYTE *)(*a3 + 724) = v210;
          *(_BYTE *)(*a3 + 816) = v209;
        }
        v137 = (Model *)operator new(0x1C8u);
        v212 = (int)v137;
        LOBYTE(v250) = 16;
        if ( v137 )
        {
          *(float *)&v138 = COERCE_FLOAT(Model::Model(v137));
          v211 = v138;
        }
        else
        {
          *(float *)&v138 = 0.0;
          *(float *)&v211 = 0.0;
        }
        LOBYTE(v250) = 9;
        v139 = std::string::string(v235, "_");
        LOBYTE(v250) = 17;
        v140 = std::operator+<char>(v238, v215 + 14, v139);
        v207[12] = *a3 + 444;
        LOBYTE(v250) = 18;
        v141 = std::operator+<char>(v218, v140, v207[12]);
        LOBYTE(v250) = 19;
        std::string::operator=((char *)v138 + 320, v141);
        LOBYTE(v250) = 18;
        std::string::~string(v218);
        LOBYTE(v250) = 17;
        std::string::~string(v238);
        LOBYTE(v250) = 9;
        std::string::~string(v235);
        v142 = v215;
        *((_BYTE *)v138 + 137) = *(_BYTE *)(*a3 + 724) == 0;
        if ( *((_BYTE *)v142 + 44) )
          AsyncLoader::CreatePacket((char *)v138 + 320);
        v212 = (int)&v207[9];
        std::string::string(&v207[9], "CollisionModel");
        *(float *)&v214 = COERCE_FLOAT(
                            XMLSystem::FindFirstNode(
                              a2,
                              v207[9],
                              v207[10],
                              v207[11],
                              v207[12],
                              v207[13],
                              v207[14],
                              v207[15]));
        if ( sub_10044CF0((ILoad *)v215, v138, a2, (struct ModelFrame **)v138 + 77, 0) )
        {
          v212 = (int)v207;
          qmemcpy(v207, (char *)v211 + 224, sizeof(v207));
          ModelFrame::UpdateMatrices(
            *((_DWORD *)v211 + 77),
            v207[0],
            v207[1],
            v207[2],
            v207[3],
            v207[4],
            v207[5],
            v207[6],
            v207[7],
            v207[8],
            v207[9],
            v207[10],
            v207[11],
            v207[12],
            v207[13],
            v207[14],
            v207[15]);
          (*(void (__thiscall **)(StaticModel *))(*(_DWORD *)v211 + 8))(v211);
          v143 = v211;
          if ( !ISave::IsConverting )
            StaticModel::RemoveSceneOffset(v211);
          v144 = *(float *)(*((_DWORD *)v143 + 77) + 368);
          v207[15] = (int)"_";
          v213 = v144;
          *((float *)v143 + 13) = v213;
          *(_DWORD *)(*a3 + 716) = v143;
          v145 = std::string::string(v235, v207[15]);
          LOBYTE(v250) = 20;
          v146 = std::operator+<char>(v238, v215 + 14, v145);
          v207[12] = *a3 + 444;
          LOBYTE(v250) = 21;
          v207[15] = std::operator+<char>(v218, v146, v207[12]);
          v147 = *(_DWORD *)(*a3 + 716) + 320;
          LOBYTE(v250) = 22;
          std::string::operator=(v147, v207[15]);
          LOBYTE(v250) = 21;
          std::string::~string(v218);
          LOBYTE(v250) = 20;
          std::string::~string(v238);
          LOBYTE(v250) = 9;
          std::string::~string(v235);
          v30 = v214 == 0;
          *(_BYTE *)(*(_DWORD *)(*a3 + 716) + 312) = 1;
          if ( !v30 )
          {
            v212 = (int)&v207[9];
            std::string::string(&v207[9], "RelativeTransform");
            v148 = XMLSystem::FindFirstNode(v214, v207[9], v207[10], v207[11], v207[12], v207[13], v207[14], v207[15]);
            sub_1000BC40(v237);
            v149 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v148 + 164);
            v207[15] = 0;
            v150 = v149(v148, L"Row0");
            v151 = (float *)XMLSystem::GetVector(v6, v216, v150, v207[15]);
            v237[0] = *v151;
            v237[1] = v151[1];
            v237[2] = v151[2];
            v152 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v148 + 164);
            v207[15] = 0;
            v153 = v152(v148, L"Row1");
            v154 = (float *)XMLSystem::GetVector(v6, v216, v153, v207[15]);
            v237[4] = *v154;
            v237[5] = v154[1];
            v237[6] = v154[2];
            v155 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v148 + 164);
            v207[15] = 0;
            v156 = v155(v148, L"Row2");
            v157 = (float *)XMLSystem::GetVector(v6, v216, v156, v207[15]);
            v237[8] = *v157;
            v237[9] = v157[1];
            v237[10] = v157[2];
            v158 = *(int (__thiscall **)(int, const wchar_t *))(*(_DWORD *)v148 + 164);
            v207[15] = 0;
            v159 = v158(v148, L"Row3");
            v160 = (float *)XMLSystem::GetVector(v6, v216, v159, v207[15]);
            v237[12] = *v160;
            v161 = *a3;
            v237[13] = v160[1];
            v237[14] = v160[2];
            v162 = (float *)(*(_DWORD *)(v161 + 716) + 148);
            v207[15] = 456;
            qmemcpy(v162, v237, 0x40u);
            v163 = (Model *)operator new(v207[15]);
            v212 = (int)v163;
            LOBYTE(v250) = 23;
            if ( v163 )
              v164 = (struct ModelFrame **)Model::Model(v163);
            else
              v164 = 0;
            LOBYTE(v250) = 9;
            if ( sub_10044CF0((ILoad *)v215, (struct StaticModel *)v164, (float *)v214, v164 + 77, 0) )
            {
              *(_DWORD *)(*(_DWORD *)(*a3 + 716) + 144) = v164;
              (*((void (__thiscall **)(struct ModelFrame **))*v164 + 2))(v164);
              v213 = *((float *)v164[77] + 92);
              *((float *)v164 + 13) = v213;
            }
            else
            {
              (*((void (__thiscall **)(struct ModelFrame **))*v164 + 2))(v164);
              (*((void (__thiscall **)(struct ModelFrame **, int))*v164 + 3))(v164, 1);
            }
          }
          (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(*a3 + 716) + 28))(
            *(_DWORD *)(*a3 + 716),
            *a3 + 868,
            *a3 + 856);
        }
        else
        {
          (*(void (__thiscall **)(Model *))(*(_DWORD *)v138 + 8))(v138);
          (*(void (__thiscall **)(Model *, int))(*(_DWORD *)v138 + 12))(v138, 1);
        }
        goto LABEL_125;
      }
      if ( !(unsigned __int8)std::operator==<char>(v239, "Light")
        && (!*a3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)*a3 + 40))(*a3)) )
      {
        if ( std::string::length(v242) )
        {
          if ( *a3 )
            goto LABEL_126;
          v165 = (Actor *)operator new(0x41Cu);
          v212 = (int)v165;
          LOBYTE(v250) = 25;
          if ( v165 )
            v166 = Actor::Actor(v165, v215[44]);
          else
            v166 = 0;
          v207[15] = (int)v233;
          LOBYTE(v250) = 9;
          *a3 = (int)v166;
          std::string::operator=((char *)v166 + 444, v207[15]);
          v167 = *a3;
          v207[15] = (int)v237;
          *(_BYTE *)(v167 + 724) = 1;
          qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v207[15]), 0x40u);
          v168 = (_DWORD *)*a3;
          v168[214] = v230;
          v168 += 214;
          v168[1] = v231;
          v168[2] = v232;
          *(_BYTE *)(*a3 + 440) = 1;
        }
LABEL_125:
        if ( !*a3 )
        {
LABEL_142:
          v207[15] = std::string::c_str(v233);
          v198 = (const char *)std::string::c_str(v239);
          SeriousWarning("Unexpected type: %s on %s", v198, (const char *)v207[15]);
LABEL_143:
          LOBYTE(v250) = 1;
          ScriptData::~ScriptData((ScriptData *)v240);
LABEL_144:
          LOBYTE(v250) = 0;
          std::string::~string(v239);
          goto LABEL_145;
        }
LABEL_126:
        if ( std::string::size(v242) )
        {
          ScriptData::operator=((_BYTE *)(*a3 + 472), (int)v240);
          v180 = *a3;
          v207[15] = 0;
          v207[14] = 1;
          *(_BYTE *)(v180 + 726) = 0;
          v212 = (int)&v207[7];
          std::string::string(&v207[7], "Script name");
          v217 = (int)v207;
          LOBYTE(v250) = 26;
          std::string::string(v207, "Scripting");
          v206 = *a3 + 500;
          v213 = COERCE_FLOAT(v199);
          LOBYTE(v250) = 27;
          std::string::string(v199, "Name");
          LOBYTE(v250) = 9;
          v181 = (struct EditorVar *)EditorVar::EditorVar(
                                       v237,
                                       v199[0],
                                       v200,
                                       v201,
                                       v202,
                                       v203,
                                       v204,
                                       v205,
                                       v206,
                                       v207[0],
                                       v207[1],
                                       v207[2],
                                       v207[3],
                                       v207[4],
                                       v207[5],
                                       v207[6],
                                       v207[7],
                                       v207[8],
                                       v207[9],
                                       v207[10],
                                       v207[11],
                                       v207[12],
                                       v207[13],
                                       v207[14],
                                       v207[15]);
          v182 = *a3;
          LOBYTE(v250) = 28;
          std::vector<EditorVar>::push_back((_DWORD *)(v182 + 424), v181);
          LOBYTE(v250) = 9;
          EditorVar::~EditorVar((EditorVar *)v237);
          v207[15] = 0;
          v207[14] = 1;
          v212 = (int)&v207[7];
          std::string::string(&v207[7], "Script includes model?");
          v217 = (int)v207;
          LOBYTE(v250) = 29;
          std::string::string(v207, "Scripting");
          v206 = *a3 + 616;
          v213 = COERCE_FLOAT(v199);
          LOBYTE(v250) = 30;
          std::string::string(v199, "IncludeModel");
          LOBYTE(v250) = 9;
          v183 = (struct EditorVar *)EditorVar::EditorVar(
                                       v237,
                                       v199[0],
                                       v200,
                                       v201,
                                       v202,
                                       v203,
                                       v204,
                                       v205,
                                       v206,
                                       v207[0],
                                       v207[1],
                                       v207[2],
                                       v207[3],
                                       v207[4],
                                       v207[5],
                                       v207[6],
                                       v207[7],
                                       v207[8],
                                       v207[9],
                                       v207[10],
                                       v207[11],
                                       v207[12],
                                       v207[13],
                                       v207[14],
                                       v207[15]);
          v184 = *a3;
          LOBYTE(v250) = 31;
          std::vector<EditorVar>::push_back((_DWORD *)(v184 + 424), v183);
          LOBYTE(v250) = 9;
          EditorVar::~EditorVar((EditorVar *)v237);
          v185 = 0;
          for ( k = 0; ; k += 28 )
          {
            v187 = *(_DWORD *)(*a3 + 588);
            if ( !v187 || v185 >= (*(_DWORD *)(*a3 + 592) - v187) / 28 )
              break;
            v207[15] = 0;
            v207[14] = 1;
            v212 = (int)&v207[7];
            std::string::string(&v207[7], "Script Parameter");
            v217 = (int)v207;
            LOBYTE(v250) = 32;
            std::string::string(v207, "Scripting");
            v188 = *(_DWORD *)(*a3 + 604);
            v189 = *a3 + 600;
            LOBYTE(v250) = 33;
            if ( !v188 || v185 >= (*(_DWORD *)(v189 + 8) - v188) / 28 )
              invalid_parameter_noinfo();
            v190 = *(_DWORD *)(v189 + 4);
            v191 = *(_DWORD *)(*a3 + 588);
            v192 = *a3 + 584;
            v206 = k + v190;
            if ( !v191 || v185 >= (*(_DWORD *)(v192 + 8) - v191) / 28 )
              invalid_parameter_noinfo();
            v193 = k + *(_DWORD *)(v192 + 4);
            v213 = COERCE_FLOAT(v199);
            std::string::string(v199, v193);
            LOBYTE(v250) = 9;
            v194 = (struct EditorVar *)EditorVar::EditorVar(
                                         v237,
                                         v199[0],
                                         v200,
                                         v201,
                                         v202,
                                         v203,
                                         v204,
                                         v205,
                                         v206,
                                         v207[0],
                                         v207[1],
                                         v207[2],
                                         v207[3],
                                         v207[4],
                                         v207[5],
                                         v207[6],
                                         v207[7],
                                         v207[8],
                                         v207[9],
                                         v207[10],
                                         v207[11],
                                         v207[12],
                                         v207[13],
                                         v207[14],
                                         v207[15]);
            v195 = *a3;
            LOBYTE(v250) = 34;
            std::vector<EditorVar>::push_back((_DWORD *)(v195 + 424), v194);
            LOBYTE(v250) = 9;
            EditorVar::~EditorVar((EditorVar *)v237);
            ++v185;
          }
        }
        if ( *a3 )
        {
          v196 = v215;
          *(_BYTE *)(*a3 + 440) = 1;
          v197 = v196[44];
          if ( v197 && *((_BYTE *)v197 + 3284) )
            (*(void (__thiscall **)(int))(*(_DWORD *)*a3 + 12))(*a3);
          if ( *a3 )
            goto LABEL_143;
        }
        goto LABEL_142;
      }
      if ( *a3 )
        goto LABEL_124;
      v169 = (Light *)operator new(0x5B0u);
      v212 = (int)v169;
      LOBYTE(v250) = 24;
      v170 = v169 ? Light::Light(v169, v215[44]) : 0;
      v207[15] = (int)v233;
      LOBYTE(v250) = 9;
      *a3 = (int)v170;
      std::string::operator=((char *)v170 + 444, v207[15]);
      qmemcpy((void *)(*a3 + 868), (const void *)sub_10179840(v237), 0x40u);
      v171 = (_DWORD *)(*a3 + 856);
      *v171 = v230;
      v171[1] = v231;
      v207[15] = (int)"Light";
      v207[14] = (int)v242;
      v171[2] = v232;
      if ( !(unsigned __int8)std::operator==<char>(v207[14], v207[15]) )
      {
LABEL_124:
        sub_1003EF60((int)v215, a2, a3, (float **)v208);
        v176 = (float *)*a3;
        v213 = -v224;
        v176 += 281;
        *(float *)&v214 = -v225;
        *(float *)&v211 = -v226;
        v220 = v213;
        v177 = *(float *)&v214;
        *v176 = v213;
        v221 = v177;
        v178 = *(float *)&v211;
        v176[1] = v221;
        v222 = v178;
        v176[2] = v222;
        v179 = (_DWORD *)(*a3 + 1112);
        *v179 = v230;
        v179[1] = v231;
        v179[2] = v232;
        *(_BYTE *)(*a3 + 1053) = 1;
        goto LABEL_125;
      }
      for ( m = 0; ; ++m )
      {
        while ( 1 )
        {
          if ( !v246 || m >= (v247 - v246) / 28 )
          {
            std::string::clear(v242);
            goto LABEL_124;
          }
          v207[15] = (int)"SphericalHarmonics";
          v173 = sub_1000A0A0(&v245, m);
          if ( (unsigned __int8)std::operator==<char>(v173, v207[15]) )
            break;
LABEL_122:
          ++m;
        }
        v207[15] = (int)"true";
        v174 = sub_1000A0A0(v248, m);
        if ( (unsigned __int8)std::operator==<char>(v174, v207[15])
          || (v207[15] = (int)"1", v175 = sub_1000A0A0(v248, m), (unsigned __int8)std::operator==<char>(v175, v207[15])) )
        {
          *(_DWORD *)(*a3 + 1432) = 1;
          goto LABEL_122;
        }
        *(_DWORD *)(*a3 + 1432) = 0;
      }
    }
  }
  return result;
}
