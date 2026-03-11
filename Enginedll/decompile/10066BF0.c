/*
 * func-name: ?CubeWireframe@Canvas@@UAEXAAVBBox@@AAVMatrix@@K@Z
 * func-address: 0x10066bf0
 * callers: none
 * callees: 0x1001cb70, 0x101189f0
 */

void __thiscall Canvas::CubeWireframe(Canvas *this, struct BBox *a2, struct Matrix *a3, unsigned int a4)
{
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  float v14; // eax
  float v15; // ecx
  float v16; // edx
  double v17; // st7
  double v18; // st7
  double v19; // st7
  double v20; // st7
  float v21; // eax
  float v22; // ecx
  double v23; // st7
  float v24; // edx
  double v25; // st7
  float v26; // ecx
  float v27; // edx
  float v28; // eax
  int v29; // eax
  float v30; // ecx
  float v31; // edx
  double v32; // st7
  float v33; // eax
  double v34; // st7
  double v35; // st7
  double v36; // st7
  float v37; // ecx
  float v38; // eax
  double v39; // st7
  float v40; // edx
  double v41; // st7
  float v42; // edx
  float v43; // eax
  float v44; // ecx
  void (__thiscall *v45)(Canvas *, int, float *, int, int); // edx
  double v46; // st7
  float v47; // ecx
  double v48; // st7
  double v49; // st7
  double v50; // st7
  void (__thiscall *v51)(Canvas *, int, float *, int, int); // edx
  double v52; // st7
  double v53; // st7
  double v54; // st7
  double v55; // st7
  void (__thiscall *v56)(Canvas *, int, float *, int, int); // edx
  double v57; // st7
  float v58; // ecx
  double v59; // st7
  double v60; // st7
  double v61; // st7
  void (__thiscall *v62)(Canvas *, int, float *, int, int); // edx
  double v63; // st7
  double v64; // st7
  double v65; // st7
  void (__thiscall *v66)(Canvas *, int, float *, int, int); // edx
  float v67; // [esp+98h] [ebp-1C8h]
  float v68; // [esp+98h] [ebp-1C8h]
  float v69; // [esp+98h] [ebp-1C8h]
  float v70; // [esp+98h] [ebp-1C8h]
  float v71; // [esp+98h] [ebp-1C8h]
  float v72; // [esp+98h] [ebp-1C8h]
  float v73; // [esp+98h] [ebp-1C8h]
  float v74; // [esp+98h] [ebp-1C8h]
  float v75; // [esp+98h] [ebp-1C8h]
  float v76; // [esp+98h] [ebp-1C8h]
  float v77; // [esp+9Ch] [ebp-1C4h]
  float v78; // [esp+9Ch] [ebp-1C4h]
  float v79; // [esp+9Ch] [ebp-1C4h]
  float v80; // [esp+9Ch] [ebp-1C4h]
  float v81; // [esp+9Ch] [ebp-1C4h]
  float v82; // [esp+9Ch] [ebp-1C4h]
  float v83; // [esp+9Ch] [ebp-1C4h]
  float v84; // [esp+9Ch] [ebp-1C4h]
  float v85; // [esp+9Ch] [ebp-1C4h]
  float v86; // [esp+9Ch] [ebp-1C4h]
  float v87; // [esp+9Ch] [ebp-1C4h]
  float v88; // [esp+9Ch] [ebp-1C4h]
  float v89; // [esp+9Ch] [ebp-1C4h]
  float v90; // [esp+A0h] [ebp-1C0h]
  float v91; // [esp+A0h] [ebp-1C0h]
  float v92; // [esp+A0h] [ebp-1C0h]
  float v93; // [esp+A0h] [ebp-1C0h]
  float v94; // [esp+A0h] [ebp-1C0h]
  float v95; // [esp+A0h] [ebp-1C0h]
  float v96; // [esp+A0h] [ebp-1C0h]
  float v97; // [esp+A0h] [ebp-1C0h]
  float v98; // [esp+A0h] [ebp-1C0h]
  float v99; // [esp+A0h] [ebp-1C0h]
  float v100; // [esp+A0h] [ebp-1C0h]
  float v101; // [esp+A0h] [ebp-1C0h]
  float v102; // [esp+A0h] [ebp-1C0h]
  int v103; // [esp+A8h] [ebp-1B8h]
  int v104; // [esp+ACh] [ebp-1B4h]
  float v105; // [esp+B0h] [ebp-1B0h] BYREF
  float v106; // [esp+B4h] [ebp-1ACh]
  float v107; // [esp+B8h] [ebp-1A8h]
  unsigned int v108; // [esp+BCh] [ebp-1A4h]
  int v109; // [esp+C0h] [ebp-1A0h]
  int v110; // [esp+C4h] [ebp-19Ch]
  float v111; // [esp+C8h] [ebp-198h]
  float v112; // [esp+CCh] [ebp-194h]
  float v113; // [esp+D0h] [ebp-190h]
  unsigned int v114; // [esp+D4h] [ebp-18Ch]
  int v115; // [esp+D8h] [ebp-188h]
  int v116; // [esp+DCh] [ebp-184h]
  float v117; // [esp+E0h] [ebp-180h]
  float v118; // [esp+E4h] [ebp-17Ch]
  float v119; // [esp+E8h] [ebp-178h]
  unsigned int v120; // [esp+ECh] [ebp-174h]
  int v121; // [esp+F0h] [ebp-170h]
  int v122; // [esp+F4h] [ebp-16Ch]
  float v123; // [esp+F8h] [ebp-168h]
  float v124; // [esp+FCh] [ebp-164h]
  float v125; // [esp+100h] [ebp-160h]
  unsigned int v126; // [esp+104h] [ebp-15Ch]
  int v127; // [esp+108h] [ebp-158h]
  int v128; // [esp+10Ch] [ebp-154h]
  float v129; // [esp+110h] [ebp-150h]
  float v130; // [esp+114h] [ebp-14Ch]
  float v131; // [esp+118h] [ebp-148h]
  unsigned int v132; // [esp+11Ch] [ebp-144h]
  int v133; // [esp+120h] [ebp-140h]
  int v134; // [esp+124h] [ebp-13Ch]
  float v135; // [esp+128h] [ebp-138h]
  float v136; // [esp+12Ch] [ebp-134h]
  float v137; // [esp+130h] [ebp-130h]
  float v138; // [esp+140h] [ebp-120h]
  float v139; // [esp+144h] [ebp-11Ch]
  float v140; // [esp+148h] [ebp-118h]
  float v141; // [esp+158h] [ebp-108h]
  float v142; // [esp+15Ch] [ebp-104h]
  float v143[4]; // [esp+160h] [ebp-100h]
  float v144; // [esp+170h] [ebp-F0h]
  float v145; // [esp+174h] [ebp-ECh]
  float v146; // [esp+178h] [ebp-E8h]
  float v147; // [esp+188h] [ebp-D8h]
  float v148; // [esp+18Ch] [ebp-D4h]
  float v149; // [esp+190h] [ebp-D0h]
  _BYTE v150[64]; // [esp+1A0h] [ebp-C0h] BYREF
  int v151[16]; // [esp+1E0h] [ebp-80h] BYREF
  float v152[16]; // [esp+220h] [ebp-40h] BYREF

  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v5 + 484))(v5, 0);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 26, 1);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 27, 1);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 176, 1);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v9 + 440))(v9, 0, 1, 2);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v10 + 440))(v10, 0, 2, 0);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v11 + 440))(v11, 0, 4, 1);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v12 + 468))(v12, v150);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int *))(*(_DWORD *)v13 + 480))(v13, v151);
  sub_1001CB70(v150, v152, (int)v151);
  v135 = 0.0;
  v136 = 0.0;
  v137 = 0.0;
  v138 = 0.0;
  v139 = 0.0;
  v140 = 0.0;
  v14 = *((float *)a2 + 4);
  v141 = 0.0;
  v142 = 0.0;
  v15 = *((float *)a2 + 5);
  v143[0] = 0.0;
  v16 = *((float *)a2 + 6);
  v144 = 0.0;
  v145 = 0.0;
  v105 = v14;
  v146 = 0.0;
  v147 = 0.0;
  v110 = v104;
  v148 = 0.0;
  v107 = v16;
  v149 = 0.0;
  v17 = *((float *)a2 + 7);
  v106 = v15;
  v67 = v17;
  v18 = *((float *)a2 + 5);
  v109 = v103;
  v77 = v18;
  v19 = *((float *)a2 + 6);
  v111 = v67;
  v90 = v19;
  v20 = *((float *)a2 + 7);
  v112 = v77;
  v68 = v20;
  v21 = v68;
  v78 = *((float *)a2 + 5);
  v113 = v90;
  v91 = *((float *)a2 + 9);
  v115 = v103;
  v22 = v78;
  v69 = *((float *)a2 + 4);
  v116 = v104;
  v23 = *((float *)a2 + 5);
  v24 = v91;
  v117 = v21;
  v79 = v23;
  v25 = *((float *)a2 + 9);
  v118 = v22;
  v92 = v25;
  v119 = v24;
  v121 = v103;
  v122 = v104;
  v123 = v69;
  v125 = v92;
  v124 = v79;
  v26 = *((float *)a2 + 5);
  v127 = v103;
  v27 = *((float *)a2 + 6);
  v128 = v104;
  v28 = *((float *)a2 + 4);
  v108 = a4;
  v114 = a4;
  v120 = a4;
  v126 = a4;
  v129 = v28;
  v130 = v26;
  v131 = v27;
  v132 = a4;
  v29 = *(_DWORD *)this;
  v133 = v103;
  v134 = v104;
  (*(void (__thiscall **)(Canvas *, int, float *, int, int))(v29 + 84))(this, 5, &v105, 24, 1);
  v70 = *((float *)a2 + 4);
  v30 = *((float *)a2 + 8);
  v31 = *((float *)a2 + 9);
  v105 = *((float *)a2 + 7);
  v32 = *((float *)a2 + 4);
  v106 = v30;
  v109 = v103;
  v33 = v70;
  v71 = v32;
  v34 = *((float *)a2 + 8);
  v110 = v104;
  v80 = v34;
  v35 = *((float *)a2 + 6);
  v107 = v31;
  v93 = v35;
  v36 = *((float *)a2 + 7);
  v111 = v33;
  v112 = v30;
  v37 = v80;
  v113 = v31;
  v116 = v104;
  v38 = v71;
  v72 = v36;
  v39 = *((float *)a2 + 8);
  v115 = v103;
  v40 = v93;
  v81 = v39;
  v41 = *((float *)a2 + 6);
  v118 = v37;
  v94 = v41;
  v117 = v38;
  v119 = v40;
  v121 = v103;
  v122 = v104;
  v123 = v72;
  v124 = v81;
  v125 = v94;
  v42 = *((float *)a2 + 9);
  v127 = v103;
  v43 = *((float *)a2 + 7);
  v128 = v104;
  v44 = *((float *)a2 + 8);
  v108 = a4;
  v114 = a4;
  v120 = a4;
  v126 = a4;
  v129 = v43;
  v130 = v44;
  v131 = v42;
  v134 = v104;
  v133 = v103;
  v45 = *(void (__thiscall **)(Canvas *, int, float *, int, int))(*(_DWORD *)this + 84);
  v132 = a4;
  v45(this, 5, &v105, 24, 1);
  v46 = *((float *)a2 + 5);
  v105 = *((float *)a2 + 4);
  v82 = v46;
  v47 = v82;
  v95 = *((float *)a2 + 6);
  v48 = *((float *)a2 + 4);
  v109 = v103;
  v73 = v48;
  v49 = *((float *)a2 + 8);
  v107 = v95;
  v83 = v49;
  v106 = v47;
  v50 = *((float *)a2 + 6);
  v111 = v73;
  v96 = v50;
  v113 = v96;
  v110 = v104;
  v116 = v104;
  v115 = v103;
  v51 = *(void (__thiscall **)(Canvas *, int, float *, int, int))(*(_DWORD *)this + 84);
  v112 = v83;
  v108 = a4;
  v114 = a4;
  v51(this, 2, &v105, 24, 1);
  v52 = *((float *)a2 + 5);
  v105 = *((float *)a2 + 7);
  v84 = v52;
  v97 = *((float *)a2 + 6);
  v53 = *((float *)a2 + 7);
  v106 = v84;
  v74 = v53;
  v54 = *((float *)a2 + 8);
  v109 = v103;
  v85 = v54;
  v55 = *((float *)a2 + 6);
  v107 = v97;
  v98 = v55;
  v108 = a4;
  v110 = v104;
  v111 = v74;
  v113 = v98;
  v116 = v104;
  v115 = v103;
  v56 = *(void (__thiscall **)(Canvas *, int, float *, int, int))(*(_DWORD *)this + 84);
  v112 = v85;
  v114 = a4;
  v56(this, 2, &v105, 24, 1);
  v57 = *((float *)a2 + 5);
  v105 = *((float *)a2 + 4);
  v86 = v57;
  v58 = v86;
  v99 = *((float *)a2 + 9);
  v59 = *((float *)a2 + 4);
  v109 = v103;
  v75 = v59;
  v60 = *((float *)a2 + 8);
  v107 = v99;
  v87 = v60;
  v106 = v58;
  v61 = *((float *)a2 + 9);
  v111 = v75;
  v100 = v61;
  v113 = v100;
  v110 = v104;
  v116 = v104;
  v115 = v103;
  v62 = *(void (__thiscall **)(Canvas *, int, float *, int, int))(*(_DWORD *)this + 84);
  v112 = v87;
  v108 = a4;
  v114 = a4;
  v62(this, 2, &v105, 24, 1);
  v63 = *((float *)a2 + 5);
  v105 = *((float *)a2 + 7);
  v88 = v63;
  v101 = *((float *)a2 + 9);
  v64 = *((float *)a2 + 7);
  v106 = v88;
  v76 = v64;
  v107 = v101;
  v108 = a4;
  v109 = v103;
  v110 = v104;
  v89 = *((float *)a2 + 8);
  v65 = *((float *)a2 + 9);
  v111 = v76;
  v102 = v65;
  v113 = v102;
  v116 = v104;
  v115 = v103;
  v66 = *(void (__thiscall **)(Canvas *, int, float *, int, int))(*(_DWORD *)this + 84);
  v112 = v89;
  v114 = a4;
  v66(this, 2, &v105, 24, 1);
}
