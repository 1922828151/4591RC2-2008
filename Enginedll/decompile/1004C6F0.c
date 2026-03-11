/*
 * func-name: sub_1004C6F0
 * func-address: 0x1004c6f0
 * callers: none
 * callees: 0x100244d0, 0x10024540, 0x100245a0, 0x1004c1d0, 0x1004c200, 0x1004c240, 0x1004c2c0, 0x1004c3d0, 0x1004c410, 0x10079650, 0x10079660, 0x100797d0, 0x1017a0b0, 0x1017b990, 0x101a2500
 */

CollisionInfo *__cdecl sub_1004C6F0(CollisionInfo *a1, _DWORD *a2, _DWORD *a3, int a4, float *a5, int a6)
{
  float v6; // edx
  float v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v12; // edx
  int v13; // eax
  _DWORD *v14; // edi
  _DWORD *v15; // ebp
  CollisionInfo *v16; // esi
  unsigned int v17; // ebx
  int v18; // eax
  int v19; // esi
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  int v23; // edi
  float *v24; // eax
  int v25; // eax
  int v26; // ebx
  int v27; // ecx
  int v28; // eax
  int *v29; // edi
  int v30; // edx
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // eax
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v38; // ecx
  int v39; // edx
  int v40; // eax
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // ecx
  int v45; // edx
  int v46; // eax
  float *v47; // ebp
  float *v48; // eax
  int v49; // eax
  _DWORD *v50; // eax
  float *v51; // eax
  float *v52; // edi
  float *v53; // eax
  float v54; // eax
  float v55; // edx
  float *v56; // edi
  _DWORD *v57; // ecx
  float *v58; // edi
  float *v59; // eax
  _DWORD *v60; // edi
  _DWORD *v61; // eax
  float *v62; // ecx
  int v63; // edi
  float v64; // eax
  float v65; // edx
  float *v67; // [esp-18h] [ebp-1D0h]
  float v68; // [esp+10h] [ebp-1A8h]
  float v69; // [esp+10h] [ebp-1A8h]
  float v70; // [esp+10h] [ebp-1A8h]
  float v71; // [esp+10h] [ebp-1A8h]
  float v72; // [esp+14h] [ebp-1A4h]
  float v73; // [esp+14h] [ebp-1A4h]
  float v74; // [esp+14h] [ebp-1A4h]
  float v75; // [esp+14h] [ebp-1A4h]
  float v76; // [esp+14h] [ebp-1A4h]
  float v77; // [esp+18h] [ebp-1A0h]
  float v78; // [esp+18h] [ebp-1A0h]
  float v79; // [esp+18h] [ebp-1A0h]
  float v80; // [esp+18h] [ebp-1A0h]
  float v81; // [esp+18h] [ebp-1A0h]
  float v82; // [esp+1Ch] [ebp-19Ch]
  float v83; // [esp+1Ch] [ebp-19Ch]
  int v84; // [esp+1Ch] [ebp-19Ch]
  float v85; // [esp+1Ch] [ebp-19Ch]
  int v86; // [esp+20h] [ebp-198h]
  int *v87; // [esp+20h] [ebp-198h]
  int v88; // [esp+24h] [ebp-194h]
  double v89; // [esp+28h] [ebp-190h]
  float v90; // [esp+30h] [ebp-188h] BYREF
  float v91; // [esp+34h] [ebp-184h] BYREF
  float v92; // [esp+38h] [ebp-180h]
  float v93; // [esp+3Ch] [ebp-17Ch]
  int v94; // [esp+40h] [ebp-178h]
  unsigned int v95; // [esp+44h] [ebp-174h]
  void *v96[2]; // [esp+48h] [ebp-170h] BYREF
  double v97; // [esp+50h] [ebp-168h]
  int v98; // [esp+58h] [ebp-160h] BYREF
  void *v99; // [esp+5Ch] [ebp-15Ch]
  int v100; // [esp+60h] [ebp-158h]
  int v101; // [esp+68h] [ebp-150h] BYREF
  void *v102; // [esp+6Ch] [ebp-14Ch]
  int v103; // [esp+70h] [ebp-148h]
  int v104; // [esp+74h] [ebp-144h]
  void *v105; // [esp+7Ch] [ebp-13Ch]
  int v106; // [esp+80h] [ebp-138h]
  int v107; // [esp+84h] [ebp-134h]
  int v108; // [esp+88h] [ebp-130h]
  int v109; // [esp+8Ch] [ebp-12Ch]
  int v110; // [esp+90h] [ebp-128h]
  float v111; // [esp+B0h] [ebp-108h]
  float v112; // [esp+B4h] [ebp-104h]
  float v113; // [esp+B8h] [ebp-100h]
  float v114; // [esp+BCh] [ebp-FCh]
  float v115; // [esp+C0h] [ebp-F8h]
  float v116; // [esp+C4h] [ebp-F4h]
  float v117[4]; // [esp+C8h] [ebp-F0h] BYREF
  _DWORD v118[3]; // [esp+D8h] [ebp-E0h] BYREF
  _DWORD v119[3]; // [esp+E4h] [ebp-D4h] BYREF
  float v120; // [esp+F0h] [ebp-C8h] BYREF
  float v121[3]; // [esp+F4h] [ebp-C4h] BYREF
  float v122[3]; // [esp+100h] [ebp-B8h] BYREF
  float v123[4]; // [esp+10Ch] [ebp-ACh] BYREF
  _DWORD v124[17]; // [esp+11Ch] [ebp-9Ch] BYREF
  char v125[4]; // [esp+160h] [ebp-58h] BYREF
  float v126[3]; // [esp+164h] [ebp-54h] BYREF
  float v127[3]; // [esp+170h] [ebp-48h] BYREF
  float v128[3]; // [esp+17Ch] [ebp-3Ch] BYREF
  float v129[3]; // [esp+188h] [ebp-30h] BYREF
  char v130[12]; // [esp+194h] [ebp-24h] BYREF
  float v131[3]; // [esp+1A0h] [ebp-18h] BYREF
  int v132; // [esp+1B4h] [ebp-4h]

  v94 = 0;
  CollisionInfo::CollisionInfo((CollisionInfo *)v96);
  v89 = 1.0e10;
  v6 = *(float *)(a6 + 8);
  v117[1] = *(float *)(a6 + 4);
  v7 = *(float *)(a6 + 12);
  v117[2] = v6;
  v8 = *(_DWORD *)(a6 + 16);
  v117[3] = v7;
  v9 = *(_DWORD *)(a6 + 20);
  v118[0] = v8;
  v10 = *(_DWORD *)(a6 + 24);
  v118[1] = v9;
  v11 = *(_DWORD *)(a6 + 28);
  v118[2] = v10;
  v12 = *(_DWORD *)(a6 + 32);
  v13 = *(_DWORD *)(a6 + 36);
  v132 = 2;
  LODWORD(v117[0]) = &BBox::`vftable';
  v119[0] = v11;
  v119[1] = v12;
  v119[2] = v13;
  v14 = a3;
  v15 = a2;
  if ( sub_1004C410(a2, a3, v117, v96, 0) )
  {
    v16 = a1;
    v97 = 0.0;
    LOBYTE(v96[0]) = 1;
    CollisionInfo::CollisionInfo(a1, (const struct CollisionInfo *)v96);
    v94 = 1;
    LOBYTE(v132) = 1;
    sub_1017A0B0(v117);
    CollisionInfo::~CollisionInfo(v96);
    return v16;
  }
  v17 = 0;
  v95 = 0;
  if ( sub_1004C1D0(a3) )
  {
    v88 = 0;
    while ( 1 )
    {
      v18 = v14[1];
      if ( !v18 || v17 >= (v14[2] - v18) / 92 )
        invalid_parameter_noinfo();
      v19 = v88 + v14[1];
      v20 = *(_DWORD *)(v19 + 88);
      if ( *(_BYTE *)(v20 + 724) )
        goto LABEL_71;
      v21 = *(_DWORD *)(v20 + 728);
      if ( (v21 & 4) != 0 || (v15[182] & 8) != 0 && !*(_BYTE *)(v20 + 696) )
        goto LABEL_71;
      if ( (v21 & 8) != 0 )
        goto LABEL_71;
      if ( !v15[155] )
        break;
      if ( !*(_BYTE *)(*(_DWORD *)(sub_1004C200(v14, v17) + 88) + 696) )
      {
        v22 = v15[183];
        if ( (v22 & 0x800) != 0 )
        {
          if ( (v22 & 0x400) != 0 || !*(_DWORD *)(*(_DWORD *)(v19 + 88) + 620) )
            break;
        }
        else if ( (v22 & 0x400) == 0 || *(_DWORD *)(*(_DWORD *)(v19 + 88) + 620) )
        {
          break;
        }
      }
LABEL_71:
      v88 += 92;
      v95 = ++v17;
      if ( v17 >= sub_1004C1D0(v14) )
        goto LABEL_72;
    }
    v82 = *(float *)(v19 + 4) * a5[1] + *(float *)v19 * *a5 + *(float *)(v19 + 8) * a5[2];
    if ( v82 <= 0.0 )
    {
      v91 = 0.0;
      v23 = 0;
      v92 = 0.0;
      v93 = 0.0;
      do
      {
        v24 = sub_1004C2C0(v117, v127, v23);
        if ( sub_10079650(v19, v24, a5, &v91, &v90) && v89 > v90 )
        {
          v25 = *(_DWORD *)(v19 + 88);
          if ( v25 && (*(_BYTE *)(v25 + 728) & 4) != 0 )
          {
            v109 = *(_DWORD *)(v19 + 88);
          }
          else
          {
            v89 = v90;
            v110 = *(_DWORD *)(v19 + 84);
            v108 = *(_DWORD *)(v19 + 88);
            v50 = (_DWORD *)sub_1004C3D0(&v98, 0);
            *v50 = *(_DWORD *)v19;
            v50[1] = *(_DWORD *)(v19 + 4);
            v50[2] = *(_DWORD *)(v19 + 8);
            v51 = (float *)sub_1004C3D0(&v101, 0);
            *v51 = v91;
            v51[1] = v92;
            v51[2] = v93;
          }
        }
        ++v23;
      }
      while ( v23 < 8 );
      v26 = v19 + 12;
      v86 = 3;
      do
      {
        v83 = -*a5;
        v72 = -a5[1];
        v77 = -a5[2];
        v123[0] = v83;
        v123[1] = v72;
        v123[2] = v77;
        v27 = sub_10079660(v118, v119, v26, v123, &v120, v125);
        if ( v27 != -1 && v89 > v120 )
        {
          v28 = *(_DWORD *)(v19 + 88);
          if ( v28 && (*(_BYTE *)(v28 + 728) & 4) != 0 )
          {
            v109 = *(_DWORD *)(v19 + 88);
          }
          else
          {
            v89 = v120;
            v52 = (float *)v99;
            v110 = *(_DWORD *)(v19 + 84);
            v108 = *(_DWORD *)(v19 + 88);
            v53 = &flt_10283280[3 * v27];
            v78 = -*v53;
            v73 = -v53[1];
            v85 = -v53[2];
            v111 = v78;
            v112 = v73;
            v113 = v85;
            if ( !v99 || !((v100 - (int)v99) / 12) )
            {
              invalid_parameter_noinfo();
              v52 = (float *)v99;
            }
            v54 = v112;
            *v52 = v111;
            v55 = v113;
            *((float *)v99 + 1) = v54;
            *((float *)v99 + 2) = v55;
          }
        }
        v26 += 12;
        --v86;
      }
      while ( v86 );
      v29 = (int *)&unk_102830D0;
      v87 = (int *)&unk_102830D0;
      do
      {
        v30 = *(_DWORD *)(v19 + 28);
        v31 = *(_DWORD *)(v19 + 32);
        v123[3] = *(float *)(v19 + 24);
        v32 = *(_DWORD *)(v19 + 12);
        v124[0] = v30;
        v33 = *(_DWORD *)(v19 + 16);
        v124[1] = v31;
        v34 = *(_DWORD *)(v19 + 20);
        v124[2] = v32;
        v35 = *(_DWORD *)(v19 + 36);
        v124[3] = v33;
        v36 = *(_DWORD *)(v19 + 40);
        v124[4] = v34;
        v37 = *(_DWORD *)(v19 + 44);
        v124[5] = v35;
        v38 = *(_DWORD *)(v19 + 24);
        v124[6] = v36;
        v39 = *(_DWORD *)(v19 + 28);
        v124[7] = v37;
        v40 = *(_DWORD *)(v19 + 32);
        v124[8] = v38;
        v41 = *(_DWORD *)(v19 + 12);
        v124[9] = v39;
        v42 = *(_DWORD *)(v19 + 16);
        v124[10] = v40;
        v43 = *(_DWORD *)(v19 + 20);
        v124[11] = v41;
        v44 = *(_DWORD *)(v19 + 36);
        v124[12] = v42;
        v45 = *(_DWORD *)(v19 + 40);
        v124[13] = v43;
        v46 = *(_DWORD *)(v19 + 44);
        v124[14] = v44;
        v124[15] = v45;
        v124[16] = v46;
        v47 = (float *)v124;
        v84 = 3;
        do
        {
          v67 = sub_1004C2C0(v117, v126, *v29);
          v48 = sub_1004C2C0(v117, v129, v29[1]);
          if ( sub_100797D0(v48, v67, a5, v47 + 2, v47 - 1, &v90, &v91) && v89 > v90 )
          {
            v49 = *(_DWORD *)(v19 + 88);
            if ( v49 && (*(_BYTE *)(v49 + 728) & 4) != 0 )
            {
              v109 = *(_DWORD *)(v19 + 88);
            }
            else
            {
              v56 = (float *)v102;
              v89 = v90;
              if ( !v102 || !((v103 - (int)v102) / 12) )
              {
                invalid_parameter_noinfo();
                v56 = (float *)v102;
              }
              *v56 = v91;
              *((float *)v102 + 1) = v92;
              *((float *)v102 + 2) = v93;
              v108 = *(_DWORD *)(v19 + 88);
              v110 = *(_DWORD *)(v19 + 84);
              v57 = v99;
              if ( !v99 || !((v100 - (int)v99) / 12) )
              {
                invalid_parameter_noinfo();
                v57 = v99;
              }
              *v57 = *(_DWORD *)v19;
              *((_DWORD *)v99 + 1) = *(_DWORD *)(v19 + 4);
              *((_DWORD *)v99 + 2) = *(_DWORD *)(v19 + 8);
              v58 = sub_1004C2C0(v117, v131, v87[1]);
              v59 = sub_1004C2C0(v117, v128, *v87);
              v79 = *v59 - *v58;
              v74 = v59[1] - v58[1];
              v68 = v59[2] - v58[2];
              v121[0] = v79;
              v121[1] = v74;
              v121[2] = v68;
              v69 = v47[2] - *(v47 - 1);
              v80 = v47[3] - *v47;
              v75 = v47[4] - v47[1];
              v122[0] = v69;
              v122[1] = v80;
              v122[2] = v75;
              sub_1004C240(v121);
              sub_1004C240(v122);
              v60 = v99;
              if ( !v99 || !((v100 - (int)v99) / 12) )
              {
                invalid_parameter_noinfo();
                v60 = v99;
              }
              v61 = (_DWORD *)sub_1017B990(v130, v121, v122);
              *v60 = *v61;
              v60[1] = v61[1];
              v60[2] = v61[2];
              v62 = (float *)v99;
              if ( !v99 || (v63 = v100, !((v100 - (int)v99) / 12)) )
              {
                invalid_parameter_noinfo();
                v63 = v100;
                v62 = (float *)v99;
              }
              v70 = v62[1] * a5[1] + *a5 * *v62 + v62[2] * a5[2];
              if ( v70 > 0.0 )
              {
                if ( !((v63 - (int)v62) / 12) )
                {
                  invalid_parameter_noinfo();
                  v63 = v100;
                  v62 = (float *)v99;
                }
                v71 = -*v62;
                v81 = -v62[1];
                v76 = -v62[2];
                v114 = v71;
                v115 = v81;
                v116 = v76;
                if ( !((v63 - (int)v62) / 12) )
                {
                  invalid_parameter_noinfo();
                  v62 = (float *)v99;
                }
                v64 = v115;
                *v62 = v114;
                v65 = v116;
                *((float *)v99 + 1) = v64;
                *((float *)v99 + 2) = v65;
              }
              v29 = v87;
            }
          }
          v47 += 6;
          --v84;
        }
        while ( v84 );
        v29 += 2;
        v87 = v29;
      }
      while ( (int)v29 < (int)dword_10283130 );
      v14 = a3;
      v17 = v95;
    }
    v15 = a2;
    goto LABEL_71;
  }
LABEL_72:
  v16 = a1;
  v97 = v89;
  CollisionInfo::CollisionInfo(a1, (const struct CollisionInfo *)v96);
  v94 = 1;
  LOBYTE(v132) = 1;
  sub_1017A0B0(v117);
  if ( v105 )
    operator delete(v105);
  v105 = 0;
  v106 = 0;
  v107 = 0;
  if ( v102 )
    operator delete(v102);
  v102 = 0;
  v103 = 0;
  v104 = 0;
  if ( v99 )
    operator delete(v99);
  return v16;
}
