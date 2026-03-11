/*
 * func-name: ?setSize@SurfaceDecal@@QAEXM@Z_0
 * func-address: 0x100c2c00
 * callers: 0x1000cb53
 * callees: 0x1000f9ca, 0x10018e71, 0x1001a5c8, 0x102c0f00, 0x102c0f30
 */

void __thiscall SurfaceDecal::setSize(SurfaceDecal *this, float a2)
{
  bool v3; // zf
  float *v4; // edi
  double v5; // st7
  double v6; // st6
  double v7; // st7
  float v8; // eax
  float v9; // ecx
  float v10; // edx
  float *v11; // eax
  float *v12; // eax
  double v13; // st7
  double v14; // st7
  double v15; // st7
  float *v16; // eax
  float *v17; // eax
  double v18; // st7
  double v19; // st7
  double v20; // st7
  float *v21; // eax
  float *v22; // eax
  double v23; // st7
  float v24; // edx
  float v25; // eax
  double v26; // st7
  float *v27; // eax
  float *v28; // eax
  double v29; // st5
  double v30; // st5
  double v31; // st5
  double v32; // st5
  double v33; // st7
  double v34; // st7
  float v35; // [esp+0h] [ebp-74h]
  float v36; // [esp+0h] [ebp-74h]
  float v37; // [esp+0h] [ebp-74h]
  float v38; // [esp+0h] [ebp-74h]
  float v39; // [esp+0h] [ebp-74h]
  float v40; // [esp+0h] [ebp-74h]
  float v41; // [esp+0h] [ebp-74h]
  float v42; // [esp+0h] [ebp-74h]
  float v43; // [esp+0h] [ebp-74h]
  float v44; // [esp+0h] [ebp-74h]
  float v45; // [esp+0h] [ebp-74h]
  float v46; // [esp+4h] [ebp-70h]
  float v47; // [esp+4h] [ebp-70h]
  float v48; // [esp+4h] [ebp-70h]
  float v49; // [esp+4h] [ebp-70h]
  float v50; // [esp+4h] [ebp-70h]
  float v51; // [esp+4h] [ebp-70h]
  float v52; // [esp+4h] [ebp-70h]
  float v53; // [esp+8h] [ebp-6Ch]
  float v54; // [esp+8h] [ebp-6Ch]
  float v55; // [esp+8h] [ebp-6Ch]
  float v56; // [esp+8h] [ebp-6Ch]
  float v57; // [esp+8h] [ebp-6Ch]
  float v58; // [esp+8h] [ebp-6Ch]
  float v59; // [esp+8h] [ebp-6Ch]
  float v60; // [esp+Ch] [ebp-68h]
  float v61; // [esp+Ch] [ebp-68h]
  float v62; // [esp+Ch] [ebp-68h]
  float v63; // [esp+Ch] [ebp-68h]
  float v64; // [esp+Ch] [ebp-68h]
  float v65; // [esp+Ch] [ebp-68h]
  float v66; // [esp+10h] [ebp-64h] BYREF
  float v67; // [esp+14h] [ebp-60h]
  float v68; // [esp+18h] [ebp-5Ch]
  float v69; // [esp+1Ch] [ebp-58h]
  float v70; // [esp+20h] [ebp-54h]
  float v71; // [esp+24h] [ebp-50h]
  _BYTE v72[12]; // [esp+28h] [ebp-4Ch] BYREF
  _BYTE v73[64]; // [esp+34h] [ebp-40h] BYREF

  v3 = *((_BYTE *)this + 264) == 0;
  *((float *)this + 50) = a2;
  if ( !v3 )
    goto LABEL_10;
  v4 = (float *)((char *)this + 184);
  v69 = 0.0 - *((float *)this + 46);
  v70 = 1.0 - *((float *)this + 47);
  v71 = 0.0 - *((float *)this + 48);
  if ( sub_1001A5C8() || sub_1001A5C8() )
  {
    v45 = a2 * 0.0;
    v69 = v45;
    v70 = v45;
    v6 = a2;
    v7 = v45;
    v71 = a2;
    v66 = v45 + *((float *)this + 5);
    v67 = *((float *)this + 6) + v45;
    v68 = *((float *)this + 7) + a2;
    v69 = v66 + a2;
    v8 = v69;
    v70 = v67 + v45;
    v9 = v70;
    v71 = v68 + v45;
    v10 = v71;
    goto LABEL_8;
  }
  v69 = 0.0 - *v4;
  v70 = -1.0 - *((float *)this + 47);
  v71 = 0.0 - *((float *)this + 48);
  if ( sub_1001A5C8() )
  {
    v35 = -1.0 * a2;
    v69 = v35;
    v5 = v35;
    v36 = a2 * 0.0;
    v70 = v36;
    v71 = v36;
    v6 = v5;
    v7 = v36;
    v60 = v6;
    v66 = v36 + *((float *)this + 5);
    v67 = *((float *)this + 6) + v36;
    v68 = *((float *)this + 7) + v60;
    v46 = v66 + v69;
    v8 = v46;
    v53 = v67 + v36;
    v9 = v53;
    v61 = v68 + v36;
    v10 = v61;
LABEL_8:
    v51 = v6;
    *((float *)this + 53) = v8;
    v71 = v6;
    *((float *)this + 54) = v9;
    *((float *)this + 55) = v10;
    v58 = v7;
    v69 = v58;
    v70 = v58;
    v66 = *((float *)this + 5) + v58;
    v67 = *((float *)this + 6) + v58;
    v68 = *((float *)this + 7) + v71;
    v69 = v66 - v51;
    v29 = v67;
    *((float *)this + 56) = v69;
    v70 = v29 - v58;
    v30 = v68;
    *((float *)this + 57) = v70;
    v71 = v30 - v58;
    *((float *)this + 58) = v71;
    v52 = v6;
    v71 = v52;
    v59 = v7;
    v69 = v59;
    v70 = v59;
    v66 = *((float *)this + 5) - v59;
    v67 = *((float *)this + 6) - v59;
    v68 = *((float *)this + 7) - v52;
    v69 = v66 + v52;
    v31 = v67;
    *((float *)this + 59) = v69;
    v70 = v31 + v59;
    v32 = v68;
    *((float *)this + 60) = v70;
    v71 = v32 + v59;
    *((float *)this + 61) = v71;
    v50 = v6;
    v71 = v50;
    v57 = v7;
    v65 = v57;
    v69 = v57;
    v70 = v57;
    goto LABEL_9;
  }
  sub_10018E71(v73, (int)this + 184);
  v37 = *((float *)this + 50);
  v11 = (float *)sub_102C0F00(&v66);
  v47 = v37 * *v11;
  v54 = v11[1] * v37;
  v62 = v37 * v11[2];
  v38 = *((float *)this + 50);
  v12 = (float *)sub_102C0F30(v72);
  v69 = v38 * *v12;
  v70 = v12[1] * v38;
  v71 = v38 * v12[2];
  v66 = v69 + *((float *)this + 5);
  v67 = *((float *)this + 6) + v70;
  v68 = *((float *)this + 7) + v71;
  v69 = v66 + v47;
  v13 = v67;
  *((float *)this + 53) = v69;
  v70 = v13 + v54;
  v14 = v68;
  *((float *)this + 54) = v70;
  v71 = v14 + v62;
  v15 = *((float *)this + 50);
  *((float *)this + 55) = v71;
  v39 = v15;
  v16 = (float *)sub_102C0F00(v72);
  v48 = v39 * *v16;
  v55 = v16[1] * v39;
  v63 = v39 * v16[2];
  v40 = *((float *)this + 50);
  v17 = (float *)sub_102C0F30(&v66);
  v69 = *v17 * v40;
  v70 = v17[1] * v40;
  v71 = v40 * v17[2];
  v66 = v69 + *((float *)this + 5);
  v67 = *((float *)this + 6) + v70;
  v68 = *((float *)this + 7) + v71;
  v69 = v66 - v48;
  v18 = v67;
  *((float *)this + 56) = v69;
  v70 = v18 - v55;
  v19 = v68;
  *((float *)this + 57) = v70;
  v71 = v19 - v63;
  v20 = *((float *)this + 50);
  *((float *)this + 58) = v71;
  v41 = v20;
  v21 = (float *)sub_102C0F00(v72);
  v49 = *v21 * v41;
  v56 = v21[1] * v41;
  v64 = v41 * v21[2];
  v42 = *((float *)this + 50);
  v22 = (float *)sub_102C0F30(&v66);
  v69 = v42 * *v22;
  v70 = v22[1] * v42;
  v71 = v42 * v22[2];
  v66 = *((float *)this + 5) - v69;
  v67 = *((float *)this + 6) - v70;
  v68 = *((float *)this + 7) - v71;
  v69 = v66 + v49;
  v70 = v67 + v56;
  v23 = v68 + v64;
  v24 = v70;
  *((float *)this + 59) = v69;
  v71 = v23;
  v25 = v71;
  v26 = *((float *)this + 50);
  *((float *)this + 60) = v24;
  v43 = v26;
  *((float *)this + 61) = v25;
  v27 = (float *)sub_102C0F00(v72);
  v50 = v43 * *v27;
  v57 = v27[1] * v43;
  v65 = v43 * v27[2];
  v44 = *((float *)this + 50);
  v28 = (float *)sub_102C0F30(&v66);
  v69 = *v28 * v44;
  v70 = v28[1] * v44;
  v71 = v44 * v28[2];
LABEL_9:
  v66 = *((float *)this + 5) - v69;
  v67 = *((float *)this + 6) - v70;
  v68 = *((float *)this + 7) - v71;
  v69 = v66 - v50;
  v33 = v67;
  *((float *)this + 62) = v69;
  v70 = v33 - v57;
  v34 = v68;
  *((float *)this + 63) = v70;
  v71 = v34 - v65;
  *((float *)this + 64) = v71;
LABEL_10:
  if ( *((_BYTE *)this + 265) )
    SurfaceDecal::UpdateProjectionPolys(this);
}
