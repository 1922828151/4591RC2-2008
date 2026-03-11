/*
 * func-name: sub_102BFB10
 * func-address: 0x102bfb10
 * callers: 0x102075d0, 0x102b7ad0
 * callees: 0x10004dcc, 0x1000ab4b, 0x102c06c0, 0x102c72a0, 0x102c73b0, 0x102c7960, 0x102c9d62
 */

char __thiscall sub_102BFB10(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // ebx
  _DWORD *v9; // ebp
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
  void (**v20)(int, const char *, ...); // esi
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
  int v51; // [esp-4h] [ebp-968h]
  int v52; // [esp-4h] [ebp-968h]
  int v53; // [esp-4h] [ebp-968h]
  int v54; // [esp-4h] [ebp-968h]
  int v55; // [esp+0h] [ebp-964h]
  int v56; // [esp+0h] [ebp-964h]
  _BYTE v58[28]; // [esp+18h] [ebp-94Ch] BYREF
  _BYTE v59[8]; // [esp+34h] [ebp-930h] BYREF
  _DWORD v60[35]; // [esp+3Ch] [ebp-928h] BYREF
  _BYTE v61[28]; // [esp+C8h] [ebp-89Ch] BYREF
  _BYTE v62[28]; // [esp+E4h] [ebp-880h] BYREF
  _BYTE v63[28]; // [esp+100h] [ebp-864h] BYREF
  _BYTE v64[28]; // [esp+11Ch] [ebp-848h] BYREF
  _BYTE v65[28]; // [esp+138h] [ebp-82Ch] BYREF
  _BYTE v66[2048]; // [esp+154h] [ebp-810h] BYREF
  int v67; // [esp+960h] [ebp-4h]

  v8 = this;
  v9 = (_DWORD *)(this + 48);
  *(_BYTE *)(this + 92) = 0;
  v10 = *(_DWORD *)(this + 56);
  v11 = *(_DWORD *)(this + 52) <= v10;
  v67 = 0;
  if ( !v11 )
    _invalid_parameter_noinfo();
  v12 = v9[1];
  if ( v12 > v9[2] )
    _invalid_parameter_noinfo();
  sub_10004DCC((int)v59, (int)v9, v12, (int)v9, v10);
  v13 = *(_DWORD *)(v8 + 8);
  if ( *(_DWORD *)(v8 + 4) > v13 )
    _invalid_parameter_noinfo();
  v14 = *(_DWORD *)(v8 + 4);
  if ( v14 > *(_DWORD *)(v8 + 8) )
    _invalid_parameter_noinfo();
  sub_10004DCC((int)v59, v8, v14, v8, v13);
  v15 = *(_DWORD *)(v8 + 24);
  if ( *(_DWORD *)(v8 + 20) > v15 )
    _invalid_parameter_noinfo();
  v16 = *(_DWORD *)(v8 + 20);
  if ( v16 > *(_DWORD *)(v8 + 24) )
    _invalid_parameter_noinfo();
  sub_10004DCC((int)v59, v8 + 16, v16, v8 + 16, v15);
  v17 = *(_DWORD *)(v8 + 40);
  if ( *(_DWORD *)(v8 + 36) > v17 )
    _invalid_parameter_noinfo();
  v18 = *(_DWORD *)(v8 + 36);
  if ( v18 > *(_DWORD *)(v8 + 40) )
    _invalid_parameter_noinfo();
  sub_10004DCC((int)v59, v8 + 32, v18, v8 + 32, v17);
  v19 = std::string::c_str(&a2);
  std::ifstream::ifstream(v60, v19, 1, 64, 1);
  LOBYTE(v67) = 1;
  std::string::operator=(v8 + 64, &a2);
  if ( (unsigned __int8)std::ios_base::operator!((char *)v60 + *(_DWORD *)(v60[0] + 4)) )
  {
    v20 = *(void (***)(int, const char *, ...))dword_103B9580;
    v51 = sub_102C7960();
    v21 = std::string::c_str(&a2);
    (*v20)(dword_103B9580, "Couldn't find config file: %s in current directory: %s", v21, v51);
    LOBYTE(v67) = 0;
    std::ifstream::`vbase destructor'(v60);
    v67 = -1;
    std::string::~string(&a2);
    return 0;
  }
  else
  {
    std::string::string(v65);
    v23 = (std::ios_base *)((char *)v60 + *(_DWORD *)(v60[0] + 4));
    LOBYTE(v67) = 2;
    if ( !std::ios_base::eof(v23) )
    {
      do
      {
        std::string::string(v62);
        LOBYTE(v67) = 3;
        std::istream::getline(v60, v66, 2048);
        std::string::operator=(v62, v66);
        sub_1000AB4B(v9, v62);
        if ( std::string::find(v62, "//", 0) != -1 )
        {
          v24 = std::string::find(v62, "//", 0);
          v25 = std::string::substr(v62, v58, 0, v24);
          LOBYTE(v67) = 4;
          std::string::operator=(v62, v25);
          LOBYTE(v67) = 3;
          std::string::~string(v58);
        }
        if ( std::string::size(v62) )
        {
          if ( std::string::find(v62, "=", 0) == -1 )
          {
            v26 = std::string::find(v62, "[", 0);
            v27 = std::string::find(v62, "{", 0);
            if ( v26 != -1 )
            {
              v28 = std::string::substr(v62, v58, v26 + 1, std::string::npos);
              LOBYTE(v67) = 5;
              std::string::operator=(v62, v28);
              LOBYTE(v67) = 3;
              std::string::~string(v58);
              v29 = std::string::find(v62, "]", 0);
              v30 = std::string::substr(v62, v58, 0, v29);
              LOBYTE(v67) = 6;
              std::string::operator=(v62, v30);
              LOBYTE(v67) = 3;
              std::string::~string(v58);
              std::string::operator=(v65, v62);
            }
            if ( v27 != -1 )
            {
              v31 = std::string::substr(v62, v58, 0, v27);
              LOBYTE(v67) = 7;
              std::string::operator=(v62, v31);
              LOBYTE(v67) = 3;
              std::string::~string(v58);
              sub_102C73B0(v62, v55);
              if ( std::string::find(v62, " ", 0) != -1 )
              {
                v32 = std::string::find(v62, " ", 0);
                v33 = std::string::substr(v62, v58, v32 + 1, std::string::npos);
                LOBYTE(v67) = 8;
                std::string::operator=(v62, v33);
                LOBYTE(v67) = 3;
                std::string::~string(v58);
              }
              if ( std::string::find(v62, "\t", 0) != -1 )
              {
                v34 = std::string::find(v62, "\t", 0);
                v35 = std::string::substr(v62, v58, v34 + 1, std::string::npos);
                LOBYTE(v67) = 9;
                std::string::operator=(v62, v35);
                LOBYTE(v67) = 3;
                std::string::~string(v58);
              }
              std::string::operator=(v65, v62);
            }
          }
          if ( std::string::find(v62, "=", 0) != -1 )
          {
            std::string::string(v64);
            LOBYTE(v67) = 10;
            std::string::string(v63);
            LOBYTE(v67) = 11;
            v36 = std::string::find(v62, "=", 0);
            v37 = std::string::substr(v62, v58, 0, v36);
            LOBYTE(v67) = 12;
            std::string::operator=(v64, v37);
            LOBYTE(v67) = 11;
            std::string::~string(v58);
            sub_102C73B0(v64, v55);
            sub_102C72A0(v64, v52);
            for ( i = 0; i < std::string::length(v64); ++i )
            {
              v39 = (_BYTE *)std::string::operator[](v64, i);
              v40 = std::string::c_str(v64);
              *v39 = tolower(*(char *)(v40 + i));
            }
            v53 = std::string::length(v62);
            v41 = std::string::find(v62, "=", 0);
            v42 = std::string::substr(v62, v58, v41 + 1, v53);
            LOBYTE(v67) = 13;
            std::string::operator=(v63, v42);
            LOBYTE(v67) = 11;
            std::string::~string(v58);
            sub_102C73B0(v63, v56);
            sub_102C72A0(v63, v54);
            if ( std::string::length(v63) )
            {
              if ( *(_BYTE *)std::string::operator[](v63, 0) == 34 )
              {
                v43 = std::string::substr(v63, v58, 1, std::string::npos);
                LOBYTE(v67) = 14;
                std::string::operator=(v63, v43);
                LOBYTE(v67) = 11;
                std::string::~string(v58);
              }
              v44 = std::string::length(v63);
              if ( *(_BYTE *)std::string::operator[](v63, v44 - 1) == 34 )
              {
                v45 = std::string::length(v63);
                v46 = std::string::substr(v63, v61, 0, v45 - 1);
                LOBYTE(v67) = 15;
                std::string::operator=(v63, v46);
                LOBYTE(v67) = 11;
                std::string::~string(v61);
              }
            }
            sub_1000AB4B((void *)this, v64);
            sub_1000AB4B((void *)(this + 16), v63);
            sub_1000AB4B((void *)(this + 32), v65);
            LOBYTE(v67) = 10;
            std::string::~string(v63);
            LOBYTE(v67) = 3;
            std::string::~string(v64);
          }
        }
        LOBYTE(v67) = 2;
        std::string::~string(v62);
      }
      while ( !std::ios_base::eof((std::ios_base *)((char *)v60 + *(_DWORD *)(v60[0] + 4))) );
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
        _invalid_parameter_noinfo();
      if ( !std::string::compare(v9[1] + 28 * v49, "//END-OF-FILE") )
      {
        *(_BYTE *)(v8 + 92) = 1;
        sub_102C06C0(v9);
      }
    }
    std::ifstream::close(v60);
    LOBYTE(v67) = 1;
    std::string::~string(v65);
    LOBYTE(v67) = 0;
    std::ifstream::`vbase destructor'(v60);
    v67 = -1;
    std::string::~string(&a2);
    return 1;
  }
}
