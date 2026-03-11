/*
 * func-name: ?PostRender@DynamicLasers@@UAEXAAVCamera@@@Z_0
 * func-address: 0x1007b900
 * callers: 0x10008b57
 * callees: 0x100018cf, 0x100029cd, 0x10003cba, 0x10009890, 0x1000c81f, 0x1001205d, 0x10019894, 0x102c09f0
 */

void __thiscall DynamicLasers::PostRender(DynamicLasers *this, struct Camera *a2)
{
  bool v3; // sf
  int v4; // eax
  int BatchForWriting; // esi
  int v6; // eax
  int v7; // eax
  unsigned int v8; // esi
  bool v9; // cc
  char *v10; // edi
  unsigned int v11; // ebx
  char *v12; // esi
  bool v13; // cf
  unsigned int v14; // eax
  unsigned int v15; // esi
  char **v16; // eax
  float *v17; // esi
  unsigned int v18; // esi
  char **v19; // esi
  char **v20; // eax
  char *v21; // edi
  unsigned int v22; // esi
  float *v23; // eax
  double v24; // st7
  float *v25; // edi
  float *v26; // eax
  double v27; // st7
  _DWORD *v28; // eax
  _DWORD *v29; // eax
  double v30; // st7
  double v31; // st7
  int v32; // eax
  float v33; // edx
  float v34; // eax
  char *v35; // edi
  double v36; // st7
  double v37; // st7
  char *v38; // esi
  double v39; // st7
  int v40; // esi
  double v41; // st7
  int v42; // eax
  DynamicLasers *v43; // ecx
  int v44; // eax
  int v45; // esi
  int v46; // eax
  char *v47; // ebx
  int v48; // esi
  char *v49; // edi
  int v50; // ecx
  char *v51; // ebx
  int v52; // eax
  char *v53; // ebx
  char *v54; // edi
  int v55; // edx
  char *v56; // esi
  int v57; // ecx
  unsigned int v58; // edx
  int v59; // ecx
  char *v60; // eax
  unsigned int v61; // esi
  int v62; // edx
  unsigned int v63; // esi
  int v64; // eax
  int v65; // [esp-4h] [ebp-124h]
  char *v66; // [esp+10h] [ebp-110h] BYREF
  unsigned int v67; // [esp+14h] [ebp-10Ch]
  double v68; // [esp+18h] [ebp-108h]
  char *v69; // [esp+24h] [ebp-FCh]
  float *v70; // [esp+28h] [ebp-F8h]
  int v71; // [esp+2Ch] [ebp-F4h]
  int v72; // [esp+30h] [ebp-F0h]
  char *v73; // [esp+34h] [ebp-ECh]
  unsigned int v74; // [esp+38h] [ebp-E8h]
  DynamicLasers *v75; // [esp+3Ch] [ebp-E4h]
  char *v76; // [esp+40h] [ebp-E0h]
  float v77; // [esp+44h] [ebp-DCh]
  int v78; // [esp+48h] [ebp-D8h]
  int v79; // [esp+4Ch] [ebp-D4h]
  float v80; // [esp+50h] [ebp-D0h]
  float v81; // [esp+54h] [ebp-CCh]
  float v82; // [esp+58h] [ebp-C8h]
  float v83; // [esp+5Ch] [ebp-C4h]
  int v84; // [esp+60h] [ebp-C0h]
  int v85; // [esp+64h] [ebp-BCh]
  float v86; // [esp+68h] [ebp-B8h]
  int v87; // [esp+6Ch] [ebp-B4h]
  int v88; // [esp+70h] [ebp-B0h]
  float v89; // [esp+74h] [ebp-ACh]
  float v90; // [esp+78h] [ebp-A8h]
  float v91; // [esp+7Ch] [ebp-A4h]
  float v92; // [esp+80h] [ebp-A0h]
  int v93; // [esp+84h] [ebp-9Ch]
  int v94; // [esp+88h] [ebp-98h]
  float v95; // [esp+8Ch] [ebp-94h]
  int v96; // [esp+90h] [ebp-90h]
  int v97; // [esp+94h] [ebp-8Ch]
  float v98; // [esp+98h] [ebp-88h]
  int v99; // [esp+9Ch] [ebp-84h]
  int v100; // [esp+A0h] [ebp-80h]
  float v101; // [esp+A4h] [ebp-7Ch]
  float v102; // [esp+A8h] [ebp-78h]
  float v103; // [esp+ACh] [ebp-74h]
  float v104; // [esp+B0h] [ebp-70h]
  int v105; // [esp+B4h] [ebp-6Ch]
  int v106; // [esp+B8h] [ebp-68h]
  float v107; // [esp+BCh] [ebp-64h]
  int v108; // [esp+C0h] [ebp-60h]
  int v109; // [esp+C4h] [ebp-5Ch]
  float v110; // [esp+C8h] [ebp-58h]
  int v111; // [esp+CCh] [ebp-54h]
  int v112; // [esp+D0h] [ebp-50h]
  float v113; // [esp+D4h] [ebp-4Ch]
  float v114; // [esp+D8h] [ebp-48h]
  float v115; // [esp+DCh] [ebp-44h]
  char *v116; // [esp+E0h] [ebp-40h]
  unsigned int v117; // [esp+E4h] [ebp-3Ch]
  char *v118; // [esp+E8h] [ebp-38h]
  unsigned int v119; // [esp+ECh] [ebp-34h]
  char v120[8]; // [esp+F0h] [ebp-30h] BYREF
  char v121[8]; // [esp+F8h] [ebp-28h] BYREF
  char v122[8]; // [esp+100h] [ebp-20h] BYREF
  char v123[12]; // [esp+108h] [ebp-18h] BYREF
  char v124[12]; // [esp+114h] [ebp-Ch] BYREF

  v3 = *((int *)this + 45) < 0;
  v75 = this;
  if ( !v3 )
  {
    v4 = *((_DWORD *)this + 62);
    if ( v4 )
    {
      BatchForWriting = FXManager::getBatchForWriting(this, v4, *((_DWORD *)this + 56));
      v72 = BatchForWriting;
LABEL_7:
      if ( BatchForWriting == -1 )
        return;
      v76 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12);
      v7 = sub_10003CBA(BatchForWriting);
      v8 = *((_DWORD *)this + 65);
      v9 = v8 <= *((_DWORD *)this + 66);
      v10 = (char *)this + 256;
      v71 = *(_DWORD *)(v7 + 16);
      if ( !v9 )
        _invalid_parameter_noinfo();
      v65 = *((_DWORD *)this + 45);
      v73 = (char *)this + 256;
      v74 = v8;
      sub_10009890((int)&v66, v65);
      v11 = v67;
      while ( 1 )
      {
        v9 = *((_DWORD *)v10 + 1) <= *((_DWORD *)v10 + 2);
        v12 = v66;
        LODWORD(v68) = *((_DWORD *)v10 + 2);
        if ( !v9 )
          _invalid_parameter_noinfo();
        if ( !v12 || v12 != v10 )
          _invalid_parameter_noinfo();
        if ( v11 == LODWORD(v68) )
        {
          v11 = *((_DWORD *)v10 + 1);
          if ( v11 > *((_DWORD *)v10 + 2) )
            _invalid_parameter_noinfo();
          v66 = v10;
          v67 = v11;
        }
        else
        {
          if ( !v12 )
            _invalid_parameter_noinfo();
          if ( v11 >= *((_DWORD *)v12 + 2) )
            _invalid_parameter_noinfo();
          if ( *(float *)(v11 + 32) > 0.0 )
          {
            v14 = *((_DWORD *)v10 + 1);
            v9 = v14 <= *((_DWORD *)v10 + 2);
            v69 = v12;
            v70 = (float *)v11;
            LODWORD(v68) = v14;
            if ( !v9 )
              _invalid_parameter_noinfo();
            if ( v12 != v10 )
              _invalid_parameter_noinfo();
            if ( v11 == LODWORD(v68) )
            {
              v15 = *((_DWORD *)v10 + 2);
              if ( *((_DWORD *)v10 + 1) > v15 )
                _invalid_parameter_noinfo();
              v118 = v10;
              v119 = v15;
              v16 = (char **)sub_1000C81F((int)v122, 1);
              v17 = (float *)v16[1];
              v69 = *v16;
            }
            else
            {
              if ( v11 <= *((_DWORD *)v12 + 1) )
                _invalid_parameter_noinfo();
              v17 = (float *)(v11 - 48);
            }
            v70 = v17;
            if ( !v69 )
              _invalid_parameter_noinfo();
            if ( (unsigned int)v17 >= *((_DWORD *)v69 + 2) )
              _invalid_parameter_noinfo();
            if ( v17[8] > 0.0 )
            {
              if ( (unsigned int)v17 >= *((_DWORD *)v69 + 2) )
                _invalid_parameter_noinfo();
              v92 = *((float *)a2 + 88) - *v17;
              *(float *)&v93 = *((float *)a2 + 89) - v17[1];
              v30 = *((float *)a2 + 90) - v17[2];
              DynamicLasers::vCamera = LODWORD(v92);
              dword_103B5114 = v93;
              *(float *)&v94 = v30;
              dword_103B5118 = v94;
              if ( (unsigned int)v17 >= *((_DWORD *)v69 + 2) )
                _invalid_parameter_noinfo();
              if ( v11 >= *((_DWORD *)v66 + 2) )
                _invalid_parameter_noinfo();
              v104 = *(float *)v11 - *v17;
              *(float *)&v105 = *(float *)(v11 + 4) - v17[1];
              v31 = *(float *)(v11 + 8) - v17[2];
              DynamicLasers::vLaser = LODWORD(v104);
              *(float *)&v106 = v31;
              dword_103B5120 = v105;
              dword_103B5124 = v106;
              v32 = sub_102C09F0(v124, &DynamicLasers::vCamera, &DynamicLasers::vLaser);
              DynamicLasers::vLaserRight = *(_DWORD *)v32;
              v33 = *(float *)(v32 + 4);
              v98 = -DynamicLasers::vLaserRight;
              dword_103B512C = LODWORD(v33);
              v34 = *(float *)(v32 + 8);
              *(float *)&v99 = -v33;
              dword_103B5130 = LODWORD(v34);
              DynamicLasers::vLaserLeft = LODWORD(v98);
              *(float *)&v100 = -v34;
              dword_103B5138 = v99;
              dword_103B513C = v100;
              sub_100029CD();
              sub_100029CD();
              if ( v11 >= *((_DWORD *)v66 + 2) )
                _invalid_parameter_noinfo();
              v35 = v69;
              *(_DWORD *)(v11 + 12) = DynamicLasers::vLaserRight;
              *(_DWORD *)(v11 + 16) = dword_103B512C;
              *(_DWORD *)(v11 + 20) = dword_103B5130;
              if ( (unsigned int)v17 >= *((_DWORD *)v35 + 2) )
              {
                _invalid_parameter_noinfo();
                if ( (unsigned int)v17 >= *((_DWORD *)v35 + 2) )
                  _invalid_parameter_noinfo();
              }
              v13 = (unsigned int)v17 < *((_DWORD *)v35 + 2);
              *(float *)&v68 = v17[10];
              v80 = v17[3] * *(float *)&v68;
              v81 = v17[4] * *(float *)&v68;
              v82 = *(float *)&v68 * v17[5];
              if ( !v13 )
                _invalid_parameter_noinfo();
              v83 = *v17 - v80;
              *(float *)&v84 = v17[1] - v81;
              v36 = v17[2];
              DynamicLasers::vStartLeft = LODWORD(v83);
              dword_103B5144 = v84;
              *(float *)&v85 = v36 - v82;
              dword_103B5148 = v85;
              if ( (unsigned int)v17 >= *((_DWORD *)v35 + 2) )
              {
                _invalid_parameter_noinfo();
                if ( (unsigned int)v17 >= *((_DWORD *)v35 + 2) )
                  _invalid_parameter_noinfo();
              }
              v13 = (unsigned int)v17 < *((_DWORD *)v35 + 2);
              *(float *)&v68 = v17[10];
              v89 = *(float *)&v68 * v17[3];
              v90 = v17[4] * *(float *)&v68;
              v91 = *(float *)&v68 * v17[5];
              if ( !v13 )
                _invalid_parameter_noinfo();
              v95 = v89 + *v17;
              *(float *)&v96 = v17[1] + v90;
              v37 = v17[2];
              v38 = v66;
              DynamicLasers::vStartRight = LODWORD(v95);
              dword_103B5150 = v96;
              *(float *)&v97 = v37 + v91;
              dword_103B5154 = v97;
              if ( v11 >= *((_DWORD *)v66 + 2) )
                _invalid_parameter_noinfo();
              v13 = v11 < *((_DWORD *)v38 + 2);
              *(float *)&v68 = *(float *)(v11 + 40);
              v101 = *(float *)&v68 * DynamicLasers::vLaserLeft;
              v102 = *(float *)&v68 * *(float *)&dword_103B5138;
              v103 = *(float *)&v68 * *(float *)&dword_103B513C;
              if ( !v13 )
                _invalid_parameter_noinfo();
              v107 = *(float *)v11 + v101;
              *(float *)&v108 = v102 + *(float *)(v11 + 4);
              v39 = *(float *)(v11 + 8);
              DynamicLasers::vEndLeft = LODWORD(v107);
              dword_103B515C = v108;
              *(float *)&v109 = v39 + v103;
              dword_103B5160 = v109;
              if ( v11 >= *((_DWORD *)v38 + 2) )
                _invalid_parameter_noinfo();
              v13 = v11 < *((_DWORD *)v38 + 2);
              *(float *)&v68 = *(float *)(v11 + 40);
              v113 = *(float *)&v68 * DynamicLasers::vLaserRight;
              v114 = *(float *)&v68 * *(float *)&dword_103B512C;
              v115 = *(float *)&v68 * *(float *)&dword_103B5130;
              if ( !v13 )
                _invalid_parameter_noinfo();
              v40 = v71;
              v86 = *(float *)v11 + v113;
              *(float *)&v87 = v114 + *(float *)(v11 + 4);
              v41 = *(float *)(v11 + 8);
              DynamicLasers::vEndRight = LODWORD(v86);
              dword_103B5168 = v87;
              *(float *)&v88 = v41 + v115;
              dword_103B516C = v88;
              if ( v71 > 1499 )
              {
                v42 = sub_10003CBA(v72);
                v43 = v75;
                *(_DWORD *)(v42 + 16) = v40;
                v44 = *((_DWORD *)v43 + 62);
                if ( v44 )
                {
                  v45 = FXManager::addNewBatch(v44, *((_DWORD *)v43 + 56));
                  v72 = v45;
                }
                else
                {
                  v46 = *((_DWORD *)v43 + 63);
                  if ( !v46 || !*(_DWORD *)(v46 + 152) )
                    return;
                  v45 = FXManager::addNewBatch(*((struct Material **)v43 + 63));
                  v72 = v45;
                }
                if ( v45 == -1 )
                  return;
                v76 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(v45) + 12);
                v71 = *(_DWORD *)(sub_10003CBA(v45) + 16);
              }
              v47 = v76;
              v48 = 4 * v71;
              v49 = &v76[96 * v71];
              *((_DWORD *)v49 + 3) = *(_DWORD *)(sub_100018CF() + 24);
              *(_DWORD *)v49 = DynamicLasers::vStartLeft;
              *((_DWORD *)v49 + 1) = dword_103B5144;
              v50 = dword_103B5148;
              *((float *)v49 + 4) = 0.0;
              *((_DWORD *)v49 + 2) = v50;
              v68 = *(float *)(sub_100018CF() + 36);
              v68 = v68 - *(float *)(sub_100018CF() + 32);
              v51 = &v47[24 * v48 + 24];
              *((float *)v49 + 5) = v68 / *(float *)(sub_100018CF() + 36);
              *((_DWORD *)v51 + 3) = *(_DWORD *)(sub_100018CF() + 24);
              *(_DWORD *)v51 = DynamicLasers::vStartRight;
              *((_DWORD *)v51 + 1) = dword_103B5150;
              v52 = dword_103B5154;
              *((float *)v51 + 4) = 1.0;
              *((_DWORD *)v51 + 2) = v52;
              *((float *)v51 + 5) = *((float *)v49 + 5);
              v53 = v76;
              v54 = &v76[24 * v48 + 48];
              *((_DWORD *)v54 + 3) = *(_DWORD *)(sub_100018CF() + 24);
              *(_DWORD *)v54 = DynamicLasers::vEndLeft;
              *((_DWORD *)v54 + 1) = dword_103B515C;
              v55 = dword_103B5160;
              *((float *)v54 + 4) = 0.0;
              *((_DWORD *)v54 + 2) = v55;
              v68 = *(float *)(sub_100018CF() + 36);
              v68 = v68 - *(float *)(sub_100018CF() + 32);
              v56 = &v53[24 * v48 + 72];
              *((float *)v54 + 5) = v68 / *(float *)(sub_100018CF() + 36);
              v57 = *(_DWORD *)(sub_100018CF() + 24);
              ++v71;
              *((_DWORD *)v56 + 3) = v57;
              *(_DWORD *)v56 = DynamicLasers::vEndRight;
              v58 = v67;
              *((_DWORD *)v56 + 1) = dword_103B5168;
              v59 = dword_103B516C;
              *((float *)v56 + 4) = 1.0;
              v60 = v66;
              *((_DWORD *)v56 + 2) = v59;
              *((float *)v56 + 5) = *((float *)v54 + 5);
              if ( v58 >= *((_DWORD *)v60 + 2) )
                _invalid_parameter_noinfo();
              v67 += 48;
              v11 = v67;
              goto LABEL_96;
            }
            v18 = *((_DWORD *)v10 + 2);
            v9 = *((_DWORD *)v10 + 1) <= v18;
            v73 = v66;
            v74 = v11;
            if ( !v9 )
              _invalid_parameter_noinfo();
            v116 = v10;
            v117 = v18;
            v19 = (char **)sub_1000C81F((int)v120, 1);
            if ( v66 != *v19 )
              _invalid_parameter_noinfo();
            if ( (char *)v11 == v19[1] )
            {
              v20 = (char **)sub_10019894((int)v121);
              v21 = *v20;
              v22 = (unsigned int)v20[1];
              v73 = *v20;
              v74 = v22;
            }
            else
            {
              sub_1001205D();
              v22 = v74;
              v21 = v73;
            }
            if ( !v21 )
              _invalid_parameter_noinfo();
            if ( v22 >= *((_DWORD *)v21 + 2) )
              _invalid_parameter_noinfo();
            if ( *(float *)(v22 + 32) > 0.0 )
            {
              v23 = (float *)sub_100018CF();
              v77 = *((float *)a2 + 88) - *v23;
              *(float *)&v78 = *((float *)a2 + 89) - v23[1];
              v24 = *((float *)a2 + 90) - v23[2];
              DynamicLasers::vCamera = LODWORD(v77);
              dword_103B5114 = v78;
              *(float *)&v79 = v24;
              dword_103B5118 = v79;
              v25 = (float *)sub_100018CF();
              v26 = (float *)sub_100018CF();
              v110 = *v26 - *v25;
              *(float *)&v111 = v26[1] - v25[1];
              v27 = v26[2] - v25[2];
              DynamicLasers::vLaser = LODWORD(v110);
              *(float *)&v112 = v27;
              dword_103B5120 = v111;
              dword_103B5124 = v112;
              v28 = (_DWORD *)sub_102C09F0(v123, &DynamicLasers::vCamera, &DynamicLasers::vLaser);
              DynamicLasers::vLaserRight = *v28;
              dword_103B512C = v28[1];
              dword_103B5130 = v28[2];
              sub_100029CD();
              v29 = (_DWORD *)(sub_100018CF() + 12);
              *v29 = DynamicLasers::vLaserRight;
              v29[1] = dword_103B512C;
              v29[2] = dword_103B5130;
            }
            v13 = v11 < *((_DWORD *)v66 + 2);
          }
          else
          {
            v13 = v11 < *((_DWORD *)v12 + 2);
          }
          if ( !v13 )
            _invalid_parameter_noinfo();
          v11 += 48;
          v67 = v11;
        }
LABEL_96:
        v61 = *((_DWORD *)v75 + 65);
        v10 = (char *)v75 + 256;
        if ( v61 > *((_DWORD *)v75 + 66) )
          _invalid_parameter_noinfo();
        v62 = 48 * *((_DWORD *)v75 + 45);
        HIDWORD(v68) = v61;
        v63 = v62 + v61;
        if ( v63 > *((_DWORD *)v10 + 2) || v63 < *((_DWORD *)v10 + 1) )
          _invalid_parameter_noinfo();
        if ( !v66 || v66 != v10 )
          _invalid_parameter_noinfo();
        if ( v11 == v63 )
        {
          v64 = sub_10003CBA(v72);
          *(_DWORD *)(v64 + 16) = v71;
          return;
        }
      }
    }
    v6 = *((_DWORD *)this + 63);
    if ( v6 && *(_DWORD *)(v6 + 152) )
    {
      BatchForWriting = FXManager::getBatchForWriting(this, *((struct Material **)this + 63));
      v72 = BatchForWriting;
      goto LABEL_7;
    }
  }
}
