/*
 * func-name: ?ReadMeshBinary@ILoad@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AAPAUModelFrame@@H@Z
 * func-address: 0x1011ef20
 * callers: 0x10005d50, 0x100384a0, 0x10044cf0, 0x1009e630
 * callees: 0x10011ca0, 0x1002ff40, 0x10077be0, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100977a0, 0x1009dd60, 0x100e2550, 0x10116f70, 0x101189f0, 0x1011d270, 0x101a2500, 0x101a2534
 */

char __thiscall ILoad::ReadMeshBinary(
        ILoad *this,
        char a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ModelFrame **a9,
        int a10)
{
  signed int v10; // edi
  const char *v11; // eax
  const char *v12; // eax
  FILE *v13; // ebx
  const char *v14; // eax
  LARGE_INTEGER *v16; // eax
  struct RenderDevice *v17; // eax
  struct CollisionMesh *v18; // esi
  struct Mesh *v19; // ebp
  _DWORD *v20; // eax
  struct CollisionMesh *v21; // eax
  float *v22; // esi
  CRETimer *v23; // eax
  double v24; // st7
  CRETimer *v25; // eax
  const char *v26; // eax
  unsigned __int8 Buffer; // [esp+Bh] [ebp-19h] BYREF
  int v28; // [esp+Ch] [ebp-18h] BYREF
  ILoad *v29; // [esp+10h] [ebp-14h]
  _DWORD *v30; // [esp+14h] [ebp-10h]
  int v31; // [esp+20h] [ebp-4h]

  v29 = this;
  v10 = 0;
  v31 = 0;
  v11 = (const char *)std::string::c_str(&a2);
  LogPrintf("Runtime: Load buffer file %s", v11);
  v12 = (const char *)std::string::c_str(&a2);
  v13 = fopen(v12, "rb");
  if ( v13 )
  {
    v16 = (LARGE_INTEGER *)REGetGlobalTimer();
    CRETimer::StartMiniTimer(v16);
    fread(&Buffer, 1u, 1u, v13);
    v28 = 1;
    if ( Buffer >= 0x17u )
      fread(&v28, 4u, 1u, v13);
    if ( v28 <= 0 )
    {
LABEL_17:
      fclose(v13);
      v22 = (float *)((char *)Profiler::Get() + 152);
      v23 = REGetGlobalTimer();
      v24 = CRETimer::StopMiniTimer(v23);
      v31 = -1;
      *v22 = v24 / 1000.0 + *v22;
      std::string::~string(&a2);
      return 1;
    }
    else
    {
      while ( 1 )
      {
        v17 = RenderDevice::Instance();
        v18 = 0;
        v19 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v17 + 8))(v17);
        if ( !v10 && ModelFrame::UseCollisionMesh(*a9) && !*((_DWORD *)*a9 + 113) )
        {
          v20 = operator new(0x2Cu);
          v30 = v20;
          LOBYTE(v31) = 1;
          if ( v20 )
            v21 = (struct CollisionMesh *)sub_10011CA0(v20);
          else
            v21 = 0;
          LOBYTE(v31) = 0;
          v18 = v21;
        }
        if ( !ILoad::ReadMeshPart(v29, v19, v13, Buffer, a10, v18) )
          break;
        if ( v18 )
          *((_DWORD *)*a9 + 113) = v18;
        ModelFrame::SetLOD(*a9, v19, v10++);
        if ( v10 >= v28 )
          goto LABEL_17;
      }
      v25 = REGetGlobalTimer();
      CRETimer::StopMiniTimer(v25);
      v26 = (const char *)std::string::c_str(&a2);
      SeriousWarning("Mesh buf '%s' is corrupted. Skipping...", v26);
      if ( v18 )
      {
        sub_10077BE0((int)v18);
        operator delete(v18);
      }
      v31 = -1;
      std::string::~string(&a2);
      return 0;
    }
  }
  else
  {
    v14 = (const char *)std::string::c_str(&a2);
    SeriousWarning("Cannot open mesh '%s'. It does not appear to exist at specified location.", v14);
    v31 = -1;
    std::string::~string(&a2);
    return 0;
  }
}
