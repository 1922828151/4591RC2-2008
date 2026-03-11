/*
 * func-name: ?LoadInputConfig@Input@@QAEXAAVConfigFile@@@Z
 * func-address: 0x100dcbd0
 * callers: none
 * callees: 0x100116a0, 0x100db860, 0x100dd630, 0x1017a390, 0x1017a4a0, 0x1017dba0, 0x101a2500
 */

void __thiscall Input::LoadInputConfig(Input *this, struct ConfigFile *a2)
{
  unsigned int v3; // ebp
  char *v4; // esi
  char *v5; // edi
  unsigned int v6; // eax
  unsigned int v7; // edx
  _DWORD *v8; // eax
  void *v9; // edi
  unsigned int v10; // ebx
  int v11; // ebp
  char *v12; // esi
  void (__cdecl *v13)(); // edi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // esi
  int v18; // eax
  int v19; // eax
  char *v20; // esi
  _DWORD *v21; // edi
  char *v22; // esi
  _BYTE *v23; // ecx
  char *v24; // esi
  _DWORD *v25; // edi
  int last_of; // eax
  char *v27; // esi
  int v28; // eax
  int v29; // eax
  char *v30; // esi
  _DWORD *v31; // edi
  char *v32; // esi
  char *v33; // esi
  char *v34; // esi
  char *v35; // edi
  char v36; // [esp-3Ch] [ebp-118h] BYREF
  int v37; // [esp-38h] [ebp-114h]
  int v38; // [esp-34h] [ebp-110h]
  int v39; // [esp-30h] [ebp-10Ch]
  int v40; // [esp-2Ch] [ebp-108h]
  int v41; // [esp-28h] [ebp-104h]
  int v42; // [esp-24h] [ebp-100h] BYREF
  int v43; // [esp-20h] [ebp-FCh] BYREF
  int v44; // [esp-1Ch] [ebp-F8h]
  int v45; // [esp-18h] [ebp-F4h]
  int v46; // [esp-14h] [ebp-F0h]
  int v47; // [esp-10h] [ebp-ECh]
  int v48; // [esp-Ch] [ebp-E8h]
  char *v49; // [esp-8h] [ebp-E4h]
  int v50; // [esp-4h] [ebp-E0h]
  int v51; // [esp+0h] [ebp-DCh]
  char *v52; // [esp+10h] [ebp-CCh]
  int v53; // [esp+14h] [ebp-C8h] BYREF
  char v54; // [esp+18h] [ebp-C4h] BYREF
  void *v55; // [esp+1Ch] [ebp-C0h]
  char *v56; // [esp+20h] [ebp-BCh]
  int v57; // [esp+24h] [ebp-B8h]
  _DWORD *v58; // [esp+28h] [ebp-B4h]
  char v59; // [esp+2Ch] [ebp-B0h] BYREF
  void *v60; // [esp+30h] [ebp-ACh]
  char *v61; // [esp+34h] [ebp-A8h]
  int v62; // [esp+38h] [ebp-A4h]
  _BYTE v63[28]; // [esp+3Ch] [ebp-A0h] BYREF
  _BYTE v64[28]; // [esp+58h] [ebp-84h] BYREF
  _BYTE v65[28]; // [esp+74h] [ebp-68h] BYREF
  _BYTE v66[28]; // [esp+90h] [ebp-4Ch] BYREF
  _BYTE v67[28]; // [esp+ACh] [ebp-30h] BYREF
  int v68; // [esp+C8h] [ebp-14h] BYREF
  int v69; // [esp+D8h] [ebp-4h]

  v58 = this;
  v60 = 0;
  v61 = 0;
  v62 = 0;
  v69 = 1;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v50 = (int)&v59;
  v49 = &v54;
  v53 = (int)&v42;
  std::string::string(&v42, "InputControls");
  sub_1017DBA0(v42, v43, v44, v45, v46, v47, v48, v49, v50);
  v3 = 0;
  v52 = 0;
  while ( 1 )
  {
    v4 = (char *)v55;
    v5 = v56;
    if ( !v55 || v3 >= (v56 - (_BYTE *)v55) / 28 )
      break;
    sub_100116A0((_DWORD *)this + 6, (char *)v55 + (_DWORD)v52);
    v6 = *((_DWORD *)this + 11);
    v53 = (int)a2;
    if ( v6 )
      v7 = (int)(*((_DWORD *)this + 12) - v6) >> 2;
    else
      v7 = 0;
    if ( v6 && v7 < (int)(*((_DWORD *)this + 13) - v6) >> 2 )
    {
      v8 = (_DWORD *)*((_DWORD *)this + 12);
      v52 += 28;
      *v8 = a2;
      ++v3;
      *((_DWORD *)this + 12) = v8 + 1;
    }
    else
    {
      v9 = (void *)*((_DWORD *)this + 12);
      if ( v6 > (unsigned int)v9 )
        invalid_parameter_noinfo();
      sub_100DD630((int)&v68, (int)this + 40, v9, (int)&v53);
      v52 += 28;
      ++v3;
    }
  }
  v10 = 0;
  v11 = 0;
  while ( v4 && v10 < (v5 - v4) / 28 )
  {
    v12 = (char *)v60;
    if ( v60 && v10 < (v61 - (_BYTE *)v60) / 28 )
    {
      v13 = invalid_parameter_noinfo;
    }
    else
    {
      v13 = invalid_parameter_noinfo;
      invalid_parameter_noinfo();
      v12 = (char *)v60;
    }
    std::string::string(v63, &v12[v11]);
    LOBYTE(v69) = 2;
    sub_1017A390(v63, v51);
    sub_1017A4A0(v63, v50);
    if ( std::string::find(v63, ",", 0) == -1 || (unsigned int)std::string::length(v63) <= 2 )
    {
      v50 = 0;
      v53 = (int)&v43;
      std::string::string(&v43, v63);
      v33 = (char *)v55;
      LOBYTE(v69) = 15;
      if ( !v55 || v10 >= (v56 - (_BYTE *)v55) / 28 )
      {
        v13();
        v33 = (char *)v55;
      }
      v52 = &v36;
      std::string::string(&v36, &v33[v11]);
      LOBYTE(v69) = 2;
      Input::Bind(v58, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, (int)v49, v50);
    }
    else
    {
      std::string::string(v65, v63);
      v50 = std::string::npos;
      LOBYTE(v69) = 3;
      v14 = std::string::find(v65, ",", 0);
      v15 = std::string::substr(v65, v64, v14 + 1, v50);
      LOBYTE(v69) = 4;
      std::string::operator=(v65, v15);
      LOBYTE(v69) = 3;
      std::string::~string(v64);
      v16 = std::string::find(v65, ",", 0);
      v50 = 0;
      if ( v16 == -1 )
      {
        v28 = std::string::find(v63, ",", v50);
        std::string::substr(v63, v67, 0, v28);
        LOBYTE(v69) = 11;
        sub_1017A4A0(v67, v51);
        v50 = std::string::npos;
        v29 = std::string::find(v63, ",", 0);
        std::string::substr(v63, v66, v29 + 1, v50);
        LOBYTE(v69) = 12;
        sub_1017A390(v66, v51);
        v50 = 0;
        v53 = (int)&v43;
        std::string::string(&v43, v67);
        v30 = (char *)v55;
        LOBYTE(v69) = 13;
        if ( !v55 || v10 >= (v56 - (_BYTE *)v55) / 28 )
        {
          v13();
          v30 = (char *)v55;
        }
        v52 = &v36;
        std::string::string(&v36, &v30[v11]);
        v31 = v58;
        LOBYTE(v69) = 12;
        Input::Bind(v58, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, (int)v49, v50);
        v50 = 1;
        v53 = (int)&v43;
        std::string::string(&v43, v66);
        v32 = (char *)v55;
        LOBYTE(v69) = 14;
        if ( !v55 || v10 >= (v56 - (_BYTE *)v55) / 28 )
        {
          invalid_parameter_noinfo();
          v32 = (char *)v55;
        }
        v52 = &v36;
        std::string::string(&v36, &v32[v11]);
        LOBYTE(v69) = 12;
        Input::Bind(v31, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, (int)v49, v50);
        LOBYTE(v69) = 11;
        std::string::~string(v66);
        v23 = v67;
      }
      else
      {
        v17 = std::string::find(v65, ",", v50);
        v18 = std::string::length(v65);
        v50 = 0;
        if ( v17 == v18 - 1 )
        {
          v19 = std::string::find(v63, ",", v50);
          std::string::substr(v63, v64, 0, v19);
          LOBYTE(v69) = 5;
          sub_1017A4A0(v64, v51);
          v50 = 0;
          v53 = (int)&v43;
          std::string::string(&v43, v64);
          v20 = (char *)v55;
          LOBYTE(v69) = 6;
          if ( !v55 || v10 >= (v56 - (_BYTE *)v55) / 28 )
          {
            v13();
            v20 = (char *)v55;
          }
          v52 = &v36;
          std::string::string(&v36, &v20[v11]);
          v21 = v58;
          LOBYTE(v69) = 5;
          Input::Bind(v58, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, (int)v49, v50);
          v50 = 1;
          v53 = (int)&v43;
          std::string::string(&v43, ",");
          v22 = (char *)v55;
          LOBYTE(v69) = 7;
          if ( !v55 || v10 >= (v56 - (_BYTE *)v55) / 28 )
          {
            invalid_parameter_noinfo();
            v22 = (char *)v55;
          }
          v52 = &v36;
          std::string::string(&v36, &v22[v11]);
          LOBYTE(v69) = 5;
          Input::Bind(v21, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, (int)v49, v50);
          v23 = v64;
        }
        else
        {
          v53 = (int)&v43;
          std::string::string(&v43, ",");
          v24 = (char *)v55;
          LOBYTE(v69) = 8;
          if ( !v55 || v10 >= (v56 - (_BYTE *)v55) / 28 )
          {
            v13();
            v24 = (char *)v55;
          }
          v52 = &v36;
          std::string::string(&v36, &v24[v11]);
          v25 = v58;
          LOBYTE(v69) = 3;
          Input::Bind(v58, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, (int)v49, v50);
          v50 = std::string::npos;
          last_of = std::string::find_last_of(v63, ",", std::string::npos);
          std::string::substr(v63, v64, last_of + 1, v50);
          LOBYTE(v69) = 9;
          sub_1017A390(v64, v51);
          v50 = 1;
          v53 = (int)&v43;
          std::string::string(&v43, v64);
          v27 = (char *)v55;
          LOBYTE(v69) = 10;
          if ( !v55 || v10 >= (v56 - (_BYTE *)v55) / 28 )
          {
            invalid_parameter_noinfo();
            v27 = (char *)v55;
          }
          v52 = &v36;
          std::string::string(&v36, &v27[v11]);
          LOBYTE(v69) = 9;
          Input::Bind(v25, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, (int)v49, v50);
          v23 = v64;
        }
      }
      LOBYTE(v69) = 3;
      std::string::~string(v23);
      LOBYTE(v69) = 2;
      std::string::~string(v65);
    }
    LOBYTE(v69) = 1;
    std::string::~string(v63);
    v5 = v56;
    v4 = (char *)v55;
    ++v10;
    v11 += 28;
  }
  LOBYTE(v69) = 0;
  if ( v4 )
  {
    if ( v4 != v5 )
    {
      do
      {
        std::string::~string(v4);
        v4 += 28;
      }
      while ( v4 != v5 );
      v4 = (char *)v55;
    }
    operator delete(v4);
  }
  v34 = (char *)v60;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v69 = -1;
  if ( v60 )
  {
    v35 = v61;
    if ( v60 != v61 )
    {
      do
      {
        std::string::~string(v34);
        v34 += 28;
      }
      while ( v34 != v35 );
      v34 = (char *)v60;
    }
    operator delete(v34);
  }
}
