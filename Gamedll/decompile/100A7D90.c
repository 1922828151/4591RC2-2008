/*
 * func-name: ?PostRender@LaserParticleSystem@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100a7d90
 * callers: 0x1001243b
 * callees: 0x100029cd, 0x10003cba, 0x102c09f0
 */

void __thiscall LaserParticleSystem::PostRender(LaserParticleSystem *this, struct Camera *a2)
{
  int v3; // eax
  unsigned int BatchForWriting; // ebx
  int v5; // eax
  unsigned int v6; // edi
  double v7; // st7
  int v8; // ebp
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // ebx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  double v16; // st7
  int v17; // eax
  double v18; // st7
  int v19; // eax
  int v20; // eax
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  void (__cdecl *v24)(); // ebx
  int v25; // eax
  double v26; // st7
  int v27; // eax
  double v28; // st7
  int v29; // eax
  int v30; // ecx
  int v31; // eax
  int v32; // edx
  int *v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // ecx
  int v38; // ebx
  int v39; // eax
  int v40; // eax
  char *v41; // eax
  int v42; // edx
  int v43; // edx
  int v44; // edx
  int v45; // edx
  int v46; // eax
  float v47; // [esp+4h] [ebp-D0h]
  float v48; // [esp+4h] [ebp-D0h]
  float v49; // [esp+4h] [ebp-D0h]
  float v50; // [esp+4h] [ebp-D0h]
  float v51; // [esp+4h] [ebp-D0h]
  float v52; // [esp+4h] [ebp-D0h]
  int v53; // [esp+8h] [ebp-CCh]
  int v54; // [esp+Ch] [ebp-C8h]
  char *v55; // [esp+10h] [ebp-C4h]
  float v56; // [esp+14h] [ebp-C0h]
  float v57; // [esp+18h] [ebp-BCh]
  float v58; // [esp+1Ch] [ebp-B8h]
  float v59; // [esp+20h] [ebp-B4h]
  float v60; // [esp+24h] [ebp-B0h]
  float v61; // [esp+28h] [ebp-ACh]
  float v62; // [esp+2Ch] [ebp-A8h]
  float v63; // [esp+30h] [ebp-A4h]
  float v64; // [esp+34h] [ebp-A0h]
  float v65; // [esp+38h] [ebp-9Ch]
  float v66; // [esp+3Ch] [ebp-98h]
  float v67; // [esp+40h] [ebp-94h]
  float v68; // [esp+44h] [ebp-90h]
  float v69; // [esp+48h] [ebp-8Ch]
  float v70; // [esp+4Ch] [ebp-88h]
  int v71; // [esp+50h] [ebp-84h]
  int v72; // [esp+54h] [ebp-80h]
  int v73; // [esp+58h] [ebp-7Ch]
  float v74; // [esp+5Ch] [ebp-78h]
  float v75; // [esp+60h] [ebp-74h]
  float v76; // [esp+64h] [ebp-70h]
  int v77; // [esp+68h] [ebp-6Ch]
  int v78; // [esp+6Ch] [ebp-68h]
  int v79; // [esp+70h] [ebp-64h]
  int v80; // [esp+74h] [ebp-60h]
  int v81; // [esp+78h] [ebp-5Ch]
  int v82; // [esp+7Ch] [ebp-58h]
  int v83; // [esp+80h] [ebp-54h]
  int v84; // [esp+84h] [ebp-50h]
  int v85; // [esp+88h] [ebp-4Ch]
  int v86; // [esp+8Ch] [ebp-48h]
  int v87; // [esp+90h] [ebp-44h]
  int v88; // [esp+94h] [ebp-40h]
  float v89; // [esp+98h] [ebp-3Ch]
  float v90; // [esp+9Ch] [ebp-38h]
  float v91; // [esp+A0h] [ebp-34h]
  float v92; // [esp+A4h] [ebp-30h]
  float v93; // [esp+A8h] [ebp-2Ch]
  float v94; // [esp+ACh] [ebp-28h]
  float v95[3]; // [esp+B0h] [ebp-24h] BYREF
  float v96[3]; // [esp+BCh] [ebp-18h] BYREF
  _BYTE v97[12]; // [esp+C8h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 51) )
  {
    v3 = *((_DWORD *)this + 44);
    if ( v3 )
    {
      BatchForWriting = FXManager::getBatchForWriting(this, v3, *((_DWORD *)this + 56));
      v53 = BatchForWriting;
    }
    else
    {
      v5 = *((_DWORD *)this + 45);
      if ( !v5 || !*(_DWORD *)(v5 + 152) )
        return;
      v53 = FXManager::getBatchForWriting(this, *((struct Material **)this + 45));
      BatchForWriting = v53;
    }
    if ( BatchForWriting != -1 )
    {
      v55 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12);
      v6 = 0;
      v54 = *(_DWORD *)(sub_10003CBA(BatchForWriting) + 16);
      if ( *((int *)this + 51) > 0 )
      {
        v7 = 0.0;
        v8 = 0;
        do
        {
          v9 = *((_DWORD *)this + 48);
          if ( !v9 || v6 >= (*((_DWORD *)this + 49) - v9) / 96 )
          {
            _invalid_parameter_noinfo();
            v7 = 0.0;
          }
          if ( v7 < *(float *)(*((_DWORD *)this + 48) + v8 + 52) )
          {
            v10 = *((_DWORD *)this + 48);
            if ( !v10 || v6 >= (*((_DWORD *)this + 49) - v10) / 96 )
              _invalid_parameter_noinfo();
            v11 = *((_DWORD *)this + 48);
            v12 = v8 + v11;
            if ( !v11 || v6 >= (*((_DWORD *)this + 49) - v11) / 96 )
              _invalid_parameter_noinfo();
            v13 = *((_DWORD *)this + 48);
            v56 = *(float *)(v13 + v8 + 24);
            v57 = *(float *)(v13 + v8 + 28);
            v58 = *(float *)(v8 + v13 + 32);
            sub_100029CD();
            v47 = *((float *)this + 92);
            v14 = *((_DWORD *)this + 48);
            v74 = v56 * v47;
            v75 = v57 * v47;
            v76 = v47 * v58;
            v48 = *(float *)(v12 + 60) / *((float *)this + 64);
            if ( !v14 || v6 >= (*((_DWORD *)this + 49) - v14) / 96 )
              _invalid_parameter_noinfo();
            v15 = *((_DWORD *)this + 48);
            v16 = *(float *)(v15 + v8);
            v17 = v8 + v15;
            v68 = v74 * v48;
            *(float *)&v86 = v16 - v68;
            v69 = v75 * v48;
            *(float *)&v87 = *(float *)(v17 + 4) - v69;
            v18 = *(float *)(v17 + 8);
            dword_103B54A0 = v86;
            dword_103B54A4 = v87;
            v70 = v48 * v76;
            *(float *)&v88 = v18 - v70;
            dword_103B54A8 = v88;
            v19 = *((_DWORD *)this + 48);
            if ( !v19 || v6 >= (*((_DWORD *)this + 49) - v19) / 96 )
              _invalid_parameter_noinfo();
            v20 = *((_DWORD *)this + 48);
            v21 = v8 + v20;
            if ( !v20 || v6 >= (*((_DWORD *)this + 49) - v20) / 96 )
              _invalid_parameter_noinfo();
            v22 = *((_DWORD *)this + 48);
            v59 = *(float *)(v22 + v8 + 24);
            v60 = *(float *)(v22 + v8 + 28);
            v61 = *(float *)(v8 + v22 + 32);
            sub_100029CD();
            v49 = *((float *)this + 92);
            v23 = *((_DWORD *)this + 48);
            v62 = v59 * v49;
            v63 = v60 * v49;
            v64 = v49 * v61;
            v50 = *(float *)(v21 + 60) / *((float *)this + 64);
            if ( v23 && v6 < (*((_DWORD *)this + 49) - v23) / 96 )
            {
              v24 = _invalid_parameter_noinfo;
            }
            else
            {
              v24 = _invalid_parameter_noinfo;
              _invalid_parameter_noinfo();
            }
            v25 = *((_DWORD *)this + 48);
            v26 = *(float *)(v25 + v8);
            v27 = v8 + v25;
            v92 = v62 * v50;
            *(float *)&v80 = v26 + v92;
            v93 = v63 * v50;
            *(float *)&v81 = *(float *)(v27 + 4) + v93;
            v28 = *(float *)(v27 + 8);
            dword_103B54AC = v80;
            dword_103B54B0 = v81;
            v94 = v50 * v64;
            *(float *)&v82 = v28 + v94;
            dword_103B54B4 = v82;
            v29 = *((_DWORD *)this + 48);
            if ( !v29 || v6 >= (*((_DWORD *)this + 49) - v29) / 96 )
              v24();
            v30 = *((_DWORD *)this + 48);
            v89 = *((float *)this + 5) - *(float *)(v30 + v8 + 12);
            v90 = *((float *)this + 6) - *(float *)(v30 + v8 + 16);
            v91 = *((float *)this + 7) - *(float *)(v30 + v8 + 20);
            *(float *)&dword_103B54A0 = v89 + *(float *)&dword_103B54A0;
            *(float *)&dword_103B54A4 = v90 + *(float *)&dword_103B54A4;
            *(float *)&dword_103B54A8 = v91 + *(float *)&dword_103B54A8;
            v31 = *((_DWORD *)this + 48);
            if ( !v31 || v6 >= (*((_DWORD *)this + 49) - v31) / 96 )
              v24();
            v32 = *((_DWORD *)this + 48);
            v65 = *((float *)this + 5) - *(float *)(v32 + v8 + 12);
            v66 = *((float *)this + 6) - *(float *)(v32 + v8 + 16);
            v67 = *((float *)this + 7) - *(float *)(v32 + v8 + 20);
            *(float *)&dword_103B54AC = v65 + *(float *)&dword_103B54AC;
            *(float *)&dword_103B54B0 = v66 + *(float *)&dword_103B54B0;
            *(float *)&dword_103B54B4 = v67 + *(float *)&dword_103B54B4;
            v95[0] = *(float *)&dword_103B54AC - *(float *)&dword_103B54A0;
            v95[1] = *(float *)&dword_103B54B0 - *(float *)&dword_103B54A4;
            v95[2] = *(float *)&dword_103B54B4 - *(float *)&dword_103B54A8;
            v96[0] = *((float *)a2 + 88) - *(float *)&dword_103B54A0;
            v96[1] = *((float *)a2 + 89) - *(float *)&dword_103B54A4;
            v96[2] = *((float *)a2 + 90) - *(float *)&dword_103B54A8;
            v33 = (int *)sub_102C09F0(v97, v96, v95);
            dword_103B5470 = *v33;
            *(float *)&v71 = -*(float *)&dword_103B5470;
            dword_103B5474 = v33[1];
            *(float *)&v72 = -*(float *)&dword_103B5474;
            dword_103B5478 = v33[2];
            dword_103B547C = v71;
            *(float *)&v73 = -*(float *)&dword_103B5478;
            dword_103B5480 = v72;
            dword_103B5484 = v73;
            sub_100029CD();
            sub_100029CD();
            v34 = *((_DWORD *)this + 48);
            if ( !v34 || v6 >= (*((_DWORD *)this + 49) - v34) / 96 )
              v24();
            v51 = *(float *)(*((_DWORD *)this + 48) + v8 + 60);
            *(float *)&dword_103B547C = v51 * *(float *)&dword_103B547C;
            *(float *)&dword_103B5480 = v51 * *(float *)&dword_103B5480;
            *(float *)&dword_103B5484 = v51 * *(float *)&dword_103B5484;
            v35 = *((_DWORD *)this + 48);
            if ( !v35 || v6 >= (*((_DWORD *)this + 49) - v35) / 96 )
              v24();
            v52 = *(float *)(*((_DWORD *)this + 48) + v8 + 60);
            *(float *)&dword_103B5470 = v52 * *(float *)&dword_103B5470;
            *(float *)&dword_103B5474 = v52 * *(float *)&dword_103B5474;
            *(float *)&dword_103B5478 = v52 * *(float *)&dword_103B5478;
            *(float *)&v77 = *(float *)&dword_103B547C + *(float *)&dword_103B54AC;
            dword_103B5494 = v77;
            *(float *)&v78 = *(float *)&dword_103B5480 + *(float *)&dword_103B54B0;
            dword_103B5498 = v78;
            *(float *)&v79 = *(float *)&dword_103B5484 + *(float *)&dword_103B54B4;
            dword_103B549C = v79;
            *(float *)&v83 = *(float *)&dword_103B54AC + *(float *)&dword_103B5470;
            dword_103B5488 = v83;
            *(float *)&v84 = *(float *)&dword_103B54B0 + *(float *)&dword_103B5474;
            dword_103B548C = v84;
            *(float *)&v85 = *(float *)&dword_103B54B4 + *(float *)&dword_103B5478;
            dword_103B5490 = v85;
            *(float *)&dword_103B547C = *(float *)&dword_103B547C + *(float *)&dword_103B54A0;
            *(float *)&dword_103B5480 = *(float *)&dword_103B5480 + *(float *)&dword_103B54A4;
            *(float *)&dword_103B5484 = *(float *)&dword_103B5484 + *(float *)&dword_103B54A8;
            *(float *)&dword_103B5470 = *(float *)&dword_103B54A0 + *(float *)&dword_103B5470;
            *(float *)&dword_103B5474 = *(float *)&dword_103B54A4 + *(float *)&dword_103B5474;
            *(float *)&dword_103B5478 = *(float *)&dword_103B54A8 + *(float *)&dword_103B5478;
            v36 = *((_DWORD *)this + 48);
            if ( !v36 || v6 >= (*((_DWORD *)this + 49) - v36) / 96 )
              v24();
            v37 = v54;
            v38 = *(_DWORD *)(*((_DWORD *)this + 48) + v8 + 44);
            if ( v54 > 1499 )
            {
              *(_DWORD *)(sub_10003CBA(v53) + 16) = v54;
              v39 = *((_DWORD *)this + 44);
              if ( v39 )
                v40 = FXManager::addNewBatch(v39, *((_DWORD *)this + 56));
              else
                v40 = FXManager::addNewBatch(*((struct Material **)this + 45));
              v53 = v40;
              if ( v40 == -1 )
                return;
              v55 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(v40) + 12);
              v37 = *(_DWORD *)(sub_10003CBA(v53) + 16);
            }
            v41 = &v55[96 * v37];
            *((_DWORD *)v41 + 3) = v38;
            *(_DWORD *)v41 = dword_103B547C;
            *((_DWORD *)v41 + 1) = dword_103B5480;
            v42 = dword_103B5484;
            *((float *)v41 + 4) = 0.0;
            *((_DWORD *)v41 + 9) = v38;
            *((float *)v41 + 5) = 1.0;
            *((_DWORD *)v41 + 2) = v42;
            *((_DWORD *)v41 + 6) = dword_103B5470;
            *((_DWORD *)v41 + 7) = dword_103B5474;
            v43 = dword_103B5478;
            *((float *)v41 + 10) = 1.0;
            *((float *)v41 + 11) = 1.0;
            *((_DWORD *)v41 + 15) = v38;
            *((_DWORD *)v41 + 8) = v43;
            *((_DWORD *)v41 + 12) = dword_103B5494;
            *((_DWORD *)v41 + 13) = dword_103B5498;
            v44 = dword_103B549C;
            *((float *)v41 + 16) = 0.0;
            *((float *)v41 + 17) = 0.0;
            *((_DWORD *)v41 + 21) = v38;
            BatchForWriting = v53;
            v7 = 0.0;
            *((_DWORD *)v41 + 14) = v44;
            *((_DWORD *)v41 + 18) = dword_103B5488;
            *((_DWORD *)v41 + 19) = dword_103B548C;
            v45 = dword_103B5490;
            *((float *)v41 + 22) = 1.0;
            *((float *)v41 + 23) = 0.0;
            *((_DWORD *)v41 + 20) = v45;
            v54 = v37 + 1;
          }
          ++v6;
          v8 += 96;
        }
        while ( (signed int)v6 < *((_DWORD *)this + 51) );
      }
      v46 = FXManager::batchedQuads[1];
      if ( !v46 || BatchForWriting >= (FXManager::batchedQuads[2] - v46) / 20 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(FXManager::batchedQuads[1] + 20 * BatchForWriting + 16) = v54;
    }
  }
}
