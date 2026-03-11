/*
 * func-name: ?Update@AsyncLoader@@QAEXM@Z
 * func-address: 0x10173030
 * callers: 0x100958f0
 * callees: 0x100127c0, 0x10031700, 0x10031ec0, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100e2550, 0x100efd60, 0x100f1f90, 0x100f2ca0, 0x100f4ca0, 0x1010fd40, 0x1016fd00, 0x10175830, 0x10176030, 0x101766f0, 0x101770d0, 0x10177240, 0x101a2500, 0x101a2534, 0x101a253a
 */

void __thiscall AsyncLoader::Update(int ***this, float a2)
{
  AsyncLoader *v2; // ebx
  _DWORD *v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // esi
  void **v6; // eax
  void *v7; // esi
  unsigned int v8; // esi
  int v9; // esi
  int v10; // ecx
  unsigned int v11; // edi
  void (__cdecl *v12)(); // ebp
  int v13; // esi
  int v14; // esi
  int v15; // ebp
  char *v16; // esi
  char *v17; // ebp
  int v18; // ecx
  int v19; // esi
  unsigned int v20; // edi
  StaticModel *v21; // ebp
  void (__cdecl *v22)(); // ebx
  int v23; // esi
  int v24; // ecx
  int v25; // esi
  int v26; // ebp
  char *v27; // esi
  char *v28; // ebp
  int v29; // ecx
  int v30; // esi
  unsigned int v31; // edi
  StaticModel *v32; // ebp
  void (__cdecl *v33)(); // ebx
  int v34; // esi
  int v35; // ecx
  int v36; // esi
  int v37; // ebp
  char *v38; // esi
  char *v39; // ebp
  int v40; // ecx
  int v41; // esi
  unsigned int v42; // edi
  StaticModel *v43; // ebp
  void (__cdecl *v44)(); // ebx
  int v45; // esi
  int v46; // ecx
  int v47; // esi
  int v48; // ebp
  char *v49; // esi
  char *v50; // ebp
  int ***v51; // esi
  int **v52; // edi
  int **v53; // ebx
  int v54; // ebp
  int **v55; // esi
  _DWORD **v56; // edi
  _DWORD *v57; // ebx
  int **v58; // edi
  AsyncLoader *v59; // esi
  int **v60; // ebp
  AsyncLoader *v61; // esi
  int **v62; // ebx
  int **v63; // ebp
  AsyncLoader *v64; // esi
  int **v65; // ebx
  int **v66; // ebp
  AsyncLoader *v67; // esi
  int **v68; // edi
  void (__cdecl *v69)(); // ebp
  int **v70; // ebx
  char *v71; // esi
  int v72; // edi
  char *v73; // ebp
  LARGE_INTEGER *v74; // eax
  Model *v75; // eax
  bool v76; // zf
  AsyncLoader *v77; // ebx
  int **v78; // ebp
  const char *v79; // ebp
  const char *v80; // eax
  int v81; // ebp
  void (__thiscall ***v82)(_DWORD, _DWORD, StaticModel *); // ebx
  CRETimer *v83; // eax
  _DWORD *v84; // edi
  _DWORD *v85; // edi
  int *v86; // eax
  _DWORD *v87; // esi
  char *v88; // ebx
  char *v89; // edi
  _DWORD *v90; // ebp
  int v91; // ebx
  int v92; // eax
  _DWORD *v93; // ebx
  char *v94; // edi
  char *v95; // ebp
  _DWORD *v96; // esi
  int **v97; // edi
  int **v98; // esi
  unsigned int v99; // ebp
  int ***v100; // edi
  int *v101; // eax
  AnimationSet *v102; // eax
  int *v103; // eax
  int v104; // edx
  int *v105; // eax
  int *v106; // eax
  char *v107; // ebx
  int *v108; // eax
  char *v109; // edi
  int *v110; // eax
  _DWORD *v111; // ebx
  int v112; // edi
  int *v113; // eax
  _DWORD *v114; // esi
  char *v115; // ebx
  char *v116; // edi
  _DWORD *v117; // ebp
  int v118; // ebx
  int v119; // eax
  int *j; // esi
  StaticModel *v121; // [esp+24h] [ebp-1ECh]
  StaticModel *v122; // [esp+24h] [ebp-1ECh]
  StaticModel *v123; // [esp+24h] [ebp-1ECh]
  StaticModel *v124; // [esp+24h] [ebp-1ECh]
  StaticModel *v125; // [esp+24h] [ebp-1ECh]
  StaticModel *i; // [esp+24h] [ebp-1ECh]
  int v128; // [esp+30h] [ebp-1E0h] BYREF
  void *v129; // [esp+34h] [ebp-1DCh]
  char v130; // [esp+3Bh] [ebp-1D5h]
  float v131; // [esp+3Ch] [ebp-1D4h]
  int ***v132; // [esp+40h] [ebp-1D0h] BYREF
  int **v133; // [esp+44h] [ebp-1CCh]
  AsyncLoader *v134; // [esp+48h] [ebp-1C8h] BYREF
  int **v135; // [esp+4Ch] [ebp-1C4h]
  int v136[2]; // [esp+50h] [ebp-1C0h] BYREF
  int v137; // [esp+58h] [ebp-1B8h] BYREF
  int v138[7]; // [esp+5Ch] [ebp-1B4h] BYREF
  _BYTE v139[28]; // [esp+78h] [ebp-198h] BYREF
  int v140; // [esp+98h] [ebp-178h]
  int v141; // [esp+9Ch] [ebp-174h]
  int v142; // [esp+A0h] [ebp-170h]
  int v143; // [esp+A8h] [ebp-168h]
  int v144; // [esp+ACh] [ebp-164h]
  int v145; // [esp+B0h] [ebp-160h]
  int v146; // [esp+B8h] [ebp-158h]
  int v147; // [esp+BCh] [ebp-154h]
  int v148; // [esp+C0h] [ebp-150h]
  int v149; // [esp+C8h] [ebp-148h]
  int v150; // [esp+CCh] [ebp-144h]
  int v151; // [esp+D0h] [ebp-140h]
  int v152[3]; // [esp+D8h] [ebp-138h] BYREF
  int **v153; // [esp+E4h] [ebp-12Ch]
  _BYTE v154[28]; // [esp+E8h] [ebp-128h] BYREF
  _BYTE v155[28]; // [esp+104h] [ebp-10Ch] BYREF
  _BYTE v156[40]; // [esp+120h] [ebp-F0h] BYREF
  void *v157; // [esp+148h] [ebp-C8h]
  char *v158; // [esp+14Ch] [ebp-C4h]
  int v159; // [esp+150h] [ebp-C0h]
  AsyncLoader *v160; // [esp+158h] [ebp-B8h] BYREF
  int **v161; // [esp+15Ch] [ebp-B4h]
  AsyncLoader *v162; // [esp+160h] [ebp-B0h] BYREF
  int **v163; // [esp+164h] [ebp-ACh]
  _DWORD v164[2]; // [esp+168h] [ebp-A8h] BYREF
  AsyncLoader *v165; // [esp+170h] [ebp-A0h] BYREF
  int **v166; // [esp+174h] [ebp-9Ch]
  _DWORD v167[2]; // [esp+178h] [ebp-98h] BYREF
  _DWORD v168[3]; // [esp+180h] [ebp-90h] BYREF
  int v169; // [esp+18Ch] [ebp-84h]
  int **v170; // [esp+194h] [ebp-7Ch]
  int v171; // [esp+19Ch] [ebp-74h]
  char v172[12]; // [esp+1A0h] [ebp-70h] BYREF
  char v173[12]; // [esp+1ACh] [ebp-64h] BYREF
  char v174[12]; // [esp+1B8h] [ebp-58h] BYREF
  char v175[64]; // [esp+1C4h] [ebp-4Ch] BYREF
  int v176; // [esp+20Ch] [ebp-4h]

  v2 = (AsyncLoader *)this;
  v131 = 0.0;
  v130 = 0;
  while ( v131 == 0.0 || v130 )
  {
    v137 = -1;
    std::string::string(v138);
    v176 = 0;
    std::string::string(v139);
    v140 = 0;
    v141 = 0;
    v142 = 0;
    v143 = 0;
    v144 = 0;
    v145 = 0;
    v146 = 0;
    v147 = 0;
    v148 = 0;
    v149 = 0;
    v150 = 0;
    v151 = 0;
    v176 = 5;
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 152));
    if ( *((_DWORD *)v2 + 31) )
    {
      v3 = (_DWORD *)*((_DWORD *)v2 + 30);
      v4 = (_DWORD *)*v3;
      if ( (_DWORD *)*v3 == v3 )
        invalid_parameter_noinfo();
      v137 = v4[2];
      v5 = v4 + 3;
      std::string::operator=(v138, v5);
      std::string::operator=(v139, v5 + 7);
      sub_101770D0(v5 + 14);
      sub_101770D0(v5 + 18);
      sub_101770D0(v5 + 22);
      sub_101770D0(v5 + 26);
      v6 = (void **)*((_DWORD *)v2 + 30);
      v7 = *v6;
      if ( *v6 == v6 )
        invalid_parameter_noinfo();
      if ( v7 != *((void **)v2 + 30) )
      {
        **((_DWORD **)v7 + 1) = *(_DWORD *)v7;
        *(_DWORD *)(*(_DWORD *)v7 + 4) = *((_DWORD *)v7 + 1);
        sub_10031EC0((int *)v7 + 3);
        operator delete(v7);
        --*((_DWORD *)v2 + 31);
      }
    }
    v8 = *((_DWORD *)v2 + 31);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v2 + 152));
    if ( v8 > 0x28 )
      v130 = 1;
    if ( v137 == -1 )
    {
      v176 = -1;
      sub_10031EC0(v138);
      break;
    }
    ++LODWORD(v131);
    v9 = v144;
    v10 = v143;
    v11 = 0;
    v121 = 0;
    while ( v10 && v11 < (v9 - v10) / 84 )
    {
      if ( !*(_DWORD *)((char *)v121 + v10 + 56) )
        goto LABEL_49;
      v170 = this[8];
      if ( v11 >= (v9 - v10) / 84 )
      {
        invalid_parameter_noinfo();
        v10 = v143;
      }
      sub_1010FD40(this + 6, v136, (int)v121 + v10);
      if ( !v136[0] || (int ***)v136[0] != this + 7 )
        invalid_parameter_noinfo();
      v10 = v143;
      if ( (int **)v136[1] == v170 )
      {
        if ( !v143 || (v14 = v144, v11 >= (v144 - v143) / 84) )
        {
          invalid_parameter_noinfo();
          v14 = v144;
          v10 = v143;
        }
        v15 = (int)v121 + v10;
        if ( !v10 || v11 >= (v14 - v10) / 84 )
        {
          invalid_parameter_noinfo();
          v10 = v143;
        }
        std::string::string(v154, (char *)v121 + v10);
        LOBYTE(v176) = 6;
        sub_100127C0((int)v155, v15);
        LOBYTE(v176) = 7;
        sub_10177240(&v172, v154);
        v16 = (char *)v157;
        LOBYTE(v176) = 10;
        if ( v157 )
        {
          v17 = v158;
          if ( v157 != v158 )
          {
            do
            {
              std::string::~string(v16);
              v16 += 28;
            }
            while ( v16 != v17 );
            v16 = (char *)v157;
          }
          operator delete(v16);
        }
        v157 = 0;
        v158 = 0;
        v159 = 0;
        LOBYTE(v176) = 9;
        std::string::~string(v156);
        LOBYTE(v176) = 8;
        std::string::~string(v155);
        LOBYTE(v176) = 5;
        std::string::~string(v154);
        goto LABEL_48;
      }
      if ( v143 && (v9 = v144, v11 < (v144 - v143) / 84) )
      {
        v12 = invalid_parameter_noinfo;
      }
      else
      {
        v12 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
        v9 = v144;
        v10 = v143;
      }
      if ( *(_DWORD *)((char *)v121 + v10 + 56) )
      {
        if ( !v10 || v11 >= (v9 - v10) / 84 )
        {
          v12();
          v10 = v143;
        }
        operator delete[](*(void **)((char *)v121 + v10 + 56));
        v13 = v143;
        if ( !v143 || v11 >= (v144 - v143) / 84 )
        {
          v12();
          v13 = v143;
        }
        *(_DWORD *)((char *)v121 + v13 + 56) = 0;
LABEL_48:
        v10 = v143;
        v9 = v144;
      }
LABEL_49:
      v2 = (AsyncLoader *)this;
      ++v11;
      v121 = (StaticModel *)((char *)v121 + 84);
    }
    v18 = v141;
    v19 = v140;
    v20 = 0;
    v122 = 0;
    while ( 2 )
    {
      if ( v19 && v20 < (v18 - v19) / 84 )
      {
        v21 = v122;
        v171 = *((_DWORD *)v2 + 8);
        sub_1010FD40(this + 6, v168, (int)v122 + v19);
        if ( !v168[0] || (AsyncLoader *)v168[0] != (AsyncLoader *)((char *)v2 + 28) )
          invalid_parameter_noinfo();
        if ( v168[1] == v171 )
        {
          v24 = v140;
          if ( !v140 || (v25 = v141, v20 >= (v141 - v140) / 84) )
          {
            invalid_parameter_noinfo();
            v25 = v141;
            v24 = v140;
          }
          v26 = (int)v122 + v24;
          if ( !v24 || v20 >= (v25 - v24) / 84 )
          {
            invalid_parameter_noinfo();
            v24 = v140;
          }
          std::string::string(v154, (char *)v122 + v24);
          LOBYTE(v176) = 11;
          sub_100127C0((int)v155, v26);
          LOBYTE(v176) = 12;
          sub_10177240(&v173, v154);
          v27 = (char *)v157;
          LOBYTE(v176) = 15;
          if ( v157 )
          {
            v28 = v158;
            if ( v157 != v158 )
            {
              do
              {
                std::string::~string(v27);
                v27 += 28;
              }
              while ( v27 != v28 );
              v27 = (char *)v157;
            }
            operator delete(v27);
          }
          v157 = 0;
          v158 = 0;
          v159 = 0;
          LOBYTE(v176) = 14;
          std::string::~string(v156);
          LOBYTE(v176) = 13;
          std::string::~string(v155);
          LOBYTE(v176) = 5;
          std::string::~string(v154);
          v21 = v122;
LABEL_81:
          v19 = v140;
          v18 = v141;
        }
        else
        {
          v19 = v140;
          if ( v140 && (v18 = v141, v20 < (v141 - v140) / 84) )
          {
            v22 = invalid_parameter_noinfo;
          }
          else
          {
            v22 = invalid_parameter_noinfo;
            invalid_parameter_noinfo();
            v18 = v141;
            v19 = v140;
          }
          if ( *(_DWORD *)((char *)v122 + v19 + 56) )
          {
            if ( !v19 || v20 >= (v18 - v19) / 84 )
            {
              v22();
              v19 = v140;
            }
            operator delete[](*(void **)((char *)v122 + v19 + 56));
            v23 = v140;
            if ( !v140 || v20 >= (v141 - v140) / 84 )
            {
              v22();
              v23 = v140;
            }
            *(_DWORD *)((char *)v122 + v23 + 56) = 0;
            goto LABEL_81;
          }
        }
        v2 = (AsyncLoader *)this;
        ++v20;
        v122 = (StaticModel *)((char *)v21 + 84);
        continue;
      }
      break;
    }
    v29 = v147;
    v30 = v146;
    v31 = 0;
    v123 = 0;
    while ( 2 )
    {
      if ( v30 && v31 < (v29 - v30) / 84 )
      {
        v32 = v123;
        v169 = *((_DWORD *)v2 + 8);
        sub_1010FD40(this + 6, v167, (int)v123 + v30);
        if ( !v167[0] || (AsyncLoader *)v167[0] != (AsyncLoader *)((char *)v2 + 28) )
          invalid_parameter_noinfo();
        if ( v167[1] == v169 )
        {
          v35 = v146;
          if ( !v146 || (v36 = v147, v31 >= (v147 - v146) / 84) )
          {
            invalid_parameter_noinfo();
            v36 = v147;
            v35 = v146;
          }
          v37 = (int)v123 + v35;
          if ( !v35 || v31 >= (v36 - v35) / 84 )
          {
            invalid_parameter_noinfo();
            v35 = v146;
          }
          std::string::string(v154, (char *)v123 + v35);
          LOBYTE(v176) = 16;
          sub_100127C0((int)v155, v37);
          LOBYTE(v176) = 17;
          sub_10177240(&v175, v154);
          v38 = (char *)v157;
          LOBYTE(v176) = 20;
          if ( v157 )
          {
            v39 = v158;
            if ( v157 != v158 )
            {
              do
              {
                std::string::~string(v38);
                v38 += 28;
              }
              while ( v38 != v39 );
              v38 = (char *)v157;
            }
            operator delete(v38);
          }
          v157 = 0;
          v158 = 0;
          v159 = 0;
          LOBYTE(v176) = 19;
          std::string::~string(v156);
          LOBYTE(v176) = 18;
          std::string::~string(v155);
          LOBYTE(v176) = 5;
          std::string::~string(v154);
          v32 = v123;
LABEL_114:
          v30 = v146;
          v29 = v147;
        }
        else
        {
          v30 = v146;
          if ( v146 && (v29 = v147, v31 < (v147 - v146) / 84) )
          {
            v33 = invalid_parameter_noinfo;
          }
          else
          {
            v33 = invalid_parameter_noinfo;
            invalid_parameter_noinfo();
            v29 = v147;
            v30 = v146;
          }
          if ( *(_DWORD *)((char *)v123 + v30 + 56) )
          {
            if ( !v30 || v31 >= (v29 - v30) / 84 )
            {
              v33();
              v30 = v146;
            }
            operator delete[](*(void **)((char *)v123 + v30 + 56));
            v34 = v146;
            if ( !v146 || v31 >= (v147 - v146) / 84 )
            {
              v33();
              v34 = v146;
            }
            *(_DWORD *)((char *)v123 + v34 + 56) = 0;
            goto LABEL_114;
          }
        }
        v2 = (AsyncLoader *)this;
        ++v31;
        v123 = (StaticModel *)((char *)v32 + 84);
        continue;
      }
      break;
    }
    v40 = v150;
    v41 = v149;
    v42 = 0;
    v124 = 0;
    while ( 2 )
    {
      if ( v41 && v42 < (v40 - v41) / 84 )
      {
        v43 = v124;
        v153 = (int **)*((_DWORD *)v2 + 8);
        sub_1010FD40(this + 6, v164, (int)v124 + v41);
        if ( !v164[0] || (AsyncLoader *)v164[0] != (AsyncLoader *)((char *)v2 + 28) )
          invalid_parameter_noinfo();
        if ( (int **)v164[1] == v153 )
        {
          v46 = v149;
          if ( !v149 || (v47 = v150, v42 >= (v150 - v149) / 84) )
          {
            invalid_parameter_noinfo();
            v47 = v150;
            v46 = v149;
          }
          v48 = (int)v124 + v46;
          if ( !v46 || v42 >= (v47 - v46) / 84 )
          {
            invalid_parameter_noinfo();
            v46 = v149;
          }
          std::string::string(v154, (char *)v124 + v46);
          LOBYTE(v176) = 21;
          sub_100127C0((int)v155, v48);
          LOBYTE(v176) = 22;
          sub_10177240(&v174, v154);
          v49 = (char *)v157;
          LOBYTE(v176) = 25;
          if ( v157 )
          {
            v50 = v158;
            if ( v157 != v158 )
            {
              do
              {
                std::string::~string(v49);
                v49 += 28;
              }
              while ( v49 != v50 );
              v49 = (char *)v157;
            }
            operator delete(v49);
          }
          v157 = 0;
          v158 = 0;
          v159 = 0;
          LOBYTE(v176) = 24;
          std::string::~string(v156);
          LOBYTE(v176) = 23;
          std::string::~string(v155);
          LOBYTE(v176) = 5;
          std::string::~string(v154);
          v43 = v124;
LABEL_147:
          v41 = v149;
          v40 = v150;
        }
        else
        {
          v41 = v149;
          if ( v149 && (v40 = v150, v42 < (v150 - v149) / 84) )
          {
            v44 = invalid_parameter_noinfo;
          }
          else
          {
            v44 = invalid_parameter_noinfo;
            invalid_parameter_noinfo();
            v40 = v150;
            v41 = v149;
          }
          if ( *(_DWORD *)((char *)v124 + v41 + 56) )
          {
            if ( !v41 || v42 >= (v40 - v41) / 84 )
            {
              v44();
              v41 = v149;
            }
            operator delete[](*(void **)((char *)v124 + v41 + 56));
            v45 = v149;
            if ( !v149 || v42 >= (v150 - v149) / 84 )
            {
              v44();
              v45 = v149;
            }
            *(_DWORD *)((char *)v124 + v45 + 56) = 0;
            goto LABEL_147;
          }
        }
        v2 = (AsyncLoader *)this;
        ++v42;
        v124 = (StaticModel *)((char *)v43 + 84);
        continue;
      }
      break;
    }
    sub_1016FD00((_DWORD *)v2 + 44, &v132, &v137);
    v51 = v132;
    v52 = (int **)*((_DWORD *)v2 + 46);
    if ( !v132 || v132 != (int ***)((char *)v2 + 180) )
      invalid_parameter_noinfo();
    v53 = v133;
    if ( v133 != v52 )
    {
      if ( !v51 )
        invalid_parameter_noinfo();
      if ( v53 == v51[1] )
        invalid_parameter_noinfo();
      sub_1010FD40(this + 104, &v128, (int)(v53 + 4));
      v54 = v128;
      v55 = this[106];
      if ( !v128 || (int ***)v128 != this + 105 )
        invalid_parameter_noinfo();
      v56 = (_DWORD **)v129;
      if ( v129 != v55 )
      {
        if ( !v54 )
          invalid_parameter_noinfo();
        if ( v56 == *(_DWORD ***)(v54 + 4) )
          invalid_parameter_noinfo();
        v57 = (_DWORD *)*v56[10];
        while ( 1 )
        {
          if ( v56 == *(_DWORD ***)(v54 + 4) )
            invalid_parameter_noinfo();
          if ( v57 == v56[10] )
            break;
          sub_1016FD00(this + 44, &v162, v57 + 2);
          v58 = this[46];
          v59 = v162;
          if ( !v162 || v162 != (AsyncLoader *)(this + 45) )
            invalid_parameter_noinfo();
          v60 = v163;
          if ( v163 != v58 )
          {
            if ( !v59 )
              invalid_parameter_noinfo();
            if ( v60 == *((int ***)v59 + 1) )
              invalid_parameter_noinfo();
            v60[12] = (int *)2;
          }
          if ( v57 == *((_DWORD **)v129 + 10) )
            invalid_parameter_noinfo();
          v57 = (_DWORD *)*v57;
          v56 = (_DWORD **)v129;
          v54 = v128;
        }
        sub_101766F0((int)v152, v128, v56);
        v53 = v133;
      }
      if ( v53 == v132[1] )
        invalid_parameter_noinfo();
      v53[12] = (int *)2;
    }
    sub_1016FD00(this + 54, &v160, &v137);
    v61 = v160;
    v62 = this[56];
    if ( !v160 || v160 != (AsyncLoader *)(this + 55) )
      invalid_parameter_noinfo();
    v63 = v161;
    if ( v161 != v62 )
    {
      if ( !v61 )
        invalid_parameter_noinfo();
      if ( v63 == *((int ***)v61 + 1) )
        invalid_parameter_noinfo();
      v63[12] = (int *)2;
    }
    sub_1016FD00(this + 84, &v165, &v137);
    v64 = v165;
    v65 = this[86];
    if ( !v165 || v165 != (AsyncLoader *)(this + 85) )
      invalid_parameter_noinfo();
    v66 = v166;
    if ( v166 != v65 )
    {
      if ( !v64 )
        invalid_parameter_noinfo();
      if ( v66 == *((int ***)v64 + 1) )
        invalid_parameter_noinfo();
      v66[12] = (int *)2;
    }
    sub_1016FD00(this + 94, &v134, &v137);
    v67 = v134;
    v68 = this[96];
    if ( v134 && v134 == (AsyncLoader *)(this + 95) )
    {
      v69 = invalid_parameter_noinfo;
    }
    else
    {
      v69 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
    }
    v70 = v135;
    if ( v135 != v68 )
    {
      if ( !v67 )
        v69();
      if ( v70 == *((int ***)v67 + 1) )
        v69();
      v70[12] = (int *)2;
    }
    v176 = -1;
    sub_10031EC0(v138);
    v2 = (AsyncLoader *)this;
  }
  v71 = (char *)**((_DWORD **)v2 + 46);
  v72 = (int)v2 + 180;
  v128 = (int)v2 + 180;
  while ( 1 )
  {
    v73 = (char *)*((_DWORD *)v2 + 46);
    if ( !v72 || (AsyncLoader *)v72 != (AsyncLoader *)((char *)v2 + 180) )
      invalid_parameter_noinfo();
    if ( v71 == v73 )
      break;
    if ( !v72 )
      invalid_parameter_noinfo();
    if ( v71 == *(char **)(v72 + 4) )
      invalid_parameter_noinfo();
    if ( *((_DWORD *)v71 + 12) == 2 )
    {
      if ( v71 == *(char **)(v72 + 4) )
        invalid_parameter_noinfo();
      if ( *((_DWORD *)v71 + 11) )
      {
        v74 = (LARGE_INTEGER *)REGetGlobalTimer();
        CRETimer::StartMiniTimer(v74);
        v75 = (Model *)operator new(0x1C8u);
        v176 = 26;
        if ( v75 )
          v125 = Model::Model(v75);
        else
          v125 = 0;
        v76 = v71 == *(char **)(v128 + 4);
        v176 = -1;
        if ( v76 )
          invalid_parameter_noinfo();
        sub_1010FD40(this + 16, &v134, (int)(v71 + 16));
        v77 = v134;
        v153 = this[18];
        if ( !v134 || v134 != (AsyncLoader *)(this + 17) )
          invalid_parameter_noinfo();
        v78 = v135;
        if ( v135 == v153 )
        {
          if ( v71 == *(char **)(v128 + 4) )
            invalid_parameter_noinfo();
          if ( *((_DWORD *)v71 + 10) < 0x10u )
            v80 = v71 + 20;
          else
            v80 = (const char *)*((_DWORD *)v71 + 5);
          StaticModel::Load((ModelFrame **)v125, v80, 0);
        }
        else
        {
          if ( !v77 )
            invalid_parameter_noinfo();
          if ( v78 == *((int ***)v77 + 1) )
            invalid_parameter_noinfo();
          if ( (unsigned int)v78[22] < 0x10 )
            v79 = (const char *)(v78 + 17);
          else
            v79 = (const char *)v78[17];
          StaticModel::Load((ModelFrame **)v125, v79, 0);
        }
        v81 = v128;
        if ( v71 == *(char **)(v128 + 4) )
          invalid_parameter_noinfo();
        v82 = (void (__thiscall ***)(_DWORD, _DWORD, StaticModel *))*((_DWORD *)v71 + 11);
        if ( v71 == *(char **)(v81 + 4) )
          invalid_parameter_noinfo();
        (**v82)(v82, *((_DWORD *)v71 + 2), v125);
        v83 = REGetGlobalTimer();
        v131 = CRETimer::StopMiniTimer(v83);
        if ( v131 <= 1000.0 )
        {
          if ( v71 == *(char **)(v81 + 4) )
            invalid_parameter_noinfo();
          if ( *((_DWORD *)v71 + 10) < 0x10u )
            v85 = v71 + 20;
          else
            v85 = (_DWORD *)*((_DWORD *)v71 + 5);
          LogPrintf("AsyncLoad %s spend %.3f", v85, v131);
        }
        else
        {
          if ( v71 == *(char **)(v81 + 4) )
            invalid_parameter_noinfo();
          if ( *((_DWORD *)v71 + 10) < 0x10u )
            v84 = v71 + 20;
          else
            v84 = (_DWORD *)*((_DWORD *)v71 + 5);
          LogPrintf("!!!!!!!!!AsyncLoad %s spend %.3f", v84, v131);
        }
      }
      v86 = (int *)sub_10175830((int)v152, v128, v71);
      v71 = (char *)v86[1];
      v2 = (AsyncLoader *)this;
      v128 = *v86;
      v72 = v128;
    }
    else
    {
      if ( v71 == *(char **)(v72 + 4) )
        invalid_parameter_noinfo();
      v71 = *(char **)v71;
    }
  }
  v87 = *this[56];
  v88 = (char *)(this + 55);
  v89 = (char *)(this + 55);
  while ( 1 )
  {
    v90 = (_DWORD *)*((_DWORD *)v88 + 1);
    if ( !v89 || v89 != v88 )
      invalid_parameter_noinfo();
    if ( v87 == v90 )
      break;
    if ( !v89 )
      invalid_parameter_noinfo();
    if ( v87 == *((_DWORD **)v89 + 1) )
      invalid_parameter_noinfo();
    if ( v87[12] == 2 )
    {
      if ( v87 == *((_DWORD **)v89 + 1) )
        invalid_parameter_noinfo();
      v91 = v87[11];
      if ( v87 == *((_DWORD **)v89 + 1) )
      {
        invalid_parameter_noinfo();
        if ( v87 == *((_DWORD **)v89 + 1) )
          invalid_parameter_noinfo();
      }
      (*(void (__thiscall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v91 + 8))(v91, v87[2], v87 + 4);
      v92 = sub_10175830((int)v152, (int)v89, v87);
      v89 = *(char **)v92;
      v87 = *(_DWORD **)(v92 + 4);
      v88 = (char *)(this + 55);
    }
    else
    {
      if ( v87 == *((_DWORD **)v89 + 1) )
        invalid_parameter_noinfo();
      v87 = (_DWORD *)*v87;
    }
  }
  v93 = *this[86];
  v94 = (char *)(this + 85);
  v95 = (char *)(this + 85);
  v129 = v93;
  v128 = (int)(this + 85);
  while ( 1 )
  {
    v96 = (_DWORD *)*((_DWORD *)v94 + 1);
    if ( !v95 || v95 != v94 )
      invalid_parameter_noinfo();
    if ( v93 == v96 )
      break;
    if ( !v95 )
      invalid_parameter_noinfo();
    if ( v93 == *((_DWORD **)v95 + 1) )
      invalid_parameter_noinfo();
    if ( v93[12] == 2 )
    {
      if ( v93 == *((_DWORD **)v95 + 1) )
        invalid_parameter_noinfo();
      sub_1010FD40(this + 16, &v132, (int)(v93 + 4));
      v97 = this[18];
      if ( !v132 || v132 != this + 17 )
        invalid_parameter_noinfo();
      v98 = v133;
      if ( v133 != v97 )
      {
        v99 = 0;
        for ( i = 0; ; i = (StaticModel *)((char *)i + 84) )
        {
          v100 = v132;
          if ( !v132 )
            invalid_parameter_noinfo();
          if ( v98 == v100[1] )
            invalid_parameter_noinfo();
          v101 = v98[36];
          if ( !v101 || v99 >= ((char *)v98[37] - (char *)v101) / 84 )
            break;
          v102 = (AnimationSet *)operator new(0x2Cu);
          v136[0] = (int)v102;
          v176 = 27;
          if ( v102 )
            v131 = COERCE_FLOAT(AnimationSet::AnimationSet(v102));
          else
            v131 = 0.0;
          v76 = v98 == v100[1];
          v176 = -1;
          if ( v76 )
            invalid_parameter_noinfo();
          v103 = v98[36];
          if ( !v103 || v99 >= ((char *)v98[37] - (char *)v103) / 84 )
            invalid_parameter_noinfo();
          v104 = *(int *)((char *)v98[36] + (_DWORD)i + 68);
          if ( v104 && (*(int *)((char *)v98[36] + (_DWORD)i + 72) - v104) / 28 )
          {
            if ( v98 == v100[1] )
              invalid_parameter_noinfo();
            v105 = v98[36];
            if ( !v105 || v99 >= ((char *)v98[37] - (char *)v105) / 84 )
              invalid_parameter_noinfo();
            v136[0] = (int)v98[36] + (_DWORD)i + 64;
          }
          else
          {
            v136[0] = 0;
          }
          if ( v98 == v100[1] )
            invalid_parameter_noinfo();
          v106 = v98[36];
          if ( !v106 || v99 >= ((char *)v98[37] - (char *)v106) / 84 )
            invalid_parameter_noinfo();
          v107 = (char *)v98[36] + (_DWORD)i;
          if ( v98 == v132[1] )
            invalid_parameter_noinfo();
          v108 = v98[36];
          if ( !v108 || v99 >= ((char *)v98[37] - (char *)v108) / 84 )
            invalid_parameter_noinfo();
          v109 = (char *)v98[36] + (_DWORD)i;
          if ( v98 == v132[1] )
            invalid_parameter_noinfo();
          v110 = v98[36];
          if ( !v110 || v99 >= ((char *)v98[37] - (char *)v110) / 84 )
            invalid_parameter_noinfo();
          if ( AnimationSet::Load(SLODWORD(v131), (int)v98[36] + (_DWORD)i, (int)(v109 + 28), v107[80], v136[0], 0) )
          {
            v111 = v129;
            if ( v129 == *(void **)(v128 + 4) )
              invalid_parameter_noinfo();
            v112 = v111[11];
            if ( v111 == *(_DWORD **)(v128 + 4) )
              invalid_parameter_noinfo();
            (*(void (__thiscall **)(int, _DWORD, float))(*(_DWORD *)v112 + 4))(
              v112,
              v111[2],
              COERCE_FLOAT(LODWORD(v131)));
          }
          v93 = v129;
          ++v99;
        }
        v113 = (int *)sub_10175830((int)v152, v128, v93);
        v93 = (_DWORD *)v113[1];
        v128 = *v113;
        v129 = v93;
        v95 = (char *)v128;
      }
      v94 = (char *)(this + 85);
    }
    else
    {
      if ( v93 == *((_DWORD **)v95 + 1) )
        invalid_parameter_noinfo();
      v93 = (_DWORD *)*v93;
      v129 = v93;
    }
  }
  v114 = *this[96];
  v115 = (char *)(this + 95);
  v116 = (char *)(this + 95);
  while ( 1 )
  {
    v117 = (_DWORD *)*((_DWORD *)v115 + 1);
    if ( !v116 || v116 != v115 )
      invalid_parameter_noinfo();
    if ( v114 == v117 )
      break;
    if ( !v116 )
      invalid_parameter_noinfo();
    if ( v114 == *((_DWORD **)v116 + 1) )
      invalid_parameter_noinfo();
    if ( v114[12] == 2 )
    {
      if ( v114 == *((_DWORD **)v116 + 1) )
        invalid_parameter_noinfo();
      v118 = v114[11];
      if ( v114 == *((_DWORD **)v116 + 1) )
        invalid_parameter_noinfo();
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v118 + 20))(v118, v114[2]);
      v119 = sub_10175830((int)v152, (int)v116, v114);
      v116 = *(char **)v119;
      v114 = *(_DWORD **)(v119 + 4);
      v115 = (char *)(this + 95);
    }
    else
    {
      if ( v114 == *((_DWORD **)v116 + 1) )
        invalid_parameter_noinfo();
      v114 = (_DWORD *)*v114;
    }
  }
  for ( j = *this[8]; j != (int *)this[8]; j = (int *)*j )
  {
    if ( j[23] )
    {
      if ( j == (int *)this[8] )
        invalid_parameter_noinfo();
      operator delete[]((void *)j[23]);
      if ( j == (int *)this[8] )
        invalid_parameter_noinfo();
      j[23] = 0;
    }
    if ( j == (int *)this[8] )
      invalid_parameter_noinfo();
  }
  sub_10031700(this + 7);
  v135 = this[8];
  v134 = (AsyncLoader *)(this + 7);
  sub_10176030(9, &v134);
  this[14] = (int **)1;
  this[15] = (int **)1;
}
