/*
 * func-name: ?PostRender@SurfaceDecal@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100bded0
 * callers: 0x1000fe9d
 * callees: 0x10003cba, 0x10010f46, 0x10013b24
 */

void __thiscall SurfaceDecal::PostRender(SurfaceDecal *this, struct Camera *a2)
{
  unsigned int v3; // ebp
  float *v4; // eax
  double v5; // st7
  double v6; // st7
  float *v7; // eax
  double v8; // st7
  double v9; // st7
  double v10; // st7
  double v11; // st7
  double v12; // st7
  int v13; // eax
  int BatchForWriting; // eax
  int v15; // ebx
  char *v16; // edi
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // ecx
  int v21; // edx
  char *v22; // ecx
  int v23; // ecx
  char *v24; // ecx
  int v25; // edx
  char *v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int PolyBatchForWriting; // eax
  unsigned int v32; // ebx
  char *v33; // esi
  int v34; // ecx
  int v35; // esi
  int v36; // ebx
  _DWORD *v37; // eax
  _DWORD *v38; // eax
  _DWORD *v39; // eax
  int v40; // eax
  int v41; // [esp+0h] [ebp-3Ch]
  int v42; // [esp+0h] [ebp-3Ch]
  int v43; // [esp+4h] [ebp-38h]
  int v44; // [esp+4h] [ebp-38h]
  int v45; // [esp+10h] [ebp-2Ch]
  float v46; // [esp+14h] [ebp-28h]
  float v47; // [esp+14h] [ebp-28h]
  int v48; // [esp+14h] [ebp-28h]
  unsigned int v49; // [esp+14h] [ebp-28h]
  __int64 v50; // [esp+18h] [ebp-24h]
  unsigned int v51; // [esp+18h] [ebp-24h]
  int v52; // [esp+20h] [ebp-1Ch]
  int v53; // [esp+20h] [ebp-1Ch]
  float v54; // [esp+24h] [ebp-18h]
  float v55; // [esp+24h] [ebp-18h]
  float v56; // [esp+24h] [ebp-18h]
  float v57; // [esp+24h] [ebp-18h]
  float v58; // [esp+28h] [ebp-14h]
  float v59; // [esp+28h] [ebp-14h]
  float v60; // [esp+28h] [ebp-14h]
  float v61; // [esp+28h] [ebp-14h]
  float v62; // [esp+2Ch] [ebp-10h]
  float v63; // [esp+2Ch] [ebp-10h]
  float v64; // [esp+2Ch] [ebp-10h]
  float v65; // [esp+2Ch] [ebp-10h]
  float v66; // [esp+30h] [ebp-Ch]
  float v67; // [esp+30h] [ebp-Ch]
  float v68; // [esp+30h] [ebp-Ch]
  float v69; // [esp+30h] [ebp-Ch]
  float v70; // [esp+34h] [ebp-8h]
  float v71; // [esp+34h] [ebp-8h]
  float v72; // [esp+34h] [ebp-8h]
  float v73; // [esp+34h] [ebp-8h]
  float v74; // [esp+38h] [ebp-4h]
  float v75; // [esp+38h] [ebp-4h]
  float v76; // [esp+38h] [ebp-4h]
  float v77; // [esp+38h] [ebp-4h]

  if ( *((float *)this + 51) > 1.0 )
    *((float *)this + 51) = 1.0;
  if ( *((float *)this + 51) < 0.0 )
    *((float *)this + 51) = 0.0;
  v3 = (unsigned __int8)*((_DWORD *)this + 65)
     | ((*((unsigned __int8 *)this + 261)
       | ((*((unsigned __int8 *)this + 262)
         | ((unsigned int)(__int64)((double)HIBYTE(*((_DWORD *)this + 65)) * *((float *)this + 51)) << 8)) << 8)) << 8);
  if ( *((_BYTE *)this + 265) )
  {
    v29 = *((_DWORD *)this + 68);
    if ( v29 )
    {
      v48 = (*((_DWORD *)this + 69) - v29) / 56;
      if ( v48 )
      {
        v30 = *((_DWORD *)this + 44);
        if ( v30 )
        {
          PolyBatchForWriting = FXManager::getPolyBatchForWriting(this, v30, *((_DWORD *)this + 52));
          v32 = PolyBatchForWriting;
          v51 = PolyBatchForWriting;
          if ( PolyBatchForWriting != -1 )
          {
            v33 = (char *)&FXManager::vertexIndicesBatches
                + 162110 * *(_DWORD *)(sub_10010F46(PolyBatchForWriting) + 12);
            v34 = *(_DWORD *)(sub_10010F46(v32) + 16);
            v45 = v34;
            if ( v48 > 0 )
            {
              v35 = (int)&v33[72 * v34 + 16];
              v36 = 2;
              v49 = (v48 - 1) / 3u + 1;
              v45 = v49 + v34;
              do
              {
                *(_DWORD *)(v35 - 4) = v3;
                v37 = (_DWORD *)sub_10013B24(v36 - 2);
                *(_DWORD *)(v35 - 16) = *v37;
                *(_DWORD *)(v35 - 12) = v37[1];
                *(_DWORD *)(v35 - 8) = v37[2];
                *(float *)v35 = *(float *)(sub_10013B24(v36 - 2) + 48);
                *(float *)(v35 + 4) = *(float *)(sub_10013B24(v36 - 2) + 52);
                *(_DWORD *)(v35 + 20) = v3;
                v38 = (_DWORD *)sub_10013B24(v36 - 1);
                *(_DWORD *)(v35 + 8) = *v38;
                *(_DWORD *)(v35 + 12) = v38[1];
                *(_DWORD *)(v35 + 16) = v38[2];
                *(float *)(v35 + 24) = *(float *)(sub_10013B24(v36 - 1) + 48);
                *(float *)(v35 + 28) = *(float *)(sub_10013B24(v36 - 1) + 52);
                *(_DWORD *)(v35 + 44) = v3;
                v39 = (_DWORD *)sub_10013B24(v36);
                *(_DWORD *)(v35 + 32) = *v39;
                *(_DWORD *)(v35 + 36) = v39[1];
                *(_DWORD *)(v35 + 40) = v39[2];
                *(float *)(v35 + 48) = *(float *)(sub_10013B24(v36) + 48);
                *(float *)(v35 + 52) = *(float *)(sub_10013B24(v36) + 52);
                v35 += 72;
                v36 += 3;
                --v49;
              }
              while ( v49 );
              v32 = v51;
              v34 = v45;
            }
            v40 = FXManager::batchedPolys[1];
            if ( !v40 || v32 >= (FXManager::batchedPolys[2] - v40) / 20 )
            {
              _invalid_parameter_noinfo();
              v34 = v45;
            }
            *(_DWORD *)(FXManager::batchedPolys[1] + 20 * v32 + 16) = v34;
          }
        }
      }
    }
  }
  else
  {
    if ( *((_BYTE *)this + 264) )
    {
      v46 = *((float *)this + 50);
      v4 = (float *)FXManager::Instance(v41, v43);
      v5 = v4[9];
      v4 += 9;
      *(float *)&v50 = v5 * v46;
      *((float *)&v50 + 1) = v4[1] * v46;
      v6 = v46 * v4[2];
      qword_103B5758 = v50;
      *(float *)&v52 = v6;
      dword_103B5760 = v52;
      v47 = *((float *)this + 50);
      v7 = (float *)FXManager::Instance(v42, v44);
      v8 = v7[12];
      v7 += 12;
      *(float *)&v50 = v8 * v47;
      *((float *)&v50 + 1) = v7[1] * v47;
      v9 = v47 * v7[2];
      qword_103B5764 = v50;
      *(float *)&v53 = v9;
      dword_103B576C = v53;
      v54 = *((float *)this + 5) - *(float *)&qword_103B5758;
      v58 = *((float *)this + 6) - *((float *)&qword_103B5758 + 1);
      v62 = *((float *)this + 7) - *(float *)&dword_103B5760;
      v66 = v54 - *(float *)&v50;
      *((float *)this + 56) = v66;
      v70 = v58 - *((float *)&v50 + 1);
      *((float *)this + 57) = v70;
      v74 = v62 - *(float *)&v53;
      *((float *)this + 58) = v74;
      v67 = *((float *)this + 5) + *(float *)&qword_103B5758;
      v71 = *((float *)this + 6) + *((float *)&qword_103B5758 + 1);
      v75 = *((float *)this + 7) + *(float *)&dword_103B5760;
      v55 = v67 - *(float *)&qword_103B5764;
      v59 = v71 - *((float *)&qword_103B5764 + 1);
      v10 = v75 - *(float *)&dword_103B576C;
      *((float *)this + 53) = v55;
      *((float *)this + 54) = v59;
      v63 = v10;
      *((float *)this + 55) = v63;
      v68 = *((float *)this + 5) - *(float *)&qword_103B5758;
      v72 = *((float *)this + 6) - *((float *)&qword_103B5758 + 1);
      v76 = *((float *)this + 7) - *(float *)&dword_103B5760;
      v56 = v68 + *(float *)&qword_103B5764;
      v60 = v72 + *((float *)&qword_103B5764 + 1);
      v11 = v76 + *(float *)&dword_103B576C;
      *((float *)this + 62) = v56;
      *((float *)this + 63) = v60;
      v64 = v11;
      *((float *)this + 64) = v64;
      v69 = *((float *)this + 5) + *(float *)&qword_103B5758;
      v73 = *((float *)this + 6) + *((float *)&qword_103B5758 + 1);
      v77 = *((float *)this + 7) + *(float *)&dword_103B5760;
      v57 = v69 + *(float *)&qword_103B5764;
      v61 = v73 + *((float *)&qword_103B5764 + 1);
      v12 = v77 + *(float *)&dword_103B576C;
      *((float *)this + 59) = v57;
      *((float *)this + 60) = v61;
      v65 = v12;
      *((float *)this + 61) = v65;
    }
    v13 = *((_DWORD *)this + 44);
    if ( v13 )
    {
      BatchForWriting = FXManager::getBatchForWriting(this, v13, *((_DWORD *)this + 52));
    }
    else
    {
      if ( !*(_DWORD *)(*((_DWORD *)this + 45) + 152) )
        return;
      BatchForWriting = FXManager::getBatchForWriting(this, *((struct Material **)this + 45));
    }
    v15 = BatchForWriting;
    if ( BatchForWriting != -1 )
    {
      v16 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12);
      v17 = 4 * *(_DWORD *)(sub_10003CBA(v15) + 16);
      v18 = 3 * v17;
      *(_DWORD *)&v16[8 * v18 + 12] = v3;
      *(_DWORD *)&v16[8 * v18] = *((_DWORD *)this + 56);
      *(_DWORD *)&v16[8 * v18 + 4] = *((_DWORD *)this + 57);
      v19 = *((_DWORD *)this + 58);
      *(float *)&v16[8 * v18 + 16] = 0.0;
      *(_DWORD *)&v16[8 * v18 + 8] = v19;
      *(float *)&v16[24 * v17 + 20] = 1.0;
      v20 = 3 * v17 + 3;
      *(_DWORD *)&v16[8 * v20 + 12] = v3;
      *(_DWORD *)&v16[8 * v20] = *((_DWORD *)this + 53);
      *(_DWORD *)&v16[8 * v20 + 4] = *((_DWORD *)this + 54);
      v21 = *((_DWORD *)this + 55);
      *(float *)&v16[8 * v20 + 16] = 1.0;
      v22 = &v16[8 * v20];
      *((_DWORD *)v22 + 2) = v21;
      *((float *)v22 + 5) = 1.0;
      v23 = 3 * v17 + 6;
      *(_DWORD *)&v16[8 * v23 + 12] = v3;
      v24 = &v16[8 * v23];
      *(_DWORD *)v24 = *((_DWORD *)this + 62);
      *((_DWORD *)v24 + 1) = *((_DWORD *)this + 63);
      v25 = *((_DWORD *)this + 64);
      *((float *)v24 + 4) = 0.0;
      *((_DWORD *)v24 + 2) = v25;
      *((float *)v24 + 5) = 0.0;
      v26 = &v16[24 * v17 + 72];
      *((_DWORD *)v26 + 3) = v3;
      *(_DWORD *)v26 = *((_DWORD *)this + 59);
      *((_DWORD *)v26 + 1) = *((_DWORD *)this + 60);
      v27 = *((_DWORD *)this + 61);
      *((float *)v26 + 4) = 1.0;
      *((_DWORD *)v26 + 2) = v27;
      *((float *)v26 + 5) = 0.0;
      v28 = sub_10003CBA(v15);
      ++*(_DWORD *)(v28 + 16);
    }
  }
}
