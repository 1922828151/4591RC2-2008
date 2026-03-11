/*
 * func-name: ?CreateMeshActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JAAVModel@@ABVMatrix@@W4PhysicsGroup@@@Z
 * func-address: 0x101438a0
 * callers: 0x1004d5d0, 0x1004e070
 * callees: 0x1000bc40, 0x10100c20, 0x10140eb0, 0x10141bd0, 0x101430d0, 0x101a251c
 */

int __thiscall NxPhysics::CreateMeshActor(_DWORD *this, int a2, int a3, ModelFrame **a4, const void *a5, int a6)
{
  _DWORD **v6; // ebp
  struct NxTriangleMesh *TriangleMesh; // eax
  struct NxTriangleMesh *v9; // esi
  float v10; // ecx
  float v11; // eax
  float v12; // ecx
  float v13; // ebp
  float v14; // eax
  float v15; // edx
  float v16; // edx
  int NxActor; // ebp
  float v18; // edx
  float v19; // eax
  float v21[26]; // [esp+Ch] [ebp-15Ch] BYREF
  _DWORD v22[15]; // [esp+74h] [ebp-F4h] BYREF
  __int16 v23; // [esp+B0h] [ebp-B8h]
  __int16 v24; // [esp+B2h] [ebp-B6h]
  int v25; // [esp+B4h] [ebp-B4h]
  float v26; // [esp+B8h] [ebp-B0h]
  float v27; // [esp+BCh] [ebp-ACh]
  float v28; // [esp+C0h] [ebp-A8h]
  int v29; // [esp+C4h] [ebp-A4h]
  int v30; // [esp+C8h] [ebp-A0h]
  int v31; // [esp+CCh] [ebp-9Ch]
  int v32; // [esp+D0h] [ebp-98h]
  int v33; // [esp+D4h] [ebp-94h]
  int v34; // [esp+D8h] [ebp-90h]
  int v35; // [esp+DCh] [ebp-8Ch]
  struct NxTriangleMesh *v36; // [esp+E0h] [ebp-88h]
  int v37; // [esp+E4h] [ebp-84h]
  int v38; // [esp+E8h] [ebp-80h]
  float v39[16]; // [esp+ECh] [ebp-7Ch] BYREF
  float v40[15]; // [esp+12Ch] [ebp-3Ch] BYREF

  v6 = (_DWORD **)this;
  if ( !this[2] )
    return 0;
  TriangleMesh = NxPhysics::CreateTriangleMesh((NxPhysics *)this, a4);
  v9 = TriangleMesh;
  if ( !TriangleMesh )
    return 0;
  *(float *)&v22[2] = 1.0;
  v22[1] = 6;
  v22[0] = &NxTriangleMeshShapeDesc::`vftable';
  *(float *)&v22[3] = 0.0;
  v22[14] = 1179656;
  *(float *)&v22[4] = 0.0;
  v24 = 0;
  *(float *)&v22[5] = 0.0;
  v25 = 0;
  *(float *)&v22[7] = 0.0;
  v29 = 0;
  *(float *)&v22[8] = 0.0;
  v30 = 0;
  *(float *)&v22[9] = 0.0;
  v31 = 0;
  *(float *)&v22[13] = 0.0;
  v32 = 0;
  *(float *)&v22[12] = 0.0;
  v33 = 0;
  *(float *)&v22[11] = 0.0;
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v38 = 0;
  *(float *)&v22[6] = 1.0;
  *(float *)&v22[10] = 1.0;
  v28 = -1.0;
  v27 = -1.0;
  v26 = 1.0;
  LODWORD(v40[14]) = 1;
  v36 = TriangleMesh;
  v23 = a6;
  memset(v21, 0, sizeof(v21));
  v21[0] = 1.0;
  v10 = v21[22];
  v21[1] = 0.0;
  v21[2] = 0.0;
  v21[3] = 0.0;
  v21[12] = 0.0;
  v21[5] = 0.0;
  memset(&v21[14], 0, 14);
  v21[6] = 0.0;
  memset(&v21[18], 0, 12);
  v21[7] = 0.0;
  v21[11] = 0.0;
  v21[10] = 0.0;
  v21[9] = 0.0;
  v21[23] = v21[22];
  v21[4] = 1.0;
  LODWORD(v21[21]) = 1;
  v21[8] = 1.0;
  v21[13] = 1.0;
  if ( LODWORD(v21[24]) <= LODWORD(v21[22])
    && (!LODWORD(v21[22]) || (unsigned int)((LODWORD(v21[24]) - LODWORD(v21[22])) >> 2) < 2) )
  {
    v11 = COERCE_FLOAT(malloc(8u));
    v12 = v21[23];
    v13 = v11;
    v14 = v21[22];
    v15 = v13;
    if ( LODWORD(v21[22]) != LODWORD(v21[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v15) = *(_DWORD *)LODWORD(v14);
        LODWORD(v14) += 4;
        LODWORD(v15) += 4;
      }
      while ( LODWORD(v14) != LODWORD(v12) );
      v12 = v21[23];
      v14 = v21[22];
    }
    if ( v14 != 0.0 )
    {
      free((void *)LODWORD(v14));
      v12 = v21[23];
      v14 = v21[22];
    }
    LODWORD(v16) = LODWORD(v13) + 8;
    LODWORD(v10) = LODWORD(v13) + 4 * ((LODWORD(v12) - LODWORD(v14)) >> 2);
    v21[22] = v13;
    v6 = (_DWORD **)this;
    v21[24] = v16;
    v21[23] = v10;
  }
  *(_DWORD *)LODWORD(v10) = v22;
  LODWORD(v21[23]) += 4;
  NxActor = NxPhysics::CreateNxActor(v6, a2, a3, (int)v21, a6);
  (*(void (__thiscall **)(struct NxTriangleMesh *))(*(_DWORD *)v9 + 60))(v9);
  (*(void (__thiscall **)(_DWORD, struct NxTriangleMesh *))(*(_DWORD *)this[2] + 36))(this[2], v9);
  (*(void (__thiscall **)(struct NxTriangleMesh *))(*(_DWORD *)v9 + 60))(v9);
  if ( NxActor )
  {
    sub_1000BC40(v39);
    if ( a2 )
    {
      v18 = *(float *)(a2 + 860);
      qmemcpy(v39, (const void *)(a2 + 868), sizeof(v39));
      v19 = *(float *)(a2 + 864);
      v39[12] = *(float *)(a2 + 856);
      v39[13] = v18;
      v39[14] = v19;
    }
    else
    {
      qmemcpy(v39, a5, sizeof(v39));
    }
    NxHelper::ToNxMat34(v40, v39);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)NxActor + 20))(NxActor, v40);
    NxPhysics::SetActorCollisionGroup(NxActor, a6);
  }
  if ( LODWORD(v21[22]) )
    free((void *)LODWORD(v21[22]));
  return NxActor;
}
