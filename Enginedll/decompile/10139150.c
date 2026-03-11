/*
 * func-name: ?RenderMotionBlur@World@@IAEXPAVCamera@@@Z
 * func-address: 0x10139150
 * callers: 0x10139890
 * callees: 0x10001330, 0x1000bc40, 0x1000dbc0, 0x10010f10, 0x10019470, 0x1001cb70, 0x10055320, 0x10063830, 0x100ee930, 0x100f1550, 0x10106b20, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10120900, 0x10121350, 0x10121380, 0x101216e0, 0x10121e80, 0x10122050, 0x10124d90, 0x1017a0b0
 */

void __thiscall World::RenderMotionBlur(World *this, struct Camera *a2)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  struct PostProcess *v4; // eax
  struct RenderDevice *v5; // eax
  _DWORD *v6; // edi
  void (__stdcall **v7)(_DWORD *, _DWORD); // esi
  struct PostProcess *v8; // eax
  struct RenderDevice *v9; // eax
  Shader *v10; // ebp
  float *v11; // eax
  struct RenderDevice *v12; // eax
  const void *v13; // eax
  World *v14; // esi
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  unsigned int v17; // edi
  _DWORD *v18; // esi
  int v19; // ecx
  int v20; // ecx
  int v21; // ebx
  int v22; // eax
  int v23; // ecx
  const struct BBox *WorldBBox; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // ebx
  struct RenderDevice *v28; // eax
  struct RenderDevice *v29; // eax
  struct RenderDevice *v30; // eax
  struct RenderDevice *v31; // eax
  float *v32; // eax
  int v33[20]; // [esp+4Ch] [ebp-3A4h] BYREF
  int v34; // [esp+9Ch] [ebp-354h] BYREF
  int v35; // [esp+A0h] [ebp-350h] BYREF
  int v36; // [esp+A4h] [ebp-34Ch] BYREF
  World *v37; // [esp+A8h] [ebp-348h]
  float v38; // [esp+ACh] [ebp-344h]
  float v39; // [esp+B0h] [ebp-340h]
  float v40; // [esp+B4h] [ebp-33Ch]
  float *v41; // [esp+B8h] [ebp-338h]
  int *v42; // [esp+BCh] [ebp-334h]
  float v43[16]; // [esp+C0h] [ebp-330h] BYREF
  float v44[16]; // [esp+100h] [ebp-2F0h] BYREF
  float v45[16]; // [esp+140h] [ebp-2B0h] BYREF
  _BYTE v46[64]; // [esp+180h] [ebp-270h] BYREF
  int v47[16]; // [esp+1C0h] [ebp-230h] BYREF
  _BYTE v48[100]; // [esp+200h] [ebp-1F0h] BYREF
  _BYTE v49[40]; // [esp+264h] [ebp-18Ch] BYREF
  _BYTE v50[16]; // [esp+28Ch] [ebp-164h] BYREF
  int v51[16]; // [esp+29Ch] [ebp-154h] BYREF
  _BYTE v52[64]; // [esp+2DCh] [ebp-114h] BYREF
  int v53; // [esp+388h] [ebp-68h]
  float v54; // [esp+38Ch] [ebp-64h]
  float v55; // [esp+390h] [ebp-60h]
  float v56[16]; // [esp+3A4h] [ebp-4Ch] BYREF
  int v57; // [esp+3ECh] [ebp-4h]

  v37 = this;
  if ( *((_DWORD *)PostProcess::Instance() + 3) )
  {
    v2 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, int *))(**((_DWORD **)v2 + 427) + 160))(*((_DWORD *)v2 + 427), &v35);
    v3 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, int *))(**((_DWORD **)v3 + 427) + 152))(*((_DWORD *)v3 + 427), 0, &v34);
    v4 = PostProcess::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, int *))(**((_DWORD **)v4 + 3) + 72))(*((_DWORD *)v4 + 3), 0, &v36);
    v5 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v5 + 427) + 148))(*((_DWORD *)v5 + 427), 0, v36);
    v6 = (_DWORD *)*((_DWORD *)RenderDevice::Instance() + 427);
    v7 = (void (__stdcall **)(_DWORD *, _DWORD))(*v6 + 156);
    v8 = PostProcess::Instance();
    (*v7)(v6, *((_DWORD *)v8 + 6));
    v9 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(**((_DWORD **)v9 + 427) + 172))(
      *((_DWORD *)v9 + 427),
      0,
      0,
      3,
      -16777216,
      1.0,
      0);
    v10 = *(Shader **)(*((_DWORD *)BatchRenderer::Instance() + 263) + 152);
    if ( *((_DWORD *)v10 + 4) )
    {
      sub_1001CB70((char *)a2 + 220, v45, (int)a2 + 156);
      Shader::SetTechnique(v10, (int)a2, (int)v10, (int)v6, "MB_RenderVelocity");
      Shader::Begin(v10, 0);
      Shader::BeginPass(v10, 0);
      v11 = sub_1000BC40(v44);
      Shader::SetWorld(v10, (const struct Matrix *)v11);
      Camera::Camera((Camera *)v48, a2);
      v54 = 0.0099999998;
      v57 = 0;
      v55 = 1000.0;
      v12 = RenderDevice::Instance();
      v13 = (const void *)(*(int (__thiscall **)(struct RenderDevice *, float *, int, float, float))(*(_DWORD *)v12 + 412))(
                            v12,
                            v44,
                            v53,
                            COERCE_FLOAT(LODWORD(v54)),
                            COERCE_FLOAT(LODWORD(v55)));
      v38 = 0.0;
      v39 = 0.0;
      v40 = 0.0;
      qmemcpy(v51, v13, sizeof(v51));
      qmemcpy(v43, v52, sizeof(v43));
      v43[12] = 0.0;
      v43[13] = 0.0;
      v43[14] = 0.0;
      qmemcpy(v43, sub_1001CB70(v43, v44, (int)v51), sizeof(v43));
      if ( (dword_11241B08 & 1) == 0 )
      {
        dword_11241B08 |= 1u;
        LOBYTE(v57) = 1;
        sub_1000BC40(flt_11241AC8);
        LOBYTE(v57) = 0;
      }
      Shader::SetMBSkinning(v10, 0, 0, 0, 0);
      Shader::SetMBVP(v10, (const struct Matrix *)v43, (const struct Matrix *)flt_11241AC8);
      (*(void (__stdcall **)(_DWORD *, const char *, float *))(**((_DWORD **)v10 + 4) + 152))(
        *((_DWORD **)v10 + 4),
        "mWorldViewProjection",
        v43);
      Shader::SetOldWVP(v10, (const struct Matrix *)flt_11241AC8);
      qmemcpy(flt_11241AC8, v43, sizeof(flt_11241AC8));
      Shader::CommitChanges(v10);
      (*(void (__thiscall **)(SkyController *, struct Camera *))(*(_DWORD *)SkyController::Instance + 112))(
        SkyController::Instance,
        a2);
      v14 = v37;
      v41 = (float *)((char *)v37 + 644);
      Shader::SetMBVP(v10, (const struct Matrix *)v45, (World *)((char *)v37 + 644));
      Shader::CommitChanges(v10);
      v15 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v15 + 432))(v15, 14, 1);
      v16 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v16 + 432))(v16, 7, 1);
      v17 = 0;
      v18 = (_DWORD *)((char *)v14 + 3220);
      while ( 1 )
      {
        v19 = v18[1];
        if ( !v19 || v17 >= (v18[2] - v19) >> 2 )
          break;
        v20 = v18[1];
        v21 = 4 * v17;
        if ( !*(_BYTE *)(*(_DWORD *)(4 * v17 + v20) + 816) )
        {
          if ( !v20 || v17 >= (v18[2] - v20) >> 2 )
            invalid_parameter_noinfo();
          v22 = v18[1];
          if ( *(_DWORD *)(*(_DWORD *)(v21 + v22) + 716) )
          {
            if ( !*((_BYTE *)v37 + 781) )
              goto LABEL_18;
            if ( !v22 || v17 >= (v18[2] - v22) >> 2 )
              invalid_parameter_noinfo();
            if ( !*(_BYTE *)(*(_DWORD *)(v18[1] + 4 * v17) + 364) )
            {
LABEL_18:
              v23 = v18[1];
              if ( !v23 || v17 >= (v18[2] - v23) >> 2 )
                invalid_parameter_noinfo();
              WorldBBox = (const struct BBox *)StaticModel::GetWorldBBox(
                                                 *(_DWORD **)(*(_DWORD *)(v21 + v18[1]) + 716),
                                                 v44);
              LOBYTE(v57) = 2;
              v25 = Camera::BoxInFrustum(a2, WorldBBox, 0.0, 0);
              LOBYTE(v57) = 0;
              sub_1017A0B0(v44);
              if ( v25 )
              {
                v26 = std::vector<Model *>::operator[](v18, v17);
                v42 = v33;
                v27 = v26;
                sub_10001330((float *)v33, v45);
                StaticModel::DrawSimpleNonFFP(
                  *(ModelFrame ***)(*(_DWORD *)v27 + 716),
                  a2,
                  v10,
                  v33[0],
                  v33[1],
                  v33[2],
                  v33[3],
                  v33[4],
                  v33[5],
                  v33[6],
                  v33[7],
                  v33[8],
                  v33[9],
                  v33[10],
                  v33[11],
                  v33[12],
                  v33[13],
                  v33[14],
                  v33[15]);
              }
            }
          }
        }
        ++v17;
      }
      Shader::EndPass(v10);
      Shader::End(v10);
      v28 = RenderDevice::Instance();
      (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v28 + 427) + 148))(*((_DWORD *)v28 + 427), 0, v34);
      v29 = RenderDevice::Instance();
      (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)v29 + 427) + 156))(*((_DWORD *)v29 + 427), v35);
      if ( v36 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v36 + 8))(v36);
        v36 = 0;
      }
      if ( v34 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v34 + 8))(v34);
        v34 = 0;
      }
      if ( v35 )
      {
        (*(void (__stdcall **)(int))(*(_DWORD *)v35 + 8))(v35);
        v35 = 0;
      }
      v30 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v30 + 480))(v30, v47);
      v31 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v31 + 468))(v31, v46);
      v32 = sub_1001CB70(v46, v56, (int)v47);
      qmemcpy(v41, v32, 0x40u);
      v57 = 3;
      sub_1000DBC0((int)v50);
      v57 = -1;
      sub_1017A0B0(v49);
    }
  }
}
