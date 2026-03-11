/*
 * func-name: sub_10005510
 * func-address: 0x10005510
 * callers: 0x10005d90
 * callees: 0x10004820, 0x10005170, 0x10006c80, 0x10006cd0, 0x1000a770, 0x1000a846
 */

char __thiscall sub_10005510(
        int this,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        unsigned int a7,
        int a8,
        int a9,
        double *a10,
        float *a11,
        int a12,
        _DWORD *a13,
        int a14,
        float a15,
        int a16,
        char a17)
{
  float *v17; // esi
  char result; // al
  double v20; // st7
  double v21; // st6
  double v22; // st5
  double v23; // st6
  double v24; // st4
  double v25; // st5
  double v26; // rt2
  double v27; // st4
  double v28; // st6
  double v29; // rtt
  double v30; // st4
  double v31; // rt1
  void (__thiscall *v32)(double *, int, double *, double *, int *); // edx
  int v33; // eax
  int v34; // edx
  double v35; // st7
  float *v36; // eax
  int v37; // ecx
  double v38; // st7
  bool v39; // zf
  double v40; // st6
  double v41; // st5
  double v42; // st4
  float v43; // [esp+20h] [ebp-16Ch]
  float v44; // [esp+20h] [ebp-16Ch]
  float v45; // [esp+20h] [ebp-16Ch]
  float v46; // [esp+20h] [ebp-16Ch]
  float v47; // [esp+20h] [ebp-16Ch]
  float v48; // [esp+20h] [ebp-16Ch]
  float v49; // [esp+20h] [ebp-16Ch]
  float v50; // [esp+20h] [ebp-16Ch]
  float v51; // [esp+20h] [ebp-16Ch]
  float v52; // [esp+20h] [ebp-16Ch]
  float v53; // [esp+20h] [ebp-16Ch]
  float v54; // [esp+20h] [ebp-16Ch]
  float v55; // [esp+20h] [ebp-16Ch]
  float v56; // [esp+20h] [ebp-16Ch]
  float v57; // [esp+20h] [ebp-16Ch]
  float v58; // [esp+20h] [ebp-16Ch]
  char v59; // [esp+27h] [ebp-165h]
  int v60; // [esp+28h] [ebp-164h] BYREF
  float v61; // [esp+2Ch] [ebp-160h]
  float v62; // [esp+30h] [ebp-15Ch]
  double v63; // [esp+34h] [ebp-158h]
  int v64; // [esp+40h] [ebp-14Ch]
  double v65; // [esp+44h] [ebp-148h] BYREF
  double v66; // [esp+4Ch] [ebp-140h]
  double v67; // [esp+54h] [ebp-138h]
  double v68; // [esp+5Ch] [ebp-130h]
  float v69; // [esp+64h] [ebp-128h]
  float v70; // [esp+68h] [ebp-124h]
  long double v71; // [esp+6Ch] [ebp-120h]
  double v72; // [esp+74h] [ebp-118h]
  float v73; // [esp+7Ch] [ebp-110h]
  float v74; // [esp+80h] [ebp-10Ch]
  double v75; // [esp+84h] [ebp-108h]
  double v76; // [esp+8Ch] [ebp-100h]
  float v77; // [esp+94h] [ebp-F8h]
  float v78; // [esp+98h] [ebp-F4h]
  float v79; // [esp+9Ch] [ebp-F0h]
  float v80; // [esp+A0h] [ebp-ECh]
  float v81; // [esp+A4h] [ebp-E8h]
  float v82; // [esp+A8h] [ebp-E4h]
  double v83; // [esp+ACh] [ebp-E0h]
  double v84; // [esp+B4h] [ebp-D8h]
  double v85; // [esp+BCh] [ebp-D0h]
  float v86; // [esp+C8h] [ebp-C4h]
  float v87; // [esp+CCh] [ebp-C0h]
  float v88; // [esp+D0h] [ebp-BCh]
  float v89; // [esp+D4h] [ebp-B8h]
  float v90; // [esp+D8h] [ebp-B4h]
  float v91; // [esp+DCh] [ebp-B0h]
  float v92; // [esp+E0h] [ebp-ACh]
  float v93; // [esp+E4h] [ebp-A8h]
  float v94; // [esp+E8h] [ebp-A4h]
  double v95; // [esp+ECh] [ebp-A0h]
  double v96; // [esp+F4h] [ebp-98h]
  float v97; // [esp+100h] [ebp-8Ch]
  float v98; // [esp+104h] [ebp-88h]
  float v99; // [esp+108h] [ebp-84h]
  float v100; // [esp+10Ch] [ebp-80h]
  float v101; // [esp+110h] [ebp-7Ch]
  float v102; // [esp+114h] [ebp-78h]
  float v103; // [esp+118h] [ebp-74h]
  float v104; // [esp+11Ch] [ebp-70h]
  float v105; // [esp+120h] [ebp-6Ch]
  double v106; // [esp+124h] [ebp-68h]
  double v107[3]; // [esp+12Ch] [ebp-60h] BYREF
  float v108; // [esp+144h] [ebp-48h]
  float v109; // [esp+148h] [ebp-44h]
  float v110; // [esp+14Ch] [ebp-40h]
  float v111; // [esp+150h] [ebp-3Ch]
  int v112; // [esp+154h] [ebp-38h]
  _DWORD *v113; // [esp+158h] [ebp-34h]
  double v114[6]; // [esp+15Ch] [ebp-30h] BYREF

  v17 = a11;
  if ( 0.0 == *a11 && 0.0 == a11[1] && 0.0 == a11[2] )
    return 0;
  *(_BYTE *)(this + 219) = 0;
  v20 = a10[1];
  v65 = v20;
  v59 = 0;
  v21 = a10[2];
  v64 = 0;
  v66 = v21;
  v67 = a10[3];
  v22 = a10[2];
  v23 = a10[3];
  v83 = a10[1] + *a11;
  v24 = v22 + a11[1];
  v25 = v83;
  v84 = v24;
  v26 = v24;
  v27 = v23 + a11[2];
  v28 = v26;
  v85 = v27;
  if ( a12 )
  {
    v106 = a15;
    while ( 1 )
    {
      --a12;
      ++dword_10022764;
      *(float *)&v60 = v25 - v20;
      v32 = *(void (__thiscall **)(double *, int, double *, double *, int *))(*(_DWORD *)a10 + 4);
      v61 = v28 - v66;
      v62 = v27 - v67;
      v32(a10, this, v114, &v65, &v60);
      sub_10005170((double *)this, a2, (int)a10, a4, a5, a6, a7, a8, a9, a14, v114, a16);
      v76 = v61;
      v71 = *(float *)&v60;
      v75 = v62;
      *(float *)&v63 = v61 * v61 + *(float *)&v60 * *(float *)&v60 + v62 * v62;
      *(float *)&v63 = sqrt(*(float *)&v63);
      if ( v106 > *(float *)&v63 )
        break;
      v43 = 1.0 / *(float *)&v63;
      *(float *)&v60 = v71 * v43;
      v61 = v76 * v43;
      v62 = v43 * v75;
      v44 = v17[1] * v61 + *(float *)&v60 * *v17 + v17[2] * v62;
      if ( v44 <= 0.0 )
        break;
      v111 = *(float *)&v63 + *(float *)(this + 192);
      v59 = 1;
      if ( !sub_10004820(this + 52, (int)v107, this, (int)a10, &v65, (int)&v60) )
      {
        v20 = v83;
        v66 = v84;
        v67 = v85;
        goto LABEL_38;
      }
      if ( !v113 )
        _wassert(L"C.mGeom", L"..\\src\\CharacterController.cpp", 0x375u);
      if ( *v113 < 2u )
      {
        if ( *(_BYTE *)(this + 220) )
          sub_10006C80(a3, v107);
        if ( a17 && !v64 )
          a12 += 9;
      }
      else
      {
        v33 = v112;
        if ( v112 != -1 )
        {
          v34 = *(_DWORD *)(this + 4);
          *(_BYTE *)(this + 219) = 1;
          v35 = *(float *)(v34 + 36 * v33);
          v36 = (float *)(v34 + 36 * v33);
          *(float *)(this + 152) = v35;
          *(float *)(this + 156) = v36[1];
          *(float *)(this + 160) = v36[2];
          *(float *)(this + 164) = v36[3];
          *(float *)(this + 168) = v36[4];
          *(float *)(this + 172) = v36[5];
          *(float *)(this + 176) = v36[6];
          *(float *)(this + 180) = v36[7];
          *(float *)(this + 184) = v36[8];
        }
        if ( *(_BYTE *)(this + 220) )
          sub_10006CD0(a3, (int)v107, (int)&v60, *(float *)&v63);
      }
      v37 = *(_DWORD *)(this + 208);
      v38 = v107[v37];
      ++v64;
      *(float *)(this + 204) = v38;
      v45 = *(float *)(this + 192);
      if ( v45 < (double)v111 )
      {
        v46 = v111 - v45;
        v103 = *(float *)&v60 * v46;
        v104 = v61 * v46;
        v105 = v46 * v62;
        v65 = v103 + v65;
        v66 = v104 + v66;
        v67 = v105 + v67;
      }
      v39 = *(_BYTE *)(this + 217) == 0;
      *((float *)&v68 + 1) = v108;
      v69 = v109;
      v70 = v110;
      if ( !v39 )
      {
        *((float *)&v68 + v37 + 1) = 0.0;
        v76 = *((float *)&v68 + 1);
        v63 = v69;
        v71 = v70;
        v47 = *((float *)&v68 + 1) * *((float *)&v68 + 1) + v69 * v69 + v70 * v70;
        v48 = sqrt(v47);
        if ( v48 != 0.0 )
        {
          v49 = 1.0 / v48;
          *((float *)&v68 + 1) = v76 * v49;
          v69 = v63 * v49;
          v70 = v49 * v71;
        }
      }
      v63 = v69;
      v76 = *((float *)&v68 + 1);
      v71 = v70;
      v50 = *((float *)&v68 + 1) * *(float *)&v60 + v69 * v61 + v70 * v62;
      v86 = *((float *)&v68 + 1) * 2.0;
      v87 = v69 * 2.0;
      v88 = 2.0 * v70;
      v100 = v86 * v50;
      v101 = v87 * v50;
      v102 = v50 * v88;
      v97 = *(float *)&v60 - v100;
      v98 = v61 - v101;
      v99 = v62 - v102;
      *((float *)&v72 + 1) = v97;
      v73 = v98;
      v74 = v99;
      v75 = v97;
      v96 = v98;
      v95 = v99;
      v51 = v99 * v99 + v97 * v97 + v98 * v98;
      v52 = sqrt(v51);
      if ( v52 != 0.0 )
      {
        v53 = 1.0 / v52;
        *((float *)&v72 + 1) = v75 * v53;
        v73 = v96 * v53;
        v74 = v53 * v95;
      }
      v54 = v74 * v71 + *((float *)&v72 + 1) * v76 + v73 * v63;
      v89 = v76 * v54;
      v90 = v63 * v54;
      v91 = v54 * v71;
      v80 = *((float *)&v72 + 1) - v89;
      v81 = v73 - v90;
      v82 = v74 - v91;
      v77 = v80;
      v78 = v81;
      v79 = v82;
      v71 = sqrt((v83 - v65) * (v83 - v65) + (v84 - v66) * (v84 - v66) + (v85 - v67) * (v85 - v67));
      v39 = *(_BYTE *)(this + 221) == 0;
      v20 = v65;
      v83 = v65;
      v84 = v66;
      v85 = v67;
      if ( !v39 )
      {
        v95 = v80;
        v96 = v81;
        v75 = v82;
        v55 = v80 * v80 + v81 * v81 + v82 * v82;
        v56 = sqrt(v55);
        if ( v56 != 0.0 )
        {
          v57 = 1.0 / v56;
          v77 = v95 * v57;
          v78 = v96 * v57;
          v79 = v57 * v75;
        }
        v20 = v65;
      }
      v58 = v71;
      v92 = v77 * v58;
      v93 = v78 * v58;
      v94 = v58 * v79;
      v40 = v92 + v20;
      v83 = v40;
      v41 = v93 + v84;
      v84 = v41;
      v42 = v94 + v85;
      v85 = v42;
      if ( !a12 )
        goto LABEL_38;
      v17 = a11;
      v29 = v42;
      v30 = v40;
      v28 = v41;
      v31 = v30;
      v27 = v29;
      v25 = v31;
    }
    v20 = v65;
  }
LABEL_38:
  if ( a13 )
    *a13 = v64;
  result = v59;
  a10[1] = v20;
  a10[2] = v66;
  a10[3] = v67;
  return result;
}
