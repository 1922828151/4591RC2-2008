/*
 * func-name: sub_1017E0A0
 * func-address: 0x1017e0a0
 * callers: 0x10068c50, 0x10096b90, 0x10097ea0, 0x100d6e70, 0x100dbc90, 0x1013e2e0
 * callees: 0x1000dc10, 0x100116a0, 0x1017a390, 0x1017a4a0, 0x1017aa50, 0x1017e9a0, 0x101a2c8e
 */

char __thiscall sub_1017E0A0(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  int *v9; // ebp
  unsigned int v10; // esi
  bool v11; // cc
  unsigned int v12; // edi
  unsigned int v13; // esi
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // esi
  unsigned int v18; // edi
  int v19; // eax
  void (**v20)(void *, const char *, ...); // esi
  int v21; // eax
  std::ios_base *v23; // ecx
  int v24; // eax
  int v25; // eax
  int v26; // esi
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  unsigned int i; // esi
  _BYTE *v39; // edi
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // eax
  int v46; // eax
  int v47; // eax
  int v48; // eax
  unsigned int v49; // esi
  int v50; // eax
  CHAR *v51; // [esp-4h] [ebp-968h]
  int v52; // [esp-4h] [ebp-968h]
  _BYTE v54[28]; // [esp+18h] [ebp-94Ch] BYREF
  _DWORD v55[2]; // [esp+34h] [ebp-930h] BYREF
  _DWORD v56[35]; // [esp+3Ch] [ebp-928h] BYREF
  _BYTE v57[28]; // [esp+C8h] [ebp-89Ch] BYREF
  _BYTE v58[28]; // [esp+E4h] [ebp-880h] BYREF
  _BYTE v59[28]; // [esp+100h] [ebp-864h] BYREF
  _BYTE v60[28]; // [esp+11Ch] [ebp-848h] BYREF
  _BYTE v61[28]; // [esp+138h] [ebp-82Ch] BYREF
  _BYTE v62[2048]; // [esp+154h] [ebp-810h] BYREF
  int v63; // [esp+960h] [ebp-4h]

  v8 = this;
  v9 = (int *)(this + 48);
  *(_BYTE *)(this + 92) = 0;
  v10 = *(_DWORD *)(this + 56);
  v11 = *(_DWORD *)(this + 52) <= v10;
  v63 = 0;
  if ( !v11 )
    invalid_parameter_noinfo();
  v12 = v9[1];
  if ( v12 > v9[2] )
    invalid_parameter_noinfo();
  sub_1000DC10(v9, v55, (int)v9, v12, (int)v9, v10);
  v13 = *(_DWORD *)(v8 + 8);
  if ( *(_DWORD *)(v8 + 4) > v13 )
    invalid_parameter_noinfo();
  v14 = *(_DWORD *)(v8 + 4);
  if ( v14 > *(_DWORD *)(v8 + 8) )
    invalid_parameter_noinfo();
  sub_1000DC10((int *)v8, v55, v8, v14, v8, v13);
  v15 = *(_DWORD *)(v8 + 24);
  if ( *(_DWORD *)(v8 + 20) > v15 )
    invalid_parameter_noinfo();
  v16 = *(_DWORD *)(v8 + 20);
  if ( v16 > *(_DWORD *)(v8 + 24) )
    invalid_parameter_noinfo();
  sub_1000DC10((int *)(v8 + 16), v55, v8 + 16, v16, v8 + 16, v15);
  v17 = *(_DWORD *)(v8 + 40);
  if ( *(_DWORD *)(v8 + 36) > v17 )
    invalid_parameter_noinfo();
  v18 = *(_DWORD *)(v8 + 36);
  if ( v18 > *(_DWORD *)(v8 + 40) )
    invalid_parameter_noinfo();
  sub_1000DC10((int *)(v8 + 32), v55, v8 + 32, v18, v8 + 32, v17);
  v19 = std::string::c_str(&a2);
  std::ifstream::ifstream(v56, v19, 1, 64, 1);
  LOBYTE(v63) = 1;
  std::string::operator=(v8 + 64, &a2);
  if ( (unsigned __int8)std::ios_base::operator!((char *)v56 + *(_DWORD *)(v56[0] + 4)) )
  {
    v20 = *(void (***)(void *, const char *, ...))dword_11249F38;
    v51 = sub_1017AA50();
    v21 = std::string::c_str(&a2);
    (*v20)(dword_11249F38, "Couldn't find config file: %s in current directory: %s", v21, v51);
    LOBYTE(v63) = 0;
    std::ifstream::`vbase destructor'(v56);
    v63 = -1;
    std::string::~string(&a2);
    return 0;
  }
  else
  {
    std::string::string(v61);
    v23 = (std::ios_base *)((char *)v56 + *(_DWORD *)(v56[0] + 4));
    LOBYTE(v63) = 2;
    if ( !std::ios_base::eof(v23) )
    {
      do
      {
        std::string::string(v58);
        LOBYTE(v63) = 3;
        std::istream::getline(v56, v62, 2048);
        std::string::operator=(v58, v62);
        sub_100116A0(v9, v58);
        if ( std::string::find(v58, "//", 0) != -1 )
        {
          v24 = std::string::find(v58, "//", 0);
          v25 = std::string::substr(v58, v54, 0, v24);
          LOBYTE(v63) = 4;
          std::string::operator=(v58, v25);
          LOBYTE(v63) = 3;
          std::string::~string(v54);
        }
        if ( std::string::size(v58) )
        {
          if ( std::string::find(v58, "=", 0) == -1 )
          {
            v26 = std::string::find(v58, "[", 0);
            v27 = std::string::find(v58, "{", 0);
            if ( v26 != -1 )
            {
              v28 = std::string::substr(v58, v54, v26 + 1, std::string::npos);
              LOBYTE(v63) = 5;
              std::string::operator=(v58, v28);
              LOBYTE(v63) = 3;
              std::string::~string(v54);
              v29 = std::string::find(v58, "]", 0);
              v30 = std::string::substr(v58, v54, 0, v29);
              LOBYTE(v63) = 6;
              std::string::operator=(v58, v30);
              LOBYTE(v63) = 3;
              std::string::~string(v54);
              std::string::operator=(v61, v58);
            }
            if ( v27 != -1 )
            {
              v31 = std::string::substr(v58, v54, 0, v27);
              LOBYTE(v63) = 7;
              std::string::operator=(v58, v31);
              LOBYTE(v63) = 3;
              std::string::~string(v54);
              sub_1017A4A0((int)v58);
              if ( std::string::find(v58, " ", 0) != -1 )
              {
                v32 = std::string::find(v58, " ", 0);
                v33 = std::string::substr(v58, v54, v32 + 1, std::string::npos);
                LOBYTE(v63) = 8;
                std::string::operator=(v58, v33);
                LOBYTE(v63) = 3;
                std::string::~string(v54);
              }
              if ( std::string::find(v58, "\t", 0) != -1 )
              {
                v34 = std::string::find(v58, "\t", 0);
                v35 = std::string::substr(v58, v54, v34 + 1, std::string::npos);
                LOBYTE(v63) = 9;
                std::string::operator=(v58, v35);
                LOBYTE(v63) = 3;
                std::string::~string(v54);
              }
              std::string::operator=(v61, v58);
            }
          }
          if ( std::string::find(v58, "=", 0) != -1 )
          {
            std::string::string(v60);
            LOBYTE(v63) = 10;
            std::string::string(v59);
            LOBYTE(v63) = 11;
            v36 = std::string::find(v58, "=", 0);
            v37 = std::string::substr(v58, v54, 0, v36);
            LOBYTE(v63) = 12;
            std::string::operator=(v60, v37);
            LOBYTE(v63) = 11;
            std::string::~string(v54);
            sub_1017A4A0((int)v60);
            sub_1017A390((int)v60);
            for ( i = 0; i < std::string::length(v60); ++i )
            {
              v39 = (_BYTE *)std::string::operator[](v60, i);
              v40 = std::string::c_str(v60);
              *v39 = tolower(*(char *)(v40 + i));
            }
            v52 = std::string::length(v58);
            v41 = std::string::find(v58, "=", 0);
            v42 = std::string::substr(v58, v54, v41 + 1, v52);
            LOBYTE(v63) = 13;
            std::string::operator=(v59, v42);
            LOBYTE(v63) = 11;
            std::string::~string(v54);
            sub_1017A4A0((int)v59);
            sub_1017A390((int)v59);
            if ( std::string::length(v59) )
            {
              if ( *(_BYTE *)std::string::operator[](v59, 0) == 34 )
              {
                v43 = std::string::substr(v59, v54, 1, std::string::npos);
                LOBYTE(v63) = 14;
                std::string::operator=(v59, v43);
                LOBYTE(v63) = 11;
                std::string::~string(v54);
              }
              v44 = std::string::length(v59);
              if ( *(_BYTE *)std::string::operator[](v59, v44 - 1) == 34 )
              {
                v45 = std::string::length(v59);
                v46 = std::string::substr(v59, v57, 0, v45 - 1);
                LOBYTE(v63) = 15;
                std::string::operator=(v59, v46);
                LOBYTE(v63) = 11;
                std::string::~string(v57);
              }
            }
            sub_100116A0((_DWORD *)this, v60);
            sub_100116A0((_DWORD *)(this + 16), v59);
            sub_100116A0((_DWORD *)(this + 32), v61);
            LOBYTE(v63) = 10;
            std::string::~string(v59);
            LOBYTE(v63) = 3;
            std::string::~string(v60);
          }
        }
        LOBYTE(v63) = 2;
        std::string::~string(v58);
      }
      while ( !std::ios_base::eof((std::ios_base *)((char *)v56 + *(_DWORD *)(v56[0] + 4))) );
      v8 = this;
    }
    v47 = v9[1];
    if ( v47 && (v9[2] - v47) / 28 )
    {
      v48 = v9[1];
      if ( v48 )
        v48 = (v9[2] - v48) / 28;
      v49 = v48 - 1;
      v50 = v9[1];
      if ( !v50 || v49 >= (v9[2] - v50) / 28 )
        invalid_parameter_noinfo();
      if ( !std::string::compare(v9[1] + 28 * v49, "//END-OF-FILE") )
      {
        *(_BYTE *)(v8 + 92) = 1;
        sub_1017E9A0(v9);
      }
    }
    std::ifstream::close(v56);
    LOBYTE(v63) = 1;
    std::string::~string(v61);
    LOBYTE(v63) = 0;
    std::ifstream::`vbase destructor'(v56);
    v63 = -1;
    std::string::~string(&a2);
    return 1;
  }
}
