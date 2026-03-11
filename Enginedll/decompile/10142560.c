/*
 * func-name: ?CreateTriggerActor@NxPhysics@@QAEPAVNxActor@@ABVSphere@@JKPAVPhysicsTrigger_Callback@@W4PhysicsGroup@@@Z
 * func-address: 0x10142560
 * callers: none
 * callees: 0x10100b70, 0x10140eb0, 0x101a251c, 0x101a2534
 */

int __userpurge NxPhysics::CreateTriggerActor@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        float *a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  int v7; // ebp
  float v8; // eax
  float v9; // eax
  float v10; // ecx
  float v11; // edi
  float v12; // eax
  float v13; // edx
  int (__thiscall *v14)(float *, char *, int); // edx
  float *v15; // eax
  float *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // edi
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ebx
  float v25[26]; // [esp+8h] [ebp-16Ch] BYREF
  _DWORD v26[15]; // [esp+70h] [ebp-104h] BYREF
  __int16 v27; // [esp+ACh] [ebp-C8h]
  __int16 v28; // [esp+AEh] [ebp-C6h]
  int v29; // [esp+B0h] [ebp-C4h]
  float v30; // [esp+B4h] [ebp-C0h]
  float v31; // [esp+B8h] [ebp-BCh]
  float v32; // [esp+BCh] [ebp-B8h]
  int v33; // [esp+C0h] [ebp-B4h]
  int v34; // [esp+C4h] [ebp-B0h]
  int v35; // [esp+C8h] [ebp-ACh]
  int v36; // [esp+CCh] [ebp-A8h]
  int v37; // [esp+D0h] [ebp-A4h]
  int v38; // [esp+D4h] [ebp-A0h]
  int v39; // [esp+D8h] [ebp-9Ch]
  float v40; // [esp+DCh] [ebp-98h]
  void **v41; // [esp+E0h] [ebp-94h]
  int v42; // [esp+E4h] [ebp-90h]
  float v43; // [esp+E8h] [ebp-8Ch]
  float v44; // [esp+ECh] [ebp-88h]
  float v45; // [esp+F0h] [ebp-84h]
  float v46; // [esp+F4h] [ebp-80h]
  float v47; // [esp+F8h] [ebp-7Ch]
  float v48; // [esp+FCh] [ebp-78h]
  float v49; // [esp+100h] [ebp-74h]
  float v50; // [esp+104h] [ebp-70h]
  float v51; // [esp+108h] [ebp-6Ch]
  float v52; // [esp+10Ch] [ebp-68h]
  float v53; // [esp+110h] [ebp-64h]
  float v54; // [esp+114h] [ebp-60h]
  int v55; // [esp+118h] [ebp-5Ch]
  __int16 v56; // [esp+11Ch] [ebp-58h]
  __int16 v57; // [esp+11Eh] [ebp-56h]
  int v58; // [esp+120h] [ebp-54h]
  float v59; // [esp+124h] [ebp-50h]
  float v60; // [esp+128h] [ebp-4Ch]
  float v61; // [esp+12Ch] [ebp-48h]
  int v62; // [esp+130h] [ebp-44h]
  int v63; // [esp+134h] [ebp-40h]
  int v64; // [esp+138h] [ebp-3Ch]
  int v65; // [esp+13Ch] [ebp-38h]
  int v66; // [esp+140h] [ebp-34h]
  int v67; // [esp+144h] [ebp-30h]
  int v68; // [esp+148h] [ebp-2Ch]
  float v69; // [esp+14Ch] [ebp-28h]
  float v70[2]; // [esp+154h] [ebp-20h] BYREF
  char v71[12]; // [esp+15Ch] [ebp-18h] BYREF
  int v72; // [esp+170h] [ebp-4h]

  v43 = 1.0;
  v44 = 0.0;
  v45 = 0.0;
  v46 = 0.0;
  v7 = a1;
  v48 = 0.0;
  v49 = 0.0;
  v50 = 0.0;
  v54 = 0.0;
  v42 = 1;
  v53 = 0.0;
  v41 = &NxSphereShapeDesc::`vftable';
  v52 = 0.0;
  v55 = 1179656;
  v56 = 0;
  v47 = 1.0;
  v57 = 0;
  v51 = 1.0;
  v58 = 0;
  v62 = 0;
  v61 = -1.0;
  v63 = 0;
  v60 = -1.0;
  v64 = 0;
  v65 = 0;
  v59 = 1.0;
  v66 = 0;
  v69 = 1.0;
  v67 = 0;
  v68 = 0;
  *(float *)&v26[2] = 1.0;
  *(float *)&v26[6] = 1.0;
  v72 = 0;
  *(float *)&v26[10] = 1.0;
  v26[1] = 1;
  v26[0] = &NxSphereShapeDesc::`vftable';
  *(float *)&v26[3] = 0.0;
  v27 = 0;
  *(float *)&v26[4] = 0.0;
  v28 = 0;
  *(float *)&v26[5] = 0.0;
  v29 = 0;
  *(float *)&v26[7] = 0.0;
  v33 = 0;
  *(float *)&v26[8] = 0.0;
  v34 = 0;
  *(float *)&v26[9] = 0.0;
  v35 = 0;
  *(float *)&v26[13] = 0.0;
  v36 = 0;
  *(float *)&v26[12] = 0.0;
  v37 = 0;
  *(float *)&v26[11] = 0.0;
  v38 = 0;
  v39 = 0;
  v32 = -1.0;
  v31 = -1.0;
  v30 = 1.0;
  v40 = a3[4];
  v26[14] = 1179663;
  memset(v25, 0, sizeof(v25));
  v8 = v25[22];
  v25[13] = 0.0;
  v25[0] = 1.0;
  v25[12] = 0.0;
  v25[4] = 1.0;
  memset(&v25[14], 0, 14);
  v25[8] = 1.0;
  memset(&v25[18], 0, 12);
  v25[1] = 0.0;
  v25[2] = 0.0;
  v25[3] = 0.0;
  v25[5] = 0.0;
  v25[23] = v25[22];
  v25[6] = 0.0;
  LODWORD(v25[21]) = 1;
  v25[7] = 0.0;
  v25[11] = 0.0;
  v25[10] = 0.0;
  v25[9] = 0.0;
  LOBYTE(v72) = 2;
  if ( LODWORD(v25[24]) <= LODWORD(v25[22])
    && (!LODWORD(v25[22]) || (unsigned int)((LODWORD(v25[24]) - LODWORD(v25[22])) >> 2) < 2) )
  {
    v9 = COERCE_FLOAT(malloc(8u));
    v10 = v25[23];
    v11 = v9;
    v12 = v25[22];
    v13 = v11;
    if ( LODWORD(v25[22]) != LODWORD(v25[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v13) = *(_DWORD *)LODWORD(v12);
        LODWORD(v12) += 4;
        LODWORD(v13) += 4;
      }
      while ( LODWORD(v12) != LODWORD(v10) );
      v10 = v25[23];
      v12 = v25[22];
      v7 = a1;
    }
    if ( v12 != 0.0 )
    {
      free((void *)LODWORD(v12));
      v10 = v25[23];
      v12 = v25[22];
    }
    LODWORD(v8) = LODWORD(v11) + 4 * ((LODWORD(v10) - LODWORD(v12)) >> 2);
    LODWORD(v25[24]) = LODWORD(v11) + 8;
    v25[23] = v8;
    v25[22] = v11;
  }
  *(_DWORD *)LODWORD(v8) = v26;
  v14 = *(int (__thiscall **)(float *, char *, int))(*(_DWORD *)a3 + 8);
  LODWORD(v25[23]) += 4;
  v15 = (float *)v14(a3, v71, a2);
  v16 = NxHelper::ToNxVec3(v70, v15);
  v25[10] = *v16;
  v25[11] = v16[1];
  v25[12] = v16[2];
  v17 = operator new(0x10u);
  if ( v17 )
  {
    v17[2] = 4;
    v17[1] = -1;
    v17[3] = 0;
    v18 = v17;
  }
  else
  {
    v18 = 0;
  }
  v18[1] = a5;
  v18[2] = 3;
  *v18 = 0;
  v19 = operator new(8u);
  if ( v19 )
  {
    *v19 = 0;
    v19[1] = 0;
  }
  else
  {
    v19 = 0;
  }
  *v19 = a6;
  v19[1] = a7;
  v18[3] = v19;
  v20 = *(_DWORD *)(v7 + 12);
  v25[19] = 0.0;
  v21 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v20 + 28))(v20, &v25[1]);
  NxPhysics::SetActorCollisionGroup(v21, a7);
  *(_DWORD *)(v21 + 4) = v18;
  if ( LODWORD(v25[22]) )
    free((void *)LODWORD(v25[22]));
  return v21;
}
