/*
 * func-name: ?Initialize@Input@@UAEXAAVConfigFile@@PAUHWND__@@_N@Z
 * func-address: 0x100dbc90
 * callers: 0x100dcba0
 * callees: 0x100116a0, 0x100db860, 0x100dd630, 0x1017a390, 0x1017a4a0, 0x1017bd50, 0x1017c0d0, 0x1017c3a0, 0x1017cd10, 0x1017d430, 0x1017dba0, 0x1017e0a0, 0x101a2500
 */

void __thiscall Input::Initialize(Input *this, struct ConfigFile *a2, HWND a3, bool a4)
{
  Input *v4; // ebx
  struct ConfigFile *v5; // ebp
  int v6; // eax
  int last_of; // eax
  int v8; // eax
  char *v9; // esi
  char *v10; // edi
  unsigned int v11; // ebx
  char *v12; // ebp
  char *v13; // esi
  unsigned int v14; // ebx
  unsigned int v15; // ebp
  char *v16; // esi
  void *v17; // esi
  int v18; // edi
  void *v19; // esi
  char *v20; // esi
  char *v21; // edi
  _BYTE *v22; // edi
  _BYTE *v23; // esi
  unsigned int v24; // eax
  unsigned int v25; // edx
  struct ConfigFile **v26; // eax
  void *v27; // edi
  _DWORD *v28; // eax
  int v29; // ecx
  unsigned int v30; // ebx
  int v31; // ebp
  char *v32; // esi
  void (__cdecl *v33)(); // edi
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // esi
  int v38; // eax
  int v39; // eax
  char *v40; // esi
  Input *v41; // edi
  char *v42; // esi
  int *v43; // ecx
  char *v44; // esi
  Input *v45; // edi
  int v46; // eax
  char *v47; // esi
  int v48; // eax
  int v49; // eax
  char *v50; // esi
  Input *v51; // edi
  char *v52; // esi
  char *v53; // esi
  char *v54; // esi
  char *v55; // edi
  char *v56; // esi
  char *v57; // edi
  char *v58; // esi
  char *v59; // edi
  char *v60; // esi
  char *v61; // edi
  char *v62; // esi
  char *v63; // edi
  char *v64; // esi
  char *v65; // edi
  char v66; // [esp-3Ch] [ebp-190h] BYREF
  int v67; // [esp-38h] [ebp-18Ch] BYREF
  int v68; // [esp-34h] [ebp-188h]
  int v69; // [esp-30h] [ebp-184h]
  int v70; // [esp-2Ch] [ebp-180h]
  int v71; // [esp-28h] [ebp-17Ch]
  int v72; // [esp-24h] [ebp-178h] BYREF
  int v73; // [esp-20h] [ebp-174h] BYREF
  int v74; // [esp-1Ch] [ebp-170h] BYREF
  int v75; // [esp-18h] [ebp-16Ch]
  int v76; // [esp-14h] [ebp-168h]
  int v77; // [esp-10h] [ebp-164h]
  int v78; // [esp-Ch] [ebp-160h]
  int *v79; // [esp-8h] [ebp-15Ch]
  int v80; // [esp-4h] [ebp-158h]
  int v81; // [esp+0h] [ebp-154h]
  int v82; // [esp+4h] [ebp-150h]
  float v83; // [esp+10h] [ebp-144h]
  unsigned int v84; // [esp+14h] [ebp-140h]
  int v85; // [esp+18h] [ebp-13Ch] BYREF
  void *v86; // [esp+1Ch] [ebp-138h]
  _BYTE *v87; // [esp+20h] [ebp-134h]
  int v88; // [esp+24h] [ebp-130h]
  int v89; // [esp+28h] [ebp-12Ch] BYREF
  Input *v90; // [esp+2Ch] [ebp-128h]
  int v91; // [esp+30h] [ebp-124h] BYREF
  void *v92; // [esp+34h] [ebp-120h]
  char *v93; // [esp+38h] [ebp-11Ch]
  int v94; // [esp+3Ch] [ebp-118h]
  char v95[4]; // [esp+4Ch] [ebp-108h] BYREF
  void *v96; // [esp+50h] [ebp-104h]
  char *v97; // [esp+54h] [ebp-100h]
  int v98; // [esp+58h] [ebp-FCh]
  int v99; // [esp+68h] [ebp-ECh] BYREF
  void *v100; // [esp+6Ch] [ebp-E8h]
  char *v101; // [esp+70h] [ebp-E4h]
  int v102; // [esp+74h] [ebp-E0h]
  _BYTE v103[28]; // [esp+78h] [ebp-DCh] BYREF
  int v104[7]; // [esp+94h] [ebp-C0h] BYREF
  void *v105; // [esp+B4h] [ebp-A0h]
  char *v106; // [esp+B8h] [ebp-9Ch]
  int v107; // [esp+BCh] [ebp-98h]
  void *v108; // [esp+C4h] [ebp-90h]
  char *v109; // [esp+C8h] [ebp-8Ch]
  int v110; // [esp+CCh] [ebp-88h]
  void *v111; // [esp+D4h] [ebp-80h]
  char *v112; // [esp+D8h] [ebp-7Ch]
  int v113; // [esp+DCh] [ebp-78h]
  void *v114; // [esp+E4h] [ebp-70h]
  char *v115; // [esp+E8h] [ebp-6Ch]
  int v116; // [esp+ECh] [ebp-68h]
  char v117[32]; // [esp+F0h] [ebp-64h] BYREF
  _BYTE v118[28]; // [esp+110h] [ebp-44h] BYREF
  _BYTE v119[28]; // [esp+12Ch] [ebp-28h] BYREF
  int v120; // [esp+150h] [ebp-4h]

  v4 = this;
  v83 = COERCE_FLOAT(&v74);
  v90 = this;
  std::string::string(&v74, &unk_101C6649);
  v84 = (unsigned int)&v67;
  v120 = 0;
  std::string::string(&v67, &unk_11240BF8);
  v5 = a2;
  v120 = -1;
  v83 = sub_1017C3A0(v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80);
  *((float *)v4 + 2) = v83;
  v83 = COERCE_FLOAT(&v74);
  std::string::string(&v74, &unk_101C664A);
  v84 = (unsigned int)&v67;
  v120 = 1;
  std::string::string(&v67, &unk_11240C14);
  v120 = -1;
  v83 = sub_1017C3A0(v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80);
  *((float *)v4 + 4) = v83;
  v83 = COERCE_FLOAT(&v74);
  std::string::string(&v74, &unk_101C664B);
  v84 = (unsigned int)&v67;
  v120 = 2;
  std::string::string(&v67, "InvertPitch");
  v120 = -1;
  *((_BYTE *)v4 + 12) = sub_1017C0D0(v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, v79, v80);
  v100 = 0;
  v101 = 0;
  v102 = 0;
  v120 = 4;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v80 = (int)&v99;
  v79 = &v85;
  v83 = COERCE_FLOAT(&v72);
  std::string::string(&v72, "InputControls");
  sub_1017DBA0(v72, v73, v74, v75, v76, v77, v78, v79, v80);
  sub_1017CD10(v81, v82);
  LOBYTE(v120) = 5;
  v6 = sub_1017BD50(a2);
  std::string::string(v118, v6);
  LOBYTE(v120) = 6;
  last_of = std::string::find_last_of(v118, "_", std::string::npos);
  v8 = std::string::substr(v118, v104, 0, last_of);
  LOBYTE(v120) = 7;
  std::string::operator=(v118, v8);
  LOBYTE(v120) = 6;
  std::string::~string(v104);
  std::string::operator+=(v118, "_Default.ini");
  v83 = COERCE_FLOAT(&v74);
  std::string::string(&v74, v118);
  if ( (unsigned __int8)sub_1017E0A0(v74, v75, v76, v77, v78, v79, v80) )
  {
    v96 = 0;
    v97 = 0;
    v98 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v80 = (int)v95;
    v79 = &v91;
    v83 = COERCE_FLOAT(&v72);
    LOBYTE(v120) = 9;
    std::string::string(&v72, "InputControls");
    sub_1017DBA0(v72, v73, v74, v75, v76, v77, v78, v79, v80);
    v89 = 0;
    v84 = 0;
    while ( 1 )
    {
      v9 = (char *)v92;
      v10 = v93;
      if ( !v92 || v89 >= (unsigned int)((v93 - (_BYTE *)v92) / 28) )
        break;
      v11 = 0;
      v83 = 0.0;
      while ( v86 && v11 < (v87 - (_BYTE *)v86) / 28 )
      {
        v12 = (char *)v86 + LODWORD(v83);
        if ( !v9 || v89 >= (unsigned int)((v10 - v9) / 28) )
        {
          invalid_parameter_noinfo();
          v9 = (char *)v92;
        }
        if ( (unsigned __int8)std::operator==<char>(&v9[v84], v12) )
          goto LABEL_26;
        v10 = v93;
        v9 = (char *)v92;
        ++v11;
        LODWORD(v83) += 28;
      }
      v13 = (char *)v96;
      v14 = v89;
      if ( !v96 || v89 >= (unsigned int)((v97 - (_BYTE *)v96) / 28) )
      {
        invalid_parameter_noinfo();
        v13 = (char *)v96;
      }
      v15 = v84;
      sub_100116A0(&v99, &v13[v84]);
      v16 = (char *)v92;
      if ( !v92 || v14 >= (v93 - (_BYTE *)v92) / 28 )
      {
        invalid_parameter_noinfo();
        v16 = (char *)v92;
      }
      sub_100116A0(&v85, &v16[v15]);
      std::string::string(v104, "InputControls");
      v17 = v96;
      LOBYTE(v120) = 10;
      if ( !v96 || v14 >= (v97 - (_BYTE *)v96) / 28 )
      {
        invalid_parameter_noinfo();
        v17 = v96;
      }
      v18 = (int)v17 + v15;
      v19 = v92;
      if ( !v92 || v14 >= (v93 - (_BYTE *)v92) / 28 )
      {
        invalid_parameter_noinfo();
        v19 = v92;
      }
      sub_1017D430((int)a2, (int)v19 + v15, v18, (int)v104);
      LOBYTE(v120) = 9;
      std::string::~string(v104);
LABEL_26:
      ++v89;
      v84 += 28;
      v4 = v90;
      v5 = a2;
    }
    LOBYTE(v120) = 8;
    if ( v92 )
    {
      if ( v92 != v93 )
      {
        do
        {
          std::string::~string(v9);
          v9 += 28;
        }
        while ( v9 != v10 );
        v9 = (char *)v92;
      }
      operator delete(v9);
    }
    v20 = (char *)v96;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    LOBYTE(v120) = 6;
    if ( v96 )
    {
      v21 = v97;
      if ( v96 != v97 )
      {
        do
        {
          std::string::~string(v20);
          v20 += 28;
        }
        while ( v20 != v21 );
        v20 = (char *)v96;
      }
      operator delete(v20);
    }
  }
  v84 = 0;
  v83 = 0.0;
  while ( 1 )
  {
    v22 = v86;
    v23 = v87;
    if ( !v86 || v84 >= (v87 - (_BYTE *)v86) / 28 )
      break;
    sub_100116A0((_DWORD *)v4 + 6, (char *)v86 + LODWORD(v83));
    v24 = *((_DWORD *)v4 + 11);
    v89 = (int)v5;
    if ( v24 )
      v25 = (int)(*((_DWORD *)v4 + 12) - v24) >> 2;
    else
      v25 = 0;
    if ( v24 && v25 < (int)(*((_DWORD *)v4 + 13) - v24) >> 2 )
    {
      v26 = (struct ConfigFile **)*((_DWORD *)v4 + 12);
      ++v84;
      *v26 = v5;
      LODWORD(v83) += 28;
      *((_DWORD *)v4 + 12) = v26 + 1;
    }
    else
    {
      v27 = (void *)*((_DWORD *)v4 + 12);
      if ( v24 > (unsigned int)v27 )
        invalid_parameter_noinfo();
      sub_100DD630((int)&v91, (int)v4 + 40, v27, (int)&v89);
      ++v84;
      LODWORD(v83) += 28;
    }
  }
  v28 = (_DWORD *)((char *)v4 + 116);
  v29 = 199;
  do
  {
    *(v28 - 1) = -1;
    *v28 = -1;
    v28 += 2;
    --v29;
  }
  while ( v29 );
  v30 = 0;
  v31 = 0;
  while ( v22 && v30 < (v23 - v22) / 28 )
  {
    v32 = (char *)v100;
    if ( v100 && v30 < (v101 - (_BYTE *)v100) / 28 )
    {
      v33 = invalid_parameter_noinfo;
    }
    else
    {
      v33 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
      v32 = (char *)v100;
    }
    std::string::string(v95, &v32[v31]);
    LOBYTE(v120) = 11;
    sub_1017A390(v95, v81);
    sub_1017A4A0(v95, v80);
    if ( std::string::find(v95, ",", 0) == -1 || (unsigned int)std::string::length(v95) <= 2 )
    {
      v80 = 0;
      v83 = COERCE_FLOAT(&v73);
      std::string::string(&v73, v95);
      v53 = (char *)v86;
      LOBYTE(v120) = 24;
      if ( !v86 || v30 >= (v87 - (_BYTE *)v86) / 28 )
      {
        v33();
        v53 = (char *)v86;
      }
      v84 = (unsigned int)&v66;
      std::string::string(&v66, &v53[v31]);
      LOBYTE(v120) = 11;
      Input::Bind(v90, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
    }
    else
    {
      std::string::string(&v91, v95);
      v80 = std::string::npos;
      LOBYTE(v120) = 12;
      v34 = std::string::find(&v91, ",", 0);
      v35 = std::string::substr(&v91, v103, v34 + 1, v80);
      LOBYTE(v120) = 13;
      std::string::operator=(&v91, v35);
      LOBYTE(v120) = 12;
      std::string::~string(v103);
      v36 = std::string::find(&v91, ",", 0);
      v80 = 0;
      if ( v36 == -1 )
      {
        v48 = std::string::find(v95, ",", v80);
        std::string::substr(v95, v104, 0, v48);
        LOBYTE(v120) = 20;
        sub_1017A4A0(v104, v81);
        v80 = std::string::npos;
        v49 = std::string::find(v95, ",", 0);
        std::string::substr(v95, v119, v49 + 1, v80);
        LOBYTE(v120) = 21;
        sub_1017A390(v119, v81);
        v80 = 0;
        v83 = COERCE_FLOAT(&v73);
        std::string::string(&v73, v104);
        v50 = (char *)v86;
        LOBYTE(v120) = 22;
        if ( !v86 || v30 >= (v87 - (_BYTE *)v86) / 28 )
        {
          v33();
          v50 = (char *)v86;
        }
        v84 = (unsigned int)&v66;
        std::string::string(&v66, &v50[v31]);
        v51 = v90;
        LOBYTE(v120) = 21;
        Input::Bind(v90, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
        v80 = 1;
        v83 = COERCE_FLOAT(&v73);
        std::string::string(&v73, v119);
        v52 = (char *)v86;
        LOBYTE(v120) = 23;
        if ( !v86 || v30 >= (v87 - (_BYTE *)v86) / 28 )
        {
          invalid_parameter_noinfo();
          v52 = (char *)v86;
        }
        v84 = (unsigned int)&v66;
        std::string::string(&v66, &v52[v31]);
        LOBYTE(v120) = 21;
        Input::Bind(v51, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
        LOBYTE(v120) = 20;
        std::string::~string(v119);
        v43 = v104;
      }
      else
      {
        v37 = std::string::find(&v91, ",", v80);
        v38 = std::string::length(&v91);
        v80 = 0;
        if ( v37 == v38 - 1 )
        {
          v39 = std::string::find(v95, ",", v80);
          std::string::substr(v95, v103, 0, v39);
          LOBYTE(v120) = 14;
          sub_1017A4A0(v103, v81);
          v80 = 0;
          v83 = COERCE_FLOAT(&v73);
          std::string::string(&v73, v103);
          v40 = (char *)v86;
          LOBYTE(v120) = 15;
          if ( !v86 || v30 >= (v87 - (_BYTE *)v86) / 28 )
          {
            v33();
            v40 = (char *)v86;
          }
          v84 = (unsigned int)&v66;
          std::string::string(&v66, &v40[v31]);
          v41 = v90;
          LOBYTE(v120) = 14;
          Input::Bind(v90, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
          v80 = 1;
          v83 = COERCE_FLOAT(&v73);
          std::string::string(&v73, ",");
          v42 = (char *)v86;
          LOBYTE(v120) = 16;
          if ( !v86 || v30 >= (v87 - (_BYTE *)v86) / 28 )
          {
            invalid_parameter_noinfo();
            v42 = (char *)v86;
          }
          v84 = (unsigned int)&v66;
          std::string::string(&v66, &v42[v31]);
          LOBYTE(v120) = 14;
          Input::Bind(v41, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
          v43 = (int *)v103;
        }
        else
        {
          v83 = COERCE_FLOAT(&v73);
          std::string::string(&v73, ",");
          v44 = (char *)v86;
          LOBYTE(v120) = 17;
          if ( !v86 || v30 >= (v87 - (_BYTE *)v86) / 28 )
          {
            v33();
            v44 = (char *)v86;
          }
          v84 = (unsigned int)&v66;
          std::string::string(&v66, &v44[v31]);
          v45 = v90;
          LOBYTE(v120) = 12;
          Input::Bind(v90, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
          v80 = std::string::npos;
          v46 = std::string::find_last_of(v95, ",", std::string::npos);
          std::string::substr(v95, v103, v46 + 1, v80);
          LOBYTE(v120) = 18;
          sub_1017A390(v103, v81);
          v80 = 1;
          v83 = COERCE_FLOAT(&v73);
          std::string::string(&v73, v103);
          v47 = (char *)v86;
          LOBYTE(v120) = 19;
          if ( !v86 || v30 >= (v87 - (_BYTE *)v86) / 28 )
          {
            invalid_parameter_noinfo();
            v47 = (char *)v86;
          }
          v84 = (unsigned int)&v66;
          std::string::string(&v66, &v47[v31]);
          LOBYTE(v120) = 18;
          Input::Bind(v45, v66, v67, v68, v69, v70, v71, v72, v73, v74, v75, v76, v77, v78, (int)v79, v80);
          v43 = (int *)v103;
        }
      }
      LOBYTE(v120) = 12;
      std::string::~string(v43);
      LOBYTE(v120) = 11;
      std::string::~string(&v91);
    }
    LOBYTE(v120) = 6;
    std::string::~string(v95);
    v23 = v87;
    v22 = v86;
    ++v30;
    v31 += 28;
  }
  LOBYTE(v120) = 5;
  std::string::~string(v118);
  LOBYTE(v120) = 28;
  std::string::~string(v117);
  v54 = (char *)v114;
  LOBYTE(v120) = 27;
  if ( v114 )
  {
    v55 = v115;
    if ( v114 != v115 )
    {
      do
      {
        std::string::~string(v54);
        v54 += 28;
      }
      while ( v54 != v55 );
      v54 = (char *)v114;
    }
    operator delete(v54);
  }
  v56 = (char *)v111;
  v114 = 0;
  v115 = 0;
  v116 = 0;
  LOBYTE(v120) = 26;
  if ( v111 )
  {
    v57 = v112;
    if ( v111 != v112 )
    {
      do
      {
        std::string::~string(v56);
        v56 += 28;
      }
      while ( v56 != v57 );
      v56 = (char *)v111;
    }
    operator delete(v56);
  }
  v58 = (char *)v108;
  v111 = 0;
  v112 = 0;
  v113 = 0;
  LOBYTE(v120) = 25;
  if ( v108 )
  {
    v59 = v109;
    if ( v108 != v109 )
    {
      do
      {
        std::string::~string(v58);
        v58 += 28;
      }
      while ( v58 != v59 );
      v58 = (char *)v108;
    }
    operator delete(v58);
  }
  v60 = (char *)v105;
  v108 = 0;
  v109 = 0;
  v110 = 0;
  LOBYTE(v120) = 4;
  if ( v105 )
  {
    v61 = v106;
    if ( v105 != v106 )
    {
      do
      {
        std::string::~string(v60);
        v60 += 28;
      }
      while ( v60 != v61 );
      v60 = (char *)v105;
    }
    operator delete(v60);
  }
  v62 = (char *)v86;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  LOBYTE(v120) = 3;
  if ( v86 )
  {
    v63 = v87;
    if ( v86 != v87 )
    {
      do
      {
        std::string::~string(v62);
        v62 += 28;
      }
      while ( v62 != v63 );
      v62 = (char *)v86;
    }
    operator delete(v62);
  }
  v64 = (char *)v100;
  v86 = 0;
  v87 = 0;
  v88 = 0;
  v120 = -1;
  if ( v100 )
  {
    v65 = v101;
    if ( v100 != v101 )
    {
      do
      {
        std::string::~string(v64);
        v64 += 28;
      }
      while ( v64 != v65 );
      v64 = (char *)v100;
    }
    operator delete(v64);
  }
}
