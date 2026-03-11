/*
 * func-name: ?RotatedBillBoard@Canvas@@UAEXAAVVector@@0MMKPAVTexture@@W4BlendMode@@2@Z
 * func-address: 0x10067d40
 * callers: none
 * callees: 0x1004c240, 0x10067bd0, 0x101189f0, 0x10136210, 0x10179050
 */

int __userpurge Canvas::RotatedBillBoard@<eax>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        int a5,
        int a6,
        int a7,
        int a8,
        float *a9,
        float *a10,
        float a11,
        float a12,
        int a13,
        int a14,
        Texture *a15,
        int a16,
        int a17)
{
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  struct RenderDevice *v22; // eax
  double v23; // st7
  double v24; // st6
  double v25; // st5
  double v26; // st4
  double v27; // st3
  double v28; // st2
  double v29; // st1
  float *v30; // esi
  int v31; // edi
  int v32; // ecx
  float v33; // edx
  float v36; // [esp+48h] [ebp-148h]
  float v37; // [esp+48h] [ebp-148h]
  float v38; // [esp+48h] [ebp-148h]
  float v39; // [esp+48h] [ebp-148h]
  float v40; // [esp+4Ch] [ebp-144h]
  float v41; // [esp+4Ch] [ebp-144h]
  float v42; // [esp+4Ch] [ebp-144h]
  float v43; // [esp+4Ch] [ebp-144h]
  float v44; // [esp+50h] [ebp-140h]
  float v45; // [esp+50h] [ebp-140h]
  float v46; // [esp+50h] [ebp-140h]
  float v47; // [esp+50h] [ebp-140h]
  double v48; // [esp+54h] [ebp-13Ch] BYREF
  float v49; // [esp+5Ch] [ebp-134h]
  float v50; // [esp+60h] [ebp-130h]
  float v51; // [esp+64h] [ebp-12Ch]
  float v52; // [esp+68h] [ebp-128h]
  float v53; // [esp+6Ch] [ebp-124h]
  double v54; // [esp+70h] [ebp-120h]
  float v55; // [esp+78h] [ebp-118h]
  double v56; // [esp+7Ch] [ebp-114h]
  float v57; // [esp+84h] [ebp-10Ch]
  float v58; // [esp+88h] [ebp-108h]
  float v59; // [esp+8Ch] [ebp-104h]
  float v60; // [esp+90h] [ebp-100h]
  float v61; // [esp+94h] [ebp-FCh]
  float v62; // [esp+98h] [ebp-F8h]
  float v63; // [esp+9Ch] [ebp-F4h]
  double v64; // [esp+A0h] [ebp-F0h] BYREF
  float v65; // [esp+A8h] [ebp-E8h]
  int v66[3]; // [esp+ACh] [ebp-E4h] BYREF
  _DWORD v67[24]; // [esp+B8h] [ebp-D8h] BYREF
  double v68; // [esp+118h] [ebp-78h]
  unsigned int v69; // [esp+120h] [ebp-70h]
  unsigned int v70; // [esp+124h] [ebp-6Ch] BYREF
  float v71; // [esp+128h] [ebp-68h]
  unsigned int v72; // [esp+130h] [ebp-60h]
  unsigned int v73; // [esp+134h] [ebp-5Ch]
  float v74; // [esp+138h] [ebp-58h]
  float v75; // [esp+140h] [ebp-50h]
  float v76; // [esp+144h] [ebp-4Ch]
  int v77; // [esp+148h] [ebp-48h]
  float v78[12]; // [esp+160h] [ebp-30h] BYREF

  v18 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, bool, int, int, int))(*(_DWORD *)v18 + 432))(
    v18,
    27,
    LODWORD(a11) != 0,
    a3,
    a4,
    a2);
  if ( a11 != 0.0 )
  {
    v19 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, float))(*(_DWORD *)v19 + 432))(
      v19,
      19,
      COERCE_FLOAT(LODWORD(a11)));
    v20 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v20 + 432))(v20, 20, a17);
  }
  if ( a15 )
  {
    Texture::Set(a15, 0);
  }
  else
  {
    v21 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v21 + 484))(v21, 0);
  }
  v22 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, unsigned int *))(*(_DWORD *)v22 + 468))(v22, &v70);
  v64 = COERCE_DOUBLE(__PAIR64__(v72, v69));
  v65 = v75;
  sub_1004C240((float *)&v64);
  *(float *)&v56 = *(float *)&v70;
  v48 = COERCE_DOUBLE(__PAIR64__(v73, v70));
  *((float *)&v56 + 1) = *(float *)&v73;
  v57 = v76;
  v49 = v76;
  sub_1004C240((float *)&v48);
  *(float *)&v56 = v71;
  *(float *)v66 = v71;
  *((float *)&v56 + 1) = v74;
  *(float *)&v66[1] = v74;
  v57 = *(float *)&v77;
  v66[2] = v77;
  sub_1004C240((float *)v66);
  v36 = *(float *)&v48 * a11;
  v40 = *((float *)&v48 + 1) * a11;
  v44 = v49 * a11;
  v58 = *(float *)&v64 * a11;
  v59 = *((float *)&v64 + 1) * a11;
  v60 = a11 * v65;
  v23 = *a9;
  v24 = v58;
  v63 = v23 - v58;
  v51 = v63;
  v56 = a9[1];
  v68 = v59;
  v62 = v56 - v59;
  v52 = v62;
  v48 = a9[2];
  v67[3] = a13;
  v67[9] = a13;
  v64 = v60;
  v61 = v48 - v60;
  v25 = v36;
  v58 = v63 - v36;
  v26 = v40;
  *(float *)v67 = v58;
  v59 = v62 - v40;
  v27 = v44;
  *(float *)&v67[1] = v59;
  v60 = v61 - v44;
  *(float *)&v67[2] = v60;
  *(float *)&v67[4] = 0.0;
  *(float *)&v67[5] = 1.0;
  v50 = v23 + v24;
  v28 = v50;
  v51 = v50;
  v50 = v68 + v56;
  v29 = v50;
  v52 = v50;
  v50 = v64 + v48;
  v37 = v51 - v36;
  *(float *)&v67[6] = v37;
  v41 = v52 - v40;
  *(float *)&v67[7] = v41;
  v45 = v50 - v44;
  *(float *)&v67[8] = v45;
  *(float *)&v67[10] = 1.0;
  *(float *)&v67[11] = 1.0;
  v67[15] = a13;
  v67[21] = a13;
  v38 = v63 + v25;
  *(float *)&v67[12] = v38;
  v42 = v62 + v26;
  *(float *)&v67[13] = v42;
  v46 = v61 + v27;
  *(float *)&v67[14] = v46;
  *(float *)&v67[17] = 0.0;
  v51 = v28;
  *(float *)&v67[16] = 0.0;
  v52 = v29;
  v53 = v50;
  v39 = v25 + v51;
  *(float *)&v67[18] = v39;
  v43 = v26 + v52;
  *(float *)&v67[19] = v43;
  v47 = v27 + v50;
  *(float *)&v67[20] = v47;
  *((float *)&v54 + 1) = 1.0;
  *(float *)&v67[22] = 1.0;
  v55 = 0.0;
  *(float *)&v67[23] = 0.0;
  sub_10067BD0(v78, a12, a10, (float *)v66);
  v30 = (float *)v67;
  v31 = 4;
  do
  {
    *(float *)&v48 = 0.0;
    *((float *)&v48 + 1) = 0.0;
    v49 = 0.0;
    sub_10179050(v30, &v48);
    v32 = HIDWORD(v48);
    v33 = v49;
    *v30 = *(float *)&v48;
    *((_DWORD *)v30 + 1) = v32;
    v30[2] = v33;
    v30 += 6;
    --v31;
  }
  while ( v31 );
  return (*(int (__thiscall **)(int, int, _DWORD *, int, int))(*(_DWORD *)a1 + 112))(a1, 4, v67, 24, 1);
}
