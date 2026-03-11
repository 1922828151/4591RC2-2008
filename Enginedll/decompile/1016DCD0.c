/*
 * func-name: ?RenderNow@TextureCamera@@QAEPAPAUIDirect3DTexture9@@XZ
 * func-address: 0x1016dcd0
 * callers: 0x100b27b0, 0x1016e310
 * callees: 0x1000bc40, 0x1001cb70, 0x10055320, 0x10055360, 0x100562d0, 0x10063820, 0x10063980, 0x101189f0, 0x10138880, 0x1016d7c0, 0x101780ce, 0x10178340
 */

struct IDirect3DTexture9 **__usercall TextureCamera::RenderNow@<eax>(
        TextureCamera *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4@<esi>)
{
  float *v5; // ecx
  int v6; // edx
  int v7; // eax
  _DWORD *v8; // eax
  double v9; // st7
  int v10; // edx
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // edi
  void (__thiscall **v13)(struct RenderDevice *, float *); // esi
  float *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  unsigned int i; // edi
  int v19; // esi
  int v20; // ecx
  int v21; // esi
  int v22; // ecx
  int v23; // esi
  int v24; // esi
  int v25; // ecx
  int v26; // esi
  int v27; // ecx
  int v28; // esi
  int v29; // ecx
  int v30; // esi
  int v31; // edx
  int v32; // ecx
  void (__thiscall ***v33)(_DWORD, char *, _DWORD, _DWORD, int, _DWORD, int); // ebp
  int v34; // esi
  BatchRenderer *v35; // eax
  struct RenderDevice *v36; // eax
  BatchRenderer *v37; // eax
  struct RenderDevice *v38; // eax
  struct RenderDevice *v39; // eax
  struct RenderDevice *v40; // eax
  int v41; // eax
  struct RenderDevice *v43; // eax
  struct RenderDevice *v44; // edi
  void (__thiscall **v45)(struct RenderDevice *, float *); // esi
  float *v46; // eax
  struct RenderDevice *v47; // eax
  struct RenderDevice *v48; // eax
  struct RenderDevice *v49; // eax
  unsigned int j; // esi
  int v51; // ecx
  int v52; // ecx
  int v53; // eax
  int v54; // ecx
  int v55; // ecx
  int v56; // ecx
  int v57; // ecx
  void (__thiscall ***v58)(_DWORD, char *, char *, _DWORD); // edi
  struct World *v59; // [esp+Ch] [ebp-A0h]
  struct World *v60; // [esp+Ch] [ebp-A0h]
  _BYTE v64[12]; // [esp+20h] [ebp-8Ch] BYREF
  float v65[16]; // [esp+2Ch] [ebp-80h] BYREF
  _BYTE v66[64]; // [esp+6Ch] [ebp-40h] BYREF

  if ( *((float *)this + 214) != *((float *)this + 360)
    || *((float *)this + 215) != *((float *)this + 361)
    || *((float *)this + 216) != *((float *)this + 362)
    || (v5 = (float *)sub_10178340(v64), *v5 != *((float *)this + 366))
    || v5[1] != *((float *)this + 367)
    || v5[2] != *((float *)this + 368)
    || *((float *)this + 401) != *((float *)this + 370) )
  {
    v6 = *((_DWORD *)this + 215);
    v7 = *((_DWORD *)this + 216);
    *((_DWORD *)this + 360) = *((_DWORD *)this + 214);
    *((_DWORD *)this + 361) = v6;
    *((_DWORD *)this + 362) = v7;
    v8 = (_DWORD *)sub_10178340(v64);
    v9 = *((float *)this + 401);
    *((_DWORD *)this + 366) = *v8;
    *((_DWORD *)this + 367) = v8[1];
    v10 = v8[2];
    *((float *)this + 370) = v9;
    *((_DWORD *)this + 368) = v10;
    Camera::Update((TextureCamera *)((char *)this + 1088));
  }
  if ( *((_BYTE *)this + 1052) )
  {
    D3DXMatrixOrthoLH(
      v66,
      *((float *)this + 215),
      *((float *)this + 215),
      *((float *)this + 371),
      *((float *)this + 372));
    qmemcpy((char *)this + 1244, v66, 0x40u);
    qmemcpy((char *)this + 1372, sub_1001CB70((char *)this + 1308, v65, (int)this + 1244), 0x40u);
    Camera::CreateClipPlanes((TextureCamera *)((char *)this + 1088));
  }
  sub_1016D7C0((int)this + 1056);
  if ( *((_BYTE *)this + 1052) )
  {
    v11 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v11 + 360))(v11);
    v12 = RenderDevice::Instance();
    v13 = (void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v12 + 456);
    v14 = sub_1000BC40(v65);
    (*v13)(v12, v14);
    v15 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v15 + 464))(v15, (char *)this + 1308);
    v16 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v16 + 476))(v16, (char *)this + 1244);
    v17 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v17 + 432))(v17, 7, 1);
    for ( i = 0; ; ++i )
    {
      v19 = *((_DWORD *)this + 178);
      v20 = *(_DWORD *)(v19 + 3224);
      if ( !v20 || i >= (*(_DWORD *)(v19 + 3228) - v20) >> 2 )
        break;
      if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v19 + 3224) + 4 * i) + 816) )
      {
        v21 = *((_DWORD *)this + 178);
        v22 = *(_DWORD *)(v21 + 3224);
        v23 = v21 + 3220;
        if ( !v22 || i >= (*(_DWORD *)(v23 + 8) - v22) >> 2 )
          invalid_parameter_noinfo();
        if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v23 + 4) + 4 * i) + 716) )
        {
          v24 = *((_DWORD *)this + 178);
          if ( !*(_BYTE *)(v24 + 781) )
            goto LABEL_25;
          v25 = *(_DWORD *)(v24 + 3224);
          if ( !v25 || i >= (*(_DWORD *)(v24 + 3228) - v25) >> 2 )
            invalid_parameter_noinfo();
          if ( !*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v24 + 3224) + 4 * i) + 364) )
          {
LABEL_25:
            v26 = *((_DWORD *)this + 178);
            v27 = *(_DWORD *)(v26 + 3224);
            v28 = v26 + 3220;
            if ( !v27 || i >= (*(_DWORD *)(v28 + 8) - v27) >> 2 )
              invalid_parameter_noinfo();
            v29 = *(_DWORD *)(v28 + 4);
            v30 = *((_DWORD *)this + 178);
            v31 = *(_DWORD *)(v29 + 4 * i);
            v32 = *(_DWORD *)(v30 + 3224);
            v33 = *(void (__thiscall ****)(_DWORD, char *, _DWORD, _DWORD, int, _DWORD, int))(v31 + 716);
            v34 = v30 + 3220;
            if ( !v32 || i >= (*(_DWORD *)(v34 + 8) - v32) >> 2 )
              invalid_parameter_noinfo();
            (**v33)(
              v33,
              (char *)this + 1088,
              *((_DWORD *)this + 178),
              *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v34 + 4) + 4 * i) + 726),
              1,
              0,
              1);
          }
        }
      }
    }
    v59 = (struct World *)*((_DWORD *)this + 178);
    v35 = BatchRenderer::Instance();
    BatchRenderer::PrepareQueuedBatches(v35, (TextureCamera *)((char *)this + 1088), v59);
    v36 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v36 + 360))(v36);
    v60 = (struct World *)*((_DWORD *)this + 178);
    v37 = BatchRenderer::Instance();
    BatchRenderer::RenderQueuedBatches(v37, v60);
    v38 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v38 + 360))(v38);
  }
  else
  {
    World::Tick((TextureCamera *)((char *)this + 1608));
    v43 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v43 + 360))(v43);
    v44 = RenderDevice::Instance();
    v45 = (void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v44 + 456);
    v46 = sub_1000BC40(v65);
    (*v45)(v44, v46);
    v47 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v47 + 464))(v47, (char *)this + 1308);
    v48 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v48 + 476))(v48, (char *)this + 1244);
    v49 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v49 + 432))(v49, 7, 1);
    for ( j = 0; ; ++j )
    {
      v51 = *((_DWORD *)this + 1208);
      if ( !v51 || j >= (*((_DWORD *)this + 1209) - v51) >> 2 )
        break;
      v52 = *((_DWORD *)this + 1208);
      if ( !*(_BYTE *)(*(_DWORD *)(v52 + 4 * j) + 816) )
      {
        if ( !v52 || j >= (*((_DWORD *)this + 1209) - v52) >> 2 )
          invalid_parameter_noinfo();
        v53 = *((_DWORD *)this + 1208);
        if ( *(_DWORD *)(*(_DWORD *)(v53 + 4 * j) + 716) )
        {
          if ( !*((_BYTE *)this + 2389) )
            goto LABEL_52;
          if ( !v53 || j >= (*((_DWORD *)this + 1209) - v53) >> 2 )
            invalid_parameter_noinfo();
          if ( !*(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 1208) + 4 * j) + 364) )
          {
LABEL_52:
            v54 = *((_DWORD *)this + 1208);
            if ( !v54 || j >= (*((_DWORD *)this + 1209) - v54) >> 2 )
              invalid_parameter_noinfo();
            v55 = *(_DWORD *)(*((_DWORD *)this + 1208) + 4 * j);
            (*(void (__thiscall **)(int, char *, int, int, int))(*(_DWORD *)v55 + 64))(
              v55,
              (char *)this + 1088,
              a3,
              a4,
              a2);
            v56 = *((_DWORD *)this + 1208);
            if ( !v56 || j >= (*((_DWORD *)this + 1209) - v56) >> 2 )
              invalid_parameter_noinfo();
            v57 = *((_DWORD *)this + 1208);
            v58 = *(void (__thiscall ****)(_DWORD, char *, char *, _DWORD))(*(_DWORD *)(v57 + 4 * j) + 716);
            if ( !v57 || j >= (*((_DWORD *)this + 1209) - v57) >> 2 )
              invalid_parameter_noinfo();
            a2 = 1;
            a4 = 0;
            a3 = 2;
            (**v58)(
              v58,
              (char *)this + 1088,
              (char *)this + 1608,
              *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 1208) + 4 * j) + 726));
          }
        }
      }
    }
  }
  if ( *((_DWORD *)this + 268) )
  {
    v39 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v39 + 427) + 156))(
      *((_DWORD *)v39 + 427),
      *((_DWORD *)this + 268));
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 268) + 8))(*((_DWORD *)this + 268));
  }
  v40 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v40 + 427) + 148))(
    *((_DWORD *)v40 + 427),
    0,
    *((_DWORD *)this + 269));
  v41 = *((_DWORD *)this + 269);
  if ( v41 )
  {
    (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v41 + 8))(*((_DWORD *)this + 269));
    *((_DWORD *)this + 269) = 0;
  }
  return (struct IDirect3DTexture9 **)((char *)this + 1080);
}
