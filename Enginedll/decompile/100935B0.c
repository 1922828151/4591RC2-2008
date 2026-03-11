/*
 * func-name: ?DrawObjects@Gizmo@@QAEXPAUID3DXMesh@@@Z
 * func-address: 0x100935b0
 * callers: 0x10088cd0, 0x10094d10
 * callees: 0x1007dd80, 0x10092020, 0x101189f0, 0x101786e0, 0x10178720, 0x10178c20, 0x10179b40, 0x101a2516, 0x101a251c
 */

void __thiscall Gizmo::DrawObjects(Gizmo *this, struct ID3DXMesh *a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  float v18; // eax
  float v19; // ecx
  struct RenderDevice *v20; // eax
  double *v21; // eax
  float v22; // edx
  float v23; // ecx
  float v24; // edx
  struct RenderDevice *v25; // eax
  float v26; // edx
  float v27; // eax
  struct RenderDevice *v28; // eax
  double *v29; // eax
  float v30; // edx
  float v31; // ecx
  float v32; // edx
  struct RenderDevice *v33; // eax
  float v34; // edx
  float v35; // eax
  struct RenderDevice *v36; // eax
  double *v37; // ebx
  float v38; // ecx
  float v39; // edx
  float v40; // eax
  struct RenderDevice *v41; // eax
  struct RenderDevice *v42; // eax
  struct RenderDevice *v43; // eax
  double v44; // [esp+BCh] [ebp-190h] BYREF
  float v45; // [esp+C4h] [ebp-188h]
  float v46; // [esp+C8h] [ebp-184h]
  double v47; // [esp+CCh] [ebp-180h]
  float Scale; // [esp+D4h] [ebp-178h]
  float v49[16]; // [esp+D8h] [ebp-174h] BYREF
  float v50[17]; // [esp+118h] [ebp-134h] BYREF
  double v51; // [esp+15Ch] [ebp-F0h]
  float v52[16]; // [esp+164h] [ebp-E8h] BYREF
  _DWORD v53[26]; // [esp+1A4h] [ebp-A8h] BYREF
  float v54[16]; // [esp+20Ch] [ebp-40h] BYREF

  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v3 + 432))(v3, 27, 0);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v4 + 432))(v4, 8, 3);
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 496))(v5);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 137, 1);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v7 + 432))(v7, 28, 0);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v8 + 432))(v8, 14, 0);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v9 + 432))(v9, 23, 8);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v10 + 464))(v10, (char *)this + 48);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v11 + 476))(v11, (char *)this + 112);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v12 + 440))(v12, 0, 1, 2);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v13 + 440))(v13, 0, 2, 0);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v14 + 440))(v14, 0, 3, 0);
  v15 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v15 + 440))(v15, 0, 4, 1);
  memset(v53, 0, sizeof(v53));
  *(float *)&v53[19] = 100000.0;
  v53[0] = 1;
  v46 = 1.0;
  *(float *)&v44 = 1000.0;
  *(float *)&v53[9] = 1.0;
  *((float *)&v44 + 1) = 1000.0;
  *(float *)&v53[10] = 1.0;
  *(float *)&v53[11] = 1.0;
  v45 = 0.0;
  *(float *)&v53[5] = 1.0;
  *(float *)&v53[6] = 1.0;
  *(float *)&v53[7] = 1.0;
  *(float *)&v53[1] = 1.0;
  *(float *)&v53[21] = 1.0;
  *(float *)&v53[2] = 1.0;
  *(float *)&v53[3] = 1.0;
  *(float *)&v53[12] = 1.0;
  *(float *)&v53[8] = 1.0;
  *(float *)&v53[4] = 1.0;
  *(float *)&v53[13] = 1000.0;
  *(float *)&v53[14] = 1000.0;
  *(float *)&v53[15] = 0.0;
  v16 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD *))(**((_DWORD **)v16 + 427) + 204))(*((_DWORD *)v16 + 427), 0, v53);
  v17 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v17 + 427) + 212))(*((_DWORD *)v17 + 427), 0, 1);
  memset(v50, 0, sizeof(v50));
  *(float *)&v44 = 0.30000001;
  *((float *)&v44 + 1) = 0.30000001;
  v50[4] = 0.30000001;
  v45 = 0.30000001;
  v46 = 0.30000001;
  v50[7] = 0.30000001;
  qmemcpy(v52, (char *)this + 48, sizeof(v52));
  v50[5] = 0.30000001;
  v50[6] = 0.30000001;
  sub_10178C20(v52);
  *(float *)&v44 = v52[12] - *((float *)this + 200);
  *((float *)&v44 + 1) = v52[13] - *((float *)this + 201);
  v45 = v52[14] - *((float *)this + 202);
  v51 = *((float *)&v44 + 1);
  v47 = *(float *)&v44;
  v44 = v45;
  Scale = Gizmo::GetScale(this);
  *(float *)&v47 = v47 * v47 + v51 * v51 + v44 * v44;
  *(float *)&v47 = sqrt(*(float *)&v47);
  *(float *)&v47 = *(float *)&v47 * 0.009999999776482582;
  *(float *)&v47 = *(float *)&v47 * Scale;
  memset(v54, 0, sizeof(v54));
  sub_101786E0(1.0);
  v54[15] = 1.0;
  memset(v49, 0, sizeof(v49));
  sub_101786E0(1.0);
  v49[15] = 1.0;
  sub_10179B40(0.0, 4.712389, 0.0);
  sub_10178720(*(float *)&v47, *(float *)&v47, *(float *)&v47);
  sub_1007DD80(v49, (int)v54);
  v18 = *((float *)this + 207);
  v19 = *((float *)this + 208);
  v49[12] = *((float *)this + 206);
  v49[13] = v18;
  v49[14] = v19;
  v20 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v20 + 456))(v20, v49);
  if ( (*((_BYTE *)this + 932) & 2) != 0 )
  {
    v21 = (double *)((char *)this + 736);
  }
  else
  {
    v21 = &v44;
    *(float *)&v44 = 1.0;
    *((float *)&v44 + 1) = 0.0;
    v45 = 0.0;
    v46 = 1.0;
  }
  v22 = *((float *)v21 + 1);
  v50[0] = *(float *)v21;
  v23 = *((float *)v21 + 2);
  v50[1] = v22;
  v24 = *((float *)v21 + 3);
  v50[2] = v23;
  v50[3] = v24;
  v25 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v25 + 488))(v25, v50);
  (*(void (__stdcall **)(struct ID3DXMesh *, _DWORD))(*(_DWORD *)a2 + 12))(a2, 0);
  sub_10179B40(1.5707964, 0.0, 0.0);
  memset(v52, 0, sizeof(v52));
  sub_101786E0(1.0);
  v52[15] = 1.0;
  qmemcpy(v49, v52, sizeof(v49));
  sub_10178720(*(float *)&v47, *(float *)&v47, *(float *)&v47);
  sub_1007DD80(v49, (int)v54);
  v26 = *((float *)this + 210);
  v27 = *((float *)this + 211);
  v49[12] = *((float *)this + 209);
  v49[13] = v26;
  v49[14] = v27;
  v28 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v28 + 456))(v28, v49);
  if ( (*((_BYTE *)this + 932) & 4) != 0 )
  {
    v29 = (double *)((char *)this + 736);
  }
  else
  {
    v29 = &v44;
    *(float *)&v44 = 0.0;
    *((float *)&v44 + 1) = 1.0;
    v46 = 1.0;
    v45 = 0.0;
  }
  v30 = *((float *)v29 + 1);
  v50[0] = *(float *)v29;
  v31 = *((float *)v29 + 2);
  v50[1] = v30;
  v32 = *((float *)v29 + 3);
  v50[2] = v31;
  v50[3] = v32;
  v33 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v33 + 488))(v33, v50);
  (*(void (__stdcall **)(struct ID3DXMesh *, _DWORD))(*(_DWORD *)a2 + 12))(a2, 0);
  sub_10179B40(3.1415927, 0.0, 0.0);
  memset(v52, 0, sizeof(v52));
  sub_101786E0(1.0);
  v52[15] = 1.0;
  qmemcpy(v49, v52, sizeof(v49));
  sub_10178720(*(float *)&v47, *(float *)&v47, *(float *)&v47);
  sub_1007DD80(v49, (int)v54);
  v34 = *((float *)this + 213);
  v35 = *((float *)this + 214);
  v49[12] = *((float *)this + 212);
  v49[13] = v34;
  v49[14] = v35;
  v36 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v36 + 456))(v36, v49);
  if ( (*((_BYTE *)this + 932) & 8) != 0 )
  {
    v37 = (double *)((char *)this + 736);
  }
  else
  {
    v37 = &v44;
    *(float *)&v44 = 0.0;
    *((float *)&v44 + 1) = 0.0;
    v45 = 1.0;
    v46 = 1.0;
  }
  v38 = *((float *)v37 + 1);
  v39 = *((float *)v37 + 2);
  v50[0] = *(float *)v37;
  v40 = *((float *)v37 + 3);
  v50[1] = v38;
  v50[2] = v39;
  v50[3] = v40;
  v41 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v41 + 488))(v41, v50);
  (*(void (__stdcall **)(struct ID3DXMesh *, _DWORD))(*(_DWORD *)a2 + 12))(a2, 0);
  v42 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v42 + 432))(v42, 23, 4);
  v43 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v43 + 432))(v43, 14, 1);
}
