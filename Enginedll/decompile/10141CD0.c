/*
 * func-name: ?CreateMeshActor@NxPhysics@@QAEPAVNxActor@@PAVActor@@JAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVMatrix@@W4PhysicsGroup@@@Z
 * func-address: 0x10141cd0
 * callers: 0x10116db0
 * callees: 0x10001330, 0x10097220, 0x100e2550, 0x10100c20, 0x10140eb0, 0x10140f00, 0x10141bd0, 0x101466a0, 0x101a251c
 */

int __thiscall NxPhysics::CreateMeshActor(int this, int a2, int a3, int a4, float *a5, int a6)
{
  int v8; // eax
  int TriangleMesh; // eax
  const char *v10; // eax
  float v11; // eax
  float v12; // eax
  float v13; // ecx
  float v14; // edi
  float v15; // eax
  float v16; // edx
  int NxActor; // edi
  float *v18; // eax
  float *v19; // eax
  float v20; // ecx
  float v21; // edx
  float v22[26]; // [esp+Ch] [ebp-15Ch] BYREF
  _DWORD v23[15]; // [esp+74h] [ebp-F4h] BYREF
  __int16 v24; // [esp+B0h] [ebp-B8h]
  __int16 v25; // [esp+B2h] [ebp-B6h]
  int v26; // [esp+B4h] [ebp-B4h]
  float v27; // [esp+B8h] [ebp-B0h]
  float v28; // [esp+BCh] [ebp-ACh]
  float v29; // [esp+C0h] [ebp-A8h]
  int v30; // [esp+C4h] [ebp-A4h]
  int v31; // [esp+C8h] [ebp-A0h]
  int v32; // [esp+CCh] [ebp-9Ch]
  int v33; // [esp+D0h] [ebp-98h]
  int v34; // [esp+D4h] [ebp-94h]
  int v35; // [esp+D8h] [ebp-90h]
  int v36; // [esp+DCh] [ebp-8Ch]
  int v37; // [esp+E0h] [ebp-88h]
  int v38; // [esp+E4h] [ebp-84h]
  int v39; // [esp+E8h] [ebp-80h]
  float v40[16]; // [esp+ECh] [ebp-7Ch] BYREF
  float v41[15]; // [esp+12Ch] [ebp-3Ch] BYREF

  if ( !*(_DWORD *)(this + 8) )
    return 0;
  v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(this + 8) + 40))(*(_DWORD *)(this + 8));
  LogPrintf("NxMesh: %d", v8);
  if ( !FindMedia(a4, (int)"Models", 0, 0) )
    return 0;
  TriangleMesh = NxPhysics::CreateTriangleMesh((_DWORD **)this, a4);
  if ( !TriangleMesh )
  {
    v10 = (const char *)std::string::c_str(a4);
    LogPrintf("Create NxMesh failed. %s", v10);
    return 0;
  }
  *(float *)&v23[2] = 1.0;
  v23[1] = 6;
  v23[0] = &NxTriangleMeshShapeDesc::`vftable';
  *(float *)&v23[3] = 0.0;
  v23[14] = 1179656;
  *(float *)&v23[4] = 0.0;
  v25 = 0;
  *(float *)&v23[5] = 0.0;
  v26 = 0;
  *(float *)&v23[7] = 0.0;
  v30 = 0;
  *(float *)&v23[8] = 0.0;
  v31 = 0;
  *(float *)&v23[9] = 0.0;
  v32 = 0;
  *(float *)&v23[13] = 0.0;
  v33 = 0;
  *(float *)&v23[12] = 0.0;
  v34 = 0;
  *(float *)&v23[11] = 0.0;
  v35 = 0;
  v36 = 0;
  v38 = 0;
  v39 = 0;
  *(float *)&v23[6] = 1.0;
  *(float *)&v23[10] = 1.0;
  v29 = -1.0;
  v28 = -1.0;
  v27 = 1.0;
  v37 = TriangleMesh;
  LODWORD(v41[14]) = 1;
  v24 = a6;
  memset(v22, 0, sizeof(v22));
  v11 = v22[22];
  v22[0] = 1.0;
  v22[1] = 0.0;
  v22[2] = 0.0;
  v22[12] = 0.0;
  v22[3] = 0.0;
  memset(&v22[14], 0, 14);
  v22[5] = 0.0;
  memset(&v22[18], 0, 12);
  v22[6] = 0.0;
  v22[7] = 0.0;
  v22[11] = 0.0;
  v22[10] = 0.0;
  v22[9] = 0.0;
  v22[23] = v22[22];
  LODWORD(v22[21]) = 1;
  v22[4] = 1.0;
  v22[8] = 1.0;
  v22[13] = 1.0;
  if ( LODWORD(v22[24]) <= LODWORD(v22[22])
    && (!LODWORD(v22[22]) || (unsigned int)((LODWORD(v22[24]) - LODWORD(v22[22])) >> 2) < 2) )
  {
    v12 = COERCE_FLOAT(malloc(8u));
    v13 = v22[23];
    v14 = v12;
    v15 = v22[22];
    v16 = v14;
    if ( LODWORD(v22[22]) != LODWORD(v22[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v16) = *(_DWORD *)LODWORD(v15);
        LODWORD(v15) += 4;
        LODWORD(v16) += 4;
      }
      while ( LODWORD(v15) != LODWORD(v13) );
      v13 = v22[23];
      v15 = v22[22];
    }
    if ( v15 != 0.0 )
    {
      free((void *)LODWORD(v15));
      v13 = v22[23];
      v15 = v22[22];
    }
    LODWORD(v11) = LODWORD(v14) + 4 * ((LODWORD(v13) - LODWORD(v15)) >> 2);
    LODWORD(v22[24]) = LODWORD(v14) + 8;
    v22[23] = v11;
    v22[22] = v14;
  }
  *(_DWORD *)LODWORD(v11) = v23;
  LODWORD(v22[23]) += 4;
  NxActor = NxPhysics::CreateNxActor((_DWORD **)this, a2, a3, (int)v22, a6);
  if ( NxActor )
  {
    v18 = (float *)(a2 + 868);
    if ( !a2 )
      v18 = a5;
    sub_10001330(v40, v18);
    v19 = (float *)(a2 + 856);
    if ( !a2 )
      v19 = a5 + 12;
    v20 = v19[1];
    v40[12] = *v19;
    v21 = v19[2];
    v40[13] = v20;
    v40[14] = v21;
    NxHelper::ToNxMat34(v41, v40);
    (*(void (__thiscall **)(int, float *))(*(_DWORD *)NxActor + 20))(NxActor, v41);
    NxPhysics::SetActorCollisionGroup(NxActor, a6);
  }
  sub_101466A0(v22);
  return NxActor;
}
