/*
 * func-name: ?CacheModelTMP@Precacher@@SAPAVModel@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PAV?$vector@UAnimInfo@Precacher@@V?$allocator@UAnimInfo@Precacher@@@std@@@4@PAV?$vector@UBoneNodeInfo@Precacher@@V?$allocator@UBoneNodeInfo@Precacher@@@std@@@4@H@Z
 * func-address: 0x1010c190
 * callers: 0x1010c960, 0x1010cb00
 * callees: 0x100116a0, 0x1009eed0, 0x100ee5c0, 0x100efd60, 0x100f29d0, 0x100f2ca0, 0x100f4f50, 0x1010a600, 0x1010e1e0, 0x1010e200, 0x1010fd40, 0x10114b80, 0x10114e90, 0x10115010, 0x10115e90, 0x1017a2d0, 0x1017a310, 0x1017a610, 0x101a2500, 0x101a2534
 */

Model *__cdecl Precacher::CacheModelTMP(char a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // eax
  int v10; // eax
  void *v11; // esi
  Model *v12; // eax
  Model *v13; // esi
  const char *v14; // eax
  int v15; // ebp
  unsigned int v16; // edi
  int v17; // ebx
  int v18; // ecx
  int v19; // esi
  int v20; // eax
  int v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // esi
  struct ModelFrame *NodeHandle; // eax
  struct ModelFrame *v26; // ebx
  _BYTE *v27; // eax
  char *v28; // esi
  char *v29; // edi
  int v30; // eax
  char *v31; // ebp
  unsigned int i; // esi
  unsigned int v33; // ebx
  int v34; // ecx
  int v35; // eax
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // esi
  int v41; // eax
  int v42; // edi
  char *v43; // esi
  int v44; // edi
  void (__cdecl *v45)(); // ebx
  char *v46; // ebp
  int v47; // esi
  int v48; // ecx
  int v49; // ecx
  int v50; // eax
  int v51; // esi
  char *v52; // edi
  char *v53; // esi
  unsigned int v54; // esi
  int v55; // esi
  unsigned int v56; // ebx
  int v57; // ebp
  int v58; // ecx
  void (__cdecl *v59)(); // edi
  int v60; // ecx
  bool v61; // zf
  char *v62; // ecx
  unsigned int v63; // edi
  int v64; // ecx
  int v65; // ecx
  int v66; // ecx
  int v67; // eax
  int Animation; // eax
  int v69; // ecx
  int v70; // edi
  Model **v71; // eax
  Model *v72; // esi
  char v74; // [esp-28h] [ebp-C0h] BYREF
  int v75; // [esp-24h] [ebp-BCh]
  int v76; // [esp-20h] [ebp-B8h] BYREF
  int v77; // [esp-1Ch] [ebp-B4h] BYREF
  int v78; // [esp-18h] [ebp-B0h]
  int v79; // [esp-14h] [ebp-ACh]
  int v80; // [esp-10h] [ebp-A8h]
  int v81; // [esp-Ch] [ebp-A4h]
  int *v82; // [esp-8h] [ebp-A0h]
  struct ModelFrame *v83; // [esp-4h] [ebp-9Ch]
  unsigned int v84; // [esp+10h] [ebp-88h]
  Model *v85; // [esp+14h] [ebp-84h]
  int v86; // [esp+18h] [ebp-80h]
  unsigned int v87; // [esp+1Ch] [ebp-7Ch]
  int v88; // [esp+20h] [ebp-78h]
  int v89; // [esp+24h] [ebp-74h]
  unsigned int v90; // [esp+28h] [ebp-70h]
  _DWORD v91[2]; // [esp+2Ch] [ebp-6Ch] BYREF
  int v92; // [esp+34h] [ebp-64h] BYREF
  void *v93; // [esp+38h] [ebp-60h]
  char *v94; // [esp+3Ch] [ebp-5Ch]
  int v95; // [esp+40h] [ebp-58h]
  char v96[4]; // [esp+44h] [ebp-54h] BYREF
  void *Destination; // [esp+48h] [ebp-50h]
  void *Source; // [esp+4Ch] [ebp-4Ch]
  int v99; // [esp+50h] [ebp-48h]
  int v100; // [esp+54h] [ebp-44h] BYREF
  void *v101; // [esp+58h] [ebp-40h]
  int v102; // [esp+5Ch] [ebp-3Ch]
  int v103; // [esp+60h] [ebp-38h]
  int v104[7]; // [esp+70h] [ebp-28h] BYREF
  int v105; // [esp+94h] [ebp-4h]

  v105 = 0;
  std::string::string(v104);
  LOBYTE(v105) = 1;
  v9 = sub_1017A2D0(&v100, &a1);
  LOBYTE(v105) = 2;
  std::string::operator=(v104, v9);
  LOBYTE(v105) = 1;
  std::string::~string(&v100);
  v10 = sub_1017A310(&v100, v104);
  LOBYTE(v105) = 3;
  std::string::operator=(v104, v10);
  LOBYTE(v105) = 1;
  std::string::~string(&v100);
  sub_1017A610(v104);
  sub_1010FD40(v91, v104);
  v11 = dword_11241544;
  if ( !v91[0] || (_UNKNOWN *)v91[0] != &unk_11241540 )
    invalid_parameter_noinfo();
  if ( (void *)v91[1] == v11 )
  {
    v12 = (Model *)operator new(0x1C8u);
    v91[0] = v12;
    LOBYTE(v105) = 4;
    if ( v12 )
    {
      v13 = Model::Model(v12);
      v85 = v13;
    }
    else
    {
      v13 = 0;
      v85 = 0;
    }
    LOBYTE(v105) = 1;
    v14 = (const char *)std::string::c_str(&a1);
    StaticModel::Load((ModelFrame **)v13, v14, 0);
    Model::UnloadAllAnimations(v13);
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v15 = a9;
    LOBYTE(v105) = 5;
    if ( a9 )
    {
      v84 = 0;
      if ( sub_1010E1E0(a9) )
      {
        do
        {
          v93 = 0;
          v94 = 0;
          v95 = 0;
          Destination = 0;
          Source = 0;
          v99 = 0;
          v16 = 0;
          v17 = 32 * v84;
          LOBYTE(v105) = 7;
          v88 = 32 * v84;
          v89 = 0;
          while ( 1 )
          {
            v18 = *(_DWORD *)(v15 + 4);
            v90 = v16;
            if ( !v18 || v84 >= (*(_DWORD *)(v15 + 8) - v18) >> 5 )
              invalid_parameter_noinfo();
            v19 = *(_DWORD *)(v15 + 4);
            v20 = *(_DWORD *)(v17 + v19 + 4);
            if ( !v20 || v16 >= (*(_DWORD *)(v17 + v19 + 8) - v20) / 28 )
              break;
            v83 = 0;
            if ( !v19 || v84 >= (*(_DWORD *)(v15 + 8) - v19) >> 5 )
              invalid_parameter_noinfo();
            v21 = *(_DWORD *)(v15 + 4);
            v22 = *(_DWORD *)(v21 + v17 + 4);
            v23 = v17 + v21;
            if ( !v22 || v16 >= (*(_DWORD *)(v23 + 8) - v22) / 28 )
              invalid_parameter_noinfo();
            v24 = v89 + *(_DWORD *)(v23 + 4);
            v91[0] = &v76;
            std::string::string(&v76, v24);
            NodeHandle = StaticModel::GetNodeHandle((ModelFrame **)v85, v76, v77, v78, v79, v80, v81, (int)v82, v83);
            v26 = NodeHandle;
            if ( NodeHandle && *((_DWORD *)NodeHandle + 90) )
            {
              v27 = Source;
              v28 = (char *)Destination;
              v29 = (char *)Source;
              if ( Destination > Source )
              {
                invalid_parameter_noinfo();
                v27 = Source;
                v28 = (char *)Destination;
                if ( Destination > Source )
                {
                  invalid_parameter_noinfo();
                  v27 = Source;
                }
              }
              if ( v28 != v29 )
              {
                v30 = (v27 - v29) >> 2;
                v31 = &v28[4 * v30];
                if ( v30 > 0 )
                  memmove_s(v28, 4 * v30, v29, 4 * v30);
                Source = v31;
                v15 = a9;
              }
              ModelFrame::EnumerateFrames(*((_DWORD **)v26 + 90), (int)v96);
              for ( i = 0; Destination && i < ((_BYTE *)Source - (_BYTE *)Destination) >> 2; ++i )
                sub_100116A0(&v92, (void *)(*((_DWORD *)Destination + i) + 44));
              sub_100116A0(&v92, (char *)v26 + 44);
              v33 = 0;
              v87 = 0;
              v86 = 0;
              while ( 1 )
              {
                v34 = *(_DWORD *)(v15 + 4);
                if ( !v34 || v84 >= (*(_DWORD *)(v15 + 8) - v34) >> 5 )
                  invalid_parameter_noinfo();
                v35 = *(_DWORD *)(v15 + 4);
                v36 = *(_DWORD *)(v35 + v88 + 20);
                v37 = v35 + v88 + 16;
                if ( !v36 || v33 >= (*(_DWORD *)(v37 + 8) - v36) / 28 )
                  break;
                v91[0] = v94;
                if ( v93 > v94 )
                  invalid_parameter_noinfo();
                v38 = *(_DWORD *)(v15 + 4);
                if ( !v38 || v84 >= (*(_DWORD *)(v15 + 8) - v38) >> 5 )
                  invalid_parameter_noinfo();
                v39 = *(_DWORD *)(v15 + 4);
                v40 = v39 + v88 + 16;
                v41 = *(_DWORD *)(v39 + v88 + 20);
                if ( !v41 || v33 >= (*(_DWORD *)(v39 + v88 + 24) - v41) / 28 )
                  invalid_parameter_noinfo();
                v42 = *(_DWORD *)(v40 + 4);
                v43 = (char *)v93;
                v44 = v86 + v42;
                v45 = invalid_parameter_noinfo;
                v46 = v94;
                if ( v93 > v94 )
                {
                  invalid_parameter_noinfo();
                  v43 = (char *)v93;
                  if ( v93 > v94 )
                    invalid_parameter_noinfo();
                }
                if ( v43 != v46 )
                {
                  do
                  {
                    if ( (unsigned __int8)std::operator==<char>(v43, v44) )
                      break;
                    v43 += 28;
                  }
                  while ( v43 != v46 );
                  v45 = invalid_parameter_noinfo;
                }
                if ( v43 == (char *)v91[0] )
                {
                  v47 = a9;
                  v48 = *(_DWORD *)(a9 + 4);
                  if ( !v48 || v84 >= (*(_DWORD *)(a9 + 8) - v48) >> 5 )
                    v45();
                  v49 = *(_DWORD *)(v47 + 4);
                  v50 = *(_DWORD *)(v49 + v88 + 20);
                  v51 = v49 + v88 + 16;
                  if ( !v50 || v87 >= (*(_DWORD *)(v49 + v88 + 24) - v50) / 28 )
                    v45();
                  sub_100116A0(&v92, (void *)(v86 + *(_DWORD *)(v51 + 4)));
                }
                ++v87;
                v86 += 28;
                v15 = a9;
                v33 = v87;
              }
            }
            v89 += 28;
            v17 = v88;
            v16 = v90 + 1;
          }
          if ( v93 && (v94 - (_BYTE *)v93) / 28 )
            sub_10115E90((int)&v100, &v92);
          if ( Destination )
            operator delete(Destination);
          Destination = 0;
          Source = 0;
          v99 = 0;
          LOBYTE(v105) = 5;
          if ( v93 )
          {
            v52 = v94;
            v53 = (char *)v93;
            if ( v93 != v94 )
            {
              do
              {
                std::string::~string(v53);
                v53 += 28;
              }
              while ( v53 != v52 );
              v53 = (char *)v93;
            }
            operator delete(v53);
          }
          v93 = 0;
          v94 = 0;
          v95 = 0;
          v54 = ++v84;
        }
        while ( v54 < sub_1010E1E0(v15) );
      }
    }
    v55 = a8;
    if ( a8 )
    {
      v56 = 0;
      if ( sub_1010E200(a8) )
      {
        v57 = 0;
        do
        {
          v91[0] = &v77;
          std::string::string(&v77, v104);
          if ( Precacher::GetAnimHandle(v77) == -1 )
          {
            v58 = *(_DWORD *)(v55 + 4);
            if ( v58 && v56 < (*(_DWORD *)(v55 + 8) - v58) >> 6 )
            {
              v59 = invalid_parameter_noinfo;
            }
            else
            {
              v59 = invalid_parameter_noinfo;
              invalid_parameter_noinfo();
            }
            v60 = *(_DWORD *)(v55 + 4);
            v61 = *(_DWORD *)(v60 + v57 + 60) == -1;
            v83 = 0;
            if ( v61 )
            {
              v82 = 0;
              if ( !v60 || v56 >= (*(_DWORD *)(v55 + 8) - v60) >> 6 )
                v59();
              v66 = *(_DWORD *)(v55 + 4);
              v81 = *(unsigned __int8 *)(v66 + v57 + 56);
              if ( !v66 || v56 >= (*(_DWORD *)(v55 + 8) - v66) >> 6 )
                v59();
            }
            else
            {
              if ( !v60 || v56 >= (*(_DWORD *)(v55 + 8) - v60) >> 6 )
                v59();
              v62 = (char *)v101;
              v63 = *(_DWORD *)(*(_DWORD *)(v55 + 4) + v57 + 60);
              if ( !v101 || v63 >= (v102 - (int)v101) >> 4 )
              {
                invalid_parameter_noinfo();
                v62 = (char *)v101;
              }
              v59 = (void (__cdecl *)())&v62[16 * v63];
              v64 = *(_DWORD *)(v55 + 4);
              v82 = (int *)v59;
              if ( !v64 || v56 >= (*(_DWORD *)(v55 + 8) - v64) >> 6 )
                invalid_parameter_noinfo();
              v65 = *(_DWORD *)(v55 + 4);
              v81 = *(unsigned __int8 *)(v65 + v57 + 56);
              if ( !v65 || v56 >= (*(_DWORD *)(v55 + 8) - v65) >> 6 )
                invalid_parameter_noinfo();
            }
            v67 = v57 + *(_DWORD *)(v55 + 4) + 28;
            v91[0] = &v74;
            std::string::string(&v74, v67);
            Animation = Model::LoadAnimation(
                          v85,
                          v56,
                          (int)v59,
                          v74,
                          v75,
                          v76,
                          v77,
                          v78,
                          v79,
                          v80,
                          *(float *)&v81,
                          (int)v82,
                          (unsigned __int8)v83);
            v69 = *(_DWORD *)(v55 + 4);
            v70 = Animation;
            if ( !v69 || v56 >= (*(_DWORD *)(v55 + 8) - v69) >> 6 )
              invalid_parameter_noinfo();
            *(_DWORD *)sub_10114E90(v57 + *(_DWORD *)(v55 + 4)) = v70;
          }
          ++v56;
          v57 += 64;
        }
        while ( v56 < sub_1010E200(v55) );
      }
    }
    v71 = (Model **)sub_10115010(v104);
    v72 = v85;
    *v71 = v85;
    LOBYTE(v105) = 1;
    if ( v101 )
    {
      v83 = (struct ModelFrame *)v91[0];
      v82 = &v100;
      sub_10114B80(v101, v102);
      operator delete(v101);
    }
    v101 = 0;
    v102 = 0;
    v103 = 0;
    LOBYTE(v105) = 0;
    std::string::~string(v104);
    v105 = -1;
    std::string::~string(&a1);
    return v72;
  }
  else
  {
    LOBYTE(v105) = 0;
    std::string::~string(v104);
    v105 = -1;
    std::string::~string(&a1);
    return 0;
  }
}
