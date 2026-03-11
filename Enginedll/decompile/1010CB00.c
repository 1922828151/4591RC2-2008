/*
 * func-name: ?DoPrecache@Precacher@@SAXPAVWorld@@MM@Z
 * func-address: 0x1010cb00
 * callers: none
 * callees: 0x1000dc10, 0x100e2550, 0x1010b030, 0x1010b240, 0x1010b430, 0x1010b610, 0x1010b790, 0x1010b910, 0x1010bad0, 0x1010c190, 0x101162a0
 */

void __cdecl Precacher::DoPrecache(struct World *a1, float a2, float a3)
{
  unsigned int v3; // edi
  int v4; // ebx
  int v5; // eax
  int v6; // esi
  int v7; // eax
  int v8; // esi
  int v9; // eax
  int v10; // esi
  int v11; // eax
  int v12; // esi
  int v13; // eax
  int v14; // esi
  int v15; // eax
  unsigned int i; // esi
  int v17; // ecx
  void (__cdecl *v18)(_DWORD); // ecx
  int v19; // ebx
  unsigned int v20; // ebx
  int j; // ebp
  unsigned int v22; // ecx
  unsigned int v23; // esi
  void (__cdecl *v24)(_DWORD); // eax
  int v25; // ebp
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  int k; // ebp
  unsigned int v29; // esi
  unsigned int v30; // edi
  void (__cdecl *v31)(_DWORD); // edx
  int v32; // ebp
  unsigned int v33; // ebx
  int m; // ebp
  unsigned int v35; // esi
  unsigned int v36; // edi
  int v37; // ecx
  void (__cdecl *v38)(_DWORD); // ecx
  int v39; // ebp
  unsigned int v40; // ebx
  int n; // ebp
  unsigned int v42; // esi
  unsigned int v43; // edi
  void (__cdecl *v44)(_DWORD); // eax
  int v45; // ebp
  unsigned int v46; // ebx
  int ii; // ebp
  unsigned int v48; // esi
  unsigned int v49; // edi
  void (__cdecl *v50)(_DWORD); // edx
  int v51; // ebp
  int v53; // ecx
  char v54; // [esp-8h] [ebp-48h] BYREF
  int v55; // [esp-4h] [ebp-44h]
  int v56; // [esp+0h] [ebp-40h] BYREF
  int v57[4]; // [esp+4h] [ebp-3Ch] BYREF
  int v58; // [esp+14h] [ebp-2Ch]
  int v59; // [esp+18h] [ebp-28h]
  int v60; // [esp+1Ch] [ebp-24h]
  int v61; // [esp+30h] [ebp-10h]
  int v62; // [esp+34h] [ebp-Ch]
  float v63[2]; // [esp+38h] [ebp-8h] BYREF
  float v64; // [esp+44h] [ebp+4h]

  v3 = dword_11241464;
  v4 = 0;
  if ( dword_11241464 )
    v5 = (dword_11241468 - dword_11241464) / 28;
  else
    v5 = 0;
  v6 = v5;
  if ( dword_11241474 )
    v7 = (dword_11241478 - dword_11241474) / 60;
  else
    v7 = 0;
  v8 = v7 + v6;
  if ( dword_112414A4 )
    v9 = (dword_112414A8 - dword_112414A4) / 28;
  else
    v9 = 0;
  v10 = v9 + v8;
  if ( dword_11241484 )
    v11 = (dword_11241488 - dword_11241484) / 28;
  else
    v11 = 0;
  v12 = v11 + v10;
  if ( dword_11241494 )
    v13 = (dword_11241498 - dword_11241494) / 28;
  else
    v13 = 0;
  v14 = v13 + v12;
  if ( dword_112414B4 )
    v15 = (dword_112414B8 - dword_112414B4) / 28;
  else
    v15 = 0;
  v62 = v14 + v15 + 1;
  v61 = 0;
  for ( i = 0; v3 && i < (int)(dword_11241468 - v3) / 28; ++i )
  {
    v60 = 1;
    LODWORD(v63[0]) = &v56;
    std::string::string(&v56, v4 + v3);
    Precacher::CacheTextureTMP(v56);
    ++v61;
    if ( a1 )
    {
      if ( *((_DWORD *)a1 + 948) )
      {
        LODWORD(v63[0]) = v57;
        std::string::string(v57, "Cache actor group");
        v56 = v17;
        v18 = (void (__cdecl *)(_DWORD))*((_DWORD *)a1 + 948);
        v63[0] = a2 + (a3 - a2) * ((double)v61 / (double)v62);
        v18(LODWORD(v63[0]));
      }
    }
    v3 = dword_11241464;
    v4 += 28;
  }
  v19 = dword_11241468;
  if ( v3 > dword_11241468 )
  {
    invalid_parameter_noinfo();
    v3 = dword_11241464;
  }
  if ( v3 > dword_11241468 )
    invalid_parameter_noinfo();
  sub_1000DC10(&Precacher::m_vecTextures, v63, (int)&Precacher::m_vecTextures, v3, (int)&Precacher::m_vecTextures, v19);
  v20 = 0;
  for ( j = 0; ; j += 60 )
  {
    v22 = dword_11241474;
    v23 = dword_11241478;
    if ( !dword_11241474 || v20 >= (dword_11241478 - dword_11241474) / 60 )
      break;
    v60 = 1;
    v59 = dword_11241474 + j + 28;
    if ( !dword_11241474 || v20 >= (dword_11241478 - dword_11241474) / 60 )
    {
      invalid_parameter_noinfo();
      v23 = dword_11241478;
      v22 = dword_11241474;
    }
    v58 = v22 + j + 44;
    if ( !v22 || v20 >= (int)(v23 - v22) / 60 )
    {
      invalid_parameter_noinfo();
      v22 = dword_11241474;
    }
    LODWORD(v63[0]) = &v54;
    std::string::string(&v54, v22 + j);
    Precacher::CacheModelTMP(v54, v55, v56, v57[0], v57[1], v57[2], v57[3], v58, v59);
    ++v61;
    if ( a1 && *((_DWORD *)a1 + 948) )
    {
      LODWORD(v63[0]) = v57;
      std::string::string(v57, "Cache Models");
      v24 = (void (__cdecl *)(_DWORD))*((_DWORD *)a1 + 948);
      v63[0] = a2 + (a3 - a2) * ((double)v61 / (double)v62);
      v24(LODWORD(v63[0]));
    }
    ++v20;
  }
  v25 = dword_11241478;
  if ( dword_11241474 > (unsigned int)dword_11241478 )
  {
    invalid_parameter_noinfo();
    v23 = dword_11241478;
    v22 = dword_11241474;
  }
  v26 = v22;
  if ( v22 > v23 )
    invalid_parameter_noinfo();
  sub_101162A0(v63, &Precacher::m_vecModels, v26, &Precacher::m_vecModels, v25);
  v27 = 0;
  for ( k = 0; ; k += 28 )
  {
    v29 = dword_112414A4;
    v30 = dword_112414A8;
    if ( !dword_112414A4 || v27 >= (dword_112414A8 - dword_112414A4) / 28 )
      break;
    v60 = 1;
    LODWORD(v63[0]) = &v56;
    std::string::string(&v56, k + dword_112414A4);
    Precacher::CacheMaterialTMP(v56);
    ++v61;
    if ( a1 && *((_DWORD *)a1 + 948) )
    {
      LODWORD(v63[0]) = v57;
      std::string::string(v57, "Cache actor group");
      v31 = (void (__cdecl *)(_DWORD))*((_DWORD *)a1 + 948);
      v63[0] = a2 + (a3 - a2) * ((double)v61 / (double)v62);
      v31(LODWORD(v63[0]));
    }
    ++v27;
  }
  v32 = dword_112414A8;
  if ( dword_112414A4 > (unsigned int)dword_112414A8 )
  {
    invalid_parameter_noinfo();
    v30 = dword_112414A8;
    v29 = dword_112414A4;
  }
  if ( v29 > v30 )
    invalid_parameter_noinfo();
  sub_1000DC10(
    &Precacher::m_vecMaterials,
    v63,
    (int)&Precacher::m_vecMaterials,
    v29,
    (int)&Precacher::m_vecMaterials,
    v32);
  v33 = 0;
  for ( m = 0; ; m += 28 )
  {
    v35 = dword_11241484;
    v36 = dword_11241488;
    if ( !dword_11241484 || v33 >= (dword_11241488 - dword_11241484) / 28 )
      break;
    v60 = 1;
    LODWORD(v63[0]) = &v56;
    std::string::string(&v56, m + dword_11241484);
    Precacher::CacheSoundTMP(v56);
    ++v61;
    if ( a1 && *((_DWORD *)a1 + 948) )
    {
      LODWORD(v63[0]) = v57;
      std::string::string(v57, "Cache actor group");
      v56 = v37;
      v38 = (void (__cdecl *)(_DWORD))*((_DWORD *)a1 + 948);
      v63[0] = a2 + (a3 - a2) * ((double)v61 / (double)v62);
      v38(LODWORD(v63[0]));
    }
    ++v33;
  }
  v39 = dword_11241488;
  if ( dword_11241484 > (unsigned int)dword_11241488 )
  {
    invalid_parameter_noinfo();
    v36 = dword_11241488;
    v35 = dword_11241484;
  }
  if ( v35 > v36 )
    invalid_parameter_noinfo();
  sub_1000DC10(&Precacher::m_vecSounds, v63, (int)&Precacher::m_vecSounds, v35, (int)&Precacher::m_vecSounds, v39);
  v40 = 0;
  for ( n = 0; ; n += 28 )
  {
    v42 = dword_11241494;
    v43 = dword_11241498;
    if ( !dword_11241494 || v40 >= (dword_11241498 - dword_11241494) / 28 )
      break;
    v60 = 1;
    LODWORD(v63[0]) = &v56;
    std::string::string(&v56, n + dword_11241494);
    Precacher::CacheSound2DTMP(v56);
    ++v61;
    if ( a1 && *((_DWORD *)a1 + 948) )
    {
      LODWORD(v63[0]) = v57;
      std::string::string(v57, "Cache actor group");
      v44 = (void (__cdecl *)(_DWORD))*((_DWORD *)a1 + 948);
      v63[0] = a2 + (a3 - a2) * ((double)v61 / (double)v62);
      v44(LODWORD(v63[0]));
    }
    ++v40;
  }
  v45 = dword_11241498;
  if ( dword_11241494 > (unsigned int)dword_11241498 )
  {
    invalid_parameter_noinfo();
    v43 = dword_11241498;
    v42 = dword_11241494;
  }
  if ( v42 > v43 )
    invalid_parameter_noinfo();
  sub_1000DC10(&Precacher::m_vecSounds2D, v63, (int)&Precacher::m_vecSounds2D, v42, (int)&Precacher::m_vecSounds2D, v45);
  v46 = 0;
  for ( ii = 0; ; ii += 28 )
  {
    v48 = dword_112414B4;
    v49 = dword_112414B8;
    if ( !dword_112414B4 || v46 >= (dword_112414B8 - dword_112414B4) / 28 )
      break;
    v60 = 1;
    LODWORD(v63[0]) = &v56;
    std::string::string(&v56, ii + dword_112414B4);
    Precacher::CacheActorGroupTMP(v56);
    ++v61;
    if ( a1 && *((_DWORD *)a1 + 948) )
    {
      LODWORD(v63[0]) = v57;
      std::string::string(v57, "Cache actor group");
      v50 = (void (__cdecl *)(_DWORD))*((_DWORD *)a1 + 948);
      v63[0] = a2 + (a3 - a2) * ((double)v61 / (double)v62);
      v50(LODWORD(v63[0]));
    }
    ++v46;
  }
  v51 = dword_112414B8;
  if ( dword_112414B4 > (unsigned int)dword_112414B8 )
  {
    invalid_parameter_noinfo();
    v49 = dword_112414B8;
    v48 = dword_112414B4;
  }
  if ( v48 > v49 )
    invalid_parameter_noinfo();
  sub_1000DC10(
    &Precacher::m_vecActorGroups,
    v63,
    (int)&Precacher::m_vecActorGroups,
    v48,
    (int)&Precacher::m_vecActorGroups,
    v51);
  LODWORD(v63[0]) = v57;
  std::string::string(v57, "Chinese.xml");
  if ( !Precacher::LoadTextResource(v57[0]) )
    LogPrintf("Load resource of text is failed.");
  LODWORD(v63[0]) = v57;
  std::string::string(v57, "ErrorInfoChinese.xml");
  if ( !Precacher::LoadErrorTextResource(v57[0]) )
    LogPrintf("Load resource of ErrorText is failed.");
  ++v61;
  if ( a1 && *((_DWORD *)a1 + 948) )
  {
    std::string::string(v57, "Cache actor group");
    v56 = v53;
    v64 = a2 + (a3 - a2) * ((double)v61 / (double)v62);
    (*((void (__cdecl **)(_DWORD))a1 + 948))(LODWORD(v64));
  }
}
