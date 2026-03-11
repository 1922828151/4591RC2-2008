/*
 * func-name: ?setPosDir@SurfaceDecal@@QAEXAAVVector@@0M@Z_0
 * func-address: 0x100c2280
 * callers: 0x1001a046
 * callees: 0x100029cd, 0x1000f9ca, 0x10018e71, 0x1001a5c8, 0x102c0f00, 0x102c0f30
 */

void __thiscall SurfaceDecal::setPosDir(SurfaceDecal *this, struct Vector *a2, struct Vector *a3, float a4)
{
  float v5; // edx
  double v6; // st7
  double v7; // st5
  double v8; // st5
  double v9; // st5
  double v10; // st5
  double v11; // st5
  double v12; // st5
  double v13; // st5
  float v14; // ecx
  float v15; // edx
  double v16; // st7
  double v17; // st7
  float *v18; // eax
  float *v19; // eax
  double v20; // st7
  double v21; // st7
  double v22; // st7
  float *v23; // eax
  float *v24; // eax
  double v25; // st7
  double v26; // st7
  double v27; // st7
  float *v28; // eax
  float *v29; // eax
  float v30; // eax
  float v31; // ecx
  float *v32; // eax
  float *v33; // eax
  double v34; // st6
  double v35; // st6
  double v36; // st6
  double v37; // st6
  float v38; // edx
  float v39; // eax
  double v40; // st6
  double v41; // st6
  float v42; // eax
  double v43; // st7
  double v44; // st7
  float v45; // [esp+0h] [ebp-74h]
  float v46; // [esp+0h] [ebp-74h]
  float v47; // [esp+0h] [ebp-74h]
  float v48; // [esp+0h] [ebp-74h]
  float v49; // [esp+0h] [ebp-74h]
  float v50; // [esp+0h] [ebp-74h]
  float v51; // [esp+0h] [ebp-74h]
  float v52; // [esp+0h] [ebp-74h]
  float v53; // [esp+0h] [ebp-74h]
  float v54; // [esp+0h] [ebp-74h]
  float v55; // [esp+0h] [ebp-74h]
  float v56; // [esp+0h] [ebp-74h]
  float v57; // [esp+0h] [ebp-74h]
  float v58; // [esp+0h] [ebp-74h]
  float v59; // [esp+0h] [ebp-74h]
  float v60; // [esp+0h] [ebp-74h]
  float v61; // [esp+0h] [ebp-74h]
  float v62; // [esp+0h] [ebp-74h]
  float v63; // [esp+0h] [ebp-74h]
  float v64; // [esp+0h] [ebp-74h]
  float v65; // [esp+0h] [ebp-74h]
  float v66; // [esp+0h] [ebp-74h]
  float v67; // [esp+0h] [ebp-74h]
  float v68; // [esp+0h] [ebp-74h]
  float v69; // [esp+0h] [ebp-74h]
  float v70; // [esp+0h] [ebp-74h]
  float v71; // [esp+0h] [ebp-74h]
  float v72; // [esp+0h] [ebp-74h]
  int v73; // [esp+4h] [ebp-70h]
  float v74; // [esp+4h] [ebp-70h]
  float v75; // [esp+4h] [ebp-70h]
  float v76; // [esp+4h] [ebp-70h]
  float v77; // [esp+4h] [ebp-70h]
  float v78; // [esp+4h] [ebp-70h]
  float v79; // [esp+4h] [ebp-70h]
  float v80; // [esp+4h] [ebp-70h]
  float v81; // [esp+4h] [ebp-70h]
  float v82; // [esp+4h] [ebp-70h]
  float v83; // [esp+4h] [ebp-70h]
  float v84; // [esp+4h] [ebp-70h]
  int v85; // [esp+8h] [ebp-6Ch]
  float v86; // [esp+8h] [ebp-6Ch]
  float v87; // [esp+8h] [ebp-6Ch]
  float v88; // [esp+8h] [ebp-6Ch]
  float v89; // [esp+8h] [ebp-6Ch]
  float v90; // [esp+8h] [ebp-6Ch]
  float v91; // [esp+8h] [ebp-6Ch]
  float v92; // [esp+8h] [ebp-6Ch]
  float v93; // [esp+8h] [ebp-6Ch]
  float v94; // [esp+8h] [ebp-6Ch]
  float v95; // [esp+8h] [ebp-6Ch]
  int v96; // [esp+Ch] [ebp-68h]
  float v97; // [esp+Ch] [ebp-68h]
  float v98; // [esp+Ch] [ebp-68h]
  float v99; // [esp+Ch] [ebp-68h]
  float v100; // [esp+Ch] [ebp-68h]
  float v101; // [esp+Ch] [ebp-68h]
  float v102; // [esp+Ch] [ebp-68h]
  float v103; // [esp+Ch] [ebp-68h]
  float v104; // [esp+Ch] [ebp-68h]
  float v105; // [esp+Ch] [ebp-68h]
  float v106; // [esp+Ch] [ebp-68h]
  float v107; // [esp+10h] [ebp-64h] BYREF
  float v108; // [esp+14h] [ebp-60h]
  float v109; // [esp+18h] [ebp-5Ch]
  float v110; // [esp+1Ch] [ebp-58h]
  float v111; // [esp+20h] [ebp-54h]
  float v112; // [esp+24h] [ebp-50h]
  _BYTE v113[12]; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v114[64]; // [esp+34h] [ebp-40h] BYREF

  if ( a4 != -1.0 )
    *((float *)this + 50) = a4;
  if ( *((_BYTE *)this + 264) )
  {
    *((_DWORD *)this + 5) = *(_DWORD *)a2;
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 1);
    *((_DWORD *)this + 7) = *((_DWORD *)a2 + 2);
    goto LABEL_13;
  }
  v73 = *(_DWORD *)a3;
  v85 = *((_DWORD *)a3 + 1);
  v96 = *((_DWORD *)a3 + 2);
  sub_100029CD();
  *((_DWORD *)this + 46) = v73;
  *((_DWORD *)this + 47) = v85;
  *((_DWORD *)this + 48) = v96;
  v74 = *((float *)this + 46) * 0.02099999971687794;
  v86 = *((float *)this + 47) * 0.02099999971687794;
  v97 = 0.02099999971687794 * *((float *)this + 48);
  v107 = *(float *)a2 + v74;
  v108 = *((float *)a2 + 1) + v86;
  v5 = v108;
  v6 = *((float *)a2 + 2);
  *((float *)this + 5) = v107;
  *((float *)this + 6) = v5;
  v109 = v6 + v97;
  *((float *)this + 7) = v109;
  v110 = 0.0 - *((float *)this + 46);
  v111 = 1.0 - *((float *)this + 47);
  v112 = 0.0 - *((float *)this + 48);
  if ( sub_1001A5C8() || sub_1001A5C8() )
  {
    v82 = *((float *)this + 50);
    v65 = v82 * 0.0;
    v110 = v65;
    v111 = v65;
    v112 = v82;
    v107 = v65 + *((float *)this + 5);
    v108 = *((float *)this + 6) + v65;
    v109 = *((float *)this + 7) + v82;
    v110 = v107 + v82;
    v34 = v108;
    *((float *)this + 53) = v110;
    v111 = v34 + v65;
    v35 = v109;
    *((float *)this + 54) = v111;
    v112 = v35 + v65;
    v36 = *((float *)this + 50);
    *((float *)this + 55) = v112;
    v66 = v36;
    v83 = v66;
    v67 = v66 * 0.0;
    v94 = v67;
    v105 = v67;
    v37 = *((float *)this + 50);
    v68 = v37 * 0.0;
    v110 = v68;
    v111 = v68;
    v112 = v37;
    v107 = *((float *)this + 5) + v68;
    v108 = *((float *)this + 6) + v68;
    v109 = *((float *)this + 7) + v112;
    v110 = v107 - v83;
    v111 = v108 - v94;
    v112 = v109 - v105;
    v38 = v111;
    v39 = v112;
    v40 = *((float *)this + 50);
    *((float *)this + 56) = v110;
    v84 = v40;
    *((float *)this + 57) = v38;
    *((float *)this + 58) = v39;
    v69 = v40 * 0.0;
    v95 = v69;
    v106 = v69;
    v41 = *((float *)this + 50);
    v70 = v41 * 0.0;
    v110 = v70;
    v111 = v70;
    v112 = v41;
    v107 = *((float *)this + 5) - v70;
    v108 = *((float *)this + 6) - v70;
    v109 = *((float *)this + 7) - v112;
    v110 = v107 + v84;
    v14 = v110;
    v111 = v108 + v95;
    v15 = v111;
    v112 = v109 + v106;
    v78 = *((float *)this + 50);
    v71 = v78 * 0.0;
    v90 = v71;
    v101 = v71;
    v17 = v78;
    v72 = 0.0 * v78;
    v110 = v72;
    v111 = v72;
    goto LABEL_11;
  }
  v110 = 0.0 - *((float *)this + 46);
  v111 = -1.0 - *((float *)this + 47);
  v112 = 0.0 - *((float *)this + 48);
  if ( sub_1001A5C8() )
  {
    v45 = *((float *)this + 50);
    v110 = v45 * -1.0;
    v46 = v45 * 0.0;
    v111 = v46;
    v112 = v46;
    v7 = *((float *)this + 50);
    v47 = v7 * 0.0;
    v107 = v47;
    v108 = v47;
    v109 = v7 * -1.0;
    v75 = *((float *)this + 5) + v47;
    v87 = *((float *)this + 6) + v47;
    v98 = *((float *)this + 7) + v109;
    v107 = v75 + v110;
    *((float *)this + 53) = v107;
    v108 = v87 + v111;
    *((float *)this + 54) = v108;
    v109 = v98 + v112;
    v8 = *((float *)this + 50);
    *((float *)this + 55) = v109;
    v48 = v8;
    v76 = v48 * -1.0;
    v49 = v48 * 0.0;
    v88 = v49;
    v99 = v49;
    v9 = *((float *)this + 50);
    v50 = v9 * 0.0;
    v110 = v50;
    v111 = v50;
    v112 = v9 * -1.0;
    v107 = *((float *)this + 5) + v50;
    v108 = *((float *)this + 6) + v50;
    v109 = *((float *)this + 7) + v112;
    v110 = v107 - v76;
    v10 = v108;
    *((float *)this + 56) = v110;
    v111 = v10 - v88;
    v11 = v109;
    *((float *)this + 57) = v111;
    v112 = v11 - v99;
    v12 = *((float *)this + 50);
    *((float *)this + 58) = v112;
    v51 = v12;
    v77 = v51 * -1.0;
    v52 = v51 * 0.0;
    v89 = v52;
    v100 = v52;
    v13 = *((float *)this + 50);
    v53 = v13 * 0.0;
    v110 = v53;
    v111 = v53;
    v112 = v13 * -1.0;
    v107 = *((float *)this + 5) - v53;
    v108 = *((float *)this + 6) - v53;
    v109 = *((float *)this + 7) - v112;
    v110 = v107 + v77;
    v14 = v110;
    v111 = v108 + v89;
    v15 = v111;
    v112 = v109 + v100;
    v54 = *((float *)this + 50);
    v78 = v54 * -1.0;
    v55 = v54 * 0.0;
    v90 = v55;
    v101 = v55;
    v16 = *((float *)this + 50);
    v56 = 0.0 * v16;
    v110 = v56;
    v111 = v56;
    v17 = v16 * -1.0;
LABEL_11:
    v42 = v112;
    *((float *)this + 59) = v14;
    *((float *)this + 60) = v15;
    *((float *)this + 61) = v42;
    goto LABEL_12;
  }
  sub_10018E71(v114, (int)this + 184);
  v57 = *((float *)this + 50);
  v18 = (float *)sub_102C0F00(&v107);
  v79 = v57 * *v18;
  v91 = v18[1] * v57;
  v102 = v57 * v18[2];
  v58 = *((float *)this + 50);
  v19 = (float *)sub_102C0F30(v113);
  v110 = v58 * *v19;
  v111 = v19[1] * v58;
  v112 = v58 * v19[2];
  v107 = v110 + *((float *)this + 5);
  v108 = *((float *)this + 6) + v111;
  v109 = *((float *)this + 7) + v112;
  v110 = v107 + v79;
  v20 = v108;
  *((float *)this + 53) = v110;
  v111 = v20 + v91;
  v21 = v109;
  *((float *)this + 54) = v111;
  v112 = v21 + v102;
  v22 = *((float *)this + 50);
  *((float *)this + 55) = v112;
  v59 = v22;
  v23 = (float *)sub_102C0F00(v113);
  v80 = v59 * *v23;
  v92 = v23[1] * v59;
  v103 = v59 * v23[2];
  v60 = *((float *)this + 50);
  v24 = (float *)sub_102C0F30(&v107);
  v110 = v60 * *v24;
  v111 = v24[1] * v60;
  v112 = v60 * v24[2];
  v107 = v110 + *((float *)this + 5);
  v108 = *((float *)this + 6) + v111;
  v109 = *((float *)this + 7) + v112;
  v110 = v107 - v80;
  v25 = v108;
  *((float *)this + 56) = v110;
  v111 = v25 - v92;
  v26 = v109;
  *((float *)this + 57) = v111;
  v112 = v26 - v103;
  v27 = *((float *)this + 50);
  *((float *)this + 58) = v112;
  v61 = v27;
  v28 = (float *)sub_102C0F00(v113);
  v81 = *v28 * v61;
  v93 = v28[1] * v61;
  v104 = v61 * v28[2];
  v62 = *((float *)this + 50);
  v29 = (float *)sub_102C0F30(&v107);
  v110 = v62 * *v29;
  v111 = v29[1] * v62;
  v112 = v62 * v29[2];
  v107 = *((float *)this + 5) - v110;
  v108 = *((float *)this + 6) - v111;
  v109 = *((float *)this + 7) - v112;
  v110 = v107 + v81;
  v111 = v108 + v93;
  v112 = v109 + v104;
  v30 = v111;
  v31 = v112;
  v63 = *((float *)this + 50);
  *((float *)this + 59) = v110;
  *((float *)this + 60) = v30;
  *((float *)this + 61) = v31;
  v32 = (float *)sub_102C0F00(v113);
  v78 = v63 * *v32;
  v90 = v32[1] * v63;
  v101 = v63 * v32[2];
  v64 = *((float *)this + 50);
  v33 = (float *)sub_102C0F30(&v107);
  v110 = *v33 * v64;
  v111 = v33[1] * v64;
  v17 = v64 * v33[2];
LABEL_12:
  v112 = v17;
  v107 = *((float *)this + 5) - v110;
  v108 = *((float *)this + 6) - v111;
  v109 = *((float *)this + 7) - v112;
  v110 = v107 - v78;
  v43 = v108;
  *((float *)this + 62) = v110;
  v111 = v43 - v90;
  v44 = v109;
  *((float *)this + 63) = v111;
  v112 = v44 - v101;
  *((float *)this + 64) = v112;
LABEL_13:
  if ( *((_BYTE *)this + 265) )
    SurfaceDecal::UpdateProjectionPolys(this);
}
