/*
 * func-name: sub_10077C20
 * func-address: 0x10077c20
 * callers: 0x10078420, 0x1011b870, 0x1011d270
 * callees: 0x1006bd90, 0x10078b90, 0x10078c70, 0x10078d20, 0x100a1af0, 0x1017b990
 */

void __thiscall sub_10077C20(int this, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v10; // ebp
  unsigned int i; // edi
  int v13; // eax
  _DWORD *v14; // eax
  int v15; // ecx
  int v16; // ebp
  int v17; // esi
  unsigned int v18; // edi
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // ebp
  int v23; // eax
  int v24; // edi
  int v25; // ecx
  unsigned int *v26; // esi
  float v27; // eax
  unsigned int v28; // eax
  unsigned __int16 *v29; // eax
  unsigned int v30; // edi
  int v31; // eax
  int v32; // eax
  int v33; // ecx
  unsigned int v34; // edi
  float *v35; // ebp
  int v36; // ecx
  float *v37; // eax
  unsigned int v38; // edi
  int v39; // eax
  int v40; // ecx
  unsigned int v41; // edi
  float *v42; // ebp
  int v43; // ecx
  float *v44; // eax
  void (__cdecl *v45)(); // ebp
  int v46; // eax
  unsigned int *v47; // eax
  unsigned int v48; // edi
  float v49; // ecx
  int v50; // eax
  int v51; // eax
  int v52; // edx
  unsigned int v53; // edi
  float *v54; // ebp
  float *v55; // eax
  double v56; // st7
  unsigned int *v57; // eax
  unsigned int v58; // edi
  int v59; // eax
  int v60; // eax
  int v61; // ecx
  unsigned int v62; // edi
  float *v63; // ebp
  int v64; // eax
  double v65; // st7
  float *v66; // eax
  double v67; // st7
  unsigned int *v68; // eax
  unsigned int v69; // edi
  int v70; // eax
  int v71; // eax
  unsigned int v72; // ebp
  float *v73; // edi
  int v74; // eax
  double v75; // st7
  float *v76; // eax
  double v77; // st7
  unsigned int *v78; // eax
  unsigned int v79; // ecx
  int v80; // esi
  char *v81; // esi
  char *v82; // ebp
  char *v83; // edi
  char *v84; // eax
  int v85; // ecx
  int v86[16]; // [esp-40h] [ebp-148h] BYREF
  float v87; // [esp+10h] [ebp-F8h]
  float v88; // [esp+14h] [ebp-F4h]
  int v89; // [esp+18h] [ebp-F0h]
  int v90; // [esp+1Ch] [ebp-ECh]
  unsigned int v91; // [esp+20h] [ebp-E8h]
  int v92; // [esp+24h] [ebp-E4h]
  int v93; // [esp+28h] [ebp-E0h]
  unsigned int v94; // [esp+2Ch] [ebp-DCh]
  int v95; // [esp+30h] [ebp-D8h]
  float v96; // [esp+34h] [ebp-D4h] BYREF
  float v97; // [esp+38h] [ebp-D0h]
  float v98; // [esp+3Ch] [ebp-CCh]
  int v99; // [esp+40h] [ebp-C8h]
  float v100[3]; // [esp+44h] [ebp-C4h] BYREF
  float v101[3]; // [esp+50h] [ebp-B8h] BYREF
  float v102[3]; // [esp+5Ch] [ebp-ACh] BYREF
  float v103[3]; // [esp+68h] [ebp-A0h] BYREF
  float v104[3]; // [esp+74h] [ebp-94h] BYREF
  float v105[3]; // [esp+80h] [ebp-88h] BYREF
  float v106[3]; // [esp+8Ch] [ebp-7Ch] BYREF
  float v107[16]; // [esp+98h] [ebp-70h] BYREF
  char v108[12]; // [esp+D8h] [ebp-30h] BYREF
  char v109[12]; // [esp+E4h] [ebp-24h] BYREF
  char v110[12]; // [esp+F0h] [ebp-18h] BYREF
  char v111[12]; // [esp+FCh] [ebp-Ch] BYREF

  sub_10078D20(this + 16, a7 / 3);
  v96 = 0.0;
  *(float *)&v86[13] = 0.0;
  v97 = 0.0;
  v98 = 0.0;
  sub_10078B90(this, a6, v86[13], COERCE_INT(0.0), COERCE_INT(0.0));
  v10 = 0;
  v89 = 0;
  for ( i = 0; i < sub_1006BD90((_DWORD *)this); v10 += 12 )
  {
    v13 = *(_DWORD *)(this + 4);
    if ( !v13 || i >= (*(_DWORD *)(this + 8) - v13) / 12 )
      invalid_parameter_noinfo();
    v14 = (_DWORD *)(v10 + *(_DWORD *)(this + 4));
    *v14 = *a2;
    v14[1] = a2[1];
    v15 = a2[2];
    a2 = (_DWORD *)((char *)a2 + a4);
    v14[2] = v15;
    ++i;
  }
  v16 = a9;
  v17 = a9 + 2476;
  v18 = 0;
  v91 = 0;
  if ( std::vector<AttributeRange>::size(a9 + 2476) )
  {
    v90 = 0;
    do
    {
      v19 = *(_DWORD *)(v17 + 4);
      if ( !v19 || v18 >= (*(_DWORD *)(v17 + 8) - v19) / 20 )
        invalid_parameter_noinfo();
      v20 = (*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)v16 + 108))(v16, *(_DWORD *)(v90 + *(_DWORD *)(v17 + 4)));
      v99 = v20;
      if ( !v20 || *(_BYTE *)(v20 + 144) )
      {
        v21 = *(_DWORD *)(v17 + 4);
        if ( !v21 || v18 >= (*(_DWORD *)(v17 + 8) - v21) / 20 )
          invalid_parameter_noinfo();
        v22 = *(_DWORD *)(v90 + *(_DWORD *)(v17 + 4) + 4);
        v93 = v89 << 6;
        v94 = v22;
        v92 = a3 + 6 * v22 + 4;
        v95 = a3 + 12 * v22 + 8;
        while ( 1 )
        {
          v23 = *(_DWORD *)(a9 + 2480);
          v17 = a9 + 2476;
          if ( !v23 || v18 >= (*(_DWORD *)(a9 + 2484) - v23) / 20 )
            invalid_parameter_noinfo();
          v24 = *(_DWORD *)(a9 + 2480);
          if ( !v24 || v91 >= (*(_DWORD *)(a9 + 2484) - v24) / 20 )
            invalid_parameter_noinfo();
          if ( v22 >= *(_DWORD *)(v90 + v24 + 4) + *(_DWORD *)(v90 + *(_DWORD *)(a9 + 2480) + 8) )
            break;
          v25 = *(_DWORD *)(this + 20);
          if ( !v25 || v89 >= (unsigned int)((*(_DWORD *)(this + 24) - v25) >> 6) )
            invalid_parameter_noinfo();
          v26 = (unsigned int *)(v93 + *(_DWORD *)(this + 20));
          if ( a5 == 4 )
          {
            v27 = *(float *)&v95;
            *v26 = *(_DWORD *)(v95 - 8);
            v26[1] = *(_DWORD *)(LODWORD(v27) - 4);
            v28 = *(_DWORD *)LODWORD(v27);
          }
          else
          {
            v29 = (unsigned __int16 *)v92;
            *v26 = *(unsigned __int16 *)(v92 - 4);
            v26[1] = *(v29 - 1);
            v28 = *v29;
          }
          v30 = *v26;
          v26[2] = v28;
          v31 = *(_DWORD *)(this + 4);
          if ( !v31 || v30 >= (*(_DWORD *)(this + 8) - v31) / 12 )
            invalid_parameter_noinfo();
          v32 = *(_DWORD *)(this + 4);
          v33 = 3 * v30;
          v34 = v26[1];
          v35 = (float *)(v32 + 4 * v33);
          if ( !v32 || v34 >= (*(_DWORD *)(this + 8) - v32) / 12 )
            invalid_parameter_noinfo();
          v36 = *(_DWORD *)(this + 4);
          v37 = (float *)(v36 + 12 * v34);
          v88 = v37[1] - v35[1];
          v87 = v37[2] - v35[2];
          v100[0] = *v37 - *v35;
          v100[1] = v88;
          v100[2] = v87;
          v38 = v26[1];
          if ( !v36 || v38 >= (*(_DWORD *)(this + 8) - v36) / 12 )
            invalid_parameter_noinfo();
          v39 = *(_DWORD *)(this + 4);
          v40 = 3 * v38;
          v41 = v26[2];
          v42 = (float *)(v39 + 4 * v40);
          if ( !v39 || v41 >= (*(_DWORD *)(this + 8) - v39) / 12 )
            invalid_parameter_noinfo();
          v43 = *(_DWORD *)(this + 4);
          v44 = (float *)(v43 + 12 * v41);
          v87 = v44[1] - v42[1];
          v88 = v44[2] - v42[2];
          v96 = *v44 - *v42;
          v97 = v87;
          v98 = v88;
          if ( v43 && v26[2] < (*(_DWORD *)(this + 8) - v43) / 12 )
          {
            v45 = invalid_parameter_noinfo;
          }
          else
          {
            v45 = invalid_parameter_noinfo;
            invalid_parameter_noinfo();
          }
          v46 = *(_DWORD *)(this + 4);
          if ( !v46 || *v26 >= (*(_DWORD *)(this + 8) - v46) / 12 )
            v45();
          v47 = (unsigned int *)sub_1017B990(v108, v100, &v96);
          v48 = v26[2];
          v26[4] = *v47;
          v49 = *(float *)&v99;
          v26[5] = v47[1];
          v26[6] = v47[2];
          *((float *)v26 + 3) = v49;
          v50 = *(_DWORD *)(this + 4);
          v102[0] = -*((float *)v26 + 4);
          v102[1] = -*((float *)v26 + 5);
          v102[2] = -*((float *)v26 + 6);
          if ( !v50 || v48 >= (*(_DWORD *)(this + 8) - v50) / 12 )
            v45();
          v51 = *(_DWORD *)(this + 4);
          v52 = 3 * v48;
          v53 = v26[1];
          v54 = (float *)(v51 + 4 * v52);
          if ( !v51 || v53 >= (*(_DWORD *)(this + 8) - v51) / 12 )
            invalid_parameter_noinfo();
          v55 = (float *)(*(_DWORD *)(this + 4) + 12 * v53);
          v56 = v55[1] - v54[1];
          v86[15] = (int)v102;
          v87 = v56;
          v88 = v55[2] - v54[2];
          v106[0] = *v55 - *v54;
          v106[1] = v87;
          v106[2] = v88;
          v57 = (unsigned int *)sub_1017B990(v111, v106, v102);
          v58 = v26[1];
          v26[7] = *v57;
          v26[8] = v57[1];
          v26[9] = v57[2];
          v59 = *(_DWORD *)(this + 4);
          v105[0] = -*((float *)v26 + 4);
          v105[1] = -*((float *)v26 + 5);
          v105[2] = -*((float *)v26 + 6);
          if ( !v59 || v58 >= (*(_DWORD *)(this + 8) - v59) / 12 )
            invalid_parameter_noinfo();
          v60 = *(_DWORD *)(this + 4);
          v61 = 3 * v58;
          v62 = *v26;
          v63 = (float *)(v60 + 4 * v61);
          if ( !v60 || v62 >= (*(_DWORD *)(this + 8) - v60) / 12 )
            invalid_parameter_noinfo();
          v64 = *(_DWORD *)(this + 4);
          v65 = *(float *)(v64 + 12 * v62 + 4);
          v66 = (float *)(v64 + 12 * v62);
          v67 = v65 - v63[1];
          v86[15] = (int)v105;
          v87 = v67;
          v86[14] = (int)v104;
          v88 = v66[2] - v63[2];
          v104[0] = *v66 - *v63;
          v104[1] = v87;
          v104[2] = v88;
          v68 = (unsigned int *)sub_1017B990(v110, v104, v105);
          v69 = *v26;
          v26[10] = *v68;
          v26[11] = v68[1];
          v26[12] = v68[2];
          v70 = *(_DWORD *)(this + 4);
          v103[0] = -*((float *)v26 + 4);
          v103[1] = -*((float *)v26 + 5);
          v103[2] = -*((float *)v26 + 6);
          if ( !v70 || v69 >= (*(_DWORD *)(this + 8) - v70) / 12 )
            invalid_parameter_noinfo();
          v71 = *(_DWORD *)(this + 4);
          v72 = v26[2];
          v73 = (float *)(v71 + 12 * v69);
          if ( !v71 || v72 >= (*(_DWORD *)(this + 8) - v71) / 12 )
            invalid_parameter_noinfo();
          v74 = *(_DWORD *)(this + 4);
          v75 = *(float *)(v74 + 12 * v72 + 4);
          v76 = (float *)(v74 + 12 * v72);
          v77 = v75 - v73[1];
          v86[15] = (int)v103;
          v87 = v77;
          v86[14] = (int)v101;
          v88 = v76[2] - v73[2];
          v101[0] = *v76 - *v73;
          v101[1] = v87;
          v101[2] = v88;
          v78 = (unsigned int *)sub_1017B990(v109, v101, v103);
          v79 = *v78;
          v93 += 64;
          v95 += 12;
          v18 = v91;
          v26[13] = v79;
          v26[14] = v78[1];
          v26[15] = v78[2];
          ++v94;
          ++v89;
          v22 = v94;
          v92 += 6;
        }
        v18 = v91;
        v16 = a9;
      }
      v90 += 20;
      v91 = ++v18;
    }
    while ( v18 < std::vector<AttributeRange>::size(v17) );
  }
  v107[4] = 0.0;
  v107[5] = 0.0;
  v107[6] = 0.0;
  v107[7] = 0.0;
  v107[8] = 0.0;
  v107[9] = 0.0;
  v107[10] = 0.0;
  v107[11] = 0.0;
  v107[12] = 0.0;
  v107[13] = 0.0;
  v107[14] = 0.0;
  v107[15] = 0.0;
  qmemcpy(v86, v107, sizeof(v86));
  v80 = v89;
  sub_10078C70(
    this + 16,
    v89,
    v86[0],
    v86[1],
    v86[2],
    v86[3],
    v86[4],
    v86[5],
    v86[6],
    v86[7],
    v86[8],
    v86[9],
    v86[10],
    v86[11],
    v86[12],
    v86[13],
    v86[14],
    v86[15]);
  *(_BYTE *)(this + 32) = 1;
  if ( !v80 )
  {
    v81 = *(char **)(this + 8);
    if ( *(_DWORD *)(this + 4) > (unsigned int)v81 )
      invalid_parameter_noinfo();
    v82 = *(char **)(this + 4);
    if ( (unsigned int)v82 > *(_DWORD *)(this + 8) )
      invalid_parameter_noinfo();
    if ( v82 != v81 )
    {
      v83 = *(char **)(this + 8);
      v84 = v81;
      if ( v81 != v83 )
      {
        v85 = v82 - v81;
        do
        {
          *(_DWORD *)&v84[v85] = *(_DWORD *)v84;
          *(_DWORD *)&v84[v85 + 4] = *((_DWORD *)v84 + 1);
          *(_DWORD *)&v84[v85 + 8] = *((_DWORD *)v84 + 2);
          v84 += 12;
        }
        while ( v84 != v83 );
      }
      *(_DWORD *)(this + 8) = &v82[12 * ((v83 - v81) / 12)];
    }
  }
}
