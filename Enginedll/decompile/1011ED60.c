/*
 * func-name: ?ReadMeshBinary_Mem@ILoad@@QAE_NAAPAEAAPAUModelFrame@@H@Z
 * func-address: 0x1011ed60
 * callers: 0x10005d50, 0x10044cf0, 0x1009e630
 * callees: 0x10011ca0, 0x1002ff40, 0x10077be0, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x100977a0, 0x1009dd60, 0x100e2550, 0x10116f70, 0x101189f0, 0x1011b870, 0x101a2500, 0x101a2534
 */

bool __thiscall ILoad::ReadMeshBinary_Mem(ILoad *this, unsigned __int8 **a2, struct ModelFrame **a3, int a4)
{
  bool result; // al
  LARGE_INTEGER *v6; // eax
  unsigned __int8 v7; // cl
  unsigned __int8 *v8; // eax
  signed int v9; // edi
  struct RenderDevice *v10; // eax
  struct CollisionMesh *v11; // esi
  struct Mesh *v12; // ebx
  _DWORD *v13; // eax
  struct CollisionMesh *v14; // eax
  float *v15; // esi
  CRETimer *v16; // eax
  double v17; // st7
  CRETimer *v18; // eax
  int v19; // [esp+4h] [ebp-18h]
  int v21; // [esp+20h] [ebp+4h]

  LogPrintf("MemoryCache: Load buffer file ");
  if ( *a2 )
  {
    v6 = (LARGE_INTEGER *)REGetGlobalTimer();
    CRETimer::StartMiniTimer(v6);
    v7 = **a2;
    v8 = *a2 + 1;
    *a2 = v8;
    v21 = 1;
    if ( v7 >= 0x17u )
    {
      v21 = *(_DWORD *)v8;
      *a2 = v8 + 4;
    }
    v9 = 0;
    if ( v21 <= 0 )
    {
LABEL_18:
      v15 = (float *)((char *)Profiler::Get() + 152);
      v16 = REGetGlobalTimer();
      v17 = CRETimer::StopMiniTimer(v16);
      result = 1;
      *v15 = v17 / 1000.0 + *v15;
    }
    else
    {
      v19 = v7;
      while ( 1 )
      {
        v10 = RenderDevice::Instance();
        v11 = 0;
        v12 = (struct Mesh *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v10 + 8))(v10);
        if ( !v9 && ModelFrame::UseCollisionMesh(*a3) && !*((_DWORD *)*a3 + 113) )
        {
          v13 = operator new(0x2Cu);
          if ( v13 )
            v14 = (struct CollisionMesh *)sub_10011CA0(v13);
          else
            v14 = 0;
          v11 = v14;
        }
        if ( !ILoad::ReadMeshPart_Mem(this, v12, a2, v19, a4, v11) )
          break;
        if ( v11 )
          *((_DWORD *)*a3 + 113) = v11;
        ModelFrame::SetLOD(*a3, v12, v9++);
        if ( v9 >= v21 )
          goto LABEL_18;
      }
      v18 = REGetGlobalTimer();
      CRETimer::StopMiniTimer(v18);
      SeriousWarning("Mesh buf is corrupted. Skipping...");
      if ( v11 )
      {
        sub_10077BE0((int)v11);
        operator delete(v11);
      }
      return 0;
    }
  }
  else
  {
    SeriousWarning("Cannot open mesh. It does not appear to exist at specified location.");
    return 0;
  }
  return result;
}
