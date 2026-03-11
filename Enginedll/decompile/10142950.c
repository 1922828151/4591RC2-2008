/*
 * func-name: ?CreateTriggerActor@NxPhysics@@QAEPAVNxActor@@MMABVVector@@JKPAVPhysicsTrigger_Callback@@W4PhysicsGroup@@@Z
 * func-address: 0x10142950
 * callers: none
 * callees: 0x10100b70, 0x10140eb0, 0x10141960, 0x101a251c, 0x101a2534
 */

int __thiscall NxPhysics::CreateTriggerActor(
        NxPhysics *this,
        float a2,
        float a3,
        float *a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  float v9; // eax
  float v10; // eax
  float v11; // ecx
  float v12; // edi
  float v13; // eax
  float v14; // edx
  float *v15; // eax
  _DWORD *v16; // eax
  _DWORD *v17; // edi
  _DWORD *v18; // eax
  int v19; // ecx
  int v20; // ebx
  float v22[26]; // [esp+1Ch] [ebp-F4h] BYREF
  _DWORD v23[15]; // [esp+84h] [ebp-8Ch] BYREF
  __int16 v24; // [esp+C0h] [ebp-50h]
  __int16 v25; // [esp+C2h] [ebp-4Eh]
  int v26; // [esp+C4h] [ebp-4Ch]
  float v27; // [esp+C8h] [ebp-48h]
  float v28; // [esp+CCh] [ebp-44h]
  float v29; // [esp+D0h] [ebp-40h]
  int v30; // [esp+D4h] [ebp-3Ch]
  int v31; // [esp+D8h] [ebp-38h]
  int v32; // [esp+DCh] [ebp-34h]
  int v33; // [esp+E0h] [ebp-30h]
  int v34; // [esp+E4h] [ebp-2Ch]
  int v35; // [esp+E8h] [ebp-28h]
  int v36; // [esp+ECh] [ebp-24h]
  struct NxConvexMesh *Cylinder; // [esp+F0h] [ebp-20h]
  int v38; // [esp+F4h] [ebp-1Ch]
  float v39[6]; // [esp+F8h] [ebp-18h] BYREF

  *(float *)&v23[2] = 1.0;
  *(float *)&v23[3] = 0.0;
  *(float *)&v23[4] = 0.0;
  *(float *)&v23[5] = 0.0;
  *(float *)&v23[7] = 0.0;
  v23[1] = 5;
  *(float *)&v23[8] = 0.0;
  v23[0] = &NxConvexShapeDesc::`vftable';
  *(float *)&v23[9] = 0.0;
  *(float *)&v23[13] = 0.0;
  v24 = 0;
  *(float *)&v23[12] = 0.0;
  v25 = 0;
  *(float *)&v23[11] = 0.0;
  v26 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0;
  *(float *)&v23[6] = 1.0;
  v33 = 0;
  *(float *)&v23[10] = 1.0;
  v34 = 0;
  v35 = 0;
  v29 = -1.0;
  v36 = 0;
  v28 = -1.0;
  v38 = 0;
  v27 = 1.0;
  LODWORD(v39[5]) = 1;
  v23[14] = 1179663;
  Cylinder = NxPhysics::_generateCylinder(this, a2, a3, 6u);
  memset(v22, 0, sizeof(v22));
  v9 = v22[22];
  v22[13] = 0.0;
  v22[0] = 1.0;
  v22[12] = 0.0;
  v22[4] = 1.0;
  memset(&v22[14], 0, 14);
  v22[8] = 1.0;
  memset(&v22[18], 0, 12);
  v22[1] = 0.0;
  v22[2] = 0.0;
  v22[3] = 0.0;
  v22[5] = 0.0;
  v22[6] = 0.0;
  v22[7] = 0.0;
  v22[11] = 0.0;
  v22[10] = 0.0;
  v22[9] = 0.0;
  v22[23] = v22[22];
  LODWORD(v22[21]) = 1;
  if ( LODWORD(v22[24]) <= LODWORD(v22[22])
    && (!LODWORD(v22[22]) || (unsigned int)((LODWORD(v22[24]) - LODWORD(v22[22])) >> 2) < 2) )
  {
    v10 = COERCE_FLOAT(malloc(8u));
    v11 = v22[23];
    v12 = v10;
    v13 = v22[22];
    v14 = v12;
    if ( LODWORD(v22[22]) != LODWORD(v22[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v14) = *(_DWORD *)LODWORD(v13);
        LODWORD(v13) += 4;
        LODWORD(v14) += 4;
      }
      while ( LODWORD(v13) != LODWORD(v11) );
      v11 = v22[23];
      v13 = v22[22];
    }
    if ( v13 != 0.0 )
    {
      free((void *)LODWORD(v13));
      v11 = v22[23];
      v13 = v22[22];
    }
    LODWORD(v9) = LODWORD(v12) + 4 * ((LODWORD(v11) - LODWORD(v13)) >> 2);
    LODWORD(v22[24]) = LODWORD(v12) + 8;
    v22[23] = v9;
    v22[22] = v12;
  }
  *(_DWORD *)LODWORD(v9) = v23;
  LODWORD(v22[23]) += 4;
  v15 = NxHelper::ToNxVec3(v39, a4);
  v22[9] = *v15;
  v22[10] = v15[1];
  v22[11] = v15[2];
  v16 = operator new(0x10u);
  if ( v16 )
  {
    v16[1] = -1;
    v16[2] = 4;
    v16[3] = 0;
    v17 = v16;
  }
  else
  {
    v17 = 0;
  }
  v17[1] = a5;
  v17[2] = 3;
  *v17 = 0;
  v18 = operator new(8u);
  if ( v18 )
  {
    *v18 = 0;
    v18[1] = 0;
  }
  else
  {
    v18 = 0;
  }
  *v18 = a6;
  v18[1] = a7;
  v17[3] = v18;
  v19 = *((_DWORD *)this + 3);
  v22[18] = 0.0;
  v20 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v19 + 28))(v19, v22);
  NxPhysics::SetActorCollisionGroup(v20, a8);
  *(_DWORD *)(v20 + 4) = v17;
  if ( LODWORD(v22[22]) )
    free((void *)LODWORD(v22[22]));
  return v20;
}
