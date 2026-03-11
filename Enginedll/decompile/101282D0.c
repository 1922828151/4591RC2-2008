/*
 * func-name: ?RenderShadowMap@ShadowEngine@@IAEXPAVLight@@PAVCamera@@@Z
 * func-address: 0x101282d0
 * callers: 0x101286c0
 * callees: 0x10055320, 0x100dd990, 0x100ddae0, 0x100e1d90, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10121e80, 0x10122050, 0x10127b40, 0x10127cb0, 0x101280a0, 0x101a2516
 */

void __userpurge ShadowEngine::RenderShadowMap(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        struct Light *a4,
        struct Camera *a5)
{
  int v6; // eax
  float *v7; // edi
  Shader *v8; // ebx
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // ebp
  void (__thiscall **v12)(struct RenderDevice *, float *); // edi
  float *Projection; // eax
  struct RenderDevice *v14; // ebp
  void (__thiscall **v15)(struct RenderDevice *, float *); // edi
  float *View; // eax
  struct RenderDevice *v17; // eax
  int v18; // ecx
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  struct RenderDevice *v22; // eax
  struct RenderDevice *v23; // eax
  unsigned int i; // edi
  int v25; // ecx
  struct RenderDevice *v26; // eax
  struct RenderDevice *v27; // eax
  struct RenderDevice *v28; // eax
  struct RenderDevice *v29; // eax
  struct RenderDevice *v30; // eax
  struct RenderDevice *v31; // eax
  struct RenderDevice *v32; // eax
  struct RenderDevice *v33; // eax
  float v36; // [esp+44h] [ebp-F8h]
  float v37; // [esp+44h] [ebp-F8h]
  float v38; // [esp+54h] [ebp-E8h]
  float v39; // [esp+58h] [ebp-E4h]
  float v40; // [esp+5Ch] [ebp-E0h]
  ShadowEngine *v41; // [esp+6Ch] [ebp-D0h]
  _DWORD v42[3]; // [esp+70h] [ebp-CCh] BYREF
  int v43; // [esp+7Ch] [ebp-C0h] BYREF
  float v44[15]; // [esp+80h] [ebp-BCh] BYREF
  _BYTE v45[12]; // [esp+BCh] [ebp-80h] BYREF
  _BYTE v46[64]; // [esp+C8h] [ebp-74h] BYREF
  float v47[13]; // [esp+108h] [ebp-34h] BYREF

  v6 = *((_DWORD *)a4 + 312);
  if ( v6 )
  {
    if ( (*((_DWORD *)a4 + 313) - v6) >> 2 )
    {
      v38 = *((float *)a5 + 88) - *((float *)a4 + 214);
      v39 = *((float *)a5 + 89) - *((float *)a4 + 215);
      v40 = *((float *)a5 + 90) - *((float *)a4 + 216);
      v7 = (float *)LODManager::Instance();
      v36 = v38 * v38 + v39 * v39 + v40 * v40;
      v37 = sqrt(v36);
      if ( *((float *)a4 + 68) * *v7 >= v37 )
      {
        v8 = *(Shader **)(*((_DWORD *)BatchRenderer::Instance() + 263) + 152);
        if ( *((_DWORD *)a4 + 357) == 2 )
          Shader::SetTechnique(v8, (int)v8, a2, (int)v7, "RenderShadow");
        else
          Shader::SetTechnique(v8, (int)v8, a2, (int)v7, "RenderOmniShadow");
        sub_10127B40(*((_DWORD *)a4 + 315));
        v9 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int *, int, int, int))(*(_DWORD *)v9 + 480))(
          v9,
          &v43,
          a2,
          a1,
          a3);
        v10 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v10 + 468))(v10, v46);
        v11 = RenderDevice::Instance();
        v12 = (void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v11 + 476);
        Projection = Light::GetProjection((float *)a4, v47);
        (*v12)(v11, Projection);
        v14 = RenderDevice::Instance();
        v15 = (void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v14 + 464);
        View = Light::GetView((int)a4, v47);
        (*v15)(v14, View);
        v17 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v17 + 432))(v17, 28, 0);
        Shader::Begin(v8, 0);
        Shader::BeginPass(v8, 0);
        if ( *((float *)RenderDevice::Instance() + 411) >= 3.0 )
        {
          v18 = *((_DWORD *)a4 + 315);
          v42[0] = 0;
          v42[1] = 0;
          v42[2] = (__int64)(double)*(int *)(v18 + 4);
          v43 = (__int64)(double)*(int *)(v18 + 4);
          v44[0] = 0.0;
          v44[1] = 1.0;
          v19 = RenderDevice::Instance();
          (*(void (__stdcall **)(_DWORD, _DWORD *))(**((_DWORD **)v19 + 427) + 188))(*((_DWORD *)v19 + 427), v42);
          v20 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v20 + 432))(v20, 195, 0.00039999999);
          v21 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v21 + 432))(v21, 175, 5.0);
          v22 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v22 + 432))(v22, 168, 0);
        }
        v23 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v23 + 432))(v23, 15, 0);
        for ( i = 0; ; ++i )
        {
          v25 = *((_DWORD *)a4 + 312);
          if ( !v25 || i >= (*((_DWORD *)a4 + 313) - v25) >> 2 )
            break;
          ShadowEngine::RenderShadowItem(
            v41,
            *(struct ModelFrame ***)(*(_DWORD *)(*((_DWORD *)a4 + 312) + 4 * i) + 308),
            v8);
        }
        v26 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v26 + 432))(v26, 168, -1);
        v27 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v27 + 92))(v27);
        Shader::EndPass(v8);
        Shader::End(v8);
        sub_10127CB0(*((_DWORD **)a4 + 315));
        v28 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v28 + 476))(v28, v44);
        v29 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v29 + 464))(v29, v45);
        v30 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v30 + 432))(v30, 168, -1);
        v31 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v31 + 432))(v31, 28, 0);
        v32 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v32 + 432))(v32, 195, 0.0);
        v33 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v33 + 432))(v33, 175, 0.0);
      }
    }
  }
}
