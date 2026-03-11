/*
 * func-name: ?RenderEffect@PostProcessEffect@@UAEXXZ
 * func-address: 0x101077c0
 * callers: none
 * callees: 0x10106790, 0x10106b20, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10120900, 0x10121a70, 0x10122050
 */

void __usercall PostProcessEffect::RenderEffect(PostProcessEffect *this@<ecx>, int a2@<edi>)
{
  struct PostProcess *v3; // eax
  const char *v4; // eax
  int v5; // ecx
  struct PostProcess *v6; // eax
  int v7; // edi
  struct PostProcess *v8; // eax
  struct PostProcess *v9; // eax
  int v10; // edi
  struct PostProcess *v11; // eax
  struct PostProcess *v12; // eax
  int v13; // edi
  struct PostProcess *v14; // eax
  _DWORD *v15; // ebp
  void (__stdcall **v16)(_DWORD *, const char *, _DWORD); // edi
  struct PostProcess *v17; // eax
  _DWORD *v18; // ebp
  void (__stdcall **v19)(_DWORD *, const char *, _DWORD); // edi
  struct PostProcess *v20; // eax
  int v21; // edi
  _DWORD *v22; // ebp
  struct RenderDevice *v23; // eax
  struct PostProcess *v24; // eax
  struct RenderDevice *v25; // eax
  _DWORD *v26; // ebp
  void (__stdcall **v27)(_DWORD *, const char *, _DWORD); // edi
  struct PostProcess *v28; // eax
  struct RenderDevice *v29; // eax
  struct RenderDevice *v30; // ecx
  void *v31; // eax
  struct RenderDevice *v32; // ecx
  struct RenderDevice *v33; // eax
  struct RenderDevice *v34; // ecx
  struct RenderDevice *v35; // eax
  BOOL v36; // edi
  struct PostProcess *v37; // eax
  int v38; // eax
  struct RenderDevice *v39; // eax
  int v40; // eax
  int v41; // eax
  struct RenderDevice *v42; // eax
  BOOL v43; // edi
  struct PostProcess *v44; // eax
  int v45; // eax
  struct RenderDevice *v46; // eax
  int v47; // eax
  int v48; // eax
  struct RenderDevice *v49; // eax
  BOOL v50; // edi
  struct PostProcess *v51; // eax
  int v52; // eax
  struct RenderDevice *v53; // eax
  int v54; // eax
  int v55; // eax
  int v56; // eax
  unsigned int i; // edi
  float v58; // ecx
  float v59; // edx
  float v60; // eax
  PostProcess *v61; // eax
  struct RenderDevice *v62; // eax
  int v63; // [esp+C0h] [ebp-18h] BYREF
  unsigned int v64; // [esp+C4h] [ebp-14h] BYREF
  float v65; // [esp+C8h] [ebp-10h]
  float v66; // [esp+CCh] [ebp-Ch]
  float v67; // [esp+D0h] [ebp-8h]
  float v68; // [esp+D4h] [ebp-4h]

  if ( *((float *)RenderDevice::Instance() + 411) >= 2.0 )
  {
    if ( !*((_BYTE *)this + 12) || (v3 = PostProcess::Instance(), *((_BYTE *)v3 + 1)) && *((_DWORD *)v3 + 3) )
    {
      v4 = (const char *)*((_DWORD *)this + 2);
      v5 = *((_DWORD *)this + 1);
      v63 = 0;
      Shader::SetTechnique(*(Shader **)(v5 + 152), v4);
      (*(void (__stdcall **)(_DWORD, unsigned int *, _DWORD, int))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 152)
                                                                               + 16)
                                                                 + 252))(
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16),
        &v64,
        0,
        a2);
      v6 = PostProcess::Instance();
      if ( *((_DWORD *)v6 + *((_DWORD *)v6 + 9) + 7) && *((_DWORD *)this + 19) )
      {
        v7 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
        v8 = PostProcess::Instance();
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v7 + 208))(
          v7,
          *((_DWORD *)this + 19),
          *((_DWORD *)v8 + *((_DWORD *)v8 + 9) + 7));
      }
      v9 = PostProcess::Instance();
      if ( *((_DWORD *)v9 + *((_DWORD *)v9 + 12) + 10) && *((_DWORD *)this + 20) )
      {
        v10 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
        v11 = PostProcess::Instance();
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 208))(
          v10,
          *((_DWORD *)this + 20),
          *((_DWORD *)v11 + *((_DWORD *)v11 + 12) + 10));
      }
      v12 = PostProcess::Instance();
      if ( *((_DWORD *)v12 + *((_DWORD *)v12 + 15) + 13) && *((_DWORD *)this + 21) )
      {
        v13 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
        v14 = PostProcess::Instance();
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v13 + 208))(
          v13,
          *((_DWORD *)this + 21),
          *((_DWORD *)v14 + *((_DWORD *)v14 + 15) + 13));
      }
      if ( *((_BYTE *)this + 13) )
      {
        v15 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
        v16 = (void (__stdcall **)(_DWORD *, const char *, _DWORD))(*v15 + 208);
        v17 = PostProcess::Instance();
        (*v16)(v15, "tVelocityBuffer", *((_DWORD *)v17 + 3));
        v18 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
        v19 = (void (__stdcall **)(_DWORD *, const char *, _DWORD))(*v18 + 208);
        v20 = PostProcess::Instance();
        (*v19)(v18, "tLastVelocityBuffer", *((_DWORD *)v20 + 4));
        v21 = *((_DWORD *)PostProcess::Instance() + 3);
        v22 = (_DWORD *)((char *)PostProcess::Instance() + 16);
        *((_DWORD *)PostProcess::Instance() + 3) = *v22;
        *((_DWORD *)PostProcess::Instance() + 4) = v21;
        v23 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, unsigned int *))(**((_DWORD **)v23 + 427) + 152))(
          *((_DWORD *)v23 + 427),
          0,
          &v64);
        v24 = PostProcess::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, int *))(**((_DWORD **)v24 + 5) + 72))(*((_DWORD *)v24 + 5), 0, &v63);
        v25 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v25 + 427) + 148))(*((_DWORD *)v25 + 427), 0, v63);
      }
      if ( *((_BYTE *)this + 14) )
      {
        v26 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
        v27 = (void (__stdcall **)(_DWORD *, const char *, _DWORD))(*v26 + 208);
        v28 = PostProcess::Instance();
        (*v27)(v26, "tVelocityBuffer", *((_DWORD *)v28 + 5));
      }
      if ( *(_BYTE *)PostProcess::Instance() )
      {
        if ( 1.0 == *((float *)this + 22) )
        {
          v29 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v29 + 184))(v29);
          v30 = RenderDevice::Instance();
          v31 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v30 + 192))(v30);
        }
        else
        {
          v32 = RenderDevice::Instance();
          v31 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v32 + 204))(v32);
        }
      }
      else
      {
        if ( 1.0 == *((float *)this + 22) )
        {
          if ( byte_11240DF0 )
          {
            v33 = RenderDevice::Instance();
            (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v33 + 196))(v33);
          }
          byte_11240DF0 = 1;
        }
        v34 = RenderDevice::Instance();
        v31 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v34 + 200))(v34);
      }
      Shader::SetColorBuffer(*(Shader **)(*((_DWORD *)this + 1) + 152), v31);
      if ( 0.125 == *((float *)this + 22) )
      {
        v35 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, unsigned int *))(**((_DWORD **)v35 + 427) + 152))(
          *((_DWORD *)v35 + 427),
          0,
          &v64);
        v36 = *((_DWORD *)PostProcess::Instance() + 9) == 0;
        *((_DWORD *)PostProcess::Instance() + 9) = v36;
        v37 = PostProcess::Instance();
        v38 = *((_DWORD *)v37 + *((_DWORD *)v37 + 9) + 7);
        (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v38 + 72))(v38, 0, &v63);
        v39 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v39 + 427) + 148))(*((_DWORD *)v39 + 427), 0, v63);
        if ( *((_BYTE *)this + 108) || *((_BYTE *)this + 109) || *((_BYTE *)this + 110) )
        {
          (*(void (__stdcall **)(_DWORD, const char *, char *, int))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1)
                                                                                             + 152)
                                                                                 + 16)
                                                                   + 80))(
            *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16),
            "g_avSampleOffsets",
            (char *)this + 112,
            128);
          v41 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
          (*(void (__stdcall **)(int, const char *, char *, int))(*(_DWORD *)v41 + 80))(
            v41,
            "g_avSampleWeights",
            (char *)this + 240,
            256);
        }
        else
        {
          v40 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
          (*(void (__stdcall **)(int, const char *, void *, int))(*(_DWORD *)v40 + 80))(
            v40,
            "g_avSampleOffsets",
            &unk_11240EF8,
            128);
        }
      }
      else if ( 0.25 == *((float *)this + 22) )
      {
        v42 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, unsigned int *))(**((_DWORD **)v42 + 427) + 152))(
          *((_DWORD *)v42 + 427),
          0,
          &v64);
        v43 = *((_DWORD *)PostProcess::Instance() + 12) == 0;
        *((_DWORD *)PostProcess::Instance() + 12) = v43;
        v44 = PostProcess::Instance();
        v45 = *((_DWORD *)v44 + *((_DWORD *)v44 + 12) + 10);
        (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v45 + 72))(v45, 0, &v63);
        v46 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v46 + 427) + 148))(*((_DWORD *)v46 + 427), 0, v63);
        if ( *((_BYTE *)this + 108) || *((_BYTE *)this + 109) || *((_BYTE *)this + 110) )
        {
          (*(void (__stdcall **)(_DWORD, const char *, char *, int))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1)
                                                                                             + 152)
                                                                                 + 16)
                                                                   + 80))(
            *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16),
            "g_avSampleOffsets",
            (char *)this + 112,
            128);
          v48 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
          (*(void (__stdcall **)(int, const char *, char *, int))(*(_DWORD *)v48 + 80))(
            v48,
            "g_avSampleWeights",
            (char *)this + 240,
            256);
        }
        else
        {
          v47 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
          (*(void (__stdcall **)(int, const char *, void *, int))(*(_DWORD *)v47 + 80))(
            v47,
            "g_avSampleOffsets",
            &unk_11240E78,
            128);
        }
      }
      else if ( 0.5 == *((float *)this + 22) )
      {
        v49 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, unsigned int *))(**((_DWORD **)v49 + 427) + 152))(
          *((_DWORD *)v49 + 427),
          0,
          &v64);
        v50 = *((_DWORD *)PostProcess::Instance() + 15) == 0;
        *((_DWORD *)PostProcess::Instance() + 15) = v50;
        v51 = PostProcess::Instance();
        v52 = *((_DWORD *)v51 + *((_DWORD *)v51 + 15) + 13);
        (*(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)v52 + 72))(v52, 0, &v63);
        v53 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v53 + 427) + 148))(*((_DWORD *)v53 + 427), 0, v63);
        if ( *((_BYTE *)this + 108) || *((_BYTE *)this + 109) || *((_BYTE *)this + 110) )
        {
          (*(void (__stdcall **)(_DWORD, const char *, char *, int))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1)
                                                                                             + 152)
                                                                                 + 16)
                                                                   + 80))(
            *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16),
            "g_avSampleOffsets",
            (char *)this + 112,
            128);
          v55 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
          (*(void (__stdcall **)(int, const char *, char *, int))(*(_DWORD *)v55 + 80))(
            v55,
            "g_avSampleWeights",
            (char *)this + 240,
            256);
        }
        else
        {
          v54 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
          (*(void (__stdcall **)(int, const char *, void *, int))(*(_DWORD *)v54 + 80))(
            v54,
            "g_avSampleOffsets",
            &unk_11240DF8,
            128);
        }
      }
      else if ( *((_BYTE *)this + 108) || *((_BYTE *)this + 109) || *((_BYTE *)this + 110) )
      {
        (*(void (__stdcall **)(_DWORD, const char *, char *, int))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 152)
                                                                               + 16)
                                                                 + 80))(
          *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16),
          "g_avSampleOffsets",
          (char *)this + 112,
          128);
        v56 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16);
        (*(void (__stdcall **)(int, const char *, char *, int))(*(_DWORD *)v56 + 80))(
          v56,
          "g_avSampleWeights",
          (char *)this + 240,
          256);
      }
      (*(void (__stdcall **)(_DWORD, const char *))(**(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16) + 120))(
        *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 152) + 16),
        "fSeconds");
      for ( i = 0; i < v64; ++i )
      {
        Shader::BeginPass(*(Shader **)(*((_DWORD *)this + 1) + 152), i);
        Shader::CommitChanges(*(Shader **)(*((_DWORD *)this + 1) + 152));
        v58 = *((float *)this + 24);
        v59 = *((float *)this + 25);
        v65 = *((float *)this + 23);
        v60 = *((float *)this + 26);
        v66 = v58;
        v67 = v59;
        v68 = v60;
        v61 = PostProcess::Instance();
        PostProcess::DrawFullScreenQuad(v61, v65, v66, v67, v68);
        Shader::EndPass(*(Shader **)(*((_DWORD *)this + 1) + 152));
      }
      Shader::End(*(Shader **)(*((_DWORD *)this + 1) + 152));
      if ( v63 )
      {
        v62 = RenderDevice::Instance();
        (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v62 + 427) + 148))(*((_DWORD *)v62 + 427), 0, v63);
        if ( v63 )
          (*(void (__stdcall **)(int))(*(_DWORD *)v63 + 8))(v63);
      }
    }
  }
}
