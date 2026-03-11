/*
 * func-name: ?BillBoard@Canvas@@UAEXAAVVector@@MMKPAVTexture@@W4BlendMode@@2@Z
 * func-address: 0x10066590
 * callers: none
 * callees: 0x1004c240, 0x101189f0, 0x10136210
 */

int __thiscall Canvas::BillBoard(void *this, float *a2, float a3, float a4, int a5, float *a6, int a7, int a8)
{
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st4
  double v18; // st0
  double v19; // st0
  double v20; // st1
  double v21; // st6
  double v22; // st2
  double v23; // st7
  double v24; // st2
  double v25; // st4
  double v26; // st3
  double v27; // st5
  double v28; // st3
  double v29; // st1
  double v30; // st1
  int (__thiscall *v31)(void *, int, _DWORD *, int, int); // edx
  double v32; // st7
  double v33; // st7
  float v35; // [esp+20h] [ebp-F8h]
  float v36; // [esp+20h] [ebp-F8h]
  float v37; // [esp+20h] [ebp-F8h]
  float v38; // [esp+20h] [ebp-F8h]
  float v39; // [esp+24h] [ebp-F4h]
  float v40; // [esp+24h] [ebp-F4h]
  float v41; // [esp+24h] [ebp-F4h]
  float v42; // [esp+24h] [ebp-F4h]
  float v43; // [esp+28h] [ebp-F0h]
  float v44; // [esp+28h] [ebp-F0h]
  float v45; // [esp+28h] [ebp-F0h]
  float v46; // [esp+28h] [ebp-F0h]
  float v47; // [esp+2Ch] [ebp-ECh]
  float v48; // [esp+2Ch] [ebp-ECh]
  float v49; // [esp+30h] [ebp-E8h]
  float v50; // [esp+30h] [ebp-E8h]
  float v51; // [esp+3Ch] [ebp-DCh]
  float v52; // [esp+3Ch] [ebp-DCh]
  float v53; // [esp+3Ch] [ebp-DCh]
  float v54; // [esp+3Ch] [ebp-DCh]
  float v55; // [esp+40h] [ebp-D8h]
  float v56; // [esp+40h] [ebp-D8h]
  float v57; // [esp+40h] [ebp-D8h]
  float v58; // [esp+40h] [ebp-D8h]
  float v59; // [esp+44h] [ebp-D4h]
  float v60; // [esp+44h] [ebp-D4h]
  float v61; // [esp+44h] [ebp-D4h]
  float v62; // [esp+48h] [ebp-D0h]
  float v63; // [esp+48h] [ebp-D0h]
  float v64; // [esp+4Ch] [ebp-CCh]
  float v65; // [esp+4Ch] [ebp-CCh]
  float v66; // [esp+50h] [ebp-C8h]
  float v67; // [esp+50h] [ebp-C8h]
  double v68; // [esp+54h] [ebp-C4h] BYREF
  float v69; // [esp+5Ch] [ebp-BCh]
  float v70; // [esp+60h] [ebp-B8h]
  double v71; // [esp+64h] [ebp-B4h] BYREF
  float v72; // [esp+6Ch] [ebp-ACh]
  float v73; // [esp+70h] [ebp-A8h]
  float v74; // [esp+74h] [ebp-A4h]
  _DWORD v75[24]; // [esp+78h] [ebp-A0h] BYREF
  float v76[16]; // [esp+D8h] [ebp-40h] BYREF

  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, bool))(*(_DWORD *)v9 + 432))(v9, 27, a7 != 0);
  if ( a7 )
  {
    v10 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v10 + 432))(v10, 19, a7);
    v11 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 20, a8);
  }
  if ( a6 )
  {
    Texture::Set((Texture *)a6, 0);
  }
  else
  {
    v12 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v12 + 484))(v12, 0);
  }
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v13 + 468))(v13, v76);
  v71 = COERCE_DOUBLE(__PAIR64__(LODWORD(v76[4]), LODWORD(v76[0])));
  v72 = v76[8];
  sub_1004C240((float *)&v71);
  v68 = COERCE_DOUBLE(__PAIR64__(LODWORD(v76[5]), LODWORD(v76[1])));
  v69 = v76[9];
  sub_1004C240((float *)&v68);
  v35 = *(float *)&v68 * a4;
  v39 = *((float *)&v68 + 1) * a4;
  v43 = a4 * v69;
  v62 = *(float *)&v71 * a3;
  v64 = *((float *)&v71 + 1) * a3;
  v66 = a3 * v72;
  v14 = *a2;
  v15 = v62;
  v74 = v14 - v62;
  v16 = a2[1];
  v17 = v64;
  v70 = v16 - v64;
  v68 = a2[2];
  v71 = v66;
  v73 = v68 - v66;
  v63 = v74 - v35;
  *(float *)v75 = v63;
  v75[3] = a5;
  v65 = v70 - v39;
  *(float *)&v75[1] = v65;
  v75[9] = a5;
  v67 = v73 - v43;
  v18 = a6[15];
  *(float *)&v75[2] = v67;
  v51 = v18;
  v19 = a6[18];
  *(float *)&v75[4] = v51;
  v55 = v19;
  v20 = v15;
  v21 = v43;
  *(float *)&v75[5] = v55;
  v22 = v14 + v20;
  v23 = v39;
  v59 = v22;
  v47 = v59;
  v24 = v17;
  v25 = v59;
  v26 = v16 + v24;
  v27 = v35;
  v60 = v26;
  v28 = v60;
  v49 = v60;
  v61 = v71 + v68;
  v36 = v47 - v35;
  *(float *)&v75[6] = v36;
  v40 = v49 - v39;
  *(float *)&v75[7] = v40;
  v44 = v61 - v43;
  v29 = a6[17];
  *(float *)&v75[8] = v44;
  v52 = v29;
  v30 = a6[18];
  *(float *)&v75[10] = v52;
  v56 = v30;
  *(float *)&v75[11] = v56;
  v37 = v74 + v27;
  v41 = v70 + v23;
  v45 = v73 + v21;
  v53 = a6[15];
  *(float *)&v75[12] = v37;
  v57 = a6[16];
  *(float *)&v75[13] = v41;
  v48 = v25;
  v75[15] = a5;
  *(float *)&v75[16] = v53;
  v50 = v28;
  v75[21] = a5;
  *(float *)&v75[17] = v57;
  *(float *)&v75[14] = v45;
  v38 = v27 + v48;
  *(float *)&v75[18] = v38;
  v42 = v23 + v50;
  *(float *)&v75[19] = v42;
  v31 = *(int (__thiscall **)(void *, int, _DWORD *, int, int))(*(_DWORD *)this + 112);
  v46 = v21 + v61;
  v32 = a6[17];
  *(float *)&v75[20] = v46;
  v54 = v32;
  v33 = a6[16];
  *(float *)&v75[22] = v54;
  v58 = v33;
  *(float *)&v75[23] = v58;
  return v31(this, 4, v75, 24, 1);
}
