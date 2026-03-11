/*
 * func-name: ?DrawClouds@SkyController@@AAEXAAVVector@@@Z
 * func-address: 0x1012d660
 * callers: 0x1012e2b0
 * callees: 0x1009e3b0, 0x100e2b60, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x101210f0, 0x101218a0, 0x10121a70, 0x10121e80, 0x10122050, 0x10124d90, 0x1012d310, 0x101374b0, 0x101786e0, 0x101a251c
 */

void __userpurge SkyController::DrawClouds(SkyController *this@<ecx>, int a2@<ebx>, int a3@<ebp>, struct Vector *a4)
{
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  double BiasCloudIntensity; // st7
  double v8; // st6
  int v9; // edx
  Shader *v10; // esi
  struct RenderDevice *v11; // eax
  void *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  float FogDistance; // [esp+14h] [ebp-74h]
  float v19; // [esp+18h] [ebp-70h]
  float v20; // [esp+28h] [ebp-60h]
  float v21; // [esp+2Ch] [ebp-5Ch]
  float v22; // [esp+38h] [ebp-50h] BYREF
  float v23; // [esp+3Ch] [ebp-4Ch]
  float v24; // [esp+40h] [ebp-48h]
  float v25; // [esp+44h] [ebp-44h]
  float v26[16]; // [esp+48h] [ebp-40h] BYREF

  v5 = RenderDevice::Instance();
  if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 132))(v5) )
  {
    v6 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 184))(v6);
    BiasCloudIntensity = SkyController::GetBiasCloudIntensity(this);
    v8 = *((float *)this + 275) * *((float *)SkyController::mySkySettings + 17);
  }
  else
  {
    BiasCloudIntensity = SkyController::GetBiasCloudIntensity(this);
    v8 = *((float *)this + 275) * *((float *)SkyController::mySkySettings + 18);
  }
  *((float *)this + 930) = BiasCloudIntensity * v8;
  v22 = *(float *)a4 + 0.0;
  v23 = *((float *)a4 + 1) - 12.0;
  v24 = *((float *)a4 + 2) + 0.0;
  memset(v26, 0, sizeof(v26));
  sub_101786E0(1.0);
  v9 = *((_DWORD *)this + 333);
  v26[15] = 1.0;
  (*(void (__thiscall **)(char *, float *, float *))(v9 + 28))((char *)this + 1332, v26, &v22);
  v10 = *(Shader **)(*((_DWORD *)this + 447) + 152);
  Shader::SetTechnique(v10, a2, a3, (int)this, *((const char **)this + 448));
  v11 = RenderDevice::Instance();
  v12 = (void *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v11 + 192))(v11);
  Shader::SetColorBuffer(v10, v12);
  Shader::SetWorld(v10, (const struct Matrix *)(*((_DWORD *)this + 410) + 164));
  Material::Apply(*((Material **)this + 447), 0);
  (*(void (__stdcall **)(_DWORD *, const char *, _DWORD))(**((_DWORD **)v10 + 4) + 120))(
    *((_DWORD **)v10 + 4),
    "AntiFogBias",
    *((float *)SkyController::mySkySettings + 19));
  Shader::Begin(v10, 0);
  Shader::BeginPass(v10, 0);
  v22 = 0.0;
  v23 = 0.0;
  v24 = 0.0;
  v25 = 0.0;
  v21 = 0.0;
  v20 = 2.0;
  v19 = 0.0;
  FogDistance = World::GetFogDistance(*((World **)this + 178));
  Shader::SetFog(
    v10,
    SLOBYTE(FogDistance),
    SLOBYTE(v19),
    COERCE_INT(0.0),
    COERCE_INT(0.0),
    COERCE_INT(0.0),
    SLOBYTE(v20),
    SLOBYTE(v21));
  v13 = RenderDevice::Instance();
  if ( !(*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 132))(v13) )
  {
    v14 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v14 + 432))(v14, 27, 1);
  }
  v15 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v15 + 432))(v15, 7, 0);
  v16 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v16 + 432))(v16, 14, 0);
  ModelFrame::Draw(*((ModelFrame **)this + 410));
  Shader::UnbindHDRTarget(v10);
  Shader::EndPass(v10);
  Shader::End(v10);
  memset(v26, 0, sizeof(v26));
  sub_101786E0(1.0);
  v26[15] = 1.0;
  Shader::SetWorld(v10, (const struct Matrix *)v26);
  v17 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v17 + 432))(v17, 27, 0);
}
