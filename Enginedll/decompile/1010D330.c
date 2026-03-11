/*
 * func-name: ?PurgeCache@Precacher@@SAXXZ
 * func-address: 0x1010d330
 * callers: none
 * callees: 0x1000cb70, 0x1000dc10, 0x10054c00, 0x100cfe70, 0x100e2550, 0x100e6830, 0x10109be0, 0x101100e0, 0x101108c0, 0x10110b10, 0x10110d60, 0x10110fb0, 0x10111200, 0x101162a0, 0x10122da0, 0x10137000, 0x101a2500
 */

void __cdecl Precacher::PurgeCache()
{
  struct ShaderManager *v0; // eax
  struct ShaderManager *v1; // eax
  void ***i; // esi
  void ***v3; // ebp
  void **v4; // ebp
  _DWORD *j; // esi
  _DWORD *v6; // ebp
  int v7; // ecx
  _DWORD *k; // edi
  _DWORD *v9; // ebp
  struct AudioDevice *v10; // ebp
  _DWORD *m; // edi
  _DWORD *v12; // ebp
  struct AudioDevice *v13; // ebp
  Material **n; // edi
  Material **v15; // ebp
  _DWORD *ii; // edi
  _DWORD *v17; // esi
  ActorGroup *v18; // esi
  void *v19; // eax
  void **v20; // esi
  void *v21; // eax
  void **v22; // edi
  void *v23; // ecx
  unsigned int v24; // eax
  int v25; // ebp
  void *v26; // edi
  void *v27; // esi
  void **v28; // esi
  void *v29; // eax
  void **v30; // edi
  void *v31; // ecx
  unsigned int v32; // eax
  int v33; // ebp
  void *v34; // edi
  void *v35; // esi
  void **v36; // esi
  void *v37; // eax
  void **v38; // edi
  void *v39; // ecx
  unsigned int v40; // eax
  int v41; // ebp
  void *v42; // edi
  void *v43; // esi
  void **v44; // esi
  void *v45; // eax
  void **v46; // edi
  void *v47; // ecx
  unsigned int v48; // eax
  int v49; // ebp
  void *v50; // edi
  void *v51; // esi
  void **v52; // esi
  void *v53; // eax
  void **v54; // edi
  void *v55; // ecx
  unsigned int v56; // eax
  int v57; // ebp
  void *v58; // edi
  void *v59; // esi
  int *jj; // esi
  int v61; // ebp
  const char *v62; // eax
  void *v63; // ebp
  _DWORD *kk; // esi
  int v65; // ebp
  const char *v66; // eax
  int v67; // ecx
  int *mm; // esi
  int v69; // ebp
  int v70; // eax
  const char *v71; // eax
  struct AudioDevice *v72; // ebp
  int *nn; // esi
  int v74; // ebp
  int v75; // eax
  const char *v76; // eax
  struct AudioDevice *v77; // ebp
  int *i1; // esi
  int v79; // ebp
  int v80; // eax
  int *i2; // esi
  int v82; // edi
  int v83; // eax
  void *v84; // edi
  _DWORD *v85; // eax
  _DWORD *v86; // esi
  _DWORD *v87; // eax
  _DWORD *v88; // esi
  _DWORD *v89; // eax
  _DWORD *v90; // esi
  _DWORD *v91; // eax
  _DWORD *v92; // esi
  _DWORD *v93; // eax
  _DWORD *v94; // esi
  unsigned int v95; // ecx
  unsigned int v96; // eax
  int v97; // ebp
  int v98; // edi
  unsigned int v99; // eax
  unsigned int v100; // ecx
  int v101; // ebp
  unsigned int v102; // edi
  unsigned int v103; // eax
  unsigned int v104; // ecx
  int v105; // ebp
  int v106; // edi
  unsigned int v107; // eax
  unsigned int v108; // ecx
  int v109; // ebp
  int v110; // edi
  unsigned int v111; // eax
  unsigned int v112; // ecx
  int v113; // ebp
  int v114; // edi
  unsigned int v115; // eax
  unsigned int v116; // ecx
  int v117; // ebp
  int v118; // edi
  ActorGroup *v119; // [esp+14h] [ebp-3Ch] BYREF
  void *v120; // [esp+18h] [ebp-38h]
  _DWORD v121[2]; // [esp+1Ch] [ebp-34h] BYREF
  _BYTE v122[32]; // [esp+24h] [ebp-2Ch] BYREF
  int v123; // [esp+4Ch] [ebp-4h]

  *((_BYTE *)TextureManager::Instance() + 40) = 1;
  v0 = ShaderManager::Instance();
  (*(void (__thiscall **)(struct ShaderManager *))(*(_DWORD *)v0 + 8))(v0);
  v1 = ShaderManager::Instance();
  (*(void (__thiscall **)(struct ShaderManager *))(*(_DWORD *)v1 + 12))(v1);
  for ( i = *(void ****)dword_1124151C; ; i = (void ***)*i )
  {
    v3 = (void ***)dword_1124151C;
    if ( !&unk_11241518 )
      invalid_parameter_noinfo();
    if ( i == v3 )
      break;
    if ( !&unk_11241518 )
      invalid_parameter_noinfo();
    if ( i == dword_1124151C )
      invalid_parameter_noinfo();
    if ( i[9] )
    {
      if ( i == dword_1124151C )
        invalid_parameter_noinfo();
      v4 = i[9];
      if ( v4 )
      {
        Texture::~Texture(i[9]);
        operator delete(v4);
      }
      if ( i == dword_1124151C )
        invalid_parameter_noinfo();
      i[9] = 0;
    }
    if ( i == dword_1124151C )
      invalid_parameter_noinfo();
  }
  for ( j = *(_DWORD **)dword_11241544; ; j = (_DWORD *)*j )
  {
    v6 = dword_11241544;
    if ( !&unk_11241540 )
      invalid_parameter_noinfo();
    if ( j == v6 )
      break;
    if ( !&unk_11241540 )
      invalid_parameter_noinfo();
    if ( j == dword_11241544 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(_DWORD))(*(_DWORD *)j[9] + 16))(j[9]);
    if ( j == dword_11241544 )
      invalid_parameter_noinfo();
    if ( j[9] )
    {
      if ( j == dword_11241544 )
        invalid_parameter_noinfo();
      v7 = j[9];
      if ( v7 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 12))(v7, 1);
      if ( j == dword_11241544 )
        invalid_parameter_noinfo();
      j[9] = 0;
    }
    if ( j == dword_11241544 )
      invalid_parameter_noinfo();
  }
  for ( k = *(_DWORD **)dword_11241594; ; k = (_DWORD *)*k )
  {
    v9 = dword_11241594;
    if ( !&unk_11241590 )
      invalid_parameter_noinfo();
    if ( k == v9 )
      break;
    v10 = AudioDevice::Instance();
    if ( !&unk_11241590 )
      invalid_parameter_noinfo();
    if ( k == dword_11241594 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v10 + 20))(v10, k[9]);
    if ( k == dword_11241594 )
      invalid_parameter_noinfo();
  }
  for ( m = *(_DWORD **)dword_112415BC; ; m = (_DWORD *)*m )
  {
    v12 = dword_112415BC;
    if ( !&unk_112415B8 )
      invalid_parameter_noinfo();
    if ( m == v12 )
      break;
    v13 = AudioDevice::Instance();
    if ( !&unk_112415B8 )
      invalid_parameter_noinfo();
    if ( m == dword_112415BC )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct AudioDevice *, _DWORD))(*(_DWORD *)v13 + 20))(v13, m[9]);
    if ( m == dword_112415BC )
      invalid_parameter_noinfo();
  }
  for ( n = *(Material ***)dword_112415E4; ; n = (Material **)*n )
  {
    v15 = (Material **)dword_112415E4;
    if ( !&unk_112415E0 )
      invalid_parameter_noinfo();
    if ( n == v15 )
      break;
    if ( !&unk_112415E0 )
      invalid_parameter_noinfo();
    if ( n == dword_112415E4 )
      invalid_parameter_noinfo();
    Material::Release(n[9]);
    if ( n == dword_112415E4 )
      invalid_parameter_noinfo();
  }
  for ( ii = *(_DWORD **)dword_1124160C; ; ii = (_DWORD *)*ii )
  {
    v17 = dword_1124160C;
    if ( !&unk_11241608 )
      invalid_parameter_noinfo();
    if ( ii == v17 )
      break;
    if ( !&unk_11241608 )
      invalid_parameter_noinfo();
    if ( ii == dword_1124160C )
      invalid_parameter_noinfo();
    if ( ii[9] )
    {
      if ( ii == dword_1124160C )
        invalid_parameter_noinfo();
      v119 = (ActorGroup *)ii[9];
      v18 = v119;
      if ( v119 )
      {
        v123 = 0;
        ActorGroup::Destroy(v119);
        std::string::~string((char *)v119 + 16);
        v19 = (void *)*((_DWORD *)v119 + 1);
        v123 = -1;
        if ( v19 )
          operator delete(v19);
        *((_DWORD *)v119 + 1) = 0;
        *((_DWORD *)v18 + 2) = 0;
        *((_DWORD *)v18 + 3) = 0;
        operator delete(v18);
      }
      if ( ii == dword_1124160C )
        invalid_parameter_noinfo();
      ii[9] = 0;
    }
    if ( ii == dword_1124160C )
      invalid_parameter_noinfo();
  }
  v20 = *(void ***)dword_1124151C;
  *(_DWORD *)dword_1124151C = dword_1124151C;
  *((_DWORD *)dword_1124151C + 1) = dword_1124151C;
  v21 = dword_1124151C;
  dword_11241520 = 0;
  if ( v20 != dword_1124151C )
  {
    do
    {
      v22 = (void **)*v20;
      std::string::~string(v20 + 2);
      operator delete(v20);
      v21 = dword_1124151C;
      v20 = v22;
    }
    while ( v22 != dword_1124151C );
  }
  v119 = (ActorGroup *)&unk_11241518;
  v23 = dword_11241528;
  v120 = v21;
  v24 = dword_1124152C;
  v25 = dword_1124152C;
  if ( (unsigned int)dword_11241528 > dword_1124152C )
  {
    invalid_parameter_noinfo();
    v24 = dword_1124152C;
    v23 = dword_11241528;
  }
  v26 = v23;
  if ( (unsigned int)v23 > v24 )
    invalid_parameter_noinfo();
  sub_101100E0(v121, &unk_11241524, v26, &unk_11241524, v25);
  v27 = dword_11241528;
  if ( (unsigned int)dword_11241528 > dword_1124152C )
    invalid_parameter_noinfo();
  sub_101108C0(&unk_11241524, v27, 9, &v119);
  dword_11241534 = 1;
  dword_11241538 = 1;
  v28 = *(void ***)dword_11241544;
  *(_DWORD *)dword_11241544 = dword_11241544;
  *((_DWORD *)dword_11241544 + 1) = dword_11241544;
  v29 = dword_11241544;
  dword_11241548 = 0;
  if ( v28 != dword_11241544 )
  {
    do
    {
      v30 = (void **)*v28;
      std::string::~string(v28 + 2);
      operator delete(v28);
      v29 = dword_11241544;
      v28 = v30;
    }
    while ( v30 != dword_11241544 );
  }
  v119 = (ActorGroup *)&unk_11241540;
  v31 = dword_11241550;
  v120 = v29;
  v32 = dword_11241554;
  v33 = dword_11241554;
  if ( (unsigned int)dword_11241550 > dword_11241554 )
  {
    invalid_parameter_noinfo();
    v32 = dword_11241554;
    v31 = dword_11241550;
  }
  v34 = v31;
  if ( (unsigned int)v31 > v32 )
    invalid_parameter_noinfo();
  sub_101100E0(v121, &unk_1124154C, v34, &unk_1124154C, v33);
  v35 = dword_11241550;
  if ( (unsigned int)dword_11241550 > dword_11241554 )
    invalid_parameter_noinfo();
  sub_10110B10(&unk_1124154C, v35, 9, &v119);
  dword_1124155C = 1;
  dword_11241560 = 1;
  v36 = *(void ***)dword_11241594;
  *(_DWORD *)dword_11241594 = dword_11241594;
  *((_DWORD *)dword_11241594 + 1) = dword_11241594;
  v37 = dword_11241594;
  dword_11241598 = 0;
  if ( v36 != dword_11241594 )
  {
    do
    {
      v38 = (void **)*v36;
      std::string::~string(v36 + 2);
      operator delete(v36);
      v37 = dword_11241594;
      v36 = v38;
    }
    while ( v38 != dword_11241594 );
  }
  v119 = (ActorGroup *)&unk_11241590;
  v39 = dword_112415A0;
  v120 = v37;
  v40 = dword_112415A4;
  v41 = dword_112415A4;
  if ( (unsigned int)dword_112415A0 > dword_112415A4 )
  {
    invalid_parameter_noinfo();
    v40 = dword_112415A4;
    v39 = dword_112415A0;
  }
  v42 = v39;
  if ( (unsigned int)v39 > v40 )
    invalid_parameter_noinfo();
  sub_101100E0(v121, &unk_1124159C, v42, &unk_1124159C, v41);
  v43 = dword_112415A0;
  if ( (unsigned int)dword_112415A0 > dword_112415A4 )
    invalid_parameter_noinfo();
  sub_10110D60(&unk_1124159C, v43, 9, &v119);
  dword_112415AC = 1;
  dword_112415B0 = 1;
  v44 = *(void ***)dword_112415E4;
  *(_DWORD *)dword_112415E4 = dword_112415E4;
  *((_DWORD *)dword_112415E4 + 1) = dword_112415E4;
  v45 = dword_112415E4;
  dword_112415E8 = 0;
  if ( v44 != dword_112415E4 )
  {
    do
    {
      v46 = (void **)*v44;
      std::string::~string(v44 + 2);
      operator delete(v44);
      v45 = dword_112415E4;
      v44 = v46;
    }
    while ( v46 != dword_112415E4 );
  }
  v119 = (ActorGroup *)&unk_112415E0;
  v47 = dword_112415F0;
  v120 = v45;
  v48 = dword_112415F4;
  v49 = dword_112415F4;
  if ( (unsigned int)dword_112415F0 > dword_112415F4 )
  {
    invalid_parameter_noinfo();
    v48 = dword_112415F4;
    v47 = dword_112415F0;
  }
  v50 = v47;
  if ( (unsigned int)v47 > v48 )
    invalid_parameter_noinfo();
  sub_101100E0(v121, &unk_112415EC, v50, &unk_112415EC, v49);
  v51 = dword_112415F0;
  if ( (unsigned int)dword_112415F0 > dword_112415F4 )
    invalid_parameter_noinfo();
  sub_10110FB0(&unk_112415EC, v51, 9, &v119);
  dword_112415FC = 1;
  dword_11241600 = 1;
  v52 = *(void ***)dword_1124160C;
  *(_DWORD *)dword_1124160C = dword_1124160C;
  *((_DWORD *)dword_1124160C + 1) = dword_1124160C;
  v53 = dword_1124160C;
  dword_11241610 = 0;
  if ( v52 != dword_1124160C )
  {
    do
    {
      v54 = (void **)*v52;
      std::string::~string(v52 + 2);
      operator delete(v52);
      v53 = dword_1124160C;
      v52 = v54;
    }
    while ( v54 != dword_1124160C );
  }
  v119 = (ActorGroup *)&unk_11241608;
  v55 = dword_11241618;
  v120 = v53;
  v56 = dword_1124161C;
  v57 = dword_1124161C;
  if ( (unsigned int)dword_11241618 > dword_1124161C )
  {
    invalid_parameter_noinfo();
    v56 = dword_1124161C;
    v55 = dword_11241618;
  }
  v58 = v55;
  if ( (unsigned int)v55 > v56 )
    invalid_parameter_noinfo();
  sub_101100E0(v121, &unk_11241614, v58, &unk_11241614, v57);
  v59 = dword_11241618;
  if ( (unsigned int)dword_11241618 > dword_1124161C )
    invalid_parameter_noinfo();
  sub_10111200(&unk_11241614, v59, 9, &v119);
  dword_11241624 = 1;
  dword_11241628 = 1;
  LogPrintf("!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!");
  LogPrintf("Abnormal user resource:");
  for ( jj = *(int **)dword_112414C4; ; jj = (int *)*jj )
  {
    v61 = dword_112414C4;
    if ( !&Precacher::m_listTextures )
      invalid_parameter_noinfo();
    if ( jj == (int *)v61 )
      break;
    if ( !&Precacher::m_listTextures )
      invalid_parameter_noinfo();
    if ( jj == (int *)dword_112414C4 )
      invalid_parameter_noinfo();
    if ( jj[2] )
    {
      if ( jj == (int *)dword_112414C4 )
        invalid_parameter_noinfo();
      v62 = (const char *)std::string::c_str(jj[2] + 100);
      LogPrintf("Texture: %s", v62);
    }
    if ( jj == (int *)dword_112414C4 )
      invalid_parameter_noinfo();
    if ( jj[2] )
    {
      if ( jj == (int *)dword_112414C4 )
        invalid_parameter_noinfo();
      v63 = (void *)jj[2];
      if ( v63 )
      {
        Texture::~Texture((void **)jj[2]);
        operator delete(v63);
      }
      if ( jj == (int *)dword_112414C4 )
        invalid_parameter_noinfo();
      jj[2] = 0;
    }
    if ( jj == (int *)dword_112414C4 )
      invalid_parameter_noinfo();
  }
  for ( kk = *(_DWORD **)dword_112414D0; ; kk = (_DWORD *)*kk )
  {
    v65 = dword_112414D0;
    if ( !&Precacher::m_listModels )
      invalid_parameter_noinfo();
    if ( kk == (_DWORD *)v65 )
      break;
    if ( !&Precacher::m_listModels )
      invalid_parameter_noinfo();
    if ( kk == (_DWORD *)dword_112414D0 )
      invalid_parameter_noinfo();
    if ( kk[2] )
    {
      if ( kk == (_DWORD *)dword_112414D0 )
        invalid_parameter_noinfo();
      v66 = (const char *)std::string::c_str(kk[2] + 320);
      LogPrintf("Model: %s", v66);
    }
    if ( kk == (_DWORD *)dword_112414D0 )
      invalid_parameter_noinfo();
    if ( kk[2] )
    {
      if ( kk == (_DWORD *)dword_112414D0 )
        invalid_parameter_noinfo();
      v67 = kk[2];
      if ( v67 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v67 + 12))(v67, 1);
      if ( kk == (_DWORD *)dword_112414D0 )
        invalid_parameter_noinfo();
      kk[2] = 0;
    }
    if ( kk == (_DWORD *)dword_112414D0 )
      invalid_parameter_noinfo();
  }
  for ( mm = *(int **)dword_112414E8; ; mm = (int *)*mm )
  {
    v69 = dword_112414E8;
    if ( !&Precacher::m_listSounds )
      invalid_parameter_noinfo();
    if ( mm == (int *)v69 )
      break;
    if ( !&Precacher::m_listSounds )
      invalid_parameter_noinfo();
    if ( mm == (int *)dword_112414E8 )
      invalid_parameter_noinfo();
    if ( mm[2] )
    {
      if ( mm == (int *)dword_112414E8 )
        invalid_parameter_noinfo();
      v70 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)mm[2] + 56))(mm[2], v122);
      v123 = 2;
      v71 = (const char *)std::string::c_str(v70);
      LogPrintf("Sound: %s", v71);
      v123 = -1;
      std::string::~string(v122);
    }
    v72 = AudioDevice::Instance();
    if ( mm == (int *)dword_112414E8 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct AudioDevice *, int))(*(_DWORD *)v72 + 20))(v72, mm[2]);
    if ( mm == (int *)dword_112414E8 )
      invalid_parameter_noinfo();
  }
  for ( nn = *(int **)dword_112414F4; ; nn = (int *)*nn )
  {
    v74 = dword_112414F4;
    if ( !&Precacher::m_listSounds2D )
      invalid_parameter_noinfo();
    if ( nn == (int *)v74 )
      break;
    if ( !&Precacher::m_listSounds2D )
      invalid_parameter_noinfo();
    if ( nn == (int *)dword_112414F4 )
      invalid_parameter_noinfo();
    if ( nn[2] )
    {
      if ( nn == (int *)dword_112414F4 )
        invalid_parameter_noinfo();
      v75 = (*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)nn[2] + 56))(nn[2], v122);
      v123 = 3;
      v76 = (const char *)std::string::c_str(v75);
      LogPrintf("Sound2D: %s", v76);
      v123 = -1;
      std::string::~string(v122);
    }
    v77 = AudioDevice::Instance();
    if ( nn == (int *)dword_112414F4 )
      invalid_parameter_noinfo();
    (*(void (__thiscall **)(struct AudioDevice *, int))(*(_DWORD *)v77 + 20))(v77, nn[2]);
    if ( nn == (int *)dword_112414F4 )
      invalid_parameter_noinfo();
  }
  for ( i1 = *(int **)dword_112414DC; ; i1 = (int *)*i1 )
  {
    v79 = dword_112414DC;
    if ( !&Precacher::m_listMaterials )
      invalid_parameter_noinfo();
    if ( i1 == (int *)v79 )
      break;
    if ( !&Precacher::m_listMaterials )
      invalid_parameter_noinfo();
    if ( i1 == (int *)dword_112414DC )
      invalid_parameter_noinfo();
    if ( i1[2] )
    {
      if ( i1 == (int *)dword_112414DC )
        invalid_parameter_noinfo();
      v80 = std::string::c_str(i1[2] + 184);
      LogPrintf("Material: ", v80);
    }
    if ( i1 == (int *)dword_112414DC )
      invalid_parameter_noinfo();
    Material::Release((Material *)i1[2]);
    if ( i1 == (int *)dword_112414DC )
      invalid_parameter_noinfo();
  }
  for ( i2 = *(int **)dword_11241500; ; i2 = (int *)*i2 )
  {
    v82 = dword_11241500;
    if ( !&Precacher::m_listActorGroups )
      invalid_parameter_noinfo();
    if ( i2 == (int *)v82 )
      break;
    if ( !&Precacher::m_listActorGroups )
      invalid_parameter_noinfo();
    if ( i2 == (int *)dword_11241500 )
      invalid_parameter_noinfo();
    if ( i2[2] )
    {
      if ( i2 == (int *)dword_11241500 )
        invalid_parameter_noinfo();
      v83 = std::string::c_str(i2[2] + 16);
      LogPrintf("ActorGroup: ", v83);
    }
    if ( i2 == (int *)dword_11241500 )
      invalid_parameter_noinfo();
    if ( i2[2] )
    {
      if ( i2 == (int *)dword_11241500 )
        invalid_parameter_noinfo();
      v84 = (void *)i2[2];
      if ( v84 )
      {
        ActorGroup::~ActorGroup((void **)i2[2]);
        operator delete(v84);
      }
      if ( i2 == (int *)dword_11241500 )
        invalid_parameter_noinfo();
      i2[2] = 0;
    }
    if ( i2 == (int *)dword_11241500 )
      invalid_parameter_noinfo();
  }
  v85 = *(_DWORD **)dword_112414C4;
  *(_DWORD *)dword_112414C4 = dword_112414C4;
  *(_DWORD *)(dword_112414C4 + 4) = dword_112414C4;
  dword_112414C8 = 0;
  if ( v85 != (_DWORD *)dword_112414C4 )
  {
    do
    {
      v86 = (_DWORD *)*v85;
      operator delete(v85);
      v85 = v86;
    }
    while ( v86 != (_DWORD *)dword_112414C4 );
  }
  v87 = *(_DWORD **)dword_112414D0;
  *(_DWORD *)dword_112414D0 = dword_112414D0;
  *(_DWORD *)(dword_112414D0 + 4) = dword_112414D0;
  dword_112414D4 = 0;
  if ( v87 != (_DWORD *)dword_112414D0 )
  {
    do
    {
      v88 = (_DWORD *)*v87;
      operator delete(v87);
      v87 = v88;
    }
    while ( v88 != (_DWORD *)dword_112414D0 );
  }
  v89 = *(_DWORD **)dword_112414E8;
  *(_DWORD *)dword_112414E8 = dword_112414E8;
  *(_DWORD *)(dword_112414E8 + 4) = dword_112414E8;
  dword_112414EC = 0;
  if ( v89 != (_DWORD *)dword_112414E8 )
  {
    do
    {
      v90 = (_DWORD *)*v89;
      operator delete(v89);
      v89 = v90;
    }
    while ( v90 != (_DWORD *)dword_112414E8 );
  }
  v91 = *(_DWORD **)dword_112414DC;
  *(_DWORD *)dword_112414DC = dword_112414DC;
  *(_DWORD *)(dword_112414DC + 4) = dword_112414DC;
  dword_112414E0 = 0;
  if ( v91 != (_DWORD *)dword_112414DC )
  {
    do
    {
      v92 = (_DWORD *)*v91;
      operator delete(v91);
      v91 = v92;
    }
    while ( v92 != (_DWORD *)dword_112414DC );
  }
  v93 = *(_DWORD **)dword_11241500;
  *(_DWORD *)dword_11241500 = dword_11241500;
  *(_DWORD *)(dword_11241500 + 4) = dword_11241500;
  dword_11241504 = 0;
  if ( v93 != (_DWORD *)dword_11241500 )
  {
    do
    {
      v94 = (_DWORD *)*v93;
      operator delete(v93);
      v93 = v94;
    }
    while ( v94 != (_DWORD *)dword_11241500 );
  }
  v95 = dword_11241468;
  v96 = dword_11241464;
  v97 = dword_11241468;
  if ( dword_11241464 > (unsigned int)dword_11241468 )
  {
    invalid_parameter_noinfo();
    v95 = dword_11241468;
    v96 = dword_11241464;
  }
  v98 = v96;
  if ( v96 > v95 )
    invalid_parameter_noinfo();
  sub_1000DC10(
    &Precacher::m_vecTextures,
    v121,
    (int)&Precacher::m_vecTextures,
    v98,
    (int)&Precacher::m_vecTextures,
    v97);
  v99 = dword_11241478;
  v100 = dword_11241474;
  v101 = dword_11241478;
  if ( dword_11241474 > (unsigned int)dword_11241478 )
  {
    invalid_parameter_noinfo();
    v99 = dword_11241478;
    v100 = dword_11241474;
  }
  v102 = v100;
  if ( v100 > v99 )
    invalid_parameter_noinfo();
  sub_101162A0(v121, &Precacher::m_vecModels, v102, &Precacher::m_vecModels, v101);
  v103 = dword_11241488;
  v104 = dword_11241484;
  v105 = dword_11241488;
  if ( dword_11241484 > (unsigned int)dword_11241488 )
  {
    invalid_parameter_noinfo();
    v103 = dword_11241488;
    v104 = dword_11241484;
  }
  v106 = v104;
  if ( v104 > v103 )
    invalid_parameter_noinfo();
  sub_1000DC10(&Precacher::m_vecSounds, v121, (int)&Precacher::m_vecSounds, v106, (int)&Precacher::m_vecSounds, v105);
  v107 = dword_11241498;
  v108 = dword_11241494;
  v109 = dword_11241498;
  if ( dword_11241494 > (unsigned int)dword_11241498 )
  {
    invalid_parameter_noinfo();
    v107 = dword_11241498;
    v108 = dword_11241494;
  }
  v110 = v108;
  if ( v108 > v107 )
    invalid_parameter_noinfo();
  sub_1000DC10(
    &Precacher::m_vecSounds2D,
    v121,
    (int)&Precacher::m_vecSounds2D,
    v110,
    (int)&Precacher::m_vecSounds2D,
    v109);
  v111 = dword_112414A8;
  v112 = dword_112414A4;
  v113 = dword_112414A8;
  if ( dword_112414A4 > (unsigned int)dword_112414A8 )
  {
    invalid_parameter_noinfo();
    v111 = dword_112414A8;
    v112 = dword_112414A4;
  }
  v114 = v112;
  if ( v112 > v111 )
    invalid_parameter_noinfo();
  sub_1000DC10(
    &Precacher::m_vecMaterials,
    v121,
    (int)&Precacher::m_vecMaterials,
    v114,
    (int)&Precacher::m_vecMaterials,
    v113);
  v115 = dword_112414B8;
  v116 = dword_112414B4;
  v117 = dword_112414B8;
  if ( dword_112414B4 > (unsigned int)dword_112414B8 )
  {
    invalid_parameter_noinfo();
    v115 = dword_112414B8;
    v116 = dword_112414B4;
  }
  v118 = v116;
  if ( v116 > v115 )
    invalid_parameter_noinfo();
  sub_1000DC10(
    &Precacher::m_vecActorGroups,
    v121,
    (int)&Precacher::m_vecActorGroups,
    v118,
    (int)&Precacher::m_vecActorGroups,
    v117);
  *((_BYTE *)TextureManager::Instance() + 40) = 0;
}
