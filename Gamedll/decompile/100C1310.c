/*
 * func-name: ?UpdateProjectionPolys@SurfaceDecal@@AAEXXZ_0
 * func-address: 0x100c1310
 * callers: 0x1000f9ca
 * callees: 0x10001d3e, 0x1000b866, 0x1000c2d9, 0x1000f155, 0x1000f1dc, 0x100155f5, 0x10019bff, 0x102c0750, 0x102c1270, 0x102c1be0, 0x102c2120, 0x102c9540, 0x102c9546, 0x102c9d50, 0x102c9db6, 0x102c9dbc, 0x102c9ea2
 */

void __thiscall SurfaceDecal::UpdateProjectionPolys(SurfaceDecal *this)
{
  SurfaceDecal *v1; // esi
  double v2; // st7
  double v3; // st7
  double v4; // st7
  int v5; // ecx
  char *v6; // edi
  unsigned int v7; // ebx
  int v8; // ebp
  char *v9; // esi
  unsigned int v10; // esi
  unsigned int v11; // ebp
  unsigned int v12; // edi
  char *v13; // ecx
  unsigned int v14; // ebp
  void *v15; // ebx
  unsigned int v16; // esi
  int v17; // ebx
  char *v18; // esi
  char *v19; // esi
  double v20; // st7
  int v21; // eax
  float *v22; // ebp
  unsigned int v23; // ebx
  int v24; // eax
  char *v25; // esi
  char *v26; // esi
  int v27; // eax
  char *v28; // esi
  char *v29; // esi
  int v30; // eax
  char *v31; // esi
  int v32; // edi
  int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // edi
  int v36; // eax
  unsigned int v37; // ebx
  char *v38; // esi
  double v39; // st7
  int v40; // eax
  float v41; // ebx
  double v42; // st7
  int v43; // eax
  double v44; // st6
  unsigned int v45; // esi
  int i; // edi
  int v47; // eax
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  double v52; // st7
  float *v53; // eax
  int v54; // eax
  int v55; // eax
  int v56[44]; // [esp-38h] [ebp-30Ch] BYREF
  int v57; // [esp+8Ch] [ebp-248h]
  int v58; // [esp+90h] [ebp-244h]
  int v59; // [esp+94h] [ebp-240h]
  int v60; // [esp+98h] [ebp-23Ch]
  int v61; // [esp+9Ch] [ebp-238h]
  int v62; // [esp+A0h] [ebp-234h]
  float v63; // [esp+A4h] [ebp-230h]
  int v64; // [esp+A8h] [ebp-22Ch] BYREF
  void *v65; // [esp+ACh] [ebp-228h]
  unsigned int v66; // [esp+B0h] [ebp-224h]
  int v67; // [esp+B4h] [ebp-220h]
  int v68; // [esp+B8h] [ebp-21Ch] BYREF
  void *v69; // [esp+BCh] [ebp-218h]
  float v70; // [esp+C0h] [ebp-214h]
  float v71; // [esp+C4h] [ebp-210h]
  int v72; // [esp+C8h] [ebp-20Ch] BYREF
  void *v73; // [esp+CCh] [ebp-208h]
  float v74; // [esp+D0h] [ebp-204h]
  float v75; // [esp+D4h] [ebp-200h]
  float v76[16]; // [esp+D8h] [ebp-1FCh] BYREF
  float v77[3]; // [esp+118h] [ebp-1BCh] BYREF
  float v78[3]; // [esp+124h] [ebp-1B0h] BYREF
  int v79[10]; // [esp+130h] [ebp-1A4h] BYREF
  float v80[16]; // [esp+158h] [ebp-17Ch] BYREF
  float v81[16]; // [esp+198h] [ebp-13Ch] BYREF
  char v82[64]; // [esp+1D8h] [ebp-FCh] BYREF
  char v83[176]; // [esp+218h] [ebp-BCh] BYREF
  int v84; // [esp+2D0h] [ebp-4h]

  v1 = this;
  v63 = *(float *)&this;
  if ( *((float *)this + 50) > 15.0 )
    *((float *)this + 50) = 15.0;
  sub_1000F1DC();
  v57 = *((int *)v1 + 50);
  v2 = *((float *)v1 + 50);
  v84 = 0;
  *(float *)&v58 = v2;
  v65 = 0;
  v3 = *((float *)v1 + 50);
  v66 = 0;
  *(float *)&v62 = v3;
  v67 = 0;
  *(float *)&v57 = *((float *)v1 + 5) + *(float *)&v57;
  *(float *)&v58 = *((float *)v1 + 6) + *(float *)&v58;
  *(float *)&v62 = *((float *)v1 + 7) + *(float *)&v62;
  v59 = v57;
  v79[7] = v57;
  v60 = v58;
  v79[8] = v58;
  v61 = v62;
  v4 = *((float *)v1 + 50);
  v79[9] = v62;
  *(float *)&v57 = -v4;
  v58 = v57;
  v62 = v57;
  *(float *)&v57 = *((float *)v1 + 5) + *(float *)&v57;
  *(float *)&v58 = *((float *)v1 + 6) + *(float *)&v58;
  *(float *)&v62 = *((float *)v1 + 7) + *(float *)&v62;
  v59 = v57;
  v79[4] = v57;
  v60 = v58;
  v79[5] = v58;
  v61 = v62;
  v79[6] = v62;
  *(float *)&v56[43] = -1.0e10;
  v56[42] = (int)v79;
  v56[41] = (int)&unk_103AE7E4;
  v56[40] = (int)&v64;
  v5 = *((_DWORD *)v1 + 29);
  LOBYTE(v84) = 1;
  World::GatherRenderingPolys(v5, 0, &v64, &unk_103AE7E4, v79, -1.0e10);
  v6 = (char *)v65;
  if ( v65 && (unsigned int)((int)(v66 - (_DWORD)v65) / 56) > 0x40 )
  {
    v56[43] = (int)v65;
LABEL_109:
    operator delete((void *)v56[43]);
    goto LABEL_110;
  }
  v7 = 0;
  v8 = 0;
  while ( v6 && v7 < (int)(v66 - (_DWORD)v6) / 56 )
  {
    *(float *)&v57 = *((float *)v1 + 47) * *(float *)&v6[v8 + 16]
                   + *(float *)&v6[v8 + 12] * *((float *)v1 + 46)
                   + *((float *)v1 + 48) * *(float *)&v6[v8 + 20];
    *(float *)&v57 = acos(*(float *)&v57);
    *(float *)&v57 = *(float *)&v57 * 57.29577791868205;
    *(float *)&v57 = fabs(*(float *)&v57);
    if ( *(float *)&v57 > 89.5 )
    {
      v9 = v6;
      if ( (unsigned int)v6 > v66 )
      {
        _invalid_parameter_noinfo();
        v6 = (char *)v65;
      }
      v10 = (unsigned int)&v9[v8];
      if ( v10 > v66 || v10 < (unsigned int)v6 )
        _invalid_parameter_noinfo();
      LOBYTE(v58) = 0;
      v56[43] = v58;
      *(float *)&v56[42] = v63;
      *(float *)&v56[41] = v63;
      sub_10001D3E(v10 + 56, v66, v10);
      v66 -= 56;
      v6 = (char *)v65;
      v1 = (SurfaceDecal *)LODWORD(v63);
      --v7;
      v8 -= 56;
    }
    ++v7;
    v8 += 56;
  }
  *(float *)&v59 = 0.0;
  *(float *)&v60 = 0.0;
  *(float *)&v61 = 0.0;
  if ( *(_BYTE *)(RenderDevice::Instance() + 1606) )
  {
    v11 = 0;
    v73 = 0;
    v74 = 0.0;
    v75 = 0.0;
    LOBYTE(v84) = 2;
    if ( v65 )
      v11 = (int)(v66 - (_DWORD)v65) / 56;
    qmemcpy(v56, Face::Face((Face *)v83), sizeof(v56));
    sub_1000F155(
      &v72,
      v11 / 3,
      v56[0],
      v56[1],
      v56[2],
      v56[3],
      v56[4],
      v56[5],
      v56[6],
      v56[7],
      v56[8],
      v56[9],
      v56[10],
      v56[11],
      v56[12],
      v56[13],
      v56[14],
      v56[15],
      v56[16],
      v56[17],
      v56[18],
      v56[19],
      v56[20],
      v56[21],
      v56[22],
      v56[23],
      v56[24],
      v56[25],
      v56[26],
      v56[27],
      v56[28],
      v56[29],
      v56[30],
      v56[31],
      v56[32],
      v56[33],
      v56[34],
      v56[35],
      v56[36],
      v56[37],
      v56[38],
      v56[39],
      v56[40],
      v56[41],
      v56[42],
      v56[43]);
    v12 = v66;
    v13 = (char *)v65;
    v14 = 0;
    v58 = 112;
    while ( v13 && v14 < (int)(v12 - (_DWORD)v13) / 56 )
    {
      v15 = v73;
      v16 = (int)v14 / 3;
      if ( !v73 || v16 >= (LODWORD(v74) - (int)v73) / 176 )
      {
        _invalid_parameter_noinfo();
        v12 = v66;
        v13 = (char *)v65;
        v15 = v73;
      }
      v57 = (int)v15 + 176 * v16;
      if ( !v13 || v14 >= (int)(v12 - (_DWORD)v13) / 56 )
      {
        _invalid_parameter_noinfo();
        v13 = (char *)v65;
      }
      v17 = v58;
      qmemcpy((void *)(v57 + 8), &v13[v58 - 112], 0x38u);
      v18 = (char *)v65;
      if ( !v65 || v14 + 1 >= (int)(v66 - (_DWORD)v65) / 56 )
      {
        _invalid_parameter_noinfo();
        v18 = (char *)v65;
      }
      qmemcpy((void *)(v57 + 64), &v18[v17 - 56], 0x38u);
      v19 = (char *)v65;
      if ( !v65 || v14 + 2 >= (int)(v66 - (_DWORD)v65) / 56 )
      {
        _invalid_parameter_noinfo();
        v19 = (char *)v65;
      }
      qmemcpy((void *)(v57 + 120), &v19[v17], 0x38u);
      v13 = (char *)v65;
      if ( !v65 || (v12 = v66, v14 >= (int)(v66 - (_DWORD)v65) / 56) )
      {
        _invalid_parameter_noinfo();
        v12 = v66;
        v13 = (char *)v65;
      }
      *(float *)&v59 = *(float *)&v59 + *(float *)&v13[v17 - 100];
      *(float *)&v60 = *(float *)&v13[v17 - 96] + *(float *)&v60;
      *(float *)&v61 = *(float *)&v13[v17 - 92] + *(float *)&v61;
      if ( !v13 || v14 + 1 >= (int)(v12 - (_DWORD)v13) / 56 )
      {
        _invalid_parameter_noinfo();
        v12 = v66;
        v13 = (char *)v65;
      }
      *(float *)&v59 = *(float *)&v13[v17 - 44] + *(float *)&v59;
      *(float *)&v60 = *(float *)&v13[v17 - 40] + *(float *)&v60;
      *(float *)&v61 = *(float *)&v13[v17 - 36] + *(float *)&v61;
      if ( !v13 || v14 + 2 >= (int)(v12 - (_DWORD)v13) / 56 )
      {
        _invalid_parameter_noinfo();
        v12 = v66;
        v13 = (char *)v65;
      }
      v14 += 3;
      v20 = *(float *)&v59 + *(float *)&v13[v17 + 12];
      v58 = v17 + 168;
      *(float *)&v59 = v20;
      *(float *)&v60 = *(float *)&v13[v17 + 16] + *(float *)&v60;
      *(float *)&v61 = *(float *)&v13[v17 + 20] + *(float *)&v61;
    }
    *(float *)&v69 = 0.0;
    v70 = 0.0;
    v71 = 0.0;
    LOBYTE(v84) = 3;
    FXManager::SplitFacesByBox(v79, &v72, &v68);
    if ( *(float *)&v69 == 0.0 )
      v21 = 0;
    else
      v21 = (LODWORD(v70) - (int)v69) / 176;
    v76[0] = 0.0;
    v76[1] = 0.0;
    v76[2] = 0.0;
    v76[3] = 0.0;
    v76[4] = 0.0;
    v76[5] = 0.0;
    v22 = (float *)(LODWORD(v63) + 268);
    v76[6] = 0.0;
    v76[7] = 0.0;
    v76[8] = 0.0;
    v76[9] = 0.0;
    v76[10] = 0.0;
    v76[11] = 0.0;
    v76[12] = 0.0;
    v76[13] = 0.0;
    qmemcpy(&v56[30], v76, 0x38u);
    sub_100155F5(
      (void *)(LODWORD(v63) + 268),
      3 * v21,
      v56[30],
      v56[31],
      v56[32],
      v56[33],
      v56[34],
      v56[35],
      v56[36],
      v56[37],
      v56[38],
      v56[39],
      v56[40],
      v56[41],
      v56[42],
      v56[43]);
    *(float *)&v62 = 0.0;
    *(float *)&v58 = 0.0;
    v23 = 2;
    v57 = 112;
    while ( *(float *)&v69 != 0.0 && v62 < (unsigned int)((LODWORD(v70) - (int)v69) / 176) )
    {
      v24 = *((_DWORD *)v22 + 1);
      v25 = (char *)v69 + v58;
      if ( !v24 || v23 - 2 >= (*((_DWORD *)v22 + 2) - v24) / 56 )
        _invalid_parameter_noinfo();
      qmemcpy((void *)(*((_DWORD *)v22 + 1) + v57 - 112), v25 + 8, 0x38u);
      v26 = (char *)v69;
      if ( *(float *)&v69 == 0.0 || v62 >= (unsigned int)((LODWORD(v70) - (int)v69) / 176) )
      {
        _invalid_parameter_noinfo();
        v26 = (char *)v69;
      }
      v27 = *((_DWORD *)v22 + 1);
      v28 = &v26[v58];
      if ( !v27 || v23 - 1 >= (*((_DWORD *)v22 + 2) - v27) / 56 )
        _invalid_parameter_noinfo();
      qmemcpy((void *)(v57 + *((_DWORD *)v22 + 1) - 56), v28 + 64, 0x38u);
      v29 = (char *)v69;
      if ( *(float *)&v69 == 0.0 || v62 >= (unsigned int)((LODWORD(v70) - (int)v69) / 176) )
      {
        _invalid_parameter_noinfo();
        v29 = (char *)v69;
      }
      v30 = *((_DWORD *)v22 + 1);
      v31 = &v29[v58];
      if ( !v30 || v23 >= (*((_DWORD *)v22 + 2) - v30) / 56 )
        _invalid_parameter_noinfo();
      v32 = *((_DWORD *)v22 + 1);
      ++v62;
      v58 += 176;
      v33 = v57 + 168;
      qmemcpy((void *)(v57 + v32), v31 + 120, 0x38u);
      v57 = v33;
      v23 += 3;
    }
    v34 = (unsigned int)v65;
    if ( v65 )
      v34 = (int)(v66 - (_DWORD)v65) / 56;
    *(float *)&v57 = 1.0 / (double)v34;
    *(float *)&v59 = *(float *)&v57 * *(float *)&v59;
    *(float *)&v60 = *(float *)&v60 * *(float *)&v57;
    *(float *)&v61 = *(float *)&v57 * *(float *)&v61;
    if ( *(float *)&v69 != 0.0 )
      operator delete(v69);
    *(float *)&v69 = 0.0;
    v70 = 0.0;
    v71 = 0.0;
    LOBYTE(v84) = 1;
    if ( v73 )
      operator delete(v73);
  }
  else
  {
    v22 = (float *)((char *)v1 + 268);
    sub_1000C2D9((int)&v64);
    v35 = 0;
    v36 = sub_10019BFF();
    v37 = v66;
    v38 = (char *)v65;
    if ( v36 )
    {
      v57 = 112;
      do
      {
        if ( !v38 || v35 >= (int)(v37 - (_DWORD)v38) / 56 )
        {
          _invalid_parameter_noinfo();
          v37 = v66;
          v38 = (char *)v65;
        }
        *(float *)&v59 = *(float *)&v59 + *(float *)&v38[v57 - 100];
        *(float *)&v60 = *(float *)&v38[v57 - 96] + *(float *)&v60;
        *(float *)&v61 = *(float *)&v38[v57 - 92] + *(float *)&v61;
        if ( !v38 || v35 + 1 >= (int)(v37 - (_DWORD)v38) / 56 )
        {
          _invalid_parameter_noinfo();
          v37 = v66;
          v38 = (char *)v65;
        }
        *(float *)&v59 = *(float *)&v59 + *(float *)&v38[v57 - 44];
        *(float *)&v60 = *(float *)&v38[v57 - 40] + *(float *)&v60;
        *(float *)&v61 = *(float *)&v38[v57 - 36] + *(float *)&v61;
        if ( !v38 || v35 + 2 >= (int)(v37 - (_DWORD)v38) / 56 )
        {
          _invalid_parameter_noinfo();
          v37 = v66;
          v38 = (char *)v65;
        }
        v39 = *(float *)&v38[v57 + 12] + *(float *)&v59;
        v35 += 3;
        v57 += 168;
        *(float *)&v59 = v39;
        *(float *)&v60 = *(float *)&v38[v57 - 152] + *(float *)&v60;
        *(float *)&v61 = *(float *)&v38[v57 - 148] + *(float *)&v61;
      }
      while ( v35 < sub_10019BFF() );
    }
    if ( v38 )
      v40 = (int)(v37 - (_DWORD)v38) / 56;
    else
      v40 = 0;
    *(float *)&v57 = 1.0 / (double)(unsigned int)v40;
    *(float *)&v59 = *(float *)&v57 * *(float *)&v59;
    *(float *)&v60 = *(float *)&v60 * *(float *)&v57;
    *(float *)&v61 = *(float *)&v57 * *(float *)&v61;
  }
  memset(v80, 0, sizeof(v80));
  sub_102C1270(1.0);
  v80[15] = 1.0;
  memset(v81, 0, sizeof(v81));
  sub_102C1270(1.0);
  v81[15] = 1.0;
  *(float *)&v57 = *(float *)(LODWORD(v63) + 184) * 2.0;
  *(float *)&v58 = *(float *)(LODWORD(v63) + 188) * 2.0;
  *(float *)&v62 = 2.0 * *(float *)(LODWORD(v63) + 192);
  *(float *)&v57 = *(float *)&v57 + *(float *)&v59;
  *(float *)&v58 = *(float *)&v60 + *(float *)&v58;
  *(float *)&v62 = *(float *)&v61 + *(float *)&v62;
  v68 = v57;
  v59 = v57;
  v69 = (void *)v58;
  v60 = v58;
  v70 = *(float *)&v62;
  v61 = v62;
  *(float *)&v58 = *(float *)&v57 * *(float *)&v57 + *(float *)&v58 * *(float *)&v58 + *(float *)&v62 * *(float *)&v62;
  if ( *(float *)&v58 >= 0.0000000099999999 )
  {
    *(float *)&v58 = sqrt(*(float *)&v58);
    *(float *)&v58 = 1.0 / *(float *)&v58;
    *(float *)&v59 = *(float *)&v58 * *(float *)&v57;
    *(float *)&v60 = *(float *)&v60 * *(float *)&v58;
    *(float *)&v61 = *(float *)&v58 * *(float *)&v61;
  }
  v41 = v63;
  v42 = *(float *)(LODWORD(v63) + 20) + *(float *)&v59;
  v56[43] = (int)v78;
  v56[42] = LODWORD(v63) + 20;
  v63 = v42;
  *(float *)&v57 = *(float *)(v56[42] + 4) + *(float *)&v60;
  *(float *)&v58 = *(float *)(v56[42] + 8) + *(float *)&v61;
  v77[0] = v63;
  v77[1] = *(float *)&v57;
  v77[2] = *(float *)&v58;
  v78[0] = 0.0;
  v78[1] = 0.80000001;
  v78[2] = 0.2;
  D3DXMatrixLookAtLH(v80, v77, v56[42], v78);
  v63 = *(float *)(LODWORD(v41) + 284) * (*(float *)(LODWORD(v41) + 200) + *(float *)(LODWORD(v41) + 200));
  D3DXMatrixOrthoLH(v81, LODWORD(v63), LODWORD(v63), 0.0099999998, 10.0);
  v43 = *(_DWORD *)(LODWORD(v41) + 176);
  *(float *)&v57 = 0.5 / (double)*(int *)(v43 + 80) + 0.5;
  v63 = 0.5 / (double)*(int *)(v43 + 84) + 0.5;
  sub_1000B866(0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, *(float *)&v57, v63, 0.001, 1.0);
  memset(v76, 0, sizeof(v76));
  sub_102C1270(1.0);
  v76[15] = 1.0;
  sub_102C2120(v80, v81, v76);
  qmemcpy(v80, v76, sizeof(v80));
  memset(v76, 0, sizeof(v76));
  sub_102C1270(1.0);
  v76[15] = 1.0;
  sub_102C2120(v80, v82, v76);
  v44 = *(float *)(LODWORD(v41) + 184) * 0.01350000035017729;
  qmemcpy(v80, v76, sizeof(v80));
  v63 = v44;
  *(float *)&v57 = *(float *)(LODWORD(v41) + 188) * 0.01350000035017729;
  *(float *)&v58 = 0.01350000035017729 * *(float *)(LODWORD(v41) + 192);
  v45 = 0;
  for ( i = 0; ; i += 56 )
  {
    v47 = *((_DWORD *)v22 + 1);
    if ( !v47 || v45 >= (*((_DWORD *)v22 + 2) - v47) / 56 )
      break;
    v48 = *((_DWORD *)v22 + 1);
    if ( !v48 || v45 >= (*((_DWORD *)v22 + 2) - v48) / 56 )
      _invalid_parameter_noinfo();
    v49 = *((_DWORD *)v22 + 1);
    *(float *)&v68 = 0.0;
    *(float *)&v69 = 0.0;
    v70 = 0.0;
    sub_102C1BE0(i + v49, &v68);
    v50 = *((_DWORD *)v22 + 1);
    if ( !v50 || v45 >= (*((_DWORD *)v22 + 2) - v50) / 56 )
      _invalid_parameter_noinfo();
    v51 = *((_DWORD *)v22 + 1);
    v52 = v63 + *(float *)(v51 + i);
    v53 = (float *)(i + v51);
    *v53 = v52;
    v53[1] = v53[1] + *(float *)&v57;
    v53[2] = *(float *)&v58 + v53[2];
    v54 = *((_DWORD *)v22 + 1);
    if ( !v54 || v45 >= (*((_DWORD *)v22 + 2) - v54) / 56 )
      _invalid_parameter_noinfo();
    *(float *)(i + *((_DWORD *)v22 + 1) + 48) = *(float *)&v68;
    v55 = *((_DWORD *)v22 + 1);
    if ( !v55 || v45 >= (*((_DWORD *)v22 + 2) - v55) / 56 )
      _invalid_parameter_noinfo();
    *(float *)(i + *((_DWORD *)v22 + 1) + 52) = *(float *)&v69;
    ++v45;
  }
  if ( v65 )
  {
    v56[43] = (int)v65;
    goto LABEL_109;
  }
LABEL_110:
  v84 = -1;
  v65 = 0;
  v66 = 0;
  v67 = 0;
  sub_102C0750(v79);
}
