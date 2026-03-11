/*
 * func-name: sub_1029BF40
 * func-address: 0x1029bf40
 * callers: 0x1000c69e
 * callees: 0x1000e0ac, 0x1001239b, 0x102bf800, 0x102bf8a0, 0x102bf960, 0x102c9d62, 0x102c9ea8
 */

void __thiscall sub_1029BF40(float *this, char a2)
{
  struct CREControl *Control; // eax
  int v4; // eax
  int v5; // ebx
  struct CREControl *v6; // eax
  unsigned int *v7; // eax
  struct REComboBoxItem *Item; // eax
  int v9; // edi
  int v10; // eax
  int v11; // eax
  const wchar_t *v12; // eax
  const wchar_t *v13; // eax
  int v14; // edi
  int v15; // ecx
  int *v16; // eax
  int v17; // edx
  char v18; // al
  int v19; // ecx
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int (__stdcall *v26)(int); // ebx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  struct CREControl *v30; // eax
  _DWORD *v31; // eax
  int v32; // edx
  int v33; // ecx
  int *v34; // eax
  int v35; // edx
  int v36; // ecx
  double v37; // st7
  int v38; // eax
  int v39; // eax
  struct CREControl *v40; // eax
  int v41; // ecx
  int v42; // edi
  int v43; // eax
  void (__thiscall *v44)(int, int); // edx
  struct CREControl *v45; // eax
  int v46; // eax
  int v47; // eax
  struct CREControl *v48; // eax
  int v49; // eax
  _DWORD *v50; // edi
  struct CREControl *v51; // eax
  int v52; // eax
  _DWORD *v53; // ebx
  struct CREControl *v54; // eax
  _DWORD *v55; // eax
  int v56; // edx
  int v57; // ecx
  int v58; // edi
  double v59; // st7
  int v60; // edi
  int v61; // edx
  int v62; // ecx
  double v63; // st7
  int v64; // edx
  int v65; // ecx
  int v66; // eax
  int *v67; // eax
  int v68; // edx
  int (__stdcall *v69)(int); // ebx
  int v70; // eax
  int v71; // eax
  int v72; // eax
  struct CREControl *v73; // eax
  int v74; // eax
  float v75; // eax
  int v76; // eax
  struct CREControl *v77; // eax
  int v78; // eax
  int v79; // edi
  int v80; // eax
  struct CREControl *v81; // eax
  int v82; // edi
  Input *v83; // eax
  char InvertPitch; // al
  Input *v85; // eax
  int v86; // eax
  struct CREControl *v87; // eax
  int *v88; // eax
  Input *v89; // eax
  double Sensitivity; // st7
  Input *v91; // eax
  int v92; // eax
  struct CREControl *v93; // eax
  int v94; // eax
  int v95; // eax
  struct CREControl *v96; // eax
  _DWORD *v97; // eax
  double v98; // st7
  int v99; // eax
  struct CREControl *v100; // eax
  _DWORD *v101; // eax
  double v102; // st7
  int v103; // eax
  struct CREControl *v104; // eax
  _DWORD *v105; // eax
  double v106; // st7
  int v107; // eax
  struct CREControl *v108; // eax
  _DWORD *v109; // eax
  double v110; // st7
  int v111; // eax
  struct CREControl *v112; // eax
  _DWORD *v113; // eax
  double v114; // st7
  int v115; // eax
  Input *v116; // eax
  int v117; // [esp+54h] [ebp-CCh] BYREF
  int v118; // [esp+58h] [ebp-C8h]
  int v119; // [esp+5Ch] [ebp-C4h]
  int v120; // [esp+60h] [ebp-C0h]
  int v121; // [esp+64h] [ebp-BCh]
  int v122; // [esp+68h] [ebp-B8h]
  int v123; // [esp+6Ch] [ebp-B4h]
  float v124; // [esp+70h] [ebp-B0h]
  void ***v125; // [esp+74h] [ebp-ACh]
  int v126; // [esp+78h] [ebp-A8h]
  int v127; // [esp+88h] [ebp-98h]
  unsigned __int8 v128; // [esp+8Fh] [ebp-91h]
  int v129; // [esp+90h] [ebp-90h]
  float v130; // [esp+94h] [ebp-8Ch]
  double v131; // [esp+98h] [ebp-88h]
  _DWORD v132[7]; // [esp+A0h] [ebp-80h] BYREF
  _DWORD v133[7]; // [esp+BCh] [ebp-64h] BYREF
  _DWORD v134[7]; // [esp+D8h] [ebp-48h] BYREF
  _DWORD v135[7]; // [esp+F4h] [ebp-2Ch] BYREF
  int v136; // [esp+11Ch] [ebp-4h]

  Control = CREDialog::GetControl((CREDialog *)this, 204);
  v4 = _RTDynamicCast(Control, &CREControl `RTTI Type Descriptor', &CRECheckBox `RTTI Type Descriptor', 0);
  v125 = 0;
  v124 = COERCE_FLOAT(&CREComboBox `RTTI Type Descriptor');
  v5 = v4;
  v6 = CREDialog::GetControl((CREDialog *)this, 202);
  v7 = (unsigned int *)_RTDynamicCast(v6, v121, 0, &CREControl `RTTI Type Descriptor');
  if ( v5 && v7 )
  {
    Item = CREComboBox::GetItem((CREComboBox *)v7, v7[204]);
    std::wstring::wstring(v133, Item);
    v136 = 0;
    v9 = std::wstring::find(v133, 42, 0);
    if ( v9 != -1 )
    {
      std::wstring::wstring(v135);
      LOBYTE(v136) = 1;
      std::wstring::wstring(v134);
      LOBYTE(v136) = 2;
      v10 = std::wstring::substr(v133, v132, 0, v9);
      LOBYTE(v136) = 3;
      std::wstring::operator=(v135, v10);
      LOBYTE(v136) = 2;
      std::wstring::~wstring(v132);
      v11 = std::wstring::substr(v133, v132, v9 + 1, v133[5] - v9 - 1);
      LOBYTE(v136) = 4;
      std::wstring::operator=(v134, v11);
      LOBYTE(v136) = 2;
      std::wstring::~wstring(v132);
      v12 = (const wchar_t *)std::wstring::c_str(v135);
      *(float *)&v129 = COERCE_FLOAT(_wtoi(v12));
      v13 = (const wchar_t *)std::wstring::c_str(v134);
      *(float *)&v14 = COERCE_FLOAT(_wtoi(v13));
      v16 = (int *)RenderDevice::Instance(v15);
      v17 = *v16;
      v128 = *(_BYTE *)(v5 + 816);
      v18 = (*(int (__thiscall **)(int *, void ***))(v17 + 308))(v16, v125);
      v19 = v128;
      if ( v128 != (v18 == 0)
        || (v20 = RenderDevice::Instance(v128), v129 != (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 296))(v20))
        || (v21 = RenderDevice::Instance(v19),
            *(float *)&v22 = COERCE_FLOAT((*(int (__thiscall **)(int))(*(_DWORD *)v21 + 300))(v21)),
            v14 != v22) )
      {
        v23 = RenderDevice::Instance(v19);
        LOBYTE(v24) = *(_BYTE *)(v5 + 816) == 0;
        *(float *)&v22 = COERCE_FLOAT(
                           (*(int (__thiscall **)(int, int, int, int, int, _DWORD))(*(_DWORD *)v23 + 404))(
                             v23,
                             v129,
                             v14,
                             32,
                             v24,
                             0));
      }
      if ( a2 )
      {
        LOBYTE(v22) = *(_BYTE *)(v5 + 816) == 0;
        v124 = *(float *)&v22;
        *(float *)&v127 = COERCE_FLOAT(&v117);
        std::string::string(&v117, "FullScreen");
        LOBYTE(v136) = 5;
        v25 = Engine::Instance(v117);
        LOBYTE(v136) = 2;
        sub_102BF800(*(_DWORD *)(v25 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
        if ( *(_BYTE *)(v5 + 816) )
        {
          v124 = *(float *)&v129;
          *(float *)&v127 = COERCE_FLOAT(&v117);
          std::string::string(&v117, "WindowedWidth");
          v26 = Engine::Instance;
          LOBYTE(v136) = 8;
          v28 = Engine::Instance(v117);
          LOBYTE(v136) = 2;
          sub_102BF960(*(_DWORD *)(v28 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
          v124 = *(float *)&v14;
          *(float *)&v127 = COERCE_FLOAT(&v117);
          std::string::string(&v117, "WindowedHeight");
          LOBYTE(v136) = 9;
        }
        else
        {
          v124 = *(float *)&v129;
          *(float *)&v127 = COERCE_FLOAT(&v117);
          std::string::string(&v117, "FullScreenWidth");
          v26 = Engine::Instance;
          LOBYTE(v136) = 6;
          v27 = Engine::Instance(v117);
          LOBYTE(v136) = 2;
          sub_102BF960(*(_DWORD *)(v27 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
          v124 = *(float *)&v14;
          *(float *)&v127 = COERCE_FLOAT(&v117);
          std::string::string(&v117, "FullScreenHeight");
          LOBYTE(v136) = 7;
        }
        v29 = v26(v117);
        LOBYTE(v136) = 2;
        sub_102BF960(*(_DWORD *)(v29 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
      }
      LOBYTE(v136) = 1;
      std::wstring::~wstring(v134);
      LOBYTE(v136) = 0;
      std::wstring::~wstring(v135);
    }
    v136 = -1;
    std::wstring::~wstring(v133);
  }
  v124 = 0.0;
  v123 = (int)&CRESlider `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v30 = CREDialog::GetControl((CREDialog *)this, 210);
  v31 = (_DWORD *)_RTDynamicCast(v30, v121, v122, v123);
  if ( v31 )
  {
    v32 = v31[135];
    v33 = v31[134] - v32;
    v127 = v31[136] - v32;
    *(float *)&v129 = (double)v33 / (double)v127;
    v34 = (int *)RenderDevice::Instance(v33);
    v35 = *v34;
    v131 = *(float *)&v129;
    v37 = ((double (__thiscall *)(int *))*(_DWORD *)(v35 + 140))(v34);
    *(float *)&v127 = v131 - v37;
    *(float *)&v127 = fabs(*(float *)&v127);
    if ( *(float *)&v127 > 0.001 )
    {
      v38 = RenderDevice::Instance(v36);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v38 + 136))(v38, v129);
    }
    if ( a2 )
    {
      v124 = *(float *)&v129;
      *(float *)&v127 = COERCE_FLOAT(&v117);
      std::string::string(&v117, "HDRExposure");
      v136 = 10;
      v39 = Engine::Instance(v117);
      v136 = -1;
      sub_102BF8A0(*(_DWORD *)(v39 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
    }
  }
  v124 = 0.0;
  v123 = (int)&CRECheckBox `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v40 = CREDialog::GetControl((CREDialog *)this, 208);
  v42 = _RTDynamicCast(v40, v121, v122, v123);
  if ( v42 )
  {
    v43 = RenderDevice::Instance(v41);
    v44 = *(void (__thiscall **)(int, int))(*(_DWORD *)v43 + 128);
    LOBYTE(v127) = *(_BYTE *)(v42 + 816);
    v44(v43, v127);
  }
  v124 = 0.0;
  v123 = (int)&CRESlider `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v45 = CREDialog::GetControl((CREDialog *)this, 212);
  v46 = _RTDynamicCast(v45, v121, v122, v123);
  if ( v46 && a2 )
  {
    LODWORD(v124) = 3 - *(_DWORD *)(v46 + 536);
    *(float *)&v127 = COERCE_FLOAT(&v117);
    std::string::string(&v117, "TextureSizePercent");
    v136 = 11;
    v47 = Engine::Instance(v117);
    v136 = -1;
    sub_102BF960(*(_DWORD *)(v47 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
  }
  v124 = 0.0;
  v123 = (int)&CRESlider `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v48 = CREDialog::GetControl((CREDialog *)this, 218);
  v49 = _RTDynamicCast(v48, v123, LODWORD(v124), v125);
  v126 = 0;
  v125 = &CRESlider `RTTI Type Descriptor';
  v124 = COERCE_FLOAT(&CREControl `RTTI Type Descriptor');
  v123 = 0;
  v50 = (_DWORD *)v49;
  v51 = CREDialog::GetControl((CREDialog *)this, 214);
  v52 = _RTDynamicCast(v51, v122, v123, LODWORD(v124));
  v125 = 0;
  v124 = COERCE_FLOAT(&CRESlider `RTTI Type Descriptor');
  v123 = (int)&CREControl `RTTI Type Descriptor';
  v122 = 0;
  v53 = (_DWORD *)v52;
  v54 = CREDialog::GetControl((CREDialog *)this, 216);
  v55 = (_DWORD *)_RTDynamicCast(v54, v121, v122, v123);
  if ( !v50 )
    goto LABEL_30;
  if ( !v53 )
    goto LABEL_30;
  if ( !v55 )
    goto LABEL_30;
  v56 = v50[135];
  v57 = v50[134];
  v58 = v50[136];
  v127 = v58 - v56;
  v59 = (double)(v57 - v56) / (double)(v58 - v56);
  v60 = v53[135];
  v61 = v53[136];
  v127 = v53[134] - v60;
  v62 = v55[134];
  *(float *)&v129 = v59;
  v63 = (double)v127;
  v127 = v61 - v60;
  v64 = v55[135];
  v65 = v62 - v64;
  v66 = v55[136] - v64;
  *(float *)&v127 = v63 / (double)v127;
  v130 = (double)v65 / (double)v66;
  v67 = (int *)RenderDevice::Instance(v65);
  v68 = *v67;
  v124 = *(float *)&v129;
  (*(void (__thiscall **)(int *, _DWORD, float, int, int))(v68 + 264))(v67, 0, COERCE_FLOAT(LODWORD(v130)), v127, v129);
  if ( a2 )
  {
    v124 = *(float *)&v129;
    LODWORD(v131) = &v117;
    std::string::string(&v117, "Gamma");
    v69 = Engine::Instance;
    v136 = 12;
    v70 = Engine::Instance(v117);
    v136 = -1;
    sub_102BF8A0(*(_DWORD *)(v70 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
    v124 = *(float *)&v127;
    LODWORD(v131) = &v117;
    std::string::string(&v117, "Brightness");
    v136 = 13;
    v71 = Engine::Instance(v117);
    v136 = -1;
    sub_102BF8A0(*(_DWORD *)(v71 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
    v124 = v130;
    LODWORD(v131) = &v117;
    std::string::string(&v117, "Contrast");
    v136 = 14;
    v72 = Engine::Instance(v117);
    v136 = -1;
    sub_102BF8A0(*(_DWORD *)(v72 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
    this[997] = *(float *)&v129;
    this[999] = v130;
    this[998] = *(float *)&v127;
  }
  else
  {
LABEL_30:
    v69 = Engine::Instance;
  }
  v124 = 0.0;
  v123 = (int)&CRECheckBox `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v73 = CREDialog::GetControl((CREDialog *)this, 220);
  v74 = _RTDynamicCast(v73, v121, v122, v123);
  if ( v74 )
  {
    LODWORD(v75) = *(unsigned __int8 *)(v74 + 816);
    byte_103B80F3 = LOBYTE(v75);
    if ( a2 )
    {
      v124 = v75;
      LODWORD(v131) = &v117;
      std::string::string(&v117, "showinfo");
      v136 = 15;
      v76 = v69(v117);
      v136 = -1;
      sub_102BF800(*(_DWORD *)(v76 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
    }
  }
  v124 = 0.0;
  v123 = (int)&CRESlider `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v77 = CREDialog::GetControl((CREDialog *)this, 222);
  v78 = _RTDynamicCast(v77, v121, v122, v123);
  v79 = v78;
  if ( v78 )
  {
    v127 = *(int *)(v78 + 536);
    *(float *)&v127 = 1.0 - (double)v127 / 100.0;
    World::SetVisibleDistanceBias((World *)dword_103B8134, *(float *)&v127);
    if ( a2 )
    {
      v127 = *(int *)(v79 + 536);
      LODWORD(v131) = &v117;
      *(float *)&v127 = (double)v127 / 100.0;
      v124 = *(float *)&v127;
      std::string::string(&v117, "ViewDistanceRate");
      v136 = 16;
      v80 = v69(v117);
      v136 = -1;
      sub_102BF8A0(*(_DWORD *)(v80 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
    }
  }
  v124 = 0.0;
  v123 = (int)&CRECheckBox `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v81 = CREDialog::GetControl((CREDialog *)this, 402);
  v82 = _RTDynamicCast(v81, v121, v122, v123);
  if ( v82 )
  {
    v128 = *(_BYTE *)(v82 + 816);
    v83 = (Input *)Input::Instance(v125);
    InvertPitch = Input::GetInvertPitch(v83);
    if ( v128 != InvertPitch )
    {
      LOBYTE(v127) = *(_BYTE *)(v82 + 816);
      v85 = (Input *)Input::Instance(v127);
      Input::SetInvertPitch(v85, (bool)v125);
      if ( a2 )
      {
        LOBYTE(v127) = *(_BYTE *)(v82 + 816);
        v124 = *(float *)&v127;
        LODWORD(v131) = &v117;
        std::string::string(&v117, "InvertPitch");
        v136 = 17;
        v86 = v69(v117);
        v136 = -1;
        sub_102BF800(*(_DWORD *)(v86 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
      }
    }
  }
  v124 = 0.0;
  v123 = (int)&CRESlider `RTTI Type Descriptor';
  v122 = (int)&CREControl `RTTI Type Descriptor';
  v121 = 0;
  v87 = CREDialog::GetControl((CREDialog *)this, 404);
  v88 = (int *)_RTDynamicCast(v87, v121, v122, v123);
  if ( !v88 )
    goto LABEL_46;
  *(float *)&v127 = (double)v88[134] / (double)(v88[136] - v88[135]);
  v131 = *(float *)&v127;
  v89 = (Input *)Input::Instance(v125);
  Sensitivity = Input::GetSensitivity(v89);
  v130 = v131 - Sensitivity;
  v130 = fabs(v130);
  if ( v130 > 0.001 )
  {
    v91 = (Input *)Input::Instance(v127);
    Input::SetSensitivity(v91, *(float *)&v125);
  }
  if ( a2 )
  {
    v124 = *(float *)&v127;
    LODWORD(v131) = &v117;
    std::string::string(&v117, "MouseSensitivity");
    v136 = 18;
    v92 = v69(v117);
    v136 = -1;
    sub_102BF8A0(*(_DWORD *)(v92 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
LABEL_46:
    if ( a2 )
    {
      v124 = 0.0;
      v123 = (int)&CRECheckBox `RTTI Type Descriptor';
      v122 = (int)&CREControl `RTTI Type Descriptor';
      v121 = 0;
      v93 = CREDialog::GetControl((CREDialog *)this, 208);
      v94 = _RTDynamicCast(v93, v121, v122, v123);
      if ( v94 )
      {
        LOBYTE(v127) = *(_BYTE *)(v94 + 816);
        v124 = *(float *)&v127;
        LODWORD(v131) = &v117;
        std::string::string(&v117, "HDREnabled");
        v136 = 19;
        v95 = v69(v117);
        v136 = -1;
        sub_102BF800(*(_DWORD *)(v95 + 116), v117, v118, v119, v120, v121, v122, v123, SLODWORD(v124));
      }
      v124 = 0.0;
      v123 = (int)&CRESlider `RTTI Type Descriptor';
      v122 = (int)&CREControl `RTTI Type Descriptor';
      v121 = 0;
      v96 = CREDialog::GetControl((CREDialog *)this, 304);
      v97 = (_DWORD *)_RTDynamicCast(v96, v121, v122, v123);
      if ( v97 )
      {
        v98 = (double)(v97[134] - v97[135]) / (double)(v97[136] - v97[135]);
        LODWORD(v131) = &v117;
        *(float *)&v127 = v98;
        v124 = *(float *)&v127;
        std::string::string(&v117, "AudioVolume");
        v136 = 20;
        v99 = v69(v117);
        v136 = -1;
        sub_102BF8A0(*(_DWORD *)(v99 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
      }
      v124 = 0.0;
      v123 = (int)&CRESlider `RTTI Type Descriptor';
      v122 = (int)&CREControl `RTTI Type Descriptor';
      v121 = 0;
      v100 = CREDialog::GetControl((CREDialog *)this, 302);
      v101 = (_DWORD *)_RTDynamicCast(v100, v121, v122, v123);
      if ( v101 )
      {
        v102 = (double)(v101[134] - v101[135]) / (double)(v101[136] - v101[135]);
        LODWORD(v131) = &v117;
        *(float *)&v127 = v102;
        v124 = *(float *)&v127;
        std::string::string(&v117, "MusicVolume");
        v136 = 21;
        v103 = v69(v117);
        v136 = -1;
        sub_102BF8A0(*(_DWORD *)(v103 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
      }
      v124 = 0.0;
      v123 = (int)&CRESlider `RTTI Type Descriptor';
      v122 = (int)&CREControl `RTTI Type Descriptor';
      v121 = 0;
      v104 = CREDialog::GetControl((CREDialog *)this, 218);
      v105 = (_DWORD *)_RTDynamicCast(v104, v121, v122, v123);
      if ( v105 )
      {
        v106 = (double)(v105[134] - v105[135]) / (double)(v105[136] - v105[135]);
        LODWORD(v131) = &v117;
        *(float *)&v127 = v106;
        v124 = *(float *)&v127;
        std::string::string(&v117, "Gamma");
        v136 = 22;
        v107 = v69(v117);
        v136 = -1;
        sub_102BF8A0(*(_DWORD *)(v107 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
      }
      v124 = 0.0;
      v123 = (int)&CRESlider `RTTI Type Descriptor';
      v122 = (int)&CREControl `RTTI Type Descriptor';
      v121 = 0;
      v108 = CREDialog::GetControl((CREDialog *)this, 214);
      v109 = (_DWORD *)_RTDynamicCast(v108, v121, v122, v123);
      if ( v109 )
      {
        v110 = (double)(v109[134] - v109[135]) / (double)(v109[136] - v109[135]);
        LODWORD(v131) = &v117;
        *(float *)&v127 = v110;
        v124 = *(float *)&v127;
        std::string::string(&v117, "Brightness");
        v136 = 23;
        v111 = v69(v117);
        v136 = -1;
        sub_102BF8A0(*(_DWORD *)(v111 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
      }
      v124 = 0.0;
      v123 = (int)&CRESlider `RTTI Type Descriptor';
      v122 = (int)&CREControl `RTTI Type Descriptor';
      v121 = 0;
      v112 = CREDialog::GetControl((CREDialog *)this, 216);
      v113 = (_DWORD *)_RTDynamicCast(v112, v121, v122, v123);
      if ( v113 )
      {
        v114 = (double)(v113[134] - v113[135]) / (double)(v113[136] - v113[135]);
        LODWORD(v131) = &v117;
        *(float *)&v127 = v114;
        v124 = *(float *)&v127;
        std::string::string(&v117, "Contrast");
        v136 = 24;
        v115 = v69(v117);
        v136 = -1;
        sub_102BF8A0(*(_DWORD *)(v115 + 116), v117, v118, v119, v120, v121, v122, v123, v124);
      }
    }
  }
  sub_1000E0AC((int)v125, v126);
  sub_1001239B();
  v116 = (Input *)Input::Instance(v125);
  Input::SaveInputConfig(v116);
}
