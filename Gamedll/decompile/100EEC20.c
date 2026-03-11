/*
 * func-name: sub_100EEC20
 * func-address: 0x100eec20
 * callers: 0x10014821
 * callees: 0x100029cd, 0x10002b53, 0x10003f58, 0x10005f33, 0x1000a097, 0x1000eafc, 0x100195e7, 0x102c9d62, 0x102c9fe0
 */

int __thiscall sub_100EEC20(int this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  bool v16; // zf
  int v17; // ebx
  int v18; // eax
  CameraHandler *v19; // eax
  struct Camera *Camera; // eax
  float v21; // ecx
  float v22; // edx
  int v23; // ecx
  float v24; // edx
  float v25; // edx
  int v26; // eax
  int v27; // eax
  int v28; // eax
  double v29; // st6
  int *v30; // eax
  int v31; // ebx
  int v32; // eax
  int v33; // ecx
  int v34; // edx
  int v35; // ebx
  int v36; // eax
  int *v37; // eax
  int v38; // ebx
  int v39; // eax
  double v40; // st7
  double v41; // st5
  double v42; // st7
  int v43; // eax
  int v44; // eax
  int v45; // ebx
  int v46; // eax
  _DWORD *v47; // ebx
  int v48; // eax
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // eax
  double v56; // st6
  float v57; // eax
  int v58; // ebx
  int v59; // eax
  double v60; // st6
  float v61; // eax
  int v62; // ebx
  int v63; // ebx
  double v64; // st7
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // eax
  int v69; // ebx
  int v70; // ecx
  int v71; // edx
  int v72; // edi
  int v73; // eax
  int v74; // eax
  int v76; // [esp+118h] [ebp-E8h]
  int v77; // [esp+11Ch] [ebp-E4h]
  int v78; // [esp+11Ch] [ebp-E4h]
  int v79; // [esp+11Ch] [ebp-E4h]
  int v80; // [esp+11Ch] [ebp-E4h]
  int v81; // [esp+11Ch] [ebp-E4h]
  int v82; // [esp+11Ch] [ebp-E4h]
  int v83[6]; // [esp+120h] [ebp-E0h]
  int v84; // [esp+124h] [ebp-DCh]
  int v85; // [esp+124h] [ebp-DCh]
  _DWORD *v86; // [esp+13Ch] [ebp-C4h]
  float v87; // [esp+13Ch] [ebp-C4h]
  float v88; // [esp+13Ch] [ebp-C4h]
  float v89; // [esp+13Ch] [ebp-C4h]
  int *v90; // [esp+13Ch] [ebp-C4h]
  void (__cdecl **v91)(_DWORD, _DWORD, int, int, int, int, int, int); // [esp+13Ch] [ebp-C4h]
  int v92; // [esp+13Ch] [ebp-C4h]
  void (__cdecl **v93)(_DWORD, _DWORD, int, int, int, int, int, int); // [esp+13Ch] [ebp-C4h]
  void (__cdecl **v94)(_DWORD, _DWORD, int, int, int, int, int, int); // [esp+13Ch] [ebp-C4h]
  float v95; // [esp+13Ch] [ebp-C4h]
  int v96; // [esp+13Ch] [ebp-C4h]
  float v97; // [esp+13Ch] [ebp-C4h]
  float v98; // [esp+13Ch] [ebp-C4h]
  float v99; // [esp+13Ch] [ebp-C4h]
  float v100; // [esp+13Ch] [ebp-C4h]
  __int64 v101; // [esp+140h] [ebp-C0h] BYREF
  float v102; // [esp+148h] [ebp-B8h]
  float v103; // [esp+14Ch] [ebp-B4h]
  float v104; // [esp+150h] [ebp-B0h]
  float v105; // [esp+154h] [ebp-ACh]
  int v106; // [esp+158h] [ebp-A8h]
  int v107; // [esp+15Ch] [ebp-A4h]
  int v108; // [esp+160h] [ebp-A0h]
  float v109; // [esp+164h] [ebp-9Ch]
  float i; // [esp+168h] [ebp-98h]
  int v111; // [esp+16Ch] [ebp-94h]
  float v112; // [esp+170h] [ebp-90h]
  int v113; // [esp+174h] [ebp-8Ch]
  float v114; // [esp+178h] [ebp-88h]
  int v115; // [esp+17Ch] [ebp-84h]
  int v116; // [esp+180h] [ebp-80h]
  int v117; // [esp+184h] [ebp-7Ch]
  _DWORD v118[4]; // [esp+188h] [ebp-78h] BYREF
  float v119; // [esp+198h] [ebp-68h]
  float v120; // [esp+19Ch] [ebp-64h]
  float v121[3]; // [esp+1A0h] [ebp-60h] BYREF
  _BYTE v122[28]; // [esp+1ACh] [ebp-54h] BYREF
  char v123[28]; // [esp+1C8h] [ebp-38h] BYREF
  char Buffer[4]; // [esp+1E4h] [ebp-1Ch] BYREF
  float v125; // [esp+1E8h] [ebp-18h]
  float v126; // [esp+1ECh] [ebp-14h]
  int v127; // [esp+1FCh] [ebp-4h]

  v117 = a2;
  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v3 + 432))(v3, 28, 0);
  v115 = (int)*(float *)(RenderDevice::Instance() + 1624);
  v4 = (int)*(float *)(RenderDevice::Instance() + 1620);
  v119 = 0.0;
  v116 = v4;
  v120 = 0.050000001;
  v118[0] = 0;
  v118[1] = 0;
  v118[3] = *(_DWORD *)(Canvas::Instance() + 68);
  v118[2] = *(_DWORD *)(Canvas::Instance() + 64);
  v5 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v5 + 1708) + 188))(*(_DWORD *)(v5 + 1708), v118);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v6 + 448))(v6, 0, 7, 0);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v7 + 448))(v7, 0, 5, 2);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v8 + 448))(v8, 0, 6, 2);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v9 + 440))(v9, 0, 1, 4);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v10 + 440))(v10, 0, 2, 2);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v11 + 440))(v11, 0, 3, 0);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v12 + 440))(v12, 0, 4, 4);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v13 + 440))(v13, 0, 5, 2);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v14 + 440))(v14, 0, 6, 0);
  v107 = (int)((double)*(int *)(Canvas::Instance() + 64) * 0.5);
  v15 = (int)((double)*(int *)(Canvas::Instance() + 68) * 0.5);
  v16 = *(_BYTE *)(this + 4) == 0;
  v17 = v15;
  v108 = v15;
  if ( v16 )
    goto LABEL_48;
  v16 = *(_BYTE *)(this + 5) == 0;
  v113 = -922746881;
  if ( v16 )
  {
    flt_103B5DCC = 0.0;
  }
  else
  {
    flt_103B5DCC = GDeltaTime + flt_103B5DCC;
    if ( flt_103B5DCC > 0.5 )
      flt_103B5DCC = flt_103B5DCC - 0.5;
    v101 = (__int64)((flt_103B5DCC + flt_103B5DCC) * 200.0);
    v113 = ((_DWORD)v101 << 24) | 0xFF0000;
    v18 = Canvas::Instance();
    (*(void (__cdecl **)(int, _DWORD, int, int, int, int, int, void *))(*(_DWORD *)v18 + 52))(
      v18,
      0,
      v113,
      v107 - 82,
      v17 - 204,
      v107 + 81,
      v17 - 164,
      &unk_10310F1C);
  }
  if ( *(_DWORD *)(this + 172) && *(_BYTE *)(this + 8) )
  {
    v19 = CameraHandler::Instance();
    Camera = CameraHandler::GetCamera(v19, 0);
    v21 = *((float *)Camera + 94);
    v22 = *((float *)Camera + 95);
    Camera = (struct Camera *)((char *)Camera + 376);
    v109 = v21;
    v23 = *((_DWORD *)Camera + 2);
    i = v22;
    v24 = *(float *)Camera;
    v111 = v23;
    *(float *)Buffer = v24;
    v25 = *((float *)Camera + 2);
    v125 = 0.0;
    v126 = v25;
    sub_100029CD();
    v104 = 0.0;
    *(float *)&v101 = fabs(i);
    if ( *(float *)&v101 >= 0.001 )
    {
      sub_1000EAFC((int)Buffer);
      v104 = *(float *)&v101;
      if ( i < 0.0 )
        v104 = -v104;
      v104 = v104 / 3.141592741012573 * 180.0;
    }
    v86 = (_DWORD *)Canvas::Instance();
    v26 = sub_100195E7((int)v123, (int)v104);
    LODWORD(v101) = *v86 + 52;
    v127 = 0;
    v27 = std::string::c_str(v26);
    (*(void (__cdecl **)(_DWORD *, _DWORD, int, int, int, int, int, int))v101)(
      v86,
      0,
      -922746881,
      v107 + 203,
      v17,
      v107 + 244,
      v17 + 18,
      v27);
    v127 = -1;
    std::string::~string(v123);
    v28 = *(_DWORD *)(this + 172);
    v87 = (float)v107;
    *(float *)&v101 = (float)*(int *)(v28 + 80);
    v29 = *(float *)&v101;
    v114 = v87 - *(float *)&v101 * 0.5;
    v109 = (float)v108;
    *(float *)&v101 = (float)*(int *)(v28 + 84);
    v112 = v109 - 0.5 * *(float *)&v101;
    v105 = v29;
    v103 = *(float *)&v101;
    v30 = (int *)Canvas::Instance();
    v31 = *v30;
    v77 = *(_DWORD *)(this + 172);
    LODWORD(v101) = v30;
    (*(void (__thiscall **)(int *, int, int, int, int, int, int, int, int))(v31 + 68))(
      v30,
      v113,
      (int)v114,
      (int)v112,
      (int)v105,
      (int)v103,
      v77,
      5,
      6);
    v32 = *(_DWORD *)(this + 112);
    if ( v32 )
    {
      v33 = *(_DWORD *)(this + 172);
      v114 = v87 - (double)*(int *)(v33 + 80) * 0.5 + 50.0;
      v112 = v109 - (double)*(int *)(v33 + 84) * 0.5 + 135.0;
      v105 = (double)*(int *)(v32 + 80) * 0.5;
      v103 = (double)*(int *)(v32 + 84) * 0.4399999976158142 * 0.5699999928474426;
      *(float *)(v32 + 68) = 0.5;
      *(float *)(*(_DWORD *)(this + 112) + 72) = 0.25079998;
      *(float *)(*(_DWORD *)(this + 112) + 60) = 0.0;
      v34 = *(_DWORD *)(this + 112);
      *(float *)&v101 = 0.5699999928474426 * (0.5 - v104 / 180.0 - 0.22);
      *(float *)(v34 + 64) = *(float *)&v101;
      LODWORD(v101) = Canvas::Instance();
      LODWORD(v103) = (int)v103;
      LODWORD(v105) = (int)v105;
      v35 = *(_DWORD *)v101;
      v78 = *(_DWORD *)(this + 112);
      LODWORD(v109) = (int)v112;
      (*(void (__thiscall **)(_DWORD, int, int, float, float, float, int, int, int))(v35 + 68))(
        v101,
        v113,
        (int)v114,
        COERCE_FLOAT(LODWORD(v109)),
        COERCE_FLOAT(LODWORD(v105)),
        COERCE_FLOAT(LODWORD(v103)),
        v78,
        5,
        6);
      v36 = *(_DWORD *)(this + 112);
      v114 = (double)*(int *)(*(_DWORD *)(this + 172) + 80) * 0.5 + v87 - 0.5 * (double)*(int *)(v36 + 80) - 50.0;
      *(float *)(v36 + 60) = 0.5;
      v37 = (int *)Canvas::Instance();
      v38 = *v37;
      v79 = *(_DWORD *)(this + 112);
      LODWORD(v101) = v37;
      (*(void (__thiscall **)(int *, int, int, float, float, float, int, int, int))(v38 + 68))(
        v37,
        v113,
        (int)v114,
        COERCE_FLOAT(LODWORD(v109)),
        COERCE_FLOAT(LODWORD(v105)),
        COERCE_FLOAT(LODWORD(v103)),
        v79,
        5,
        6);
    }
    v39 = *(_DWORD *)(this + 232);
    if ( !v39 )
      goto LABEL_28;
    *(float *)&v101 = (float)*(int *)(v39 + 80);
    v40 = *(float *)&v101;
    LODWORD(v101) = v108 - 143;
    v114 = v87 - v40 * 0.125 - 2.0;
    v112 = (float)(v108 - 143);
    v105 = v40 * 0.25;
    v103 = (float)*(int *)(v39 + 84);
    *(float *)(v39 + 68) = 0.25;
    v41 = v126;
    *(float *)&v101 = fabs(v126);
    if ( *(float *)&v101 >= 0.001 )
    {
      *(float *)&v101 = fabs(*(float *)Buffer);
      if ( *(float *)&v101 < 0.001 )
      {
        v43 = *(_DWORD *)(this + 232);
        *(float *)&v101 = (v41 + 2.0) / 6.0 + 0.125;
        *(float *)(v43 + 60) = *(float *)&v101;
LABEL_27:
        v90 = (int *)Canvas::Instance();
        LODWORD(v103) = (int)v103;
        LODWORD(v105) = (int)v105;
        v45 = *v90;
        LODWORD(v101) = (int)v114;
        (*(void (__thiscall **)(int *, int, _DWORD, int, float, float, _DWORD, int, int))(v45 + 68))(
          v90,
          v113,
          v101,
          (int)v112,
          COERCE_FLOAT(LODWORD(v105)),
          COERCE_FLOAT(LODWORD(v103)),
          *(_DWORD *)(this + 232),
          5,
          6);
        v112 = v112 + 282.0;
        v46 = Canvas::Instance();
        (*(void (__thiscall **)(int, int, _DWORD, int, float, float, _DWORD, int, int))(*(_DWORD *)v46 + 68))(
          v46,
          v113,
          v101,
          (int)v112,
          COERCE_FLOAT(LODWORD(v105)),
          COERCE_FLOAT(LODWORD(v103)),
          *(_DWORD *)(this + 232),
          5,
          6);
LABEL_28:
        v47 = (_DWORD *)Canvas::Instance();
        v48 = 1 << (*(_DWORD *)(this + 12) - 1);
        LODWORD(v101) = v47;
        v49 = sub_100195E7((int)v122, v48);
        v127 = 1;
        v50 = std::operator+<char>(v123, v49, &unk_10310F30);
        v91 = (void (__cdecl **)(_DWORD, _DWORD, int, int, int, int, int, int))(*v47 + 52);
        LOBYTE(v127) = 2;
        v51 = std::string::c_str(v50);
        v17 = v108;
        (*v91)(v101, 0, -922746881, v107 - 21, v108 - 159, v107 + 20, v108 - 141, v51);
        LOBYTE(v127) = 1;
        std::string::~string(v123);
        v127 = -1;
        std::string::~string(v122);
        goto LABEL_29;
      }
      v104 = v41 * v41;
      if ( *(float *)Buffer <= 0.0 )
        *(float *)&v44 = NAN;
      else
        v44 = 1;
      v109 = *(float *)&v44;
      LODWORD(v101) = 1;
      if ( v41 <= 0.0 )
        LODWORD(v101) = -1;
      v88 = (double)(1 - v44) / 6.0 + 0.125;
      v89 = v88 - (double)SLODWORD(v109) * v104 * (double)(int)v101 / 6.0;
      v42 = v89;
    }
    else
    {
      *(float *)&v101 = (1.0 - *(float *)Buffer) / 6.0 + 0.125;
      v42 = *(float *)&v101;
    }
    *(float *)(*(_DWORD *)(this + 232) + 60) = v42;
    goto LABEL_27;
  }
LABEL_29:
  if ( *(float *)(this + 16) < 0.0 )
  {
    v54 = Canvas::Instance();
    (*(void (__cdecl **)(int, _DWORD, int, int, int, int, int, void *))(*(_DWORD *)v54 + 52))(
      v54,
      0,
      -922746881,
      v107 - 21,
      v17 + 56,
      v107 + 20,
      v17 + 174,
      &unk_10310F34);
  }
  else
  {
    v92 = (int)(*(float *)(this + 16) + 0.5);
    if ( *(_BYTE *)(this + 9) )
    {
      LODWORD(v101) = Canvas::Instance();
      v52 = sub_100195E7((int)v122, v92);
      v93 = (void (__cdecl **)(_DWORD, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v101 + 52);
      v127 = 3;
      v84 = std::string::c_str(v52);
      (*v93)(v101, 0, -937885942, v107 - 21, v17 + 56, v107 + 20, v17 + 174, v84);
    }
    else
    {
      LODWORD(v101) = Canvas::Instance();
      v53 = sub_100195E7((int)v122, v92);
      v94 = (void (__cdecl **)(_DWORD, _DWORD, int, int, int, int, int, int))(*(_DWORD *)v101 + 52);
      v127 = 4;
      v85 = std::string::c_str(v53);
      (*v94)(v101, 0, -922746881, v107 - 21, v17 + 56, v107 + 20, v17 + 174, v85);
    }
    v127 = -1;
    std::string::~string(v122);
  }
  if ( *(_BYTE *)(this + 7) )
  {
    v55 = *(_DWORD *)(this + 292);
    if ( v55 )
    {
      *(float *)&v101 = (float)*(int *)(v55 + 80);
      v56 = *(float *)&v101;
      v105 = (double)v107 - *(float *)&v101 * 0.5;
      *(float *)&v101 = (float)*(int *)(v55 + 84);
      v109 = (double)v108 - 0.5 * *(float *)&v101;
      v95 = v56;
      v57 = COERCE_FLOAT(Canvas::Instance());
      v58 = *(_DWORD *)LODWORD(v57);
      v80 = *(_DWORD *)(this + 292);
      v103 = v57;
      (*(void (__thiscall **)(float, _DWORD, int, int, int, int, int, int, int))(v58 + 68))(
        COERCE_FLOAT(LODWORD(v57)),
        *(_DWORD *)(this + 28),
        (int)v105,
        (int)v109,
        (int)v95,
        (int)*(float *)&v101,
        v80,
        5,
        6);
      v17 = v108;
    }
  }
  if ( *(_DWORD *)(this + 472) )
  {
    for ( i = **(float **)(this + 48); ; i = *(float *)LODWORD(i) )
    {
      v106 = *(_DWORD *)(this + 48);
      if ( LODWORD(i) == v106 )
        break;
      if ( LODWORD(i) == *(_DWORD *)(this + 48) )
        _invalid_parameter_noinfo();
      v76 = *(_DWORD *)(LODWORD(i) + 8);
      v81 = *(_DWORD *)(LODWORD(i) + 12);
      *(_QWORD *)v83 = *(unsigned int *)(LODWORD(i) + 16);
      CameraHandler::Instance();
      CameraHandler::GetCoords_ScreenFromWorld((int)v121, v76, v81, v83[0], v83[1]);
      if ( LODWORD(i) == *(_DWORD *)(this + 48) )
        _invalid_parameter_noinfo();
      *(float *)&v101 = *(float *)(LODWORD(i) + 24);
      v96 = Canvas::Instance();
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, int, int))(*(_DWORD *)v96 + 68))(
        v96,
        -1,
        (int)(v121[0] - *(float *)&v101),
        (int)(v121[1] - *(float *)&v101),
        (int)(*(float *)&v101 + *(float *)&v101),
        (int)(*(float *)&v101 + *(float *)&v101),
        *(_DWORD *)(this + 472),
        2,
        2);
      if ( LODWORD(i) == *(_DWORD *)(this + 48) )
        _invalid_parameter_noinfo();
      v17 = v108;
    }
  }
LABEL_48:
  if ( *(_BYTE *)(this + 10) )
  {
    v59 = *(_DWORD *)(this + 532);
    if ( v59 )
    {
      *(float *)&v101 = (float)*(int *)(v59 + 80);
      v60 = *(float *)&v101;
      LODWORD(v101) = v17 + 100;
      v105 = (double)v107 - 0.5 * v60;
      v97 = (float)(v17 + 100);
      v109 = v60;
      *(float *)&v101 = (float)*(int *)(v59 + 84);
      v61 = COERCE_FLOAT(Canvas::Instance());
      v62 = *(_DWORD *)LODWORD(v61);
      v82 = *(_DWORD *)(this + 532);
      v103 = v61;
      (*(void (__thiscall **)(float, int, int, int, int, int, int, int, int))(v62 + 68))(
        COERCE_FLOAT(LODWORD(v61)),
        -1,
        (int)v105,
        (int)v97,
        (int)v109,
        (int)*(float *)&v101,
        v82,
        5,
        6);
      v105 = v105 + 2.0;
      v98 = v97 + 5.0;
      *(float *)&v101 = v109 - 4.0;
      v109 = *(float *)&v101 * *(float *)(this + 20);
      v103 = COERCE_FLOAT(Canvas::Instance());
      v63 = *(_DWORD *)LODWORD(v103);
      LODWORD(v101) = (int)v98;
      (*(void (__thiscall **)(float, int, int, int, _DWORD, int, _DWORD, int, int))(v63 + 56))(
        COERCE_FLOAT(LODWORD(v103)),
        -16581897,
        3,
        (int)v105,
        v101,
        (int)(v109 + v105),
        v101,
        5,
        6);
    }
  }
  if ( *(_DWORD *)(this + 412) && *(float *)(this + 32) > (double)*(float *)(this + 36) )
  {
    *(float *)&v101 = GDeltaTime + *(float *)(this + 36);
    v64 = *(float *)&v101;
    *(float *)(this + 36) = *(float *)&v101;
    if ( *(float *)(this + 32) > v64 )
    {
      v65 = Canvas::Instance();
      v66 = *(_DWORD *)(this + 412);
      *(float *)&v101 = (float)v107;
      *((float *)&v101 + 1) = (float)v108;
      v102 = 0.0;
      (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, __int64 *, int, int, int))(*(_DWORD *)v65 + 72))(
        v65,
        -1,
        322,
        40,
        380,
        46,
        *(float *)(this + 40),
        &v101,
        v66,
        5,
        6);
    }
    else
    {
      *(float *)(this + 32) = -1.0;
      *(float *)(this + 36) = 0.0;
    }
  }
  if ( *(float *)(this + 24) > 0.00009999999747378752 )
  {
    v67 = *(_DWORD *)(this + 592);
    if ( v67 )
    {
      v105 = (double)v107 - (double)*(int *)(v67 + 80) * 0.5;
      v109 = (float)v108;
      v99 = v109 - 0.5 * (double)*(int *)(v67 + 84);
      v68 = Canvas::Instance();
      v69 = *(_DWORD *)(this + 592);
      LODWORD(v101) = v68;
      v70 = *(_DWORD *)(v69 + 84);
      v71 = *(_DWORD *)(v69 + 80);
      LODWORD(v103) = (int)v105;
      (*(void (__thiscall **)(int, _DWORD, float, int, int, int, int, int, int))(*(_DWORD *)v68 + 68))(
        v68,
        *(_DWORD *)(this + 28),
        COERCE_FLOAT(LODWORD(v103)),
        (int)v99,
        v71,
        v70,
        v69,
        5,
        6);
      v100 = (double)*(int *)(*(_DWORD *)(this + 592) + 84) * 0.5 + v109;
      sprintf(Buffer, "%.0f", *(float *)(this + 24));
      v72 = Canvas::Instance();
      (*(void (__cdecl **)(int, int, int, float, int, int, int, char *))(*(_DWORD *)v72 + 52))(
        v72,
        3,
        -5632,
        COERCE_FLOAT(LODWORD(v103)),
        (int)v100,
        (int)((double)*(int *)(*(_DWORD *)(this + 592) + 80) + v105),
        (int)(v100 + 8.0),
        Buffer);
    }
  }
  v73 = RenderDevice::Instance();
  (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v73 + 448))(v73, 0, 7, 2);
  v119 = (float)v115;
  v120 = (float)v116;
  v74 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v74 + 1708) + 188))(*(_DWORD *)(v74 + 1708), v118);
  return j_nullsub_74(v117);
}
