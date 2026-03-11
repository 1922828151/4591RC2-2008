/*
 * func-name: ?RenderBillboardQuads@ParticleTrail@@IAEXAAVCamera@@@Z_0
 * func-address: 0x100b74b0
 * callers: 0x100023f1
 * callees: 0x10003cba, 0x10015172
 */

void __userpurge ParticleTrail::RenderBillboardQuads(ParticleTrail *this@<ecx>, int a2@<esi>, struct Camera *a3)
{
  ParticleTrail *v3; // ebx
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int BatchForWriting; // eax
  unsigned int v12; // esi
  struct VertexIndicesBatch *v13; // edi
  int v14; // eax
  double v15; // st7
  int v16; // ebp
  int v17; // eax
  double v18; // st7
  double v19; // st7
  int v20; // eax
  bool v21; // cc
  int v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // [esp-4h] [ebp-38h]
  int v28; // [esp-4h] [ebp-38h]
  int v29; // [esp+0h] [ebp-34h]
  int v30; // [esp+0h] [ebp-34h]
  int v31; // [esp+0h] [ebp-34h]
  float v32; // [esp+4h] [ebp-30h]
  float v33; // [esp+4h] [ebp-30h]
  float v34; // [esp+8h] [ebp-2Ch]
  _DWORD *v35; // [esp+Ch] [ebp-28h]
  float v36; // [esp+10h] [ebp-24h]
  float v37; // [esp+10h] [ebp-24h]
  int v38; // [esp+10h] [ebp-24h]
  float v40; // [esp+1Ch] [ebp-18h]
  float v41; // [esp+1Ch] [ebp-18h]
  float v42; // [esp+1Ch] [ebp-18h]
  float v43; // [esp+20h] [ebp-14h]
  int v44; // [esp+20h] [ebp-14h]
  float v45; // [esp+20h] [ebp-14h]
  float v46; // [esp+24h] [ebp-10h]
  int v47; // [esp+24h] [ebp-10h]
  float v48; // [esp+24h] [ebp-10h]
  float v49; // [esp+28h] [ebp-Ch]
  int v50; // [esp+2Ch] [ebp-8h]
  int v51; // [esp+30h] [ebp-4h]

  v3 = this;
  if ( *((_DWORD *)this + 82) || *((_DWORD *)this + 81) )
  {
    ParticleTrail::CameraLocation = *((_DWORD *)a3 + 88);
    flt_103B56C8 = *((float *)a3 + 89);
    flt_103B56CC = *((float *)a3 + 90);
    v4 = (_DWORD *)FXManager::Instance(a2, v29);
    v5 = v4[15];
    v4 += 15;
    ParticleTrail::CameraForwardVector = v5;
    dword_103B56D4 = v4[1];
    dword_103B56D8 = v4[2];
    v6 = FXManager::Instance(v27, v30);
    v7 = *(_DWORD *)(v6 + 36);
    v6 += 36;
    ParticleTrail::CameraRightVector = v7;
    flt_103B56E0 = *(float *)(v6 + 4);
    flt_103B56E4 = *(float *)(v6 + 8);
    v8 = FXManager::Instance(v28, v31);
    v9 = *(_DWORD *)(v8 + 48);
    v8 += 48;
    ParticleTrail::CameraUpVector = v9;
    flt_103B56EC = *(float *)(v8 + 4);
    flt_103B56F0 = *(float *)(v8 + 8);
    v10 = *((_DWORD *)v3 + 82);
    if ( v10 )
    {
      if ( !*(_DWORD *)(v10 + 152) )
        return;
      BatchForWriting = FXManager::getBatchForWriting(v3, *((struct Material **)v3 + 82));
    }
    else
    {
      BatchForWriting = FXManager::getBatchForWriting(v3, *((_DWORD *)v3 + 81), *((_DWORD *)v3 + 83));
    }
    v12 = BatchForWriting;
    if ( BatchForWriting != -1 )
    {
      v13 = (struct VertexIndicesBatch *)((char *)&FXManager::vertexIndicesBatches
                                        + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12));
      v14 = sub_10003CBA(v12);
      v15 = *((float *)v3 + 84);
      a3 = *(struct Camera **)(v14 + 16);
      v36 = v15;
      v40 = ParticleTrail::CameraRightVector * v36;
      ParticleTrail::Particle1Right = LODWORD(v40);
      v43 = flt_103B56E0 * v36;
      flt_103B5728 = v43;
      v46 = v36 * flt_103B56E4;
      flt_103B572C = v46;
      v37 = *((float *)v3 + 84);
      v41 = ParticleTrail::CameraUpVector * v37;
      ParticleTrail::Particle1Up = LODWORD(v41);
      *(float *)&v44 = flt_103B56EC * v37;
      dword_103B5710 = v44;
      *(float *)&v47 = v37 * flt_103B56F0;
      dword_103B5714 = v47;
      v16 = *((_DWORD *)v3 + 60);
      v38 = v16;
      if ( 0.0 != *(float *)(v16 + 48) )
      {
        ParticleTrail::RenderBillboardQuadAt(
          v3,
          (struct ParticleTrailNode *)v16,
          (struct Vector *)(v16 + 8),
          v13,
          (int *)&a3);
        v17 = sub_10003CBA(v12);
        v18 = (float)0.0;
        *(_DWORD *)(v17 + 16) = a3;
        while ( 0.0 != *(float *)(v16 + 48) )
        {
          v34 = v18;
          v32 = v18 + *(float *)(v16 + 48);
          v18 = v32;
          if ( *((float *)v3 + 85) < (double)v32 )
          {
            do
            {
              v34 = *((float *)v3 + 85) + v34;
              v33 = v18 - *((float *)v3 + 85);
              v42 = *(float *)(v16 + 52) * v34;
              v45 = v34 * *(float *)(v16 + 56);
              v48 = v34 * *(float *)(v16 + 60);
              v49 = *(float *)(v16 + 8) + v42;
              *(float *)&v50 = *(float *)(v16 + 12) + v45;
              v19 = *(float *)(v16 + 16);
              dword_103B56F8 = v50;
              ParticleTrail::Particle1Position = LODWORD(v49);
              *(float *)&v51 = v19 + v48;
              dword_103B56FC = v51;
              ParticleTrail::RenderBillboardQuadAt(
                v3,
                (struct ParticleTrailNode *)v16,
                (struct Vector *)(v16 + 8),
                v13,
                (int *)&a3);
              v20 = FXManager::batchedQuads[1];
              if ( !v20 || v12 >= (FXManager::batchedQuads[2] - v20) / 20 )
                _invalid_parameter_noinfo();
              v21 = (int)a3 <= 1499;
              *(_DWORD *)(20 * v12 + FXManager::batchedQuads[1] + 16) = a3;
              if ( !v21 )
              {
                v22 = FXManager::batchedQuads[1];
                if ( !v22 || v12 >= (FXManager::batchedQuads[2] - v22) / 20 )
                  _invalid_parameter_noinfo();
                *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v12 + 16) = a3;
                if ( *((_DWORD *)v3 + 82) )
                  v23 = FXManager::addNewBatch(*((struct Material **)v3 + 82));
                else
                  v23 = FXManager::addNewBatch(*((_DWORD *)v3 + 81), *((_DWORD *)v3 + 64));
                v12 = v23;
                if ( v23 == -1 )
                  return;
                v24 = FXManager::batchedQuads[0];
                v25 = FXManager::batchedQuads[1];
                if ( !v25 || v12 >= (FXManager::batchedQuads[2] - v25) / 20 )
                {
                  _invalid_parameter_noinfo();
                  v24 = FXManager::batchedQuads[0];
                }
                v13 = (struct VertexIndicesBatch *)((char *)&FXManager::vertexIndicesBatches
                                                  + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v12 + 12));
                v35 = (_DWORD *)(v24 + 4);
                v26 = *(_DWORD *)(v24 + 4);
                if ( !v26 || v12 >= (*(_DWORD *)(v24 + 8) - v26) / 20 )
                  _invalid_parameter_noinfo();
                v3 = this;
                v16 = v38;
                a3 = *(struct Camera **)(*v35 + 20 * v12 + 16);
              }
              v18 = v33;
            }
            while ( *((float *)v3 + 85) < (double)v33 );
          }
          v38 = *(_DWORD *)(v16 + 4);
          if ( !v38 )
            break;
          v16 = *(_DWORD *)(v16 + 4);
        }
      }
    }
  }
}
