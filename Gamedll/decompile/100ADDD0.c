/*
 * func-name: ?PostRender@ParticleSystem@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100addd0
 * callers: 0x100101e5
 * callees: 0x10003cba, 0x10005c59, 0x1000d28d, 0x10015ac3, 0x102c09f0
 */

void __userpurge ParticleSystem::PostRender(ParticleSystem *this@<ecx>, int a2@<ebp>, int a3@<edi>, struct Camera *a4)
{
  int v5; // eax
  unsigned int BatchForWriting; // ebx
  char *v7; // ebp
  int v8; // edi
  double v9; // st7
  int v10; // eax
  unsigned int v11; // ecx
  _DWORD *v12; // eax
  float *v13; // eax
  double v14; // st7
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  int v18; // eax
  _DWORD *v19; // eax
  float *v20; // eax
  double v21; // st7
  float *v22; // eax
  double v23; // st7
  int v24; // eax
  int v25; // eax
  float *v26; // ecx
  double v27; // st7
  int v28; // ecx
  float *v29; // ecx
  double v30; // st5
  int v31; // ecx
  float *v32; // ecx
  char *v33; // eax
  double v34; // st5
  double v35; // st5
  int v36; // eax
  int v37; // [esp-4h] [ebp-108h]
  float v38; // [esp+0h] [ebp-104h]
  int v39; // [esp+4h] [ebp-100h]
  int v40; // [esp+8h] [ebp-FCh]
  int v41; // [esp+14h] [ebp-F0h]
  int v42; // [esp+18h] [ebp-ECh]
  float v43; // [esp+1Ch] [ebp-E8h]
  float v44; // [esp+1Ch] [ebp-E8h]
  float v45; // [esp+1Ch] [ebp-E8h]
  float v46; // [esp+1Ch] [ebp-E8h]
  int v47; // [esp+28h] [ebp-DCh]
  float v48; // [esp+2Ch] [ebp-D8h]
  float v49; // [esp+30h] [ebp-D4h]
  float v50; // [esp+34h] [ebp-D0h]
  float v51; // [esp+38h] [ebp-CCh]
  float v52; // [esp+3Ch] [ebp-C8h]
  float v53; // [esp+40h] [ebp-C4h]
  float v54; // [esp+44h] [ebp-C0h]
  float v55; // [esp+48h] [ebp-BCh]
  float v56; // [esp+4Ch] [ebp-B8h]
  float v57; // [esp+50h] [ebp-B4h]
  float v58; // [esp+54h] [ebp-B0h]
  float v59; // [esp+58h] [ebp-ACh]
  float v60; // [esp+5Ch] [ebp-A8h]
  int v61; // [esp+60h] [ebp-A4h]
  int v62; // [esp+64h] [ebp-A0h]
  float v63; // [esp+68h] [ebp-9Ch]
  float v64; // [esp+6Ch] [ebp-98h]
  float v65; // [esp+70h] [ebp-94h]
  float v66; // [esp+74h] [ebp-90h]
  int v67; // [esp+78h] [ebp-8Ch]
  int v68; // [esp+7Ch] [ebp-88h]
  float v69; // [esp+80h] [ebp-84h]
  float v70; // [esp+84h] [ebp-80h]
  float v71; // [esp+88h] [ebp-7Ch]
  float v72; // [esp+8Ch] [ebp-78h]
  float v73; // [esp+90h] [ebp-74h]
  float v74; // [esp+94h] [ebp-70h]
  float v75; // [esp+98h] [ebp-6Ch]
  float v76; // [esp+9Ch] [ebp-68h]
  float v77; // [esp+A0h] [ebp-64h]
  float v78; // [esp+A4h] [ebp-60h]
  int v79; // [esp+A8h] [ebp-5Ch]
  int v80; // [esp+ACh] [ebp-58h]
  float v81; // [esp+B0h] [ebp-54h]
  float v82; // [esp+B4h] [ebp-50h]
  float v83; // [esp+B8h] [ebp-4Ch]
  float v84; // [esp+BCh] [ebp-48h]
  float v85; // [esp+C0h] [ebp-44h]
  float v86; // [esp+C4h] [ebp-40h]
  float v87; // [esp+C8h] [ebp-3Ch]
  int v88; // [esp+CCh] [ebp-38h]
  int v89; // [esp+D0h] [ebp-34h]
  _BYTE v90[12]; // [esp+E0h] [ebp-24h] BYREF
  int v91[3]; // [esp+ECh] [ebp-18h] BYREF
  _BYTE v92[12]; // [esp+F8h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 51) )
  {
    v5 = *((_DWORD *)this + 44);
    if ( v5 )
    {
      BatchForWriting = FXManager::getBatchForWriting(this, v5, *((_DWORD *)this + 56));
      v41 = BatchForWriting;
    }
    else
    {
      if ( !*(_DWORD *)(*((_DWORD *)this + 45) + 152) )
        return;
      v41 = FXManager::getBatchForWriting(this, *((struct Material **)this + 45));
      BatchForWriting = v41;
    }
    if ( BatchForWriting != -1 )
    {
      v40 = a2;
      v39 = a3;
      v7 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12);
      v42 = *(_DWORD *)(sub_10003CBA(BatchForWriting) + 16);
      if ( !*((_DWORD *)this + 46) )
      {
        v8 = 0;
        if ( *((int *)this + 51) > 0 )
        {
          v9 = 0.0;
          v47 = 0;
          do
          {
            v10 = *((_DWORD *)this + 48);
            if ( !v10 || v8 >= (unsigned int)((*((_DWORD *)this + 49) - v10) / 96) )
            {
              _invalid_parameter_noinfo();
              v9 = 0.0;
            }
            if ( v9 < *(float *)(v47 + *((_DWORD *)this + 48) + 52) )
            {
              v11 = *(_DWORD *)(sub_10015AC3(v8) + 44);
              ParticleSystem::color = v11;
              if ( HIBYTE(v11) )
              {
                if ( *((float *)this + 81) < 1.0 )
                  ParticleSystem::color = (unsigned __int8)v11
                                        | ((BYTE1(v11)
                                          | ((BYTE2(v11)
                                            | ((unsigned int)(__int64)((double)HIBYTE(v11) * *((float *)this + 81)) << 8)) << 8)) << 8);
                v12 = (_DWORD *)sub_10015AC3(v8);
                ParticleSystem::loc = *v12;
                dword_103B55F8 = v12[1];
                dword_103B55FC = v12[2];
                if ( *((_BYTE *)this + 332) )
                {
                  v13 = (float *)sub_10015AC3(v8);
                  v14 = *((float *)this + 5) - v13[3];
                  v13 += 3;
                  v84 = v14;
                  v85 = *((float *)this + 6) - v13[1];
                  v86 = *((float *)this + 7) - v13[2];
                  ParticleSystem::loc = v84 + ParticleSystem::loc;
                  *(float *)&dword_103B55F8 = v85 + *(float *)&dword_103B55F8;
                  *(float *)&dword_103B55FC = v86 + *(float *)&dword_103B55FC;
                }
                if ( *((_BYTE *)this + 340) )
                {
                  v43 = *(float *)(sub_10015AC3(v8) + 60);
                  v15 = (float *)FXManager::Instance(v39, v40);
                  v16 = v15[9];
                  v15 += 9;
                  v78 = v16 * v43;
                  *(float *)&v79 = v15[1] * v43;
                  v17 = v43 * v15[2];
                  ParticleSystem::Right = LODWORD(v78);
                  dword_103B5604 = v79;
                  *(float *)&v80 = v17;
                  dword_103B5608 = v80;
                  if ( 0.0 == *((float *)this + 75) )
                  {
                    v18 = sub_10015AC3(v8);
                    FXManager::Instance(v91, *(float *)(v18 + 64));
                    v19 = (_DWORD *)sub_1000D28D(v37, v38);
                    ParticleSystem::up = *v19;
                    dword_103B5610 = v19[1];
                    dword_103B5614 = v19[2];
                  }
                  else
                  {
                    FXManager::Instance(v39, v40);
                    sub_10015AC3(v8);
                    v20 = (float *)sub_10005C59((int)v90);
                    v48 = *v20;
                    v49 = v20[1];
                    v50 = v20[2];
                    v44 = *(float *)(sub_10015AC3(v8) + 64);
                    v60 = v48 * v44;
                    ParticleSystem::up = LODWORD(v60);
                    *(float *)&v61 = v49 * v44;
                    dword_103B5610 = v61;
                    *(float *)&v62 = v44 * v50;
                    dword_103B5614 = v62;
                  }
                }
                else
                {
                  v45 = *(float *)(sub_10015AC3(v8) + 64);
                  v87 = v45 * *((float *)this + 86);
                  *(float *)&v88 = *((float *)this + 87) * v45;
                  v21 = v45 * *((float *)this + 88);
                  dword_103B5610 = v88;
                  ParticleSystem::up = LODWORD(v87);
                  *(float *)&v89 = v21;
                  dword_103B5614 = v89;
                  v46 = *(float *)(sub_10015AC3(v8) + 60);
                  v22 = (float *)sub_102C09F0(v92, (char *)this + 344, (char *)this + 232);
                  v66 = *v22 * v46;
                  *(float *)&v67 = v22[1] * v46;
                  v23 = v46 * v22[2];
                  ParticleSystem::Right = LODWORD(v66);
                  dword_103B5604 = v67;
                  *(float *)&v68 = v23;
                  dword_103B5608 = v68;
                }
                if ( v42 > 1499 )
                {
                  *(_DWORD *)(sub_10003CBA(v41) + 16) = v42;
                  v24 = *((_DWORD *)this + 44);
                  if ( v24 )
                    v25 = FXManager::addNewBatch(v24, *((_DWORD *)this + 56));
                  else
                    v25 = FXManager::addNewBatch(*((struct Material **)this + 45));
                  v41 = v25;
                  if ( v25 == -1 )
                    return;
                  v7 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(v25) + 12);
                  v42 = *(_DWORD *)(sub_10003CBA(v41) + 16);
                }
                *(_DWORD *)&v7[96 * v42 + 12] = ParticleSystem::color;
                v26 = (float *)&v7[96 * v42];
                v51 = ParticleSystem::loc - ParticleSystem::Right;
                v52 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
                v53 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
                v72 = v51 - ParticleSystem::up;
                v73 = v52 - *(float *)&dword_103B5610;
                v27 = v53 - *(float *)&dword_103B5614;
                *v26 = v72;
                v26[1] = v73;
                v74 = v27;
                v26[2] = v74;
                v26[4] = 0.0;
                v26[5] = 1.0;
                v28 = 12 * v42 + 3;
                *(_DWORD *)&v7[8 * v28 + 12] = ParticleSystem::color;
                v29 = (float *)&v7[8 * v28];
                v81 = ParticleSystem::Right + ParticleSystem::loc;
                v82 = *(float *)&dword_103B5604 + *(float *)&dword_103B55F8;
                v83 = *(float *)&dword_103B5608 + *(float *)&dword_103B55FC;
                v54 = v81 - ParticleSystem::up;
                v55 = v82 - *(float *)&dword_103B5610;
                v30 = v83 - *(float *)&dword_103B5614;
                *v29 = v54;
                v29[1] = v55;
                v56 = v30;
                v29[2] = v56;
                v29[4] = 1.0;
                v29[5] = 1.0;
                v31 = 12 * v42 + 6;
                *(_DWORD *)&v7[8 * v31 + 12] = ParticleSystem::color;
                v32 = (float *)&v7[8 * v31];
                v57 = ParticleSystem::loc - ParticleSystem::Right;
                v58 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
                v59 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
                v63 = v57 + ParticleSystem::up;
                v33 = &v7[96 * v42++ + 72];
                v64 = v58 + *(float *)&dword_103B5610;
                v34 = v59 + *(float *)&dword_103B5614;
                *v32 = v63;
                v32[1] = v64;
                v65 = v34;
                v32[2] = v65;
                v32[4] = 0.0;
                v32[5] = 0.0;
                *((_DWORD *)v33 + 3) = ParticleSystem::color;
                v69 = ParticleSystem::Right + ParticleSystem::loc;
                v70 = *(float *)&dword_103B5604 + *(float *)&dword_103B55F8;
                v71 = *(float *)&dword_103B5608 + *(float *)&dword_103B55FC;
                v75 = v69 + ParticleSystem::up;
                v76 = v70 + *(float *)&dword_103B5610;
                v35 = v71 + *(float *)&dword_103B5614;
                *(float *)v33 = v75;
                *((float *)v33 + 1) = v76;
                v77 = v35;
                v9 = 0.0;
                *((float *)v33 + 2) = v77;
                *((float *)v33 + 4) = 1.0;
                *((float *)v33 + 5) = 0.0;
              }
              else
              {
                v9 = 0.0;
              }
            }
            v47 += 96;
            ++v8;
          }
          while ( v8 < *((_DWORD *)this + 51) );
          BatchForWriting = v41;
        }
      }
      v36 = FXManager::batchedQuads[1];
      if ( !v36 || BatchForWriting >= (FXManager::batchedQuads[2] - v36) / 20 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(FXManager::batchedQuads[1] + 20 * BatchForWriting + 16) = v42;
    }
  }
}
