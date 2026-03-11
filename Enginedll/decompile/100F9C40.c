/*
 * func-name: sub_100F9C40
 * func-address: 0x100f9c40
 * callers: 0x100fd750
 * callees: 0x101a2516
 */

void __stdcall sub_100F9C40(int a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  int v3; // eax
  void (__cdecl *v4)(); // ebp
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // eax
  int v9; // edx
  float *v10; // ebp
  int v11; // eax
  float *v12; // ebp
  int v13; // eax
  int v14; // ebp
  int v15; // ebp
  double v16; // st7
  int v17; // ebp
  int v18; // edx
  int v19; // eax
  int v20; // ebp
  float *v21; // ecx
  double v22; // st7
  float *v23; // edi
  double v24; // st7
  double v25; // st6
  int v26; // eax
  int v27; // ebp
  float *v28; // ecx
  double v29; // st7
  float *v30; // edi
  double v31; // st6
  int v32; // eax
  int v33; // ebp
  float *v34; // ecx
  double v35; // st7
  float *v36; // edi
  double v37; // st7
  double v38; // st6
  void (__cdecl *v39)(); // ebp
  int v40; // eax
  double v41; // st7
  int v42; // edx
  double v43; // st6
  double v44; // st7
  int v45; // ebp
  float *v46; // eax
  double v47; // st6
  double v48; // st5
  float *v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // ebp
  float *v53; // ecx
  double v54; // st7
  double v55; // st6
  float *v56; // edi
  float v57; // [esp+8h] [ebp-D8h]
  float v58; // [esp+8h] [ebp-D8h]
  float v59; // [esp+8h] [ebp-D8h]
  float v60; // [esp+8h] [ebp-D8h]
  float v61; // [esp+8h] [ebp-D8h]
  float v62; // [esp+8h] [ebp-D8h]
  float v63; // [esp+8h] [ebp-D8h]
  float v64; // [esp+8h] [ebp-D8h]
  float v65; // [esp+8h] [ebp-D8h]
  float v66; // [esp+8h] [ebp-D8h]
  float v67; // [esp+8h] [ebp-D8h]
  float v68; // [esp+8h] [ebp-D8h]
  float v69; // [esp+8h] [ebp-D8h]
  float v70; // [esp+Ch] [ebp-D4h]
  float v71; // [esp+Ch] [ebp-D4h]
  float *v72; // [esp+Ch] [ebp-D4h]
  float *v73; // [esp+Ch] [ebp-D4h]
  float *v74; // [esp+Ch] [ebp-D4h]
  float v75; // [esp+Ch] [ebp-D4h]
  float v76; // [esp+Ch] [ebp-D4h]
  float *v77; // [esp+Ch] [ebp-D4h]
  float v78; // [esp+10h] [ebp-D0h]
  float v79; // [esp+14h] [ebp-CCh]
  float v80; // [esp+18h] [ebp-C8h]
  unsigned int v81; // [esp+1Ch] [ebp-C4h]
  float v82; // [esp+20h] [ebp-C0h]
  float v83; // [esp+24h] [ebp-BCh]
  float v84; // [esp+28h] [ebp-B8h]
  float v85; // [esp+2Ch] [ebp-B4h]
  float v86; // [esp+30h] [ebp-B0h]
  float v87; // [esp+34h] [ebp-ACh]
  float v88; // [esp+38h] [ebp-A8h]
  float v89; // [esp+3Ch] [ebp-A4h]
  float v90; // [esp+40h] [ebp-A0h]
  float v91; // [esp+44h] [ebp-9Ch]
  float v92; // [esp+48h] [ebp-98h]
  float v93; // [esp+4Ch] [ebp-94h]
  float v94; // [esp+50h] [ebp-90h]
  float v95; // [esp+54h] [ebp-8Ch]
  float v96; // [esp+58h] [ebp-88h]
  float v97; // [esp+5Ch] [ebp-84h]
  float v98; // [esp+60h] [ebp-80h]
  float v99; // [esp+64h] [ebp-7Ch]
  float v100; // [esp+68h] [ebp-78h]
  float v101; // [esp+6Ch] [ebp-74h]
  float v102; // [esp+70h] [ebp-70h]
  float v103; // [esp+74h] [ebp-6Ch]
  float v104; // [esp+78h] [ebp-68h]
  float v105; // [esp+7Ch] [ebp-64h]
  float v106; // [esp+80h] [ebp-60h]
  float v107; // [esp+84h] [ebp-5Ch]
  float v108; // [esp+88h] [ebp-58h]
  float v109; // [esp+98h] [ebp-48h]
  float v110; // [esp+9Ch] [ebp-44h]
  float v111; // [esp+A0h] [ebp-40h]
  float v112; // [esp+B0h] [ebp-30h]
  float v113; // [esp+B4h] [ebp-2Ch]
  float v114; // [esp+B8h] [ebp-28h]
  float v115; // [esp+BCh] [ebp-24h]
  float v116; // [esp+C0h] [ebp-20h]
  float v117; // [esp+C4h] [ebp-1Ch]
  float v118; // [esp+C8h] [ebp-18h]
  float v119; // [esp+CCh] [ebp-14h]
  float v120; // [esp+D0h] [ebp-10h]
  float v121; // [esp+D4h] [ebp-Ch]
  float v122; // [esp+D8h] [ebp-8h]
  float v123; // [esp+DCh] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 4);
  v2 = 0;
  if ( v1 )
    v81 = (*(_DWORD *)(a1 + 8) - v1) / 56;
  else
    v81 = 0;
  if ( v81 )
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 4);
      if ( v3 && v2 < (*(_DWORD *)(a1 + 8) - v3) / 56 )
      {
        v4 = invalid_parameter_noinfo;
      }
      else
      {
        v4 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      v5 = *(_DWORD *)(a1 + 4);
      v6 = 56 * v2;
      v88 = *(float *)(56 * v2 + v5 + 32);
      v89 = *(float *)(56 * v2 + v5 + 36);
      v90 = *(float *)(56 * v2 + v5 + 40);
      if ( !v5 || v2 >= (*(_DWORD *)(a1 + 8) - v5) / 56 )
        v4();
      v7 = *(_DWORD *)(a1 + 4);
      v100 = *(float *)(v6 + v7 + 12);
      v101 = *(float *)(v6 + v7 + 16);
      v102 = *(float *)(v6 + v7 + 20);
      if ( !v7 || v2 >= (*(_DWORD *)(a1 + 8) - v7) / 56 )
        v4();
      v8 = *(_DWORD *)(a1 + 4);
      v86 = *(float *)(v6 + v8 + 48);
      v85 = *(float *)(v6 + v8 + 44);
      v87 = *(float *)(v6 + v8 + 52);
      v57 = v90 * v102 + v88 * v100 + v89 * v101;
      v109 = v100 * v57;
      v110 = v101 * v57;
      v111 = v57 * v102;
      v78 = v88 - v109;
      v79 = v89 - v110;
      v80 = v90 - v111;
      v58 = v78 * v85 + v86 * v79 + v87 * v80;
      v106 = v78 * v58;
      v107 = v79 * v58;
      v108 = v58 * v80;
      v59 = v86 * v101 + v100 * v85 + v87 * v102;
      v91 = v100 * v59;
      v92 = v101 * v59;
      v93 = v59 * v102;
      if ( !v8 || v2 >= (*(_DWORD *)(a1 + 8) - v8) / 56 )
        v4();
      v9 = *(_DWORD *)(a1 + 4);
      v10 = (float *)(v6 + v9 + 32);
      v60 = v79 * v79 + v78 * v78 + v80 * v80;
      v61 = sqrt(v60);
      v62 = 1.0 / v61;
      *v10 = *v10 * v62;
      v10[1] = *(float *)(v6 + v9 + 36) * v62;
      v10[2] = v62 * *(float *)(v6 + v9 + 40);
      v11 = *(_DWORD *)(a1 + 4);
      if ( !v11 || v2 >= (*(_DWORD *)(a1 + 8) - v11) / 56 )
        invalid_parameter_noinfo();
      v12 = (float *)(v6 + *(_DWORD *)(a1 + 4) + 44);
      v118 = v85 - v91;
      v112 = v118 - v106;
      v119 = v86 - v92;
      v113 = v119 - v107;
      v120 = v87 - v93;
      v114 = v120 - v108;
      v63 = v113 * v113 + v112 * v112 + v114 * v114;
      v64 = sqrt(v63);
      v65 = 1.0 / v64;
      *v12 = v65 * *v12;
      v12[1] = v12[1] * v65;
      v12[2] = v65 * v12[2];
      v13 = *(_DWORD *)(a1 + 4);
      if ( !v13 || v2 >= (*(_DWORD *)(a1 + 8) - v13) / 56 )
        invalid_parameter_noinfo();
      v14 = *(_DWORD *)(a1 + 4);
      v66 = *(float *)(v6 + v14 + 36) * *(float *)(v6 + v14 + 36)
          + *(float *)(v6 + v14 + 32) * *(float *)(v6 + v14 + 32)
          + *(float *)(v6 + v14 + 40) * *(float *)(v6 + v14 + 40);
      v67 = sqrt(v66);
      v70 = v67;
      if ( !v14 || v2 >= (*(_DWORD *)(a1 + 8) - v14) / 56 )
        invalid_parameter_noinfo();
      v15 = *(_DWORD *)(a1 + 4);
      v68 = *(float *)(v6 + v15 + 48) * *(float *)(v6 + v15 + 48)
          + *(float *)(v6 + v15 + 44) * *(float *)(v6 + v15 + 44)
          + *(float *)(v6 + v15 + 52) * *(float *)(v6 + v15 + 52);
      v69 = sqrt(v68);
      if ( v70 <= 0.001 )
        break;
      v16 = v69;
      if ( v69 <= 0.001 )
        goto LABEL_47;
      if ( !v15 || v2 >= (*(_DWORD *)(a1 + 8) - v15) / 56 )
        invalid_parameter_noinfo();
      v17 = *(_DWORD *)(a1 + 4);
      if ( !v17 || v2 >= (*(_DWORD *)(a1 + 8) - v17) / 56 )
        invalid_parameter_noinfo();
      v18 = *(_DWORD *)(a1 + 4);
      v71 = *(float *)(v6 + v17 + 36) * *(float *)(v6 + v18 + 48)
          + *(float *)(v6 + v17 + 32) * *(float *)(v6 + v18 + 44)
          + *(float *)(v6 + v17 + 40) * *(float *)(v6 + v18 + 52);
      if ( v71 > 0.9990000128746033 )
      {
        if ( !v18 || v2 >= (*(_DWORD *)(a1 + 8) - v18) / 56 )
          invalid_parameter_noinfo();
        v19 = *(_DWORD *)(a1 + 4);
        v72 = (float *)(v6 + v19);
        if ( !v19 || v2 >= (*(_DWORD *)(a1 + 8) - v19) / 56 )
          invalid_parameter_noinfo();
        v20 = *(_DWORD *)(a1 + 4);
        if ( !v20 || v2 >= (*(_DWORD *)(a1 + 8) - v20) / 56 )
          invalid_parameter_noinfo();
        v21 = (float *)(v6 + v20 + 16);
        v94 = v72[10] * *v21 - v72[9] * *(float *)(v6 + v20 + 20);
        v95 = *(float *)(v6 + v20 + 20) * v72[8] - *(float *)(v6 + v20 + 12) * v72[10];
        v22 = *(float *)(v6 + v20 + 12);
        v23 = (float *)(v6 + *(_DWORD *)(a1 + 4) + 44);
        v24 = v22 * v72[9];
        v25 = *v21 * v72[8];
        *v23 = v94;
        v23[1] = v95;
        v96 = v24 - v25;
        v23[2] = v96;
      }
LABEL_95:
      if ( ++v2 >= v81 )
        return;
    }
    v16 = v69;
LABEL_47:
    if ( v70 <= 0.5 )
    {
      if ( v16 <= 0.5 )
      {
        if ( v15 && v2 < (*(_DWORD *)(a1 + 8) - v15) / 56 )
        {
          v39 = invalid_parameter_noinfo;
        }
        else
        {
          v39 = invalid_parameter_noinfo;
          invalid_parameter_noinfo();
        }
        v40 = *(_DWORD *)(a1 + 4);
        v41 = 0.0;
        v75 = *(float *)(v6 + v40 + 16) * 0.0 + *(float *)(v6 + v40 + 12) + *(float *)(v6 + v40 + 20) * 0.0;
        if ( !v40 || v2 >= (*(_DWORD *)(a1 + 8) - v40) / 56 )
        {
          v39();
          v41 = 0.0;
        }
        v42 = *(_DWORD *)(a1 + 4);
        v43 = v41 * *(float *)(v6 + v42 + 20) + *(float *)(v6 + v42 + 12) * v41 + *(float *)(v6 + v42 + 16);
        v44 = v75;
        v76 = v43;
        if ( v76 <= v44 )
        {
          v82 = 0.0;
          v83 = 1.0;
        }
        else
        {
          v82 = 1.0;
          v83 = 0.0;
        }
        v84 = 0.0;
        if ( !v42 || v2 >= (*(_DWORD *)(a1 + 8) - v42) / 56 )
          v39();
        v45 = *(_DWORD *)(a1 + 4);
        if ( !v45 || v2 >= (*(_DWORD *)(a1 + 8) - v45) / 56 )
          invalid_parameter_noinfo();
        v46 = (float *)(v6 + v45 + 16);
        v115 = v84 * *v46 - v83 * *(float *)(v6 + v45 + 20);
        v116 = v82 * *(float *)(v6 + v45 + 20) - v84 * *(float *)(v6 + v45 + 12);
        v47 = v83 * *(float *)(v6 + v45 + 12);
        v48 = *v46;
        v49 = (float *)(v6 + *(_DWORD *)(a1 + 4) + 32);
        *v49 = v115;
        v49[1] = v116;
        v117 = v47 - v82 * v48;
        v49[2] = v117;
        v50 = *(_DWORD *)(a1 + 4);
        if ( !v50 || v2 >= (*(_DWORD *)(a1 + 8) - v50) / 56 )
          invalid_parameter_noinfo();
        v51 = *(_DWORD *)(a1 + 4);
        v77 = (float *)(v6 + v51);
        if ( !v51 || v2 >= (*(_DWORD *)(a1 + 8) - v51) / 56 )
          invalid_parameter_noinfo();
        v52 = *(_DWORD *)(a1 + 4);
        if ( !v52 || v2 >= (*(_DWORD *)(a1 + 8) - v52) / 56 )
          invalid_parameter_noinfo();
        v53 = (float *)(v6 + v52 + 16);
        v121 = v77[10] * *v53 - v77[9] * *(float *)(v6 + v52 + 20);
        v122 = *(float *)(v6 + v52 + 20) * v77[8] - v77[10] * *(float *)(v6 + v52 + 12);
        v54 = v77[9] * *(float *)(v6 + v52 + 12);
        v55 = *v53 * v77[8];
        v56 = (float *)(v6 + *(_DWORD *)(a1 + 4) + 44);
        *v56 = v121;
        v56[1] = v122;
        v123 = v54 - v55;
        v56[2] = v123;
      }
      else
      {
        if ( !v15 || v2 >= (*(_DWORD *)(a1 + 8) - v15) / 56 )
          invalid_parameter_noinfo();
        v32 = *(_DWORD *)(a1 + 4);
        v74 = (float *)(v6 + v32);
        if ( !v32 || v2 >= (*(_DWORD *)(a1 + 8) - v32) / 56 )
          invalid_parameter_noinfo();
        v33 = *(_DWORD *)(a1 + 4);
        if ( !v33 || v2 >= (*(_DWORD *)(a1 + 8) - v33) / 56 )
          invalid_parameter_noinfo();
        v34 = (float *)(v6 + v33 + 48);
        v103 = v74[5] * *v34 - v74[4] * *(float *)(v6 + v33 + 52);
        v104 = v74[3] * *(float *)(v6 + v33 + 52) - v74[5] * *(float *)(v6 + v33 + 44);
        v35 = *(float *)(v6 + v33 + 44);
        v36 = (float *)(v6 + *(_DWORD *)(a1 + 4) + 32);
        v37 = v35 * v74[4];
        v38 = *v34 * v74[3];
        *v36 = v103;
        v36[1] = v104;
        v105 = v37 - v38;
        v36[2] = v105;
      }
    }
    else
    {
      if ( !v15 || v2 >= (*(_DWORD *)(a1 + 8) - v15) / 56 )
        invalid_parameter_noinfo();
      v26 = *(_DWORD *)(a1 + 4);
      v73 = (float *)(v6 + v26);
      if ( !v26 || v2 >= (*(_DWORD *)(a1 + 8) - v26) / 56 )
        invalid_parameter_noinfo();
      v27 = *(_DWORD *)(a1 + 4);
      if ( !v27 || v2 >= (*(_DWORD *)(a1 + 8) - v27) / 56 )
        invalid_parameter_noinfo();
      v28 = (float *)(v6 + v27 + 16);
      v97 = v73[10] * *v28 - v73[9] * *(float *)(v6 + v27 + 20);
      v98 = *(float *)(v6 + v27 + 20) * v73[8] - v73[10] * *(float *)(v6 + v27 + 12);
      v29 = v73[9] * *(float *)(v6 + v27 + 12);
      v30 = (float *)(v6 + *(_DWORD *)(a1 + 4) + 44);
      v31 = v73[8] * *v28;
      *v30 = v97;
      v30[1] = v98;
      v99 = v29 - v31;
      v30[2] = v99;
    }
    goto LABEL_95;
  }
}
