/*
 * func-name: ?Convert@MeshOps@@UAE_NPAVMesh@@W4Op@1@AAVMatrix@@@Z
 * func-address: 0x100e97f0
 * callers: none
 * callees: 0x10009730, 0x1000d680, 0x10179050, 0x10179840, 0x1017b990, 0x1017eaef, 0x101a24ac, 0x101a252e, 0x101a253a
 */

char __stdcall MeshOps::Convert(float *a1, unsigned int a2, int a3)
{
  signed int v4; // edi
  int (__thiscall *v5)(float *, char *); // edx
  int v6; // ebx
  char *v7; // esi
  unsigned int v8; // eax
  void *v9; // edi
  int v10; // esi
  void *v11; // edi
  int v12; // ecx
  double v13; // st7
  char *v14; // edi
  __int16 *v15; // eax
  double v16; // st6
  int v17; // edx
  double v18; // st6
  double v19; // st6
  double v20; // st6
  int v21; // edx
  double v22; // st6
  double v23; // st6
  double v24; // st6
  int v25; // edx
  double v26; // st6
  double v27; // st6
  double v28; // st6
  double v29; // st6
  const void *v30; // esi
  void *v31; // esi
  int v32; // edi
  void (__thiscall *v33)(float *, int, double *); // edx
  float v34; // edx
  float v35; // ecx
  void *v36; // edx
  int v37; // edi
  int v38; // eax
  int v39; // eax
  int v40; // esi
  int v41; // eax
  int v42; // edi
  int i; // esi
  int v44; // eax
  void (__thiscall *v45)(float *, int, double *); // edx
  int v46; // esi
  int v47; // eax
  int v48; // eax
  int v49; // esi
  int v50; // eax
  int v51; // edi
  int j; // esi
  void *v53; // eax
  signed int v54; // ecx
  int v55; // ecx
  char *v56; // esi
  const void *v57; // esi
  int v58; // eax
  const void *v59; // esi
  int v60; // eax
  int v61; // eax
  char *v62; // ecx
  int v63; // ecx
  int v64; // eax
  int (__thiscall *v65)(float *, double *, int); // eax
  const void *v66; // eax
  int (__thiscall *v67)(float *, double *, int); // edx
  const void *v68; // esi
  int v69; // eax
  int v70; // edi
  int k; // esi
  int v72; // ecx
  float *v73; // edx
  _BYTE *v74; // eax
  int v75; // esi
  unsigned __int16 *v76; // edi
  double v77; // st7
  int v78; // ecx
  bool v79; // cc
  int m; // edi
  void *v81; // edx
  int n; // eax
  int v83; // ecx
  __int16 v84; // cx
  int ii; // edi
  void (__thiscall *v86)(float *, int, _BYTE *); // edx
  void *v87; // edx
  int jj; // eax
  int v89; // ecx
  __int16 v90; // cx
  int v92; // [esp+30h] [ebp-2ECh]
  _DWORD v93[7]; // [esp+38h] [ebp-2E4h] BYREF
  double v94; // [esp+54h] [ebp-2C8h] BYREF
  double v95; // [esp+5Ch] [ebp-2C0h] BYREF
  float v96; // [esp+64h] [ebp-2B8h]
  int v97; // [esp+68h] [ebp-2B4h]
  void *v98[2]; // [esp+6Ch] [ebp-2B0h]
  double v99; // [esp+74h] [ebp-2A8h] BYREF
  float v100; // [esp+7Ch] [ebp-2A0h]
  void *Src[2]; // [esp+80h] [ebp-29Ch]
  float v102; // [esp+88h] [ebp-294h]
  float v103; // [esp+8Ch] [ebp-290h]
  double v104; // [esp+90h] [ebp-28Ch] BYREF
  float v105; // [esp+98h] [ebp-284h]
  int v106; // [esp+9Ch] [ebp-280h] BYREF
  double v107; // [esp+A0h] [ebp-27Ch] BYREF
  float v108; // [esp+A8h] [ebp-274h]
  double v109; // [esp+ACh] [ebp-270h] BYREF
  float v110; // [esp+B4h] [ebp-268h]
  double v111; // [esp+B8h] [ebp-264h] BYREF
  float v112; // [esp+C0h] [ebp-25Ch]
  float v113; // [esp+C4h] [ebp-258h]
  int v114; // [esp+C8h] [ebp-254h]
  int v115; // [esp+CCh] [ebp-250h]
  float v116; // [esp+D0h] [ebp-24Ch]
  float v117; // [esp+D4h] [ebp-248h]
  float v118; // [esp+D8h] [ebp-244h] BYREF
  float v119; // [esp+DCh] [ebp-240h]
  float v120; // [esp+E0h] [ebp-23Ch]
  float v121; // [esp+E8h] [ebp-234h]
  float v122; // [esp+ECh] [ebp-230h]
  float v123; // [esp+F0h] [ebp-22Ch]
  float v124; // [esp+F8h] [ebp-224h]
  float v125; // [esp+FCh] [ebp-220h]
  float v126; // [esp+100h] [ebp-21Ch]
  float v127[14]; // [esp+108h] [ebp-214h] BYREF
  float v128[14]; // [esp+140h] [ebp-1DCh] BYREF
  float v129[14]; // [esp+178h] [ebp-1A4h] BYREF
  _BYTE v130[4]; // [esp+1B0h] [ebp-16Ch] BYREF
  float v131; // [esp+1B4h] [ebp-168h]
  float v132; // [esp+1B8h] [ebp-164h]
  float v133; // [esp+1C0h] [ebp-15Ch]
  float v134; // [esp+1C4h] [ebp-158h]
  float v135; // [esp+1CCh] [ebp-150h]
  float v136; // [esp+1D0h] [ebp-14Ch]
  _BYTE v137[64]; // [esp+1E8h] [ebp-134h] BYREF
  _BYTE v138[64]; // [esp+228h] [ebp-F4h] BYREF
  float v139[14]; // [esp+268h] [ebp-B4h] BYREF
  _BYTE v140[56]; // [esp+2A0h] [ebp-7Ch] BYREF
  _DWORD v141[14]; // [esp+2D8h] [ebp-44h] BYREF
  int v142; // [esp+318h] [ebp-4h]

  v97 = (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 120))(a1);
  v4 = 3 * (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 116))(a1);
  v5 = *(int (__thiscall **)(float *, char *))(*(_DWORD *)a1 + 128);
  v98[1] = (void *)v4;
  v6 = v5(a1, (char *)&v94 + 4);
  v7 = (char *)(*(int (__thiscall **)(float *, int *))(*(_DWORD *)a1 + 136))(a1, &v106);
  v8 = a2;
  LOBYTE(v98[0]) = v106 == 4;
  Src[1] = v7;
  switch ( a2 )
  {
    case 9u:
      v9 = operator new(56 * v97);
      LODWORD(v99) = v9;
      v10 = v97;
      v142 = 0;
      if ( v9 )
      {
        sub_10009730((int)v9, 56, v97, (int (__thiscall *)(int))sub_10009700);
        v98[0] = v9;
      }
      else
      {
        v98[0] = 0;
      }
      v142 = -1;
      v11 = operator new((int)v98[1] * v106);
      LODWORD(v99) = v11;
      memcpy(v11, Src[1], (int)v98[1] * v106);
      v12 = 0;
      LODWORD(v95) = 0;
      if ( v10 > 0 )
      {
        v13 = 32767.0;
        v14 = (char *)v98[0] + 12;
        v15 = (__int16 *)(v6 + 24);
        Src[0] = (char *)v98[0] + 12;
        LODWORD(v104) = v6 + 24;
        do
        {
          if ( HIDWORD(v94) == 40 )
          {
            *((_DWORD *)v14 - 3) = *((_DWORD *)v15 - 6);
            *((_DWORD *)v14 - 2) = *((_DWORD *)v15 - 5);
            *((_DWORD *)v14 - 1) = *((_DWORD *)v15 - 4);
            LODWORD(v95) = *(v15 - 2);
            v16 = (double)SLODWORD(v95);
            LODWORD(v95) = *(v15 - 1);
            v17 = *v15;
            v118 = v16 / v13;
            v18 = (double)SLODWORD(v95);
            LODWORD(v95) = v17;
            *((float *)v14 + 3) = v118;
            v119 = v18 / v13;
            v19 = (double)SLODWORD(v95);
            *((float *)v14 + 4) = v119;
            v120 = v19 / v13;
            *((float *)v14 + 5) = v120;
            LODWORD(v95) = *(v15 - 6);
            v20 = (double)SLODWORD(v95);
            LODWORD(v95) = *(v15 - 5);
            v21 = *(v15 - 4);
            v124 = v20 / v13;
            v22 = (double)SLODWORD(v95);
            LODWORD(v95) = v21;
            *(float *)v14 = v124;
            v125 = v22 / v13;
            v23 = (double)SLODWORD(v95);
            *((float *)v14 + 1) = v125;
            v126 = v23 / v13;
            *((float *)v14 + 2) = v126;
            LODWORD(v95) = v15[2];
            v24 = (double)SLODWORD(v95);
            LODWORD(v95) = v15[3];
            v25 = v15[4];
            v121 = v24 / v13;
            v26 = (double)SLODWORD(v95);
            LODWORD(v95) = v25;
            *((float *)v14 + 6) = v121;
            v122 = v26 / v13;
            v27 = (double)SLODWORD(v95);
            *((float *)v14 + 7) = v122;
            v123 = v27 / v13;
            *((float *)v14 + 8) = v123;
            LODWORD(v95) = v15[6];
            v28 = (double)SLODWORD(v95);
            LODWORD(v95) = v15[7];
            *(float *)&Src[1] = v28 / v13;
            v29 = (double)SLODWORD(v95);
            *((void **)v14 + 9) = Src[1];
            v102 = v29 / v13;
            *((float *)v14 + 10) = v102;
          }
          else
          {
            v13 = 32767.0;
            v30 = (const void *)(*(int (__thiscall **)(float *, double *, int))(*(_DWORD *)a1 + 148))(
                                  a1,
                                  &v107,
                                  v6 + HIDWORD(v94) * v12);
            v15 = (__int16 *)LODWORD(v104);
            qmemcpy(v14 - 12, v30, 0x38u);
            v10 = v97;
            v12 = LODWORD(v95);
            v14 = (char *)Src[0];
          }
          ++v12;
          v15 += 20;
          v14 += 56;
          LODWORD(v95) = v12;
          LODWORD(v104) = v15;
          Src[0] = v14;
        }
        while ( v12 < v10 );
        v11 = (void *)LODWORD(v99);
      }
      LODWORD(v99) = v93;
      std::vector<Material *>::vector<Material *>(v93, (int)(a1 + 615));
      v92 = v10;
      v31 = v98[0];
      (*(void (__thiscall **)(float *, void *, void *, int, int, int, void *, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a1 + 72))(
        a1,
        v98[0],
        v11,
        56,
        v106,
        v92,
        v98[1],
        v93[0],
        v93[1],
        v93[2],
        v93[3]);
      operator delete[](v31);
      operator delete[](v11);
      goto LABEL_76;
    case 5u:
      v32 = 0;
      *(float *)&v99 = a1[609] + a1[612];
      *((float *)&v99 + 1) = a1[610] + a1[613];
      v100 = a1[611] + a1[614];
      *(float *)&Src[1] = *(float *)&v99 * 0.5;
      v102 = *((float *)&v99 + 1) * 0.5;
      v103 = 0.5 * v100;
      if ( v97 > 0 )
      {
        v99 = *(float *)&Src[1];
        v95 = v102;
        v104 = v103;
        do
        {
          (*(void (__thiscall **)(float *, double *, int))(*(_DWORD *)a1 + 148))(a1, &v107, v6 + HIDWORD(v94) * v32);
          v33 = *(void (__thiscall **)(float *, int, double *))(*(_DWORD *)a1 + 144);
          *(float *)&v107 = *(float *)&v107 - v99;
          *((float *)&v107 + 1) = *((float *)&v107 + 1) - v95;
          v108 = v108 - v104;
          v33(a1, v6 + HIDWORD(v94) * v32++, &v107);
        }
        while ( v32 < v97 );
      }
      v34 = v102;
      *(void **)(a3 + 48) = Src[1];
      v35 = v103;
      *(float *)(a3 + 52) = v34;
      v36 = v98[0];
      *(float *)(a3 + 56) = v35;
      v37 = *(_DWORD *)a1;
      v38 = (*(int (__thiscall **)(float *, _DWORD, char *, void *))(*(_DWORD *)a1 + 120))(a1, HIDWORD(v94), v7, v36);
      v39 = (*(int (__thiscall **)(float *, int, int))(v37 + 112))(a1, v6, v38);
      if ( v39 < 0 )
      {
        v40 = *(_DWORD *)dword_11249F38;
        v41 = sub_1017EAEF(v39);
        (*(void (**)(void *, const char *, ...))(v40 + 4))(
          dword_11249F38,
          " Error: %s, in: mesh->UpdateBoundingInfo((Vector*)&Verts[0],mesh->GetNumVertices(),stride,IndexesBuffer,bDWORDIndices)",
          v41);
      }
      goto LABEL_76;
    case 4u:
      qmemcpy(v138, (const void *)a3, sizeof(v138));
      sub_10179840(v137);
      v42 = v97;
      for ( i = 0; i < v42; ++i )
      {
        (*(void (__thiscall **)(float *, double *, int))(*(_DWORD *)a1 + 148))(a1, &v107, v6 + HIDWORD(v94) * i);
        *(float *)&v99 = 0.0;
        *((float *)&v99 + 1) = 0.0;
        v100 = 0.0;
        sub_10179050(&v107, &v99);
        *(float *)&v95 = 0.0;
        *((float *)&v95 + 1) = 0.0;
        v96 = 0.0;
        v107 = v99;
        v108 = v100;
        sub_10179050(&v109, &v95);
        *(float *)&v104 = 0.0;
        *((float *)&v104 + 1) = 0.0;
        v105 = 0.0;
        v109 = v95;
        v110 = v96;
        sub_10179050(&v111, &v104);
        v111 = v104;
        v112 = v105;
        v44 = sub_1017B990(&v118, &v109, &v111);
        v113 = *(float *)v44;
        v114 = *(_DWORD *)(v44 + 4);
        v45 = *(void (__thiscall **)(float *, int, double *))(*(_DWORD *)a1 + 144);
        v115 = *(_DWORD *)(v44 + 8);
        v45(a1, v6 + HIDWORD(v94) * i, &v107);
      }
      v46 = *(_DWORD *)a1;
      v47 = (*(int (__thiscall **)(float *, _DWORD, void *, void *))(*(_DWORD *)a1 + 120))(
              a1,
              HIDWORD(v94),
              Src[1],
              v98[0]);
      v48 = (*(int (__thiscall **)(float *, int, int))(v46 + 112))(a1, v6, v47);
      if ( v48 < 0 )
      {
        v49 = *(_DWORD *)dword_11249F38;
        v50 = sub_1017EAEF(v48);
        (*(void (**)(void *, const char *, ...))(v49 + 4))(
          dword_11249F38,
          " Error: %s, in: mesh->UpdateBoundingInfo((Vector*)&Verts[0],mesh->GetNumVertices(),stride,IndexesBuffer,bDWORDIndices)",
          v50);
      }
      goto LABEL_76;
    case 6u:
    case 7u:
      qmemcpy(v137, (const void *)a3, sizeof(v137));
      sub_10179840(v138);
      v51 = v97;
      for ( j = 0; j < v51; ++j )
      {
        (*(void (__thiscall **)(float *, double *, int))(*(_DWORD *)a1 + 148))(a1, &v107, v6 + HIDWORD(v94) * j);
        if ( a2 == 6 )
          v116 = -v116;
        else
          v117 = -v117;
        (*(void (__thiscall **)(float *, int, double *))(*(_DWORD *)a1 + 144))(a1, v6 + HIDWORD(v94) * j, &v107);
      }
      v8 = a2;
      v4 = (signed int)v98[1];
      v7 = (char *)Src[1];
      break;
  }
  if ( v8 == 8 )
  {
    v53 = operator new(v4);
    v54 = 0;
    for ( Src[0] = v53; v54 < v4; v54 += 3 )
      *((_BYTE *)v53 + v54) = 0;
    v55 = 0;
    LODWORD(v104) = 0;
    if ( v4 <= 0 )
      goto LABEL_56;
    v56 = v7 + 4;
    v98[0] = v56;
    while ( 1 )
    {
      if ( *((_BYTE *)v53 + v55) )
        goto LABEL_55;
      v57 = (const void *)(*(int (__thiscall **)(float *, double *, int))(*(_DWORD *)a1 + 148))(
                            a1,
                            &v107,
                            v6 + HIDWORD(v94) * *((unsigned __int16 *)v56 - 2));
      v58 = *(_DWORD *)a1;
      qmemcpy(v139, v57, sizeof(v139));
      v59 = (const void *)(*(int (__thiscall **)(float *, double *, int))(v58 + 148))(
                            a1,
                            &v107,
                            v6 + HIDWORD(v94) * *((unsigned __int16 *)v98[0] - 1));
      v60 = *(_DWORD *)a1;
      qmemcpy(v140, v59, sizeof(v140));
      qmemcpy(
        v141,
        (const void *)(*(int (__thiscall **)(float *, double *, int))(v60 + 148))(
                        a1,
                        &v107,
                        v6 + HIDWORD(v94) * *(unsigned __int16 *)v98[0]),
        sizeof(v141));
      v61 = 0;
      v62 = (char *)Src[1] + 4;
      LODWORD(v95) = 0;
      v97 = (int)Src[1] + 4;
      while ( 1 )
      {
        if ( *((_BYTE *)Src[0] + v61) || v61 == LODWORD(v104) )
          goto LABEL_51;
        v63 = HIDWORD(v94) * *((unsigned __int16 *)v62 - 2);
        v127[0] = 0.0;
        v127[1] = 0.0;
        v127[2] = 0.0;
        v127[3] = 0.0;
        v127[4] = 0.0;
        v127[5] = 0.0;
        v127[6] = 0.0;
        v127[7] = 0.0;
        v127[8] = 0.0;
        v127[9] = 0.0;
        v64 = *(_DWORD *)a1;
        v127[10] = 0.0;
        v65 = *(int (__thiscall **)(float *, double *, int))(v64 + 148);
        v127[11] = 0.0;
        v127[12] = 0.0;
        v127[13] = 0.0;
        v128[0] = 0.0;
        v128[1] = 0.0;
        v128[2] = 0.0;
        v128[3] = 0.0;
        v128[4] = 0.0;
        v128[5] = 0.0;
        v128[6] = 0.0;
        v128[7] = 0.0;
        v128[8] = 0.0;
        v128[9] = 0.0;
        v128[10] = 0.0;
        v128[11] = 0.0;
        v128[12] = 0.0;
        v128[13] = 0.0;
        v129[0] = 0.0;
        v129[1] = 0.0;
        v129[2] = 0.0;
        v129[3] = 0.0;
        v129[4] = 0.0;
        v129[5] = 0.0;
        v129[6] = 0.0;
        v129[7] = 0.0;
        v129[8] = 0.0;
        v129[9] = 0.0;
        v129[10] = 0.0;
        v129[11] = 0.0;
        v129[12] = 0.0;
        v129[13] = 0.0;
        v66 = (const void *)v65(a1, &v107, v6 + v63);
        v67 = *(int (__thiscall **)(float *, double *, int))(*(_DWORD *)a1 + 148);
        qmemcpy(v127, v66, sizeof(v127));
        v68 = (const void *)v67(a1, &v107, v6 + HIDWORD(v94) * *(unsigned __int16 *)(v97 - 2));
        v69 = *(_DWORD *)a1;
        qmemcpy(v128, v68, sizeof(v128));
        qmemcpy(
          v129,
          (const void *)(*(int (__thiscall **)(float *, double *, int))(v69 + 148))(
                          a1,
                          &v107,
                          v6 + HIDWORD(v94) * *(unsigned __int16 *)v97),
          sizeof(v129));
        v70 = 0;
        for ( k = 0; k < 42; k += 14 )
        {
          v72 = 0;
          v73 = &v127[13];
          while ( *(v73 - 1) != v139[k + 12] || *v73 != v139[k + 13] )
          {
            ++v72;
            v73 += 14;
            if ( v72 >= 3 )
              goto LABEL_48;
          }
          ++v70;
LABEL_48:
          ;
        }
        if ( v70 == 3 )
          break;
        v61 = LODWORD(v95);
LABEL_51:
        v61 += 3;
        v62 = (char *)(v97 + 6);
        LODWORD(v95) = v61;
        v97 += 6;
        if ( v61 >= (int)v98[1] )
          goto LABEL_54;
      }
      v74 = Src[0];
      v75 = LODWORD(v95);
      v127[6] = -v127[6];
      v76 = (unsigned __int16 *)Src[1];
      v77 = v128[6];
      *((_BYTE *)Src[0] + LODWORD(v104)) = 1;
      v74[v75] = 1;
      v128[6] = -v77;
      v78 = HIDWORD(v94) * v76[v75];
      v129[6] = -v129[6];
      (*(void (__thiscall **)(float *, int, float *))(*(_DWORD *)a1 + 144))(a1, v6 + v78, v127);
      (*(void (__thiscall **)(float *, int, float *))(*(_DWORD *)a1 + 144))(a1, v6 + HIDWORD(v94) * v76[v75 + 1], v128);
      (*(void (__thiscall **)(float *, int, float *))(*(_DWORD *)a1 + 144))(a1, v6 + HIDWORD(v94) * v76[v75 + 2], v129);
LABEL_54:
      v4 = (signed int)v98[1];
      v53 = Src[0];
LABEL_55:
      v55 = LODWORD(v104) + 3;
      v56 = (char *)v98[0] + 6;
      v79 = LODWORD(v104) + 3 < v4;
      LODWORD(v104) += 3;
      v98[0] = (char *)v98[0] + 6;
      if ( !v79 )
      {
LABEL_56:
        operator delete[](v53);
        goto LABEL_76;
      }
    }
  }
  if ( v8 <= 1 )
  {
    for ( m = 0; m < (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 120))(a1); ++m )
    {
      (*(void (__thiscall **)(float *, double *, int))(*(_DWORD *)a1 + 148))(a1, &v107, v6 + HIDWORD(v94) * m);
      *(float *)&v99 = -*(float *)&v109;
      *((float *)&v99 + 1) = -*((float *)&v109 + 1);
      v109 = v99;
      v100 = -v110;
      v110 = v100;
      *(float *)&v95 = -*(float *)&v111;
      *((float *)&v95 + 1) = -*((float *)&v111 + 1);
      v96 = -v112;
      v112 = v96;
      v111 = v95;
      (*(void (__thiscall **)(float *, int, double *))(*(_DWORD *)a1 + 144))(a1, v6 + HIDWORD(v94) * m, &v107);
    }
    if ( !a2 )
    {
      v81 = v98[1];
      for ( n = 0; n < (int)v81; n += 3 )
      {
        if ( LOBYTE(v98[0]) )
        {
          v83 = *(_DWORD *)&v7[4 * n];
          *(_DWORD *)&v7[4 * n] = *(_DWORD *)&v7[4 * n + 8];
          *(_DWORD *)&v7[4 * n + 8] = v83;
        }
        else
        {
          v84 = *(_WORD *)&v7[2 * n];
          *(_WORD *)&v7[2 * n] = *(_WORD *)&v7[2 * n + 4];
          *(_WORD *)&v7[2 * n + 4] = v84;
        }
      }
      goto LABEL_76;
    }
    v8 = a2;
  }
  if ( v8 == 2 )
  {
    for ( ii = 0; ii < (*(int (__thiscall **)(float *))(*(_DWORD *)a1 + 120))(a1); ++ii )
    {
      (*(void (__thiscall **)(float *, _BYTE *, int))(*(_DWORD *)a1 + 148))(a1, v130, v6 + HIDWORD(v94) * ii);
      v86 = *(void (__thiscall **)(float *, int, _BYTE *))(*(_DWORD *)a1 + 144);
      *(float *)&v99 = v131;
      v131 = v132;
      v132 = *(float *)&v99;
      *(float *)&v99 = v133;
      v133 = v134;
      v134 = *(float *)&v99;
      *(float *)&v99 = v135;
      v135 = v136;
      v136 = *(float *)&v99;
      v86(a1, v6 + HIDWORD(v94) * ii, v130);
    }
    v87 = v98[1];
    for ( jj = 0; jj < (int)v87; jj += 3 )
    {
      if ( LOBYTE(v98[0]) )
      {
        v89 = *(_DWORD *)&v7[4 * jj];
        *(_DWORD *)&v7[4 * jj] = *(_DWORD *)&v7[4 * jj + 8];
        *(_DWORD *)&v7[4 * jj + 8] = v89;
      }
      else
      {
        v90 = *(_WORD *)&v7[2 * jj];
        *(_WORD *)&v7[2 * jj] = *(_WORD *)&v7[2 * jj + 4];
        *(_WORD *)&v7[2 * jj + 4] = v90;
      }
    }
  }
LABEL_76:
  (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 140))(a1);
  (*(void (__thiscall **)(float *))(*(_DWORD *)a1 + 132))(a1);
  return 1;
}
