/*
 * func-name: sub_1005CB50
 * func-address: 0x1005cb50
 * callers: 0x10055990
 * callees: 0x10016620, 0x10019470, 0x1001cb70, 0x100551b0, 0x10056950, 0x100569f0, 0x10057080, 0x10059880, 0x1005bd90, 0x100e2b60, 0x10116f70, 0x10116fb0, 0x101177c0, 0x101189f0, 0x1011fd80, 0x10120900, 0x10120930, 0x10120e60, 0x10120ed0, 0x101210f0, 0x10121a70, 0x10122050, 0x101220b0, 0x10122da0, 0x10124d90, 0x101374b0, 0x101374f0, 0x10137510
 */

void __thiscall sub_1005CB50(_BYTE *this, int a2)
{
  _BYTE *v2; // edi
  unsigned int v3; // esi
  int v4; // ecx
  int v5; // ebp
  struct Profiler *v6; // eax
  int v7; // eax
  struct Profiler *v8; // eax
  struct Profiler *v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  float *v13; // eax
  float v14; // esi
  float v15; // edi
  float v16; // ebx
  float *v17; // eax
  float v18; // ecx
  int v19; // edx
  float *v20; // eax
  double v21; // st7
  int v22; // eax
  float *v23; // ecx
  int v24; // eax
  float *v25; // eax
  int v26; // eax
  struct RenderDevice *v27; // eax
  struct RenderDevice *v28; // eax
  void *v29; // eax
  struct Profiler *v30; // eax
  struct RenderDevice *v31; // eax
  struct RenderDevice *v32; // eax
  void *v33; // eax
  unsigned __int8 v34; // bl
  double v35; // st7
  struct RenderDevice *v36; // eax
  struct RenderDevice *v37; // eax
  struct RenderDevice *v38; // eax
  struct RenderDevice *v39; // eax
  struct RenderDevice *v40; // eax
  BOOL v41; // esi
  World *v42; // ecx
  int v43; // esi
  int v44; // edi
  struct RenderDevice *v45; // eax
  struct RenderDevice *v46; // eax
  Shader *v47; // ecx
  signed int i; // esi
  struct Profiler *v49; // eax
  int v50; // ebp
  float v51; // [esp+40h] [ebp-10Ch]
  int v52; // [esp+44h] [ebp-108h]
  int v53; // [esp+48h] [ebp-104h]
  int v54; // [esp+4Ch] [ebp-100h]
  int v55; // [esp+50h] [ebp-FCh]
  float FogExponent; // [esp+54h] [ebp-F8h]
  float FogStartDistance; // [esp+58h] [ebp-F4h]
  float v58; // [esp+6Ch] [ebp-E0h]
  float v59; // [esp+6Ch] [ebp-E0h]
  float v60; // [esp+6Ch] [ebp-E0h]
  float v61; // [esp+6Ch] [ebp-E0h]
  float v62; // [esp+6Ch] [ebp-E0h]
  float v63; // [esp+6Ch] [ebp-E0h]
  float v64; // [esp+6Ch] [ebp-E0h]
  float v65; // [esp+6Ch] [ebp-E0h]
  float v66; // [esp+6Ch] [ebp-E0h]
  float v67; // [esp+6Ch] [ebp-E0h]
  char v68; // [esp+73h] [ebp-D9h]
  unsigned int v70; // [esp+78h] [ebp-D4h]
  float v71; // [esp+7Ch] [ebp-D0h]
  float v72; // [esp+80h] [ebp-CCh]
  float v73; // [esp+84h] [ebp-C8h]
  int v74; // [esp+88h] [ebp-C4h]
  float v75; // [esp+8Ch] [ebp-C0h]
  float v76; // [esp+90h] [ebp-BCh]
  float v77; // [esp+94h] [ebp-B8h]
  char v78; // [esp+98h] [ebp-B4h]
  float v79; // [esp+9Ch] [ebp-B0h]
  float v80; // [esp+A0h] [ebp-ACh]
  float v81; // [esp+A4h] [ebp-A8h]
  int v82; // [esp+A8h] [ebp-A4h]
  int v83; // [esp+B4h] [ebp-98h]
  int v84; // [esp+B8h] [ebp-94h]
  int v85[16]; // [esp+BCh] [ebp-90h] BYREF
  float v86[4]; // [esp+FCh] [ebp-50h] BYREF
  float v87[16]; // [esp+10Ch] [ebp-40h] BYREF

  v2 = this;
  v68 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)v2 + 7);
    v70 = v3;
    if ( !v4 || v3 >= (*((_DWORD *)v2 + 8) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(*((_DWORD *)v2 + 7) + 4 * v3);
    if ( *(_DWORD *)(v5 + 252) )
    {
      sub_1005BD90(v2, v5, a2);
      ++v3;
    }
    else
    {
      if ( (dword_10284C2C & 1) == 0 )
      {
        dword_10284C2C |= 1u;
        dword_10284808 = (int)&BatchRenderer::`vftable';
        dword_10284C28 = 0;
        dword_10284C24 = 0;
        byte_1028480C = 0;
        dword_10284C20 = 0;
        dword_10284C14 = 0;
        goto LABEL_10;
      }
      if ( dword_10284C28 && !(unsigned __int8)dword_10284C28(v5) )
      {
LABEL_80:
        ++v3;
      }
      else
      {
LABEL_10:
        sub_10056950(v5);
        if ( dword_10284784 != *(_DWORD *)(v5 + 52) )
        {
          v6 = Profiler::Get();
          ++*((_DWORD *)v6 + 2);
          Material::Apply(*(Material **)(v5 + 52), 1);
          dword_10284784 = *(_DWORD *)(v5 + 52);
        }
        v82 = sub_100569F0(v5);
        v7 = *(_DWORD *)(v5 + 4);
        if ( v7 && (*(_DWORD *)(v5 + 8) - v7) >> 2 && (!dword_1028477C || !sub_10057080(dword_1028477C, v5)) )
        {
          v8 = Profiler::Get();
          ++*((_DWORD *)v8 + 3);
          Shader::SetLightShaderConstants(dword_10284770, v5);
          dword_1028477C = v5;
        }
        v9 = Profiler::Get();
        ++*((_DWORD *)v9 + 5);
        Shader::SetWorld(dword_10284770, (const struct Matrix *)(v5 + 96));
        if ( !*(_DWORD *)(*(_DWORD *)(v5 + 204) + 768) )
          sub_10059880(v5);
        if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 92) + 32))(*(_DWORD *)(v5 + 92))
          || (v10 = *(_DWORD *)(v5 + 80)) == 0
          || !((*(_DWORD *)(v5 + 84) - v10) >> 2) )
        {
          qmemcpy(v85, (char *)ShaderManager::Instance() + 132, sizeof(v85));
          sub_1001CB70((void *)(v5 + 96), v87, (int)v85);
          v11 = dword_10284C2C;
          if ( (dword_10284C2C & 1) == 0 )
          {
            v11 = dword_10284C2C | 1;
            dword_10284C2C |= 1u;
            dword_10284808 = (int)&BatchRenderer::`vftable';
            dword_10284C28 = 0;
            dword_10284C24 = 0;
            byte_1028480C = 0;
            dword_10284C20 = 0;
            dword_10284C14 = 0;
          }
          qmemcpy(dword_10284C20, v87, 0x40u);
          if ( (v11 & 1) == 0 )
          {
            dword_10284C2C = v11 | 1;
            dword_10284808 = (int)&BatchRenderer::`vftable';
            dword_10284C28 = 0;
            dword_10284C24 = 0;
            byte_1028480C = 0;
            dword_10284C20 = 0;
            dword_10284C14 = 0;
          }
          Shader::SetNonInstancedData(dword_10284770, dword_10284C20);
          v2 = this;
        }
        if ( *(_BYTE *)(*(_DWORD *)(v5 + 204) + 762) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v5 + 92) + 20))(*(_DWORD *)(v5 + 92)) )
          {
            v12 = *(_DWORD *)(v5 + 4);
            if ( v12 )
            {
              if ( (*(_DWORD *)(v5 + 8) - v12) >> 2 && *(_DWORD *)(**(_DWORD **)(v5 + 4) + 1432) )
              {
                if ( SkyController::Instance
                  && *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)v5, 0) == *((_DWORD *)SkyController::Instance
                                                                                     + 307) )
                {
                  v13 = (float *)*((_DWORD *)SkyController::Instance + 307);
                  v14 = v13[281];
                  v15 = v13[282];
                  v16 = v13[283];
                  v75 = v14;
                  v76 = v15;
                  v77 = v16;
                  v17 = sub_10016620(v13 + 269, v86, v13[273]);
                  v71 = *v17;
                  v18 = v17[2];
                  v72 = v17[1];
                  v19 = *((_DWORD *)v17 + 3);
                }
                else
                {
                  v20 = *(float **)std::vector<Model *>::operator[]((_DWORD *)v5, 0);
                  v21 = *(float *)(v5 + 144) - v20[214];
                  v20 += 214;
                  v79 = v21;
                  v14 = v79;
                  v75 = v79;
                  v80 = *(float *)(v5 + 148) - v20[1];
                  v15 = v80;
                  v76 = v80;
                  v81 = *(float *)(v5 + 152) - v20[2];
                  v16 = v81;
                  v77 = v81;
                  v22 = *(_DWORD *)std::vector<Model *>::operator[]((_DWORD *)v5, 0);
                  v71 = *(float *)(v22 + 1076);
                  v18 = *(float *)(v22 + 1084);
                  v72 = *(float *)(v22 + 1080);
                  v19 = *(_DWORD *)(v22 + 1088);
                }
                v73 = v18;
                v23 = *(float **)(v5 + 92);
                v74 = v19;
                v58 = v23[624] - v71;
                v59 = fabs(v58);
                if ( v59 > 0.02
                  || (v60 = v23[625] - v72, v61 = fabs(v60), v61 > 0.02)
                  || (v62 = v23[626] - v73, v63 = fabs(v62), v63 > 0.02)
                  || (v64 = v23[629] * v76 + v23[628] * v75 + v23[630] * v77, v65 = fabs(v64), v65 > 0.1000000014901161)
                  || !*(_BYTE *)(v5 + 161) )
                {
                  if ( *(_BYTE *)(v5 + 161) )
                    World::UpdateStaticPRT(*(World **)(v5 + 204), (struct Mesh *)v23);
                  else
                    World::UpdateDynamicPRT(v23, v5 + 96, v5);
                  v24 = *(_DWORD *)(v5 + 92);
                  *(float *)(v24 + 2496) = v71;
                  v24 += 2496;
                  *(float *)(v24 + 4) = v72;
                  *(float *)(v24 + 8) = v73;
                  *(_DWORD *)(v24 + 12) = v74;
                  v25 = (float *)(*(_DWORD *)(v5 + 92) + 2512);
                  *v25 = v14;
                  v25[1] = v15;
                  v25[2] = v16;
                }
                v2 = this;
                dword_10284788 = *(_DWORD *)(v5 + 92);
              }
            }
          }
          (*(void (__thiscall **)(_DWORD, Shader *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v5 + 92) + 84))(
            *(_DWORD *)(v5 + 92),
            dword_10284770,
            *(_DWORD *)(v5 + 56),
            *(_DWORD *)(v5 + 60),
            *(_DWORD *)(v5 + 64),
            *(_DWORD *)(v5 + 68),
            *(_DWORD *)(v5 + 72));
        }
        v26 = **(_DWORD **)(*(_DWORD *)(v5 + 52) + 152);
        if ( (v26 & 2) != 0 )
        {
          if ( v68 )
            goto LABEL_53;
          v27 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v27 + 184))(v27);
          v28 = RenderDevice::Instance();
          v29 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v28 + 192))(v28);
          Shader::SetColorBuffer(dword_10284770, v29);
          v30 = Profiler::Get();
          v68 = 1;
        }
        else
        {
          if ( (v26 & 1) == 0 )
            goto LABEL_53;
          v31 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v31 + 184))(v31);
          v32 = RenderDevice::Instance();
          v33 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v32 + 192))(v32);
          Shader::SetColorBuffer(dword_10284770, v33);
          v30 = Profiler::Get();
        }
        ++*((_DWORD *)v30 + 9);
LABEL_53:
        if ( *v2 )
        {
          if ( *(int *)(*(_DWORD *)(v5 + 20) + 260) < 1 )
            goto LABEL_60;
        }
        else if ( *(int *)(*(_DWORD *)(v5 + 20) + 256) < 1 )
        {
LABEL_60:
          v34 = 1;
          v78 = 1;
          Shader::SetEmissive(dword_10284770);
          v42 = *(World **)(v5 + 204);
          v43 = *((_DWORD *)v42 + 6);
          v44 = *((_DWORD *)v42 + 7);
          v83 = *((_DWORD *)v42 + 8);
          v84 = *((_DWORD *)v42 + 9);
          FogStartDistance = World::GetFogStartDistance(v42);
          FogExponent = World::GetFogExponent(*(World **)(v5 + 204));
          v52 = v43;
          v53 = v44;
          v54 = v83;
          v55 = v84;
          v67 = 1.0 / World::GetFogDistance(*(World **)(v5 + 204));
          v35 = v67;
          goto LABEL_56;
        }
        v34 = 0;
        v78 = 0;
        Shader::SetUnEmissive(dword_10284770);
        FogStartDistance = World::GetFogStartDistance(*(World **)(v5 + 204));
        FogExponent = World::GetFogExponent(*(World **)(v5 + 204));
        v52 = dword_102847B4;
        v53 = dword_102847B8;
        v54 = dword_102847BC;
        v55 = dword_102847C0;
        v66 = 1.0 / World::GetFogDistance(*(World **)(v5 + 204));
        v35 = v66;
LABEL_56:
        v51 = v35;
        Shader::SetFog(
          dword_10284770,
          LODWORD(v51),
          v52,
          v53,
          v54,
          v55,
          LODWORD(FogExponent),
          LODWORD(FogStartDistance));
        dword_10284780 = v34;
        v36 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v36 + 432))(
          v36,
          19,
          *(_DWORD *)(*(_DWORD *)(v5 + 276) + 88));
        v37 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v37 + 432))(
          v37,
          20,
          *(_DWORD *)(*(_DWORD *)(v5 + 276) + 92));
        v38 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v38 + 432))(
          v38,
          27,
          *(unsigned __int8 *)(*(_DWORD *)(v5 + 276) + 81));
        v39 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v39 + 432))(
          v39,
          15,
          *(unsigned __int8 *)(*(_DWORD *)(v5 + 276) + 84));
        v40 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v40 + 432))(v40, 25, 7);
        v41 = v34 && !*this;
        v45 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, BOOL))(*(_DWORD *)v45 + 432))(v45, 14, v41);
        v46 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v46 + 432))(v46, 23, 4);
        if ( *(_DWORD *)(v5 + 280) )
          (***(void (__thiscall ****)(_DWORD, Shader *, _DWORD))(v5 + 280))(
            *(_DWORD *)(v5 + 280),
            dword_10284770,
            *(_DWORD *)(v5 + 52));
        v47 = dword_10284770;
        for ( i = 0; i < v82; ++i )
        {
          if ( dword_10284790 && v47 )
          {
            Shader::BeginPass(v47, i);
            v47 = dword_10284770;
          }
          if ( !i && !*((_BYTE *)v47 + 244) )
          {
            sub_100551B0(this, v5, v78);
            Shader::CommitChanges(dword_10284770);
          }
          (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v5 + 92) + 60))(
            *(_DWORD *)(v5 + 92),
            *(_DWORD *)(v5 + 56),
            *(_DWORD *)(v5 + 60),
            *(_DWORD *)(v5 + 64),
            *(_DWORD *)(v5 + 68),
            *(_DWORD *)(v5 + 72));
          v47 = dword_10284770;
          if ( dword_10284790 && dword_10284770 )
          {
            Shader::EndPass(dword_10284770);
            v47 = dword_10284770;
          }
        }
        if ( *(_DWORD *)(v5 + 280) )
          (*(void (__thiscall **)(_DWORD, Shader *, _DWORD))(**(_DWORD **)(v5 + 280) + 4))(
            *(_DWORD *)(v5 + 280),
            v47,
            *(_DWORD *)(v5 + 52));
        v49 = Profiler::Get();
        v3 = v70;
        ++*(_DWORD *)v49;
        v50 = *(_DWORD *)(v5 + 20);
        v2 = this;
        if ( !*this )
        {
          ++*(_DWORD *)(v50 + 256);
          goto LABEL_80;
        }
        ++*(_DWORD *)(v50 + 260);
        v3 = v70 + 1;
      }
    }
  }
}
