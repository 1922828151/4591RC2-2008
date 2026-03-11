/*
 * func-name: sub_1005BD90
 * func-address: 0x1005bd90
 * callers: 0x1005cb50
 * callees: 0x100551b0, 0x10056950, 0x100569f0, 0x10057160, 0x100579e0, 0x10059a50, 0x10059d20, 0x100e2b60, 0x10116f70, 0x101189f0, 0x1011fd80, 0x10120900, 0x10120e60, 0x10120ed0, 0x101210f0, 0x101215e0, 0x101217d0, 0x101218c0, 0x10121a70, 0x10122050, 0x10122da0, 0x10124d90, 0x10136140, 0x101374b0, 0x101374f0, 0x10137510, 0x101786e0, 0x10179590, 0x101a251c, 0x101a26a0
 */

struct Profiler *__thiscall sub_1005BD90(_BYTE *this, int a2, int a3)
{
  _BYTE *v3; // esi
  int v4; // ebx
  struct Profiler *v5; // eax
  struct Profiler *v6; // eax
  struct Profiler *v7; // eax
  _DWORD *v8; // ebp
  char v9; // al
  Texture *v10; // ecx
  int v11; // edi
  struct IDirect3DTexture9 *Texture; // eax
  int v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  void *v16; // eax
  struct Profiler *v17; // eax
  World *v18; // ecx
  int v19; // esi
  int v20; // edi
  struct RenderDevice *v21; // eax
  struct RenderDevice *v22; // eax
  struct RenderDevice *v23; // eax
  struct RenderDevice *v24; // eax
  struct RenderDevice *v25; // eax
  BOOL v26; // esi
  struct RenderDevice *v27; // eax
  struct RenderDevice *v28; // eax
  struct Profiler *result; // eax
  int v30; // esi
  unsigned int v31; // esi
  unsigned int v32; // eax
  unsigned int v33; // esi
  int v34; // eax
  unsigned int v35; // edi
  unsigned int v36; // ecx
  unsigned int v37; // esi
  unsigned int v38; // eax
  unsigned int v39; // esi
  int v40; // eax
  unsigned int v41; // edi
  unsigned int v42; // ecx
  unsigned int v43; // esi
  unsigned int v44; // eax
  unsigned int v45; // esi
  int v46; // eax
  unsigned int v47; // edi
  unsigned int v48; // ecx
  _DWORD *v49; // esi
  _DWORD *v50; // ecx
  unsigned int v51; // edi
  unsigned int v52; // eax
  unsigned int v53; // edi
  unsigned int v54; // esi
  unsigned int v55; // eax
  int v56; // esi
  int v57; // eax
  int v58; // eax
  unsigned int v59; // edi
  Shader *v60; // ecx
  int v61; // eax
  struct RenderDevice *v62; // eax
  struct RenderDevice *v63; // eax
  int v64; // eax
  struct RenderDevice *v65; // eax
  struct RenderDevice *v66; // eax
  struct Profiler *v67; // eax
  int v68; // edi
  struct RenderDevice *v69; // eax
  struct RenderDevice *v70; // eax
  struct RenderDevice *v71; // eax
  struct RenderDevice *v72; // eax
  struct RenderDevice *v73; // eax
  struct RenderDevice *v74; // eax
  struct RenderDevice *v75; // eax
  int v76; // ebp
  int v77; // ecx
  int v78; // esi
  int v79; // ebp
  char *v80; // esi
  char *v81; // eax
  int v82; // esi
  char *v83; // ecx
  signed int v84; // edi
  Shader *v85; // ecx
  int v86; // [esp+A8h] [ebp-164h]
  int v87; // [esp+ACh] [ebp-160h]
  int v88; // [esp+B0h] [ebp-15Ch]
  int v89; // [esp+B4h] [ebp-158h]
  float FogExponent; // [esp+B8h] [ebp-154h]
  float v91; // [esp+B8h] [ebp-154h]
  float FogStartDistance; // [esp+BCh] [ebp-150h]
  float v93; // [esp+BCh] [ebp-150h]
  bool v94; // [esp+D0h] [ebp-13Ch]
  bool v95[4]; // [esp+D0h] [ebp-13Ch]
  float v96; // [esp+D0h] [ebp-13Ch]
  float v97; // [esp+D0h] [ebp-13Ch]
  bool v98[4]; // [esp+D0h] [ebp-13Ch]
  unsigned int v99; // [esp+D4h] [ebp-138h]
  unsigned int v100; // [esp+D4h] [ebp-138h]
  bool v101; // [esp+D8h] [ebp-134h]
  bool v102[4]; // [esp+D8h] [ebp-134h]
  bool v103[4]; // [esp+D8h] [ebp-134h]
  bool v104[4]; // [esp+D8h] [ebp-134h]
  int v105; // [esp+DCh] [ebp-130h]
  int v106; // [esp+DCh] [ebp-130h]
  int v107; // [esp+DCh] [ebp-130h]
  int v109; // [esp+E4h] [ebp-128h]
  int v110; // [esp+E8h] [ebp-124h]
  int v111; // [esp+ECh] [ebp-120h]
  int v112; // [esp+F8h] [ebp-114h]
  int v113; // [esp+FCh] [ebp-110h]
  float v114[16]; // [esp+100h] [ebp-10Ch] BYREF
  float v115[16]; // [esp+140h] [ebp-CCh] BYREF
  float v116[16]; // [esp+180h] [ebp-8Ch] BYREF
  float v117[19]; // [esp+1C0h] [ebp-4Ch] BYREF

  v3 = this;
  if ( (dword_10284C2C & 1) == 0 )
  {
    dword_10284C2C |= 1u;
    dword_10284808 = (int)&BatchRenderer::`vftable';
    dword_10284C28 = 0;
    dword_10284C24 = 0;
    byte_1028480C = 0;
    dword_10284C20 = 0;
    dword_10284C14 = 0;
  }
  v4 = a2;
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(a2 + 92) + 152))(*(_DWORD *)(a2 + 92), dword_10284C18);
  *(float *)(*(_DWORD *)(v4 + 92) + 20) = GSeconds;
  sub_10056950(v4);
  if ( dword_10284784 != *(_DWORD *)(v4 + 52) )
  {
    v5 = Profiler::Get();
    ++*((_DWORD *)v5 + 2);
    Material::Apply(*(Material **)(v4 + 52), 1);
    dword_10284784 = *(_DWORD *)(v4 + 52);
  }
  v110 = sub_100569F0(v4);
  sub_10057160(v4);
  v6 = Profiler::Get();
  ++*((_DWORD *)v6 + 6);
  Shader::SetSkinning(dword_10284770, 0, 0, 0);
  v7 = Profiler::Get();
  ++*((_DWORD *)v7 + 5);
  memset(v116, 0, sizeof(v116));
  sub_101786E0(1.0);
  v116[15] = 1.0;
  Shader::SetWorld(dword_10284770, (const struct Matrix *)v116);
  v8 = (_DWORD *)(v4 + 236);
  sub_10059A50(v4 + 236, &a2);
  if ( (dword_10284C40 & 1) == 0 )
  {
    dword_10284C40 |= 1u;
    dword_10284C34 = 0;
    dword_10284C38 = 0;
    dword_10284C3C = 0;
    atexit(sub_101B8B30);
    v117[18] = NAN;
  }
  if ( !dword_10284C34 || !((dword_10284C38 - (int)dword_10284C34) >> 2) )
    sub_10059D20(&dword_10284C30, 0x100u, 0);
  v94 = *(_DWORD *)(*(_DWORD *)(v4 + 92) + 32) != 0;
  v109 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 92) + 24))(*(_DWORD *)(v4 + 92))
    || (v101 = 0, *(_DWORD *)(*(_DWORD *)(v4 + 92) + 32)) )
  {
    v101 = 1;
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 92) + 20))(*(_DWORD *)(v4 + 92))
    || (v9 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v4 + 92) + 24))(*(_DWORD *)(v4 + 92))) != 0
    || *(_DWORD *)(*(_DWORD *)(v4 + 92) + 32) )
  {
    v9 = 1;
  }
  Shader::SetMeshParams(dword_10284770, v9, v94, v101);
  v10 = *(Texture **)(*(_DWORD *)(v4 + 92) + 32);
  if ( v10 )
  {
    v11 = **((_DWORD **)dword_10284770 + 4);
    *(_DWORD *)v95 = *((_DWORD *)dword_10284770 + 4);
    Texture = Texture::GetTexture(v10);
    (*(void (__stdcall **)(bool *, const char *, struct IDirect3DTexture9 *))(v11 + 208))(
      *(bool **)v95,
      "tLightMap",
      Texture);
  }
  v13 = **(_DWORD **)(*(_DWORD *)(v4 + 52) + 152);
  if ( (v13 & 2) != 0 || (v13 & 1) != 0 )
  {
    v14 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v14 + 184))(v14);
    v15 = RenderDevice::Instance();
    v16 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v15 + 192))(v15);
    Shader::SetColorBuffer(dword_10284770, v16);
    v17 = Profiler::Get();
    ++*((_DWORD *)v17 + 9);
  }
  if ( dword_10284780 != 1 )
  {
    Shader::SetEmissive(dword_10284770);
    v18 = *(World **)(v4 + 204);
    v19 = *((_DWORD *)v18 + 6);
    v20 = *((_DWORD *)v18 + 7);
    v112 = *((_DWORD *)v18 + 8);
    v113 = *((_DWORD *)v18 + 9);
    FogStartDistance = World::GetFogStartDistance(v18);
    FogExponent = World::GetFogExponent(*(World **)(v4 + 204));
    v96 = 1.0 / World::GetFogDistance(*(World **)(v4 + 204));
    Shader::SetFog(dword_10284770, LODWORD(v96), v19, v20, v112, v113, LODWORD(FogExponent), LODWORD(FogStartDistance));
    v3 = this;
  }
  dword_10284780 = 1;
  v21 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v21 + 432))(
    v21,
    19,
    *(_DWORD *)(*(_DWORD *)(v4 + 276) + 88));
  v22 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v22 + 432))(
    v22,
    20,
    *(_DWORD *)(*(_DWORD *)(v4 + 276) + 92));
  v23 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v23 + 432))(
    v23,
    27,
    *(unsigned __int8 *)(*(_DWORD *)(v4 + 276) + 81));
  v24 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v24 + 432))(
    v24,
    15,
    *(unsigned __int8 *)(*(_DWORD *)(v4 + 276) + 84));
  v25 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v25 + 432))(v25, 25, 7);
  v26 = *v3 == 0;
  v27 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, BOOL))(*(_DWORD *)v27 + 432))(v27, 14, v26);
  v28 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v28 + 432))(v28, 23, 4);
  result = *(struct Profiler **)(v4 + 252);
  *(_DWORD *)v102 = 0;
  if ( result )
  {
    while ( 1 )
    {
      v30 = 0;
      v105 = 0;
      v99 = *(_DWORD *)v102;
      if ( *(_DWORD *)v102 < (unsigned int)result )
        break;
LABEL_81:
      *(_DWORD *)v102 = v99;
      if ( (dword_10284C2C & 1) == 0 )
      {
        dword_10284C2C |= 1u;
        dword_10284808 = (int)&BatchRenderer::`vftable';
        dword_10284C28 = 0;
        dword_10284C24 = 0;
        byte_1028480C = 0;
        dword_10284C20 = 0;
        dword_10284C14 = 0;
      }
      Shader::SetInstancesData(dword_10284770, v30, dword_10284C20);
      v59 = 0;
      v106 = 0;
      if ( v110 > 0 )
      {
        v60 = dword_10284770;
        do
        {
          if ( dword_10284790 && v60 )
          {
            Shader::BeginPass(v60, v59);
            v60 = dword_10284770;
          }
          if ( !v59 && !*((_BYTE *)v60 + 244) )
          {
            if ( !*this )
            {
              v61 = *(_DWORD *)(v4 + 276);
              if ( *(_BYTE *)(v61 + 84) )
              {
                if ( *(_BYTE *)(v61 + 81) )
                {
                  v62 = RenderDevice::Instance();
                  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v62 + 432))(v62, 27, 0);
                }
              }
            }
            v63 = RenderDevice::Instance();
            (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v63 + 432))(v63, 25, 7);
            if ( *this )
            {
              v64 = *(_DWORD *)(v4 + 276);
              if ( *(_BYTE *)(v64 + 84) && *(_BYTE *)(v64 + 81) )
              {
                v65 = RenderDevice::Instance();
                (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v65 + 432))(v65, 25, 2);
              }
              v66 = RenderDevice::Instance();
              (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v66 + 432))(v66, 23, 2);
            }
            Shader::CommitChanges(dword_10284770);
          }
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v4 + 92)
                                                                                              + 64))(
            *(_DWORD *)(v4 + 92),
            *(_DWORD *)(v4 + 56),
            *(_DWORD *)(v4 + 60),
            *(_DWORD *)(v4 + 64),
            *(_DWORD *)(v4 + 68),
            *(_DWORD *)(v4 + 72),
            *(_DWORD *)(v4 + 228),
            v30);
          v60 = dword_10284770;
          if ( dword_10284790 && dword_10284770 )
          {
            Shader::EndPass(dword_10284770);
            v60 = dword_10284770;
          }
          v59 = ++v106;
        }
        while ( v106 < v110 );
      }
      v67 = Profiler::Get();
      ++*(_DWORD *)v67;
      result = *(struct Profiler **)(v4 + 252);
      if ( v99 >= (unsigned int)result )
      {
        v68 = v109;
        if ( v109 )
        {
          if ( dword_10284780 )
          {
            Shader::SetUnEmissive(dword_10284770);
            v93 = World::GetFogStartDistance(*(World **)(v4 + 204));
            v91 = World::GetFogExponent(*(World **)(v4 + 204));
            v86 = dword_102847B4;
            v87 = dword_102847B8;
            v88 = dword_102847BC;
            v89 = dword_102847C0;
            v97 = 1.0 / World::GetFogDistance(*(World **)(v4 + 204));
            Shader::SetFog(dword_10284770, LODWORD(v97), v86, v87, v88, v89, LODWORD(v91), LODWORD(v93));
          }
          dword_10284780 = 0;
          v69 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v69 + 432))(
            v69,
            19,
            *(_DWORD *)(*(_DWORD *)(v4 + 276) + 88));
          v70 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v70 + 432))(
            v70,
            20,
            *(_DWORD *)(*(_DWORD *)(v4 + 276) + 92));
          v71 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v71 + 432))(
            v71,
            27,
            *(unsigned __int8 *)(*(_DWORD *)(v4 + 276) + 81));
          v72 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v72 + 432))(
            v72,
            15,
            *(unsigned __int8 *)(*(_DWORD *)(v4 + 276) + 84));
          v73 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v73 + 432))(v73, 25, 7);
          v74 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v74 + 432))(v74, 14, 0);
          v75 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v75 + 432))(v75, 23, 4);
          v76 = v109;
          v107 = v109;
          while ( 1 )
          {
            v77 = *(_DWORD *)(v4 + 92);
            v78 = *(_DWORD *)(v77 + 24);
            if ( v76 >= v78 )
            {
              *(_DWORD *)v98 = *(_DWORD *)(v77 + 24);
            }
            else
            {
              v78 = v76;
              *(_DWORD *)v98 = v76;
            }
            if ( v78 > 0 )
            {
              *(_DWORD *)v104 = 0;
              v100 = v68 - v76;
              v79 = 4 * (v68 - v76);
              v111 = v78;
              do
              {
                v80 = (char *)ShaderManager::Instance() + 132;
                v81 = (char *)dword_10284C34;
                qmemcpy(v114, v80, sizeof(v114));
                if ( !dword_10284C34 || v100 >= (dword_10284C38 - (int)dword_10284C34) >> 2 )
                {
                  invalid_parameter_noinfo();
                  v81 = (char *)dword_10284C34;
                }
                v82 = *(_DWORD *)&v81[v79] + 96;
                memset(v117, 0, 0x40u);
                sub_101786E0(1.0);
                v117[15] = 1.0;
                sub_10179590(v82, v114, v117);
                if ( (dword_10284C2C & 1) == 0 )
                {
                  dword_10284C2C |= 1u;
                  dword_10284808 = (int)&BatchRenderer::`vftable';
                  dword_10284C28 = 0;
                  dword_10284C24 = 0;
                  byte_1028480C = 0;
                  dword_10284C20 = 0;
                  dword_10284C14 = 0;
                }
                qmemcpy((char *)dword_10284C20 + *(_DWORD *)v104, v117, 0x40u);
                v83 = (char *)dword_10284C34;
                if ( *this )
                {
                  if ( !dword_10284C34 || v100 >= (dword_10284C38 - (int)dword_10284C34) >> 2 )
                  {
                    invalid_parameter_noinfo();
                    v83 = (char *)dword_10284C34;
                  }
                  ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v83[v79] + 20) + 260);
                }
                else
                {
                  if ( !dword_10284C34 || v100 >= (dword_10284C38 - (int)dword_10284C34) >> 2 )
                  {
                    invalid_parameter_noinfo();
                    v83 = (char *)dword_10284C34;
                  }
                  ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)&v83[v79] + 20) + 256);
                }
                ++v100;
                *(_DWORD *)v104 += 64;
                v79 += 4;
                --v111;
              }
              while ( v111 );
              v78 = *(_DWORD *)v98;
              v76 = v107;
            }
            if ( (dword_10284C2C & 1) == 0 )
            {
              dword_10284C2C |= 1u;
              dword_10284808 = (int)&BatchRenderer::`vftable';
              dword_10284C28 = 0;
              dword_10284C24 = 0;
              byte_1028480C = 0;
              dword_10284C20 = 0;
              dword_10284C14 = 0;
            }
            Shader::SetInstancesData(dword_10284770, v78, dword_10284C20);
            v84 = 0;
            if ( v110 > 0 )
            {
              v85 = dword_10284770;
              do
              {
                if ( dword_10284790 && v85 )
                {
                  Shader::BeginPass(v85, v84);
                  v85 = dword_10284770;
                }
                if ( !v84 && !*((_BYTE *)v85 + 244) )
                {
                  sub_100551B0(this, v4, 0);
                  Shader::CommitChanges(dword_10284770);
                }
                (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(**(_DWORD **)(v4 + 92) + 64))(
                  *(_DWORD *)(v4 + 92),
                  *(_DWORD *)(v4 + 56),
                  *(_DWORD *)(v4 + 60),
                  *(_DWORD *)(v4 + 64),
                  *(_DWORD *)(v4 + 68),
                  *(_DWORD *)(v4 + 72),
                  *(_DWORD *)(v4 + 228),
                  v78);
                v85 = dword_10284770;
                if ( dword_10284790 )
                {
                  if ( dword_10284770 )
                  {
                    Shader::EndPass(dword_10284770);
                    v85 = dword_10284770;
                  }
                }
                ++v84;
              }
              while ( v84 < v110 );
              v76 = v107;
            }
            result = Profiler::Get();
            ++*(_DWORD *)result;
            v76 -= v78;
            v107 = v76;
            if ( !v76 )
              break;
            v68 = v109;
          }
        }
        return result;
      }
    }
    *(_DWORD *)v103 = 0;
    while ( 1 )
    {
      if ( v30 >= *(_DWORD *)(*(_DWORD *)(v4 + 92) + 24) )
        goto LABEL_81;
      if ( !*this )
        goto LABEL_40;
      v31 = v8[3];
      if ( v31 > v31 + v8[4] )
        invalid_parameter_noinfo();
      v32 = v8[3];
      v33 = v99 + v31;
      if ( v33 > v32 + v8[4] || v33 < v32 )
        invalid_parameter_noinfo();
      v34 = v33 & 3;
      v35 = v33 >> 2;
      if ( v33 >= v8[4] + v8[3] )
      {
        invalid_parameter_noinfo();
        v34 = v33 & 3;
      }
      v36 = v8[2];
      if ( v36 <= v35 )
        v35 -= v36;
      if ( *(int *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8[1] + 4 * v35) + 4 * v34) + 20) + 260) < 1 )
      {
LABEL_65:
        qmemcpy(v115, (char *)ShaderManager::Instance() + 132, sizeof(v115));
        v51 = v8[3];
        if ( v51 > v51 + v8[4] )
          invalid_parameter_noinfo();
        v52 = v8[3];
        v53 = v99 + v51;
        if ( v53 > v52 + v8[4] || v53 < v52 )
          invalid_parameter_noinfo();
        v54 = v53 >> 2;
        if ( v53 >= v8[3] + v8[4] )
          invalid_parameter_noinfo();
        v55 = v8[2];
        if ( v55 <= v54 )
          v54 -= v55;
        v56 = *(_DWORD *)(*(_DWORD *)(v8[1] + 4 * v54) + 4 * (v53 & 3)) + 96;
        memset(v116, 0, sizeof(v116));
        sub_101786E0(1.0);
        v116[15] = 1.0;
        sub_10179590(v56, v115, v116);
        if ( (dword_10284C2C & 1) == 0 )
        {
          dword_10284C2C |= 1u;
          dword_10284808 = (int)&BatchRenderer::`vftable';
          dword_10284C28 = 0;
          dword_10284C24 = 0;
          byte_1028480C = 0;
          dword_10284C20 = 0;
          dword_10284C14 = 0;
        }
        qmemcpy((char *)dword_10284C20 + *(_DWORD *)v103, v116, 0x40u);
        if ( *this )
        {
          v57 = sub_100579E0(v8, v99);
          ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v57 + 20) + 260);
        }
        else
        {
          v58 = sub_100579E0(v8, v99);
          ++*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v58 + 20) + 256);
        }
        ++v105;
        *(_DWORD *)v103 += 64;
        v4 = a2;
        goto LABEL_80;
      }
      if ( !*this )
      {
LABEL_40:
        v37 = v8[3];
        if ( v37 > v37 + v8[4] )
          invalid_parameter_noinfo();
        v38 = v8[3];
        v39 = v99 + v37;
        if ( v39 > v38 + v8[4] || v39 < v38 )
          invalid_parameter_noinfo();
        v40 = v39 & 3;
        v41 = v39 >> 2;
        if ( v39 >= v8[3] + v8[4] )
        {
          invalid_parameter_noinfo();
          v40 = v39 & 3;
        }
        v42 = v8[2];
        if ( v42 <= v41 )
          v41 -= v42;
        if ( *(int *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8[1] + 4 * v41) + 4 * v40) + 20) + 256) < 1 )
          goto LABEL_65;
      }
      if ( v109 > 255 )
        sub_10059D20(&dword_10284C30, v109 + 1, 0);
      v43 = v8[3];
      if ( v43 > v43 + v8[4] )
        invalid_parameter_noinfo();
      v44 = v8[3];
      v45 = v99 + v43;
      if ( v45 > v44 + v8[4] || v45 < v44 )
        invalid_parameter_noinfo();
      v46 = v45 & 3;
      v47 = v45 >> 2;
      if ( v45 >= v8[3] + v8[4] )
      {
        invalid_parameter_noinfo();
        v46 = v45 & 3;
      }
      v48 = v8[2];
      if ( v48 <= v47 )
        v47 -= v48;
      v49 = (_DWORD *)(*(_DWORD *)(v8[1] + 4 * v47) + 4 * v46);
      v50 = dword_10284C34;
      if ( !dword_10284C34 || v109 >= (unsigned int)((dword_10284C38 - (int)dword_10284C34) >> 2) )
      {
        invalid_parameter_noinfo();
        v50 = dword_10284C34;
      }
      v50[v109++] = *v49;
LABEL_80:
      v30 = v105;
      if ( ++v99 >= *(_DWORD *)(v4 + 252) )
        goto LABEL_81;
    }
  }
  return result;
}
