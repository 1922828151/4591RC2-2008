/*
 * func-name: ?CreateTriggerActor@NxPhysics@@QAEPAVNxActor@@ABVBBox@@JKPAVPhysicsTrigger_Callback@@W4PhysicsGroup@@@Z
 * func-address: 0x10142c80
 * callers: none
 * callees: 0x10100b70, 0x10140eb0, 0x101a251c, 0x101a2534
 */

int __thiscall NxPhysics::CreateTriggerActor(_DWORD *this, float *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v6; // ebp
  float *v7; // eax
  float v8; // eax
  float v9; // eax
  float v10; // ecx
  float v11; // ebx
  float v12; // eax
  float v13; // edx
  double v14; // st7
  double v15; // st7
  float *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // esi
  _DWORD *v19; // eax
  int v20; // ecx
  int v21; // ebx
  float v23; // [esp+4h] [ebp-114h]
  float v24; // [esp+4h] [ebp-114h]
  float v25; // [esp+8h] [ebp-110h]
  float v26; // [esp+8h] [ebp-110h]
  float v27; // [esp+Ch] [ebp-10Ch]
  float v28; // [esp+Ch] [ebp-10Ch]
  float v29; // [esp+10h] [ebp-108h] BYREF
  float v30; // [esp+14h] [ebp-104h]
  float v31; // [esp+18h] [ebp-100h]
  float v32; // [esp+1Ch] [ebp-FCh] BYREF
  float v33; // [esp+20h] [ebp-F8h]
  float v34; // [esp+24h] [ebp-F4h]
  _DWORD *v35; // [esp+28h] [ebp-F0h]
  float v36[26]; // [esp+2Ch] [ebp-ECh] BYREF
  _DWORD v37[14]; // [esp+94h] [ebp-84h] BYREF
  int v38; // [esp+CCh] [ebp-4Ch]
  __int16 v39; // [esp+D0h] [ebp-48h]
  __int16 v40; // [esp+D2h] [ebp-46h]
  int v41; // [esp+D4h] [ebp-44h]
  float v42; // [esp+D8h] [ebp-40h]
  float v43; // [esp+DCh] [ebp-3Ch]
  float v44; // [esp+E0h] [ebp-38h]
  int v45; // [esp+E4h] [ebp-34h]
  int v46; // [esp+E8h] [ebp-30h]
  int v47; // [esp+ECh] [ebp-2Ch]
  int v48; // [esp+F0h] [ebp-28h]
  int v49; // [esp+F4h] [ebp-24h]
  int v50; // [esp+F8h] [ebp-20h]
  int v51; // [esp+FCh] [ebp-1Ch]
  float v52; // [esp+100h] [ebp-18h]
  float v53; // [esp+104h] [ebp-14h]
  float v54; // [esp+108h] [ebp-10h]
  int v55; // [esp+114h] [ebp-4h]

  *(float *)&v37[2] = 1.0;
  *(float *)&v37[3] = 0.0;
  *(float *)&v37[4] = 0.0;
  *(float *)&v37[5] = 0.0;
  v6 = this;
  *(float *)&v37[7] = 0.0;
  v35 = this;
  *(float *)&v37[8] = 0.0;
  v37[1] = 2;
  *(float *)&v37[9] = 0.0;
  v37[0] = &NxBoxShapeDesc::`vftable';
  *(float *)&v37[13] = 0.0;
  v38 = 1179656;
  *(float *)&v37[12] = 0.0;
  v39 = 0;
  *(float *)&v37[11] = 0.0;
  v40 = 0;
  v41 = 0;
  *(float *)&v37[6] = 1.0;
  v45 = 0;
  *(float *)&v37[10] = 1.0;
  v46 = 0;
  v47 = 0;
  v44 = -1.0;
  v48 = 0;
  v43 = -1.0;
  v49 = 0;
  v50 = 0;
  v51 = 0;
  v42 = 1.0;
  v54 = 0.0;
  v53 = 0.0;
  v52 = 0.0;
  v25 = a2[7] - a2[4];
  v55 = 0;
  v27 = a2[8] - a2[5];
  v23 = a2[9] - a2[6];
  v26 = v25 * 0.5;
  v28 = v27 * 0.5;
  v24 = 0.5 * v23;
  v29 = v26;
  v30 = v28;
  v31 = v24;
  v7 = NxHelper::ToNxVec3(&v32, &v29);
  v52 = *v7;
  v53 = v7[1];
  v54 = v7[2];
  v38 |= 7u;
  memset(v36, 0, sizeof(v36));
  v8 = v36[22];
  v36[13] = 0.0;
  v36[0] = 1.0;
  v36[4] = 1.0;
  v36[12] = 0.0;
  v36[8] = 1.0;
  memset(&v36[14], 0, 14);
  memset(&v36[18], 0, 12);
  v36[1] = 0.0;
  v36[2] = 0.0;
  v36[3] = 0.0;
  v36[5] = 0.0;
  v36[6] = 0.0;
  v36[23] = v36[22];
  v36[7] = 0.0;
  LODWORD(v36[21]) = 1;
  v36[11] = 0.0;
  v36[10] = 0.0;
  v36[9] = 0.0;
  LOBYTE(v55) = 1;
  if ( LODWORD(v36[24]) <= LODWORD(v36[22])
    && (!LODWORD(v36[22]) || (unsigned int)((LODWORD(v36[24]) - LODWORD(v36[22])) >> 2) < 2) )
  {
    v9 = COERCE_FLOAT(malloc(8u));
    v10 = v36[23];
    v11 = v9;
    v12 = v36[22];
    v13 = v11;
    if ( LODWORD(v36[22]) != LODWORD(v36[23]) )
    {
      do
      {
        *(_DWORD *)LODWORD(v13) = *(_DWORD *)LODWORD(v12);
        LODWORD(v12) += 4;
        LODWORD(v13) += 4;
      }
      while ( LODWORD(v12) != LODWORD(v10) );
      v10 = v36[23];
      v12 = v36[22];
    }
    if ( v12 != 0.0 )
    {
      free((void *)LODWORD(v12));
      v10 = v36[23];
      v12 = v36[22];
    }
    v6 = v35;
    LODWORD(v8) = LODWORD(v11) + 4 * ((LODWORD(v10) - LODWORD(v12)) >> 2);
    LODWORD(v36[24]) = LODWORD(v11) + 8;
    v36[23] = v8;
    v36[22] = v11;
  }
  v14 = a2[7] - a2[4];
  *(_DWORD *)LODWORD(v8) = v37;
  v32 = v14;
  v15 = a2[8] - a2[5];
  LODWORD(v36[23]) += 4;
  v33 = v15;
  v34 = a2[9] - a2[6];
  v29 = v32 * 0.5;
  v30 = v33 * 0.5;
  v31 = 0.5 * v34;
  v32 = a2[4] + v29;
  v33 = a2[5] + v30;
  v34 = a2[6] + v31;
  v16 = NxHelper::ToNxVec3(&v29, &v32);
  v36[9] = *v16;
  v36[10] = v16[1];
  v36[11] = v16[2];
  v17 = operator new(0x10u);
  if ( v17 )
  {
    v17[1] = -1;
    v17[2] = 4;
    v17[3] = 0;
    v18 = v17;
  }
  else
  {
    v18 = 0;
  }
  v18[1] = a3;
  v18[2] = 3;
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
  *v19 = a4;
  v19[1] = a5;
  v18[3] = v19;
  v20 = v6[3];
  LODWORD(v36[18]) = v18;
  v21 = (*(int (__thiscall **)(int, float *))(*(_DWORD *)v20 + 28))(v20, v36);
  NxPhysics::SetActorCollisionGroup(v21, a6);
  *(_DWORD *)(v21 + 4) = v18;
  if ( LODWORD(v36[22]) )
    free((void *)LODWORD(v36[22]));
  return v21;
}
