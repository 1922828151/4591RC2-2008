/*
 * func-name: ??0SurfaceDecal@@QAE@PAVWorld@@PAVTexture@@AAVVector@@2KMMMW4BlendMode@@_N@Z_0
 * func-address: 0x100c38b0
 * callers: 0x10009ebc
 * callees: 0x100029cd, 0x1000d28d, 0x1000f9ca, 0x10011d6f, 0x10012107, 0x10018e71, 0x1001a5c8, 0x102c0f00, 0x102c0f30, 0x102c9dbc
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
        int a10,
        char a11)
{
  float *v12; // ebp
  double v13; // st7
  double v14; // st6
  bool v15; // al
  float v16; // edx
  float v17; // eax
  float v18; // edx
  float v19; // eax
  float v20; // edx
  float v21; // eax
  float v22; // edx
  float v23; // eax
  float *v24; // edi
  float v25; // edx
  double v26; // st7
  double v27; // st7
  double v28; // st7
  double v29; // st6
  double v30; // st7
  double v31; // st5
  double v32; // st5
  double v33; // rt2
  double v34; // st6
  double v35; // st7
  double v36; // st5
  int v37; // eax
  _DWORD *v38; // eax
  double v39; // st7
  int v40; // eax
  _DWORD *v41; // eax
  int v42; // eax
  _DWORD *v43; // eax
  double v44; // st7
  int v45; // eax
  float *v46; // eax
  float v47; // eax
  double v48; // st7
  double v49; // st5
  double v50; // st5
  double v51; // st5
  double v52; // st5
  double v53; // st5
  double v54; // st5
  double v55; // st7
  float v57; // [esp+4h] [ebp-BCh]
  float v58; // [esp+4h] [ebp-BCh]
  float v59; // [esp+4h] [ebp-BCh]
  float v60; // [esp+4h] [ebp-BCh]
  float v61; // [esp+Ch] [ebp-B4h]
  int v62; // [esp+Ch] [ebp-B4h]
  float v63; // [esp+Ch] [ebp-B4h]
  int v64; // [esp+Ch] [ebp-B4h]
  float v65; // [esp+Ch] [ebp-B4h]
  int v66; // [esp+Ch] [ebp-B4h]
  float v67; // [esp+Ch] [ebp-B4h]
  int v68; // [esp+Ch] [ebp-B4h]
  int v69; // [esp+24h] [ebp-9Ch] BYREF
  float v70; // [esp+28h] [ebp-98h]
  float v71; // [esp+2Ch] [ebp-94h]
  float v72; // [esp+30h] [ebp-90h] BYREF
  float v73; // [esp+34h] [ebp-8Ch]
  float v74; // [esp+38h] [ebp-88h]
  float v75; // [esp+3Ch] [ebp-84h] BYREF
  float v76; // [esp+40h] [ebp-80h]
  float v77; // [esp+44h] [ebp-7Ch]
  float v78; // [esp+48h] [ebp-78h]
  _BYTE v79[12]; // [esp+4Ch] [ebp-74h] BYREF
  int v80[3]; // [esp+58h] [ebp-68h] BYREF
  int v81[4]; // [esp+64h] [ebp-5Ch] BYREF
  char v82[64]; // [esp+74h] [ebp-4Ch] BYREF
  int v83; // [esp+BCh] [ebp-4h]

  v81[3] = this;
  FXSystem::FXSystem((FXSystem *)this, a2);
  *(_DWORD *)this = &SurfaceDecal::`vftable';
  *(float *)(this + 184) = 0.0;
  *(float *)(this + 188) = 0.0;
  v12 = (float *)(this + 184);
  *(float *)(this + 192) = 0.0;
  *(float *)(this + 212) = 0.0;
  v83 = 0;
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
  *(_DWORD *)(this + 180) = 0;
  *(float *)(this + 200) = a7;
  *(_DWORD *)(this + 208) = a10;
  *(_DWORD *)(this + 176) = a3;
  *(float *)(this + 204) = 255.0;
  *(_DWORD *)(this + 260) = a6;
  *(_BYTE *)(this + 265) = a11;
  v13 = a5[1];
  v14 = *a5;
  LOBYTE(v83) = 1;
  v78 = v13 * v13 + v14 * v14 + a5[2] * a5[2];
  v78 = sqrt(v78);
  v15 = v78 <= 0.0;
  *(_BYTE *)(this + 264) = v15;
  if ( a11 )
  {
    *(float *)(this + 20) = *a4;
    *(float *)(this + 24) = a4[1];
    *(float *)(this + 28) = a4[2];
    v16 = a5[1];
    v17 = a5[2];
    v72 = *a5;
    v73 = v16;
    v74 = v17;
    sub_100029CD();
    v18 = v73;
    v19 = v74;
    *v12 = v72;
    *(float *)(this + 188) = v18;
    *(float *)(this + 192) = v19;
    goto LABEL_13;
  }
  if ( v15 )
  {
    *(float *)(this + 20) = *a4;
    *(float *)(this + 24) = a4[1];
    *(float *)(this + 28) = a4[2];
    goto LABEL_13;
  }
  v20 = a5[1];
  v21 = a5[2];
  v72 = *a5;
  v73 = v20;
  v74 = v21;
  sub_100029CD();
  v22 = v73;
  v23 = v74;
  *v12 = v72;
  *(float *)(this + 188) = v22;
  *(float *)(this + 192) = v23;
  v24 = (float *)(this + 20);
  v72 = *v12 * 0.02099999971687794;
  v73 = *(float *)(this + 188) * 0.02099999971687794;
  v74 = 0.02099999971687794 * *(float *)(this + 192);
  v75 = v72 + *a4;
  v76 = a4[1] + v73;
  v25 = v76;
  v26 = a4[2];
  *(float *)(this + 20) = v75;
  v27 = v26 + v74;
  *(float *)(this + 24) = v25;
  v77 = v27;
  *(float *)(this + 28) = v77;
  *(float *)&v69 = 0.0 - *v12;
  v70 = 1.0 - *(float *)(this + 188);
  v71 = 0.0 - *(float *)(this + 192);
  if ( sub_1001A5C8() || sub_1001A5C8() )
  {
    v72 = a7;
    v78 = a7 * 0.0;
    v73 = v78;
    v74 = v78;
    *(float *)&v69 = v78;
    v70 = v78;
    v48 = v78;
    v71 = a7;
    v75 = v78 + *v24;
    v76 = *(float *)(this + 24) + v78;
    v77 = *(float *)(this + 28) + a7;
    *(float *)&v69 = v75 + a7;
    v49 = v76;
    *(float *)(this + 212) = *(float *)&v69;
    v70 = v49 + v73;
    v50 = v77;
    *(float *)(this + 216) = v70;
    v71 = v50 + v74;
    *(float *)(this + 220) = v71;
    v72 = a7;
    v71 = a7;
    v34 = v48;
    v35 = a7;
    v73 = v34;
    v74 = v34;
    *(float *)&v69 = v34;
    v70 = v34;
    v36 = *v24 + *(float *)&v69;
    goto LABEL_11;
  }
  *(float *)&v69 = 0.0 - *v12;
  v70 = -1.0 - *(float *)(this + 188);
  v71 = 0.0 - *(float *)(this + 192);
  if ( sub_1001A5C8() )
  {
    v78 = -1.0 * a7;
    *(float *)&v69 = v78;
    v28 = v78;
    v78 = a7 * 0.0;
    v70 = v78;
    v71 = v78;
    v75 = v78;
    v76 = v78;
    v29 = v28;
    v30 = v78;
    v77 = v29;
    v72 = *v24 + v78;
    v73 = *(float *)(this + 24) + v78;
    v74 = *(float *)(this + 28) + v77;
    v75 = v72 + *(float *)&v69;
    v31 = v73;
    *(float *)(this + 212) = v75;
    v76 = v31 + v70;
    v32 = v74;
    *(float *)(this + 216) = v76;
    v77 = v32 + v71;
    *(float *)(this + 220) = v77;
    v72 = v29;
    v71 = v29;
    v33 = v29;
    v34 = v30;
    v35 = v33;
    v73 = v34;
    v74 = v34;
    *(float *)&v69 = v34;
    v70 = v34;
    v36 = *(float *)&v69 + *v24;
LABEL_11:
    v75 = v36;
    v76 = *(float *)(this + 24) + v70;
    v77 = *(float *)(this + 28) + v71;
    *(float *)&v69 = v75 - v72;
    v51 = v76;
    *(float *)(this + 224) = *(float *)&v69;
    v70 = v51 - v73;
    v52 = v77;
    *(float *)(this + 228) = v70;
    v71 = v52 - v74;
    *(float *)(this + 232) = v71;
    v72 = v35;
    v71 = v72;
    v73 = v34;
    v74 = v73;
    *(float *)&v69 = v73;
    v70 = v73;
    v75 = *v24 - v73;
    v76 = *(float *)(this + 24) - v73;
    v77 = *(float *)(this + 28) - v72;
    *(float *)&v69 = v75 + v72;
    v53 = v76;
    *(float *)(this + 236) = *(float *)&v69;
    v70 = v53 + v73;
    v54 = v77;
    *(float *)(this + 240) = v70;
    v71 = v54 + v74;
    *(float *)(this + 244) = v71;
    v72 = v35;
    v71 = v72;
    v73 = v34;
    v74 = v73;
    *(float *)&v69 = v73;
    v70 = v73;
    v75 = *v24 - v73;
    v76 = *(float *)(this + 24) - v73;
    v77 = *(float *)(this + 28) - v72;
    *(float *)&v69 = v75 - v72;
    v55 = v76;
    *(float *)(this + 248) = *(float *)&v69;
    v70 = v55 - v73;
    v71 = v77 - v74;
    v47 = v71;
    *(float *)(this + 252) = v70;
    goto LABEL_12;
  }
  sub_10018E71(v82, this + 184);
  v61 = *(float *)(this + 200);
  sub_102C0F00(&v75);
  v62 = sub_1000D28D((int)&v69, v61);
  v57 = *(float *)(this + 200);
  sub_102C0F30(v79);
  v37 = sub_1000D28D((int)v81, v57);
  sub_10012107((int)v80, v37);
  v38 = (_DWORD *)sub_10012107((int)&v72, v62);
  v39 = *(float *)(this + 200);
  *(_DWORD *)(this + 212) = *v38;
  *(_DWORD *)(this + 216) = v38[1];
  v63 = v39;
  *(_DWORD *)(this + 220) = v38[2];
  sub_102C0F00(v79);
  v64 = sub_1000D28D((int)v80, v63);
  v58 = *(float *)(this + 200);
  sub_102C0F30(&v75);
  v40 = sub_1000D28D((int)&v69, v58);
  sub_10012107((int)&v72, v40);
  v41 = (_DWORD *)sub_10011D6F((int)v81, v64);
  *(_DWORD *)(this + 224) = *v41;
  *(_DWORD *)(this + 228) = v41[1];
  *(_DWORD *)(this + 232) = v41[2];
  v65 = *(float *)(this + 200);
  sub_102C0F00(v79);
  v66 = sub_1000D28D((int)v80, v65);
  v59 = *(float *)(this + 200);
  sub_102C0F30(&v75);
  v42 = sub_1000D28D((int)&v69, v59);
  sub_10011D6F((int)&v72, v42);
  v43 = (_DWORD *)sub_10012107((int)v81, v66);
  v44 = *(float *)(this + 200);
  *(_DWORD *)(this + 236) = *v43;
  *(_DWORD *)(this + 240) = v43[1];
  v67 = v44;
  *(_DWORD *)(this + 244) = v43[2];
  sub_102C0F00(v79);
  v68 = sub_1000D28D((int)v80, v67);
  v60 = *(float *)(this + 200);
  sub_102C0F30(&v75);
  v45 = sub_1000D28D((int)&v69, v60);
  sub_10011D6F((int)&v72, v45);
  v46 = (float *)sub_10011D6F((int)v81, v68);
  *(float *)(this + 248) = *v46;
  *(float *)(this + 252) = v46[1];
  v47 = v46[2];
LABEL_12:
  *(float *)(this + 256) = v47;
LABEL_13:
  if ( *(_BYTE *)(this + 265) )
    SurfaceDecal::UpdateProjectionPolys((SurfaceDecal *)this);
  return this;
}
