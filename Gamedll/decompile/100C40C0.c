/*
 * func-name: ??0SurfaceDecal@@QAE@PAVWorld@@PAVMaterial@@AAVVector@@2KMMMW4BlendMode@@@Z_0
 * func-address: 0x100c40c0
 * callers: 0x10014312
 * callees: 0x100029cd, 0x1000f9ca, 0x10018e71, 0x1001a5c8, 0x102c0f00, 0x102c0f30, 0x102c9dbc
 */

int __thiscall SurfaceDecal::SurfaceDecal(
        int this,
        struct World *a2,
        int a3,
        float *a4,
        float *a5,
        int a6,
        float a7,
        float a8,
        float a9,
        int a10)
{
  float *v11; // edi
  double v12; // st7
  float v13; // edx
  double v14; // st7
  double v15; // st7
  double v16; // st6
  double v17; // st5
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
  double v34; // st5
  double v35; // st5
  double v36; // st5
  double v37; // st5
  double v38; // st5
  double v39; // st5
  double v40; // st7
  double v41; // st7
  float v43; // [esp+14h] [ebp-84h]
  float v44; // [esp+14h] [ebp-84h]
  float v45; // [esp+14h] [ebp-84h]
  float v46; // [esp+14h] [ebp-84h]
  float v47; // [esp+14h] [ebp-84h]
  float v48; // [esp+14h] [ebp-84h]
  float v49; // [esp+14h] [ebp-84h]
  float v50; // [esp+14h] [ebp-84h]
  float v51; // [esp+14h] [ebp-84h]
  float v52; // [esp+14h] [ebp-84h]
  float v53; // [esp+14h] [ebp-84h]
  float v54; // [esp+14h] [ebp-84h]
  float v55; // [esp+14h] [ebp-84h]
  float v56; // [esp+1Ch] [ebp-7Ch]
  float v57; // [esp+1Ch] [ebp-7Ch]
  float v58; // [esp+1Ch] [ebp-7Ch]
  float v59; // [esp+1Ch] [ebp-7Ch]
  float v60; // [esp+1Ch] [ebp-7Ch]
  float v61; // [esp+1Ch] [ebp-7Ch]
  float v62; // [esp+1Ch] [ebp-7Ch]
  float v63; // [esp+1Ch] [ebp-7Ch]
  float v64; // [esp+1Ch] [ebp-7Ch]
  int v65; // [esp+20h] [ebp-78h]
  float v66; // [esp+20h] [ebp-78h]
  float v67; // [esp+20h] [ebp-78h]
  float v68; // [esp+20h] [ebp-78h]
  float v69; // [esp+20h] [ebp-78h]
  float v70; // [esp+20h] [ebp-78h]
  float v71; // [esp+20h] [ebp-78h]
  float v72; // [esp+20h] [ebp-78h]
  float v73; // [esp+20h] [ebp-78h]
  int v74; // [esp+24h] [ebp-74h]
  float v75; // [esp+24h] [ebp-74h]
  float v76; // [esp+24h] [ebp-74h]
  float v77; // [esp+24h] [ebp-74h]
  float v78; // [esp+24h] [ebp-74h]
  float v79; // [esp+24h] [ebp-74h]
  float v80; // [esp+24h] [ebp-74h]
  float v81; // [esp+24h] [ebp-74h]
  float v82; // [esp+28h] [ebp-70h] BYREF
  float v83; // [esp+2Ch] [ebp-6Ch]
  float v84; // [esp+30h] [ebp-68h]
  float v85; // [esp+34h] [ebp-64h]
  float v86; // [esp+38h] [ebp-60h]
  float v87; // [esp+3Ch] [ebp-5Ch]
  _BYTE v88[12]; // [esp+40h] [ebp-58h] BYREF
  _BYTE v89[64]; // [esp+4Ch] [ebp-4Ch] BYREF
  int v90; // [esp+94h] [ebp-4h]

  FXSystem::FXSystem((FXSystem *)this, a2);
  *(_DWORD *)this = &SurfaceDecal::`vftable';
  *(float *)(this + 184) = 0.0;
  *(float *)(this + 188) = 0.0;
  v11 = (float *)(this + 184);
  *(float *)(this + 192) = 0.0;
  *(float *)(this + 212) = 0.0;
  v90 = 0;
  *(float *)(this + 216) = 0.0;
  *(_DWORD *)(this + 272) = 0;
  *(float *)(this + 220) = 0.0;
  *(_DWORD *)(this + 276) = 0;
  *(float *)(this + 224) = 0.0;
  *(_DWORD *)(this + 280) = 0;
  *(float *)(this + 228) = 0.0;
  *(float *)(this + 232) = 0.0;
  *(float *)(this + 236) = 0.0;
  *(float *)(this + 240) = 0.0;
  *(float *)(this + 244) = 0.0;
  *(float *)(this + 248) = 0.0;
  *(float *)(this + 252) = 0.0;
  *(float *)(this + 256) = 0.0;
  *(float *)(this + 284) = 1.0;
  *(float *)(this + 108) = a8;
  *(float *)(this + 196) = a9;
  *(_DWORD *)(this + 208) = a10;
  *(_DWORD *)(this + 180) = a3;
  *(float *)(this + 200) = a7;
  *(_DWORD *)(this + 260) = a6;
  *(_BYTE *)(this + 265) = 0;
  *(float *)(this + 204) = 255.0;
  *(_DWORD *)(this + 176) = 0;
  v12 = a5[1];
  LOBYTE(v90) = 1;
  v43 = v12 * v12 + *a5 * *a5 + a5[2] * a5[2];
  v44 = sqrt(v43);
  *(_BYTE *)(this + 264) = v44 <= 0.0;
  if ( v44 <= 0.0 )
  {
    *(float *)(this + 20) = *a4;
    *(float *)(this + 24) = a4[1];
    *(float *)(this + 28) = a4[2];
    goto LABEL_11;
  }
  v56 = *a5;
  v65 = *((_DWORD *)a5 + 1);
  v74 = *((_DWORD *)a5 + 2);
  sub_100029CD();
  *v11 = v56;
  *(_DWORD *)(this + 188) = v65;
  *(_DWORD *)(this + 192) = v74;
  v57 = *v11 * 0.02099999971687794;
  v66 = *(float *)(this + 188) * 0.02099999971687794;
  v75 = 0.02099999971687794 * *(float *)(this + 192);
  v82 = v57 + *a4;
  v83 = a4[1] + v66;
  v13 = v83;
  v14 = a4[2];
  *(float *)(this + 20) = v82;
  *(float *)(this + 24) = v13;
  v84 = v14 + v75;
  *(float *)(this + 28) = v84;
  v85 = 0.0 - *v11;
  v86 = 1.0 - *(float *)(this + 188);
  v87 = 0.0 - *(float *)(this + 192);
  if ( sub_1001A5C8() || sub_1001A5C8() )
  {
    v55 = a7 * 0.0;
    v85 = v55;
    v86 = v55;
    v87 = a7;
    v82 = *(float *)(this + 20) + v55;
    v83 = *(float *)(this + 24) + v55;
    v84 = *(float *)(this + 28) + a7;
    v85 = v82 + a7;
    v34 = v83;
    *(float *)(this + 212) = v85;
    v86 = v34 + v55;
    v35 = v84;
    *(float *)(this + 216) = v86;
    v87 = v35 + v55;
    *(float *)(this + 220) = v87;
    v59 = a7;
    v87 = a7;
    v16 = v55;
    v15 = a7;
    v68 = v55;
    v77 = v55;
    v85 = v55;
    v86 = v55;
    v17 = v55 + *(float *)(this + 20);
    goto LABEL_9;
  }
  v85 = 0.0 - *v11;
  v86 = -1.0 - *(float *)(this + 188);
  v87 = 0.0 - *(float *)(this + 192);
  if ( sub_1001A5C8() )
  {
    v45 = -1.0 * a7;
    v85 = v45;
    v15 = v45;
    v46 = a7 * 0.0;
    v86 = v46;
    v87 = v46;
    v82 = v46;
    v83 = v46;
    v84 = v15;
    v58 = v46 + *(float *)(this + 20);
    v67 = *(float *)(this + 24) + v46;
    v76 = *(float *)(this + 28) + v84;
    v82 = v58 + v85;
    *(float *)(this + 212) = v82;
    v83 = v67 + v86;
    *(float *)(this + 216) = v83;
    v84 = v76 + v87;
    *(float *)(this + 220) = v84;
    v59 = v15;
    v87 = v59;
    v16 = v46;
    v68 = v46;
    v77 = v46;
    v85 = v46;
    v86 = v46;
    v17 = *(float *)(this + 20) + v46;
LABEL_9:
    v82 = v17;
    v83 = *(float *)(this + 24) + v86;
    v84 = *(float *)(this + 28) + v87;
    v85 = v82 - v59;
    v36 = v83;
    *(float *)(this + 224) = v85;
    v86 = v36 - v68;
    v37 = v84;
    *(float *)(this + 228) = v86;
    v87 = v37 - v77;
    *(float *)(this + 232) = v87;
    v64 = v15;
    v87 = v64;
    v73 = v16;
    v85 = v73;
    v86 = v73;
    v82 = *(float *)(this + 20) - v73;
    v83 = *(float *)(this + 24) - v73;
    v84 = *(float *)(this + 28) - v64;
    v85 = v82 + v64;
    v38 = v83;
    *(float *)(this + 236) = v85;
    v86 = v38 + v73;
    v39 = v84;
    *(float *)(this + 240) = v86;
    v87 = v39 + v73;
    *(float *)(this + 244) = v87;
    v63 = v15;
    v87 = v63;
    v72 = v16;
    v81 = v72;
    v85 = v72;
    v86 = v72;
    goto LABEL_10;
  }
  sub_10018E71(v89, this + 184);
  v47 = *(float *)(this + 200);
  v18 = (float *)sub_102C0F00(&v82);
  v60 = v47 * *v18;
  v69 = v18[1] * v47;
  v78 = v47 * v18[2];
  v48 = *(float *)(this + 200);
  v19 = (float *)sub_102C0F30(v88);
  v85 = v48 * *v19;
  v86 = v19[1] * v48;
  v87 = v48 * v19[2];
  v82 = v85 + *(float *)(this + 20);
  v83 = *(float *)(this + 24) + v86;
  v84 = *(float *)(this + 28) + v87;
  v85 = v82 + v60;
  v20 = v83;
  *(float *)(this + 212) = v85;
  v86 = v20 + v69;
  v21 = v84;
  *(float *)(this + 216) = v86;
  v87 = v21 + v78;
  v22 = *(float *)(this + 200);
  *(float *)(this + 220) = v87;
  v49 = v22;
  v23 = (float *)sub_102C0F00(v88);
  v61 = v49 * *v23;
  v70 = v23[1] * v49;
  v79 = v49 * v23[2];
  v50 = *(float *)(this + 200);
  v24 = (float *)sub_102C0F30(&v82);
  v85 = v50 * *v24;
  v86 = v24[1] * v50;
  v87 = v50 * v24[2];
  v82 = *(float *)(this + 20) + v85;
  v83 = *(float *)(this + 24) + v86;
  v84 = *(float *)(this + 28) + v87;
  v85 = v82 - v61;
  v25 = v83;
  *(float *)(this + 224) = v85;
  v86 = v25 - v70;
  v26 = v84;
  *(float *)(this + 228) = v86;
  v87 = v26 - v79;
  v27 = *(float *)(this + 200);
  *(float *)(this + 232) = v87;
  v51 = v27;
  v28 = (float *)sub_102C0F00(v88);
  v62 = v51 * *v28;
  v71 = v28[1] * v51;
  v80 = v51 * v28[2];
  v52 = *(float *)(this + 200);
  v29 = (float *)sub_102C0F30(&v82);
  v85 = v52 * *v29;
  v86 = v29[1] * v52;
  v87 = v52 * v29[2];
  v82 = *(float *)(this + 20) - v85;
  v83 = *(float *)(this + 24) - v86;
  v84 = *(float *)(this + 28) - v87;
  v85 = v82 + v62;
  v86 = v83 + v71;
  v87 = v84 + v80;
  v30 = v86;
  v31 = v87;
  v53 = *(float *)(this + 200);
  *(float *)(this + 236) = v85;
  *(float *)(this + 240) = v30;
  *(float *)(this + 244) = v31;
  v32 = (float *)sub_102C0F00(v88);
  v63 = v53 * *v32;
  v72 = v32[1] * v53;
  v81 = v53 * v32[2];
  v54 = *(float *)(this + 200);
  v33 = (float *)sub_102C0F30(&v82);
  v85 = v54 * *v33;
  v86 = v33[1] * v54;
  v87 = v54 * v33[2];
LABEL_10:
  v82 = *(float *)(this + 20) - v85;
  v83 = *(float *)(this + 24) - v86;
  v84 = *(float *)(this + 28) - v87;
  v85 = v82 - v63;
  v40 = v83;
  *(float *)(this + 248) = v85;
  v86 = v40 - v72;
  v41 = v84;
  *(float *)(this + 252) = v86;
  v87 = v41 - v81;
  *(float *)(this + 256) = v87;
LABEL_11:
  if ( *(_BYTE *)(this + 265) )
    SurfaceDecal::UpdateProjectionPolys((SurfaceDecal *)this);
  return this;
}
