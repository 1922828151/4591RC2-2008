/*
 * func-name: ?BoxAngle@Canvas@@UAEXKHHHHMMPAVTexture@@W4BlendMode@@1@Z
 * func-address: 0x10068320
 * callers: none
 * callees: 0x10009730, 0x1006bdb0, 0x1006cf10, 0x1006f000, 0x101189f0, 0x10136210, 0x1013f020, 0x101a26c0, 0x101a2814, 0x101a281a, 0x101a2820
 */

void __userpurge Canvas::BoxAngle(
        int a1@<ecx>,
        float a2@<ebp>,
        int a3@<edi>,
        float a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        float a10,
        float a11,
        int a12,
        float a13,
        float a14,
        Texture *a15,
        int a16,
        int a17)
{
  int v17; // ebx
  int v18; // edi
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  double v22; // st6
  double v23; // st7
  double v24; // st6
  double v25; // st7
  double v26; // st7
  double v27; // st7
  const void *v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // esi
  int v34; // ecx
  _DWORD *v35; // ebx
  double *v36; // edi
  float v37; // esi
  float v38; // eax
  float v39; // edi
  double *v40; // esi
  _DWORD *v41; // edi
  struct RenderDevice *v42; // eax
  _BYTE v43[16]; // [esp+10h] [ebp-180h] BYREF
  int v44; // [esp+20h] [ebp-170h]
  float v45; // [esp+24h] [ebp-16Ch]
  float v46; // [esp+28h] [ebp-168h]
  float v47; // [esp+3Ch] [ebp-154h]
  float v48; // [esp+40h] [ebp-150h]
  float v49; // [esp+44h] [ebp-14Ch]
  int v50; // [esp+48h] [ebp-148h]
  float v51; // [esp+4Ch] [ebp-144h]
  float v52; // [esp+50h] [ebp-140h]
  float v53; // [esp+54h] [ebp-13Ch]
  float v54; // [esp+58h] [ebp-138h]
  float v55; // [esp+5Ch] [ebp-134h]
  int v56; // [esp+60h] [ebp-130h] BYREF
  float v57; // [esp+64h] [ebp-12Ch]
  float v58; // [esp+68h] [ebp-128h]
  double v59; // [esp+6Ch] [ebp-124h] BYREF
  float v60; // [esp+74h] [ebp-11Ch]
  double v61; // [esp+78h] [ebp-118h]
  float v62; // [esp+80h] [ebp-110h]
  int v63; // [esp+84h] [ebp-10Ch]
  double v64; // [esp+88h] [ebp-108h]
  double v65; // [esp+90h] [ebp-100h]
  float v66; // [esp+98h] [ebp-F8h]
  float v67; // [esp+9Ch] [ebp-F4h]
  float v68; // [esp+A0h] [ebp-F0h]
  float v69; // [esp+A4h] [ebp-ECh]
  float v70; // [esp+A8h] [ebp-E8h]
  _DWORD v71[7]; // [esp+ACh] [ebp-E4h] BYREF
  int v72; // [esp+C8h] [ebp-C8h]
  int v73[7]; // [esp+CCh] [ebp-C4h] BYREF
  _BYTE v74[28]; // [esp+E8h] [ebp-A8h] BYREF
  _DWORD v75[32]; // [esp+104h] [ebp-8Ch] BYREF
  int v76; // [esp+1A0h] [ebp+10h]

  v46 = a2;
  v45 = a4;
  v44 = a3;
  v71[4] = a1;
  if ( a10 >= 0.0 && a10 <= 360.0 && a11 >= 0.0 && a11 <= 360.0 )
  {
    v17 = (int)((double)a8 * *(float *)(a1 + 52));
    v76 = v17;
    v18 = (int)((double)a9 * *(float *)(a1 + 56));
    v19 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, bool, int, float, float))(*(_DWORD *)v19 + 432))(
      v19,
      27,
      LODWORD(a13) != 0,
      v44,
      COERCE_FLOAT(LODWORD(v45)),
      COERCE_FLOAT(LODWORD(v46)));
    if ( a13 != 0.0 )
    {
      v20 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, float))(*(_DWORD *)v20 + 432))(
        v20,
        19,
        COERCE_FLOAT(LODWORD(a13)));
      v21 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v21 + 432))(v21, 20, a17);
    }
    v58 = 0.0;
    v52 = 0.0;
    v57 = 1.0;
    *(float *)&v64 = 1.0;
    if ( a15 )
    {
      v58 = *((float *)a15 + 15);
      v52 = *((float *)a15 + 16);
      v57 = *((float *)a15 + 17);
      *(float *)&v64 = *((float *)a15 + 18);
    }
    sub_10009730((int)v73, 28, 7, (int (__thiscall *)(int))sub_10049070);
    v68 = a13;
    v22 = a14;
    v54 = a14;
    LODWORD(v49) = v17 / 2;
    LODWORD(v51) = v18 / 2;
    if ( a13 > 180.0 )
      a13 = a13 - 360.0;
    if ( v22 > 180.0 )
      a14 = v22 - 360.0;
    v53 = (float)(v18 + v17 / 2);
    *(float *)&v61 = v53;
    v55 = (float)(LODWORD(a10) + v18 / 2);
    *((float *)&v61 + 1) = v55;
    *(float *)&v56 = (float)SLODWORD(v51);
    v51 = (float)SLODWORD(v49);
    *(float *)&v50 = *(float *)&v56 / v51;
    *(float *)&v50 = atan(*(float *)&v50);
    *(float *)&v50 = *(float *)&v50 * 57.29577791868205 + *(float *)&v50 * 57.29577791868205;
    v23 = a13;
    v49 = fabs(a13);
    v24 = *(float *)&v50 * 0.5;
    v65 = v24;
    if ( v49 <= v24 || v49 >= 180.0 - v24 )
    {
      v49 = v23 * 0.01745329300562541;
      v48 = cos(v49);
      v25 = v51;
    }
    else
    {
      v49 = v23 * 0.01745329300562541;
      v48 = sin(v49);
      v25 = *(float *)&v56;
    }
    v48 = v25 / v48;
    v48 = fabs(v48);
    v47 = cos(v49);
    v62 = v47 * v48 + *(float *)&v61;
    v47 = sin(v49);
    *(float *)&v63 = *((float *)&v61 + 1) - v47 * v48;
    v26 = a14;
    v47 = fabs(a14);
    if ( v65 >= v47 || 180.0 - v65 <= v47 )
    {
      v49 = v26 * 0.01745329300562541;
      v47 = cos(v49);
      v27 = v51;
    }
    else
    {
      v49 = v26 * 0.01745329300562541;
      v47 = sin(v49);
      v27 = *(float *)&v56;
    }
    v48 = v27 / v47;
    v47 = fabs(v48);
    v48 = v47;
    v47 = cos(v49);
    v69 = v47 * v48 + *(float *)&v61;
    v47 = sin(v49);
    v70 = *((float *)&v61 + 1) - v47 * v48;
    HIDWORD(v59) = sub_1006CF10(&v59);
    v60 = 0.0;
    v64 = *(float *)&v64 + v52;
    v47 = v64 * 0.5;
    v46 = v47;
    v61 = v57 + v58;
    v47 = 0.5 * v61;
    v45 = v47;
    v47 = COERCE_FLOAT(v43);
    v28 = (const void *)sub_1006BDB0(SLODWORD(v53), SLODWORD(v55), COERCE_INT(0.0), COERCE_INT(1.0), v17, v45, v46);
    v53 = v61;
    qmemcpy(v73, v28, sizeof(v73));
    LODWORD(v47) = v17 + v18;
    v57 = (float)(v17 + v18);
    v49 = (float)SLODWORD(a10);
    v29 = sub_1006BDB0(SLODWORD(v57), SLODWORD(v49), COERCE_INT(0.0), COERCE_INT(1.0), v17, v53, v52);
    sub_1006F000(v29);
    v46 = v52;
    v47 = COERCE_FLOAT(v43);
    v52 = (float)v18;
    v30 = sub_1006BDB0(SLODWORD(v52), SLODWORD(v49), COERCE_INT(0.0), COERCE_INT(1.0), v17, v58, v46);
    sub_1006F000(v30);
    v55 = v64;
    LODWORD(v47) = a12 + LODWORD(a10);
    *(float *)&v64 = (float)(a12 + LODWORD(a10));
    v31 = sub_1006BDB0(SLODWORD(v52), SLODWORD(v64), COERCE_INT(0.0), COERCE_INT(1.0), v17, v58, v55);
    sub_1006F000(v31);
    v47 = COERCE_FLOAT(v43);
    v32 = sub_1006BDB0(SLODWORD(v57), SLODWORD(v64), COERCE_INT(0.0), COERCE_INT(1.0), v17, v53, v55);
    sub_1006F000(v32);
    v33 = (int)((v68 + v65) / *(float *)&v50);
    v51 = *(float *)&v33;
    if ( v33 < 0 )
    {
      v51 = 0.0;
      *(float *)&v33 = 0.0;
    }
    v34 = (int)((v65 + v54) / *(float *)&v50);
    if ( v34 < 0 )
      v34 = 0;
    if ( v34 == v33 && v54 < (double)v68 )
      v56 = 4;
    else
      v56 = v34 - v33;
    v53 = (float)a12;
    v54 = (*(float *)&v63 - v49) / v53;
    v46 = v54;
    v55 = (float)SLODWORD(a11);
    v54 = (v62 - v52) / v55;
    v45 = v54;
    v54 = COERCE_FLOAT(v43);
    qmemcpy(
      v74,
      (const void *)sub_1006BDB0(SLODWORD(v62), v63, COERCE_INT(0.0), COERCE_INT(1.0), v17, v45, v46),
      sizeof(v74));
    v35 = (_DWORD *)*(_DWORD *)HIDWORD(v59);
    v36 = &v59;
    v62 = COERCE_FLOAT(&v59);
    if ( SLODWORD(v51) > 0 )
    {
      v37 = v51;
      do
      {
        if ( v35 == (_DWORD *)HIDWORD(v59) )
          invalid_parameter_noinfo();
        --LODWORD(v37);
        v35 = (_DWORD *)*v35;
      }
      while ( v37 != 0.0 );
    }
    v38 = 0.0;
    if ( v56 > 0 )
    {
      v51 = COERCE_FLOAT(v75);
      v50 = v56;
      v54 = *(float *)&v56;
      while ( 1 )
      {
        if ( !v36 )
          invalid_parameter_noinfo();
        if ( v35 == *((_DWORD **)v36 + 1) )
          invalid_parameter_noinfo();
        v39 = v51;
        LODWORD(v51) += 28;
        qmemcpy((void *)LODWORD(v39), v35 + 2, 0x1Cu);
        v40 = (double *)LODWORD(v62);
        if ( v35 == *(_DWORD **)(LODWORD(v62) + 4) )
          invalid_parameter_noinfo();
        v35 = (_DWORD *)*v35;
        v41 = (_DWORD *)HIDWORD(v59);
        if ( v40 != &v59 )
          invalid_parameter_noinfo();
        if ( v35 == v41 )
        {
          v35 = (_DWORD *)*(_DWORD *)HIDWORD(v59);
          v62 = COERCE_FLOAT(&v59);
        }
        --v50;
        if ( *(float *)&v50 == 0.0 )
          break;
        v36 = (double *)LODWORD(v62);
      }
      v38 = v54;
    }
    *(float *)&v65 = v69;
    *((float *)&v65 + 1) = v70;
    *(float *)&v71[1] = v70;
    v66 = 0.0;
    *(float *)v71 = v69;
    v67 = 1.0;
    *(float *)&v71[3] = 1.0;
    *(float *)&v71[2] = 0.0;
    v71[4] = v76;
    *(float *)&v71[5] = (v69 - v52) / v55;
    *(float *)&v71[6] = (v70 - v49) / v53;
    qmemcpy(&v75[7 * LODWORD(v38)], v71, 0x1Cu);
    if ( a15 )
    {
      Texture::Set(a15, 0);
    }
    else
    {
      v42 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v42 + 484))(v42, 0);
    }
    (*(void (__thiscall **)(int, int, int *, int))(*(_DWORD *)v72 + 116))(v72, v56 + 3, v73, 28);
    sub_1013F020(&v56);
  }
}
