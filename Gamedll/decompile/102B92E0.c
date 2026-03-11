/*
 * func-name: ?Render@GUIConsole@@QAEXPAVCanvas@@@Z_0
 * func-address: 0x102b92e0
 * callers: 0x10011c16
 * callees: 0x10008df0, 0x102c9d62, 0x102c9fe0
 */

void __thiscall GUIConsole::Render(GUIConsole *this, struct Canvas *a2)
{
  int v3; // eax
  int v4; // ecx
  int v5; // ecx
  int v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  void (__cdecl **v23)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, int); // ebx
  int v24; // eax
  unsigned int v25; // ebx
  int v26; // ecx
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ebx
  int v30; // eax
  int v31; // edx
  int v32; // eax
  unsigned int v33; // ebx
  int v34; // eax
  int v35; // ecx
  int v36; // ebx
  int v37; // eax
  int v38; // eax
  int v39; // edi
  int v40; // eax
  int v41; // eax
  void (__cdecl **v42)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, int); // ebp
  int v43; // eax
  int v44; // eax
  int v45; // ebp
  int v46; // eax
  int v47; // eax
  int v48; // eax
  unsigned int v49; // ebx
  int v50; // eax
  int v51; // eax
  int v52; // eax
  unsigned int v53; // ebx
  int v54; // eax
  int v55; // eax
  unsigned int v56; // ebx
  int v57; // eax
  int v58; // edx
  int v59; // ebx
  int v60; // eax
  bool v61; // sf
  float v62; // [esp+9Ch] [ebp-E0h]
  float v63; // [esp+9Ch] [ebp-E0h]
  float v64; // [esp+A0h] [ebp-DCh]
  float v65; // [esp+A0h] [ebp-DCh]
  float v66; // [esp+A0h] [ebp-DCh]
  int v67; // [esp+A4h] [ebp-D8h]
  int v68; // [esp+BCh] [ebp-C0h]
  float v69; // [esp+BCh] [ebp-C0h]
  int v70; // [esp+BCh] [ebp-C0h]
  int i; // [esp+C0h] [ebp-BCh]
  int v72; // [esp+C0h] [ebp-BCh]
  int v73; // [esp+C4h] [ebp-B8h]
  int v74; // [esp+C4h] [ebp-B8h]
  int v75; // [esp+C4h] [ebp-B8h]
  unsigned int v76; // [esp+C4h] [ebp-B8h]
  int v77; // [esp+CCh] [ebp-B0h]
  void (__cdecl **v78)(struct Canvas *, _DWORD, unsigned int, _DWORD, _DWORD, int); // [esp+CCh] [ebp-B0h]
  int v79; // [esp+CCh] [ebp-B0h]
  int v80; // [esp+D0h] [ebp-ACh]
  unsigned int v81; // [esp+D0h] [ebp-ACh]
  int v82; // [esp+D8h] [ebp-A4h]
  _DWORD v83[4]; // [esp+DCh] [ebp-A0h] BYREF
  float v84; // [esp+ECh] [ebp-90h]
  float v85; // [esp+F0h] [ebp-8Ch]
  int v86; // [esp+F4h] [ebp-88h]
  _BYTE v87[28]; // [esp+FCh] [ebp-80h] BYREF
  _BYTE v88[28]; // [esp+118h] [ebp-64h] BYREF
  _BYTE v89[28]; // [esp+134h] [ebp-48h] BYREF
  _BYTE v90[28]; // [esp+150h] [ebp-2Ch] BYREF
  int v91; // [esp+178h] [ebp-4h]

  v3 = *(_DWORD *)(Canvas::GetTextSize(a2) + 4);
  v80 = v3;
  if ( !*((_BYTE *)this + 32) || *((_BYTE *)this + 68) )
  {
    if ( *((_BYTE *)this + 124) )
    {
      if ( *((_BYTE *)this + 68) )
      {
        v74 = 6 * v3 + 40;
        v41 = std::string::string(v88, "> ");
        v91 = 0;
        std::operator+<char>(v90, v41, (char *)this + 144);
        LOBYTE(v91) = 2;
        std::string::~string(v88);
        v69 = (float)v74;
        v42 = (void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 44);
        v43 = std::string::c_str(v90);
        (*v42)(a2, 0, -922747086, 10.0, LODWORD(v69), v43);
        v44 = std::string::substr(v90, v89, 0, *((_DWORD *)this + 47) + 2);
        LOBYTE(v91) = 3;
        std::string::c_str(v44);
        v45 = *(_DWORD *)Canvas::GetTextSize(a2);
        LOBYTE(v91) = 2;
        std::string::~string(v89);
        v63 = (float)(v45 + 10);
        (*(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 44))(
          a2,
          0,
          -922747086,
          LODWORD(v63),
          LODWORD(v69),
          "_");
        v91 = -1;
        std::string::~string(v90);
      }
      v46 = *((_DWORD *)this + 26);
      if ( v46 )
        v47 = (*((_DWORD *)this + 27) - v46) / 40;
      else
        v47 = 0;
      v75 = v47 - *((_DWORD *)this + 29) - 1;
      if ( v75 > -1 )
      {
        v48 = *((_DWORD *)this + 26);
        if ( v48 )
        {
          if ( v75 < (unsigned int)((*((_DWORD *)this + 27) - v48) / 40) && *((float *)this + 30) > 0.0 )
          {
            v49 = *(_DWORD *)(sub_10008DF0(v75) + 36);
            v78 = (void (__cdecl **)(struct Canvas *, _DWORD, unsigned int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 44);
            v50 = sub_10008DF0(v75);
            v67 = std::string::c_str(v50 + 8);
            (*v78)(
              a2,
              0,
              v49 & 0xFFFFFF | ((unsigned int)(__int64)((double)HIBYTE(v49) * *((float *)this + 30)) << 24),
              10.0,
              40.0,
              v67);
            *((float *)this + 30) = *((float *)this + 30) - GDeltaTime * 1.2;
          }
        }
      }
      v51 = *((_DWORD *)this + 29);
      if ( v51 > 0 )
      {
        if ( v51 > dword_103B4AD0 )
        {
          *((float *)this + 30) = 1.0;
          *((_DWORD *)this + 29) = dword_103B4AD0;
        }
        v70 = 0;
        if ( *((int *)this + 29) > 0 )
        {
          v72 = v80 + 40;
          do
          {
            v52 = *((_DWORD *)this + 26);
            if ( v52 )
              v52 = (*((_DWORD *)this + 27) - v52) / 40;
            v53 = v70 + v52 - *((_DWORD *)this + 29);
            v54 = *((_DWORD *)this + 26);
            if ( !v54 || v53 >= (*((_DWORD *)this + 27) - v54) / 40 )
              _invalid_parameter_noinfo();
            v55 = *((_DWORD *)this + 26);
            v76 = v55 + 40 * v53;
            if ( v55 )
              v55 = (*((_DWORD *)this + 27) - v55) / 40;
            v56 = v70 + v55 - *((_DWORD *)this + 29);
            v57 = *((_DWORD *)this + 26);
            if ( !v57 || v56 >= (*((_DWORD *)this + 27) - v57) / 40 )
              _invalid_parameter_noinfo();
            v58 = 5 * v56;
            v59 = *(_DWORD *)a2;
            v79 = *((_DWORD *)this + 26) + 8 * v58;
            v60 = std::string::c_str(v76 + 8);
            v66 = (float)v72;
            (*(void (__cdecl **)(struct Canvas *, _DWORD, _DWORD, _DWORD, _DWORD, int))(v59 + 44))(
              a2,
              0,
              *(_DWORD *)(v79 + 36),
              10.0,
              LODWORD(v66),
              v60);
            v72 += v80;
            ++v70;
          }
          while ( v70 < *((_DWORD *)this + 29) );
        }
        flt_103B8178 = flt_103B8178 - GDeltaTime;
        if ( flt_103B8178 <= 0.0 )
        {
          v61 = --*((_DWORD *)this + 29) < 0;
          *((float *)this + 30) = 1.0;
          if ( !v61 )
            flt_103B8178 = flt_103B4ACC;
        }
      }
    }
  }
  else
  {
    v77 = (int)*(float *)(RenderDevice::Instance(v4) + 1624);
    v6 = (int)*(float *)(RenderDevice::Instance(v5) + 1620);
    v84 = 0.0;
    v83[0] = 0;
    v83[1] = 0;
    v85 = 0.050000001;
    v73 = v6;
    v83[3] = *(_DWORD *)(Canvas::Instance() + 68);
    v83[2] = *(_DWORD *)(Canvas::Instance() + 64);
    v8 = RenderDevice::Instance(v7);
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v8 + 1708) + 188))(*(_DWORD *)(v8 + 1708), v83);
    v10 = RenderDevice::Instance(v9);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v10 + 440))(v10, 0, 4, 12);
    v12 = RenderDevice::Instance(v11);
    (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v12 + 440))(v12, 0, 5, 0);
    (*(void (__thiscall **)(struct Canvas *, int, int, int, int, int, _DWORD, int, int))(*(_DWORD *)a2 + 68))(
      a2,
      -931102592,
      -1,
      -1,
      1026,
      256,
      0,
      5,
      6);
    v14 = RenderDevice::Instance(v13);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v14 + 440))(v14, 0, 4, 2);
    v16 = RenderDevice::Instance(v15);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v16 + 440))(v16, 0, 5, 2);
    (*(void (__thiscall **)(struct Canvas *, int, int, int, int, int, _DWORD, int, int))(*(_DWORD *)a2 + 68))(
      a2,
      -931102592,
      -1,
      -1,
      1026,
      256,
      0,
      10,
      9);
    v18 = RenderDevice::Instance(v17);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v18 + 440))(v18, 0, 4, 4);
    v20 = RenderDevice::Instance(v19);
    (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v20 + 440))(v20, 0, 5, 2);
    v22 = RenderDevice::Instance(v21);
    (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v22 + 440))(v22, 0, 6, 0);
    (*(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 44))(
      a2,
      0,
      -16720896,
      2.0,
      238.0,
      ">");
    v23 = (void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, int))(*(_DWORD *)a2 + 44);
    v24 = std::string::c_str((char *)this + 144);
    (*v23)(a2, 0, -3604536, 15.0, 238.0, v24);
    v25 = 0;
    v26 = 2 * (119 - v80);
    v68 = 0;
    v86 = -v80;
    for ( i = v26; ; v26 = i )
    {
      v27 = *((_DWORD *)this + 26);
      if ( !v27 || v25 >= (*((_DWORD *)this + 27) - v27) / 40 )
        break;
      if ( v26 <= 20 )
      {
        v65 = (float)i;
        (*(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 44))(
          a2,
          0,
          -16720896,
          15.0,
          LODWORD(v65),
          "...");
        break;
      }
      v28 = *((_DWORD *)this + 26);
      if ( v28 )
        v28 = (*((_DWORD *)this + 27) - v28) / 40;
      v29 = v28 - v25 - 1;
      v30 = *((_DWORD *)this + 26);
      if ( !v30 || v29 >= (*((_DWORD *)this + 27) - v30) / 40 )
        _invalid_parameter_noinfo();
      v31 = *((_DWORD *)this + 26);
      v81 = v31 + 40 * v29;
      v32 = v31;
      if ( v31 )
        v32 = (*((_DWORD *)this + 27) - v31) / 40;
      v33 = v32 - v68 - 1;
      v34 = *((_DWORD *)this + 26);
      if ( !v34 || v33 >= (*((_DWORD *)this + 27) - v34) / 40 )
        _invalid_parameter_noinfo();
      v35 = 5 * v33;
      v36 = *(_DWORD *)a2;
      v82 = *((_DWORD *)this + 26) + 8 * v35;
      v37 = std::string::c_str(v81 + 8);
      v64 = (float)i;
      (*(void (__cdecl **)(struct Canvas *, _DWORD, _DWORD, _DWORD, _DWORD, int))(v36 + 44))(
        a2,
        0,
        *(_DWORD *)(v82 + 36),
        15.0,
        LODWORD(v64),
        v37);
      v25 = ++v68;
      i += v86;
    }
    if ( ++dword_103B8174 > 50 )
    {
      v38 = std::string::substr((char *)this + 144, v87, 0, *((_DWORD *)this + 47));
      v91 = 4;
      std::string::c_str(v38);
      v39 = *(_DWORD *)Canvas::GetTextSize(a2);
      v91 = -1;
      std::string::~string(v87);
      v62 = (float)(v39 + 15);
      (*(void (__cdecl **)(struct Canvas *, _DWORD, int, _DWORD, _DWORD, const char *))(*(_DWORD *)a2 + 44))(
        a2,
        0,
        -16711936,
        LODWORD(v62),
        238.0,
        "_");
    }
    if ( dword_103B8174 > 100 )
      dword_103B8174 = 0;
    v84 = (float)v77;
    v85 = (float)v73;
    v40 = RenderDevice::Instance(v26);
    (*(void (__stdcall **)(_DWORD, _DWORD *))(**(_DWORD **)(v40 + 1708) + 188))(*(_DWORD *)(v40 + 1708), v83);
  }
}
