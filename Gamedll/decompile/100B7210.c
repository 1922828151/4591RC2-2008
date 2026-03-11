/*
 * func-name: ?RenderTrail@ParticleTrail@@IAEXAAVCamera@@@Z_0
 * func-address: 0x100b7210
 * callers: 0x1001180b
 * callees: 0x10003cba, 0x10017611
 */

void __userpurge ParticleTrail::RenderTrail(ParticleTrail *this@<ecx>, int a2@<esi>, struct Camera *a3)
{
  ParticleTrail *v3; // ebp
  bool v4; // zf
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int BatchForWriting; // eax
  unsigned int v13; // esi
  struct VertexIndicesBatch *v14; // edi
  struct ParticleTrailNode *v15; // eax
  struct ParticleTrailNode *v16; // ebx
  int v17; // eax
  int v18; // eax
  int v19; // ebp
  int v20; // eax
  int v21; // eax
  _DWORD *v22; // ebp
  struct Camera *v23; // eax
  int v24; // eax
  int v25; // [esp-4h] [ebp-14h]
  int v26; // [esp-4h] [ebp-14h]
  int v27; // [esp+0h] [ebp-10h]
  int v28; // [esp+0h] [ebp-10h]
  int v29; // [esp+0h] [ebp-10h]
  float v30; // [esp+4h] [ebp-Ch] BYREF
  ParticleTrail *v31; // [esp+8h] [ebp-8h]
  struct ParticleTrailNode *v32; // [esp+Ch] [ebp-4h]

  v3 = this;
  v4 = *((_DWORD *)this + 50) == 0;
  v31 = this;
  if ( !v4 || *((_DWORD *)this + 45) )
  {
    ParticleTrail::CameraLocation = *((_DWORD *)a3 + 88);
    flt_103B56C8 = *((float *)a3 + 89);
    flt_103B56CC = *((float *)a3 + 90);
    v5 = (_DWORD *)FXManager::Instance(a2, v27);
    v6 = v5[15];
    v5 += 15;
    ParticleTrail::CameraForwardVector = v6;
    dword_103B56D4 = v5[1];
    dword_103B56D8 = v5[2];
    v7 = FXManager::Instance(v25, v28);
    v8 = *(_DWORD *)(v7 + 36);
    v7 += 36;
    ParticleTrail::CameraRightVector = v8;
    flt_103B56E0 = *(float *)(v7 + 4);
    flt_103B56E4 = *(float *)(v7 + 8);
    v9 = FXManager::Instance(v26, v29);
    v10 = *(_DWORD *)(v9 + 48);
    v30 = 0.0;
    v9 += 48;
    ParticleTrail::CameraUpVector = v10;
    flt_103B56EC = *(float *)(v9 + 4);
    flt_103B56F0 = *(float *)(v9 + 8);
    v11 = *((_DWORD *)v3 + 50);
    if ( v11 )
    {
      if ( !*(_DWORD *)(v11 + 152) )
        return;
      BatchForWriting = FXManager::getBatchForWriting(v3, *((struct Material **)v3 + 50));
    }
    else
    {
      BatchForWriting = FXManager::getBatchForWriting(v3, *((_DWORD *)v3 + 45), *((_DWORD *)v3 + 64));
    }
    v13 = BatchForWriting;
    if ( BatchForWriting != -1 )
    {
      v14 = (struct VertexIndicesBatch *)((char *)&FXManager::vertexIndicesBatches
                                        + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12));
      a3 = *(struct Camera **)(sub_10003CBA(v13) + 16);
      v15 = (struct ParticleTrailNode *)*((_DWORD *)v3 + 60);
      if ( v15 )
      {
        while ( 1 )
        {
          v32 = (struct ParticleTrailNode *)*((_DWORD *)v15 + 1);
          v16 = v32;
          if ( !v32 )
            break;
          ParticleTrail::RenderParticleLink(v3, v15, v32, v14, (int *)&a3, &v30);
          if ( (int)a3 > 1499 )
          {
            v17 = FXManager::batchedQuads[1];
            if ( !v17 || v13 >= (FXManager::batchedQuads[2] - v17) / 20 )
              _invalid_parameter_noinfo();
            *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v13 + 16) = a3;
            if ( *((_DWORD *)v3 + 50) )
              v18 = FXManager::addNewBatch(*((struct Material **)v3 + 50));
            else
              v18 = FXManager::addNewBatch(*((_DWORD *)v3 + 45), *((_DWORD *)v3 + 64));
            v13 = v18;
            if ( v18 == -1 )
              return;
            v19 = FXManager::batchedQuads[0];
            v20 = FXManager::batchedQuads[1];
            if ( !v20 || v13 >= (FXManager::batchedQuads[2] - v20) / 20 )
            {
              _invalid_parameter_noinfo();
              v19 = FXManager::batchedQuads[0];
            }
            v21 = *(_DWORD *)(v19 + 4);
            v14 = (struct VertexIndicesBatch *)((char *)&FXManager::vertexIndicesBatches
                                              + 162110 * *(_DWORD *)(20 * v13 + FXManager::batchedQuads[1] + 12));
            v22 = (_DWORD *)(v19 + 4);
            if ( !v21 || v13 >= (FXManager::batchedQuads[2] - v21) / 20 )
              _invalid_parameter_noinfo();
            v23 = *(struct Camera **)(20 * v13 + *v22 + 16);
            v3 = v31;
            v16 = v32;
            a3 = v23;
          }
          v15 = v16;
        }
      }
      v24 = sub_10003CBA(v13);
      *(_DWORD *)(v24 + 16) = a3;
    }
  }
}
