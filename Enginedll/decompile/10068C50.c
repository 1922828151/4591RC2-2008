/*
 * func-name: ?RestoreDeviceObjects@Canvas@@UAEXXZ
 * func-address: 0x10068c50
 * callers: none
 * callees: 0x10029ca0, 0x101189f0, 0x101780aa, 0x1017aa70, 0x1017c0d0, 0x1017c260, 0x1017c4e0, 0x1017c8d0, 0x1017cd10, 0x1017e0a0, 0x1017eaef
 */

void __thiscall Canvas::RestoreDeviceObjects(Canvas *this)
{
  struct RenderDevice *v2; // eax
  int v3; // eax
  float v4; // eax
  float v5; // ebp
  float v6; // eax
  float v7; // eax
  float v8; // eax
  float v9; // eax
  char v10; // al
  char v11; // al
  char v12; // al
  char v13; // al
  char v14; // al
  char v15; // al
  char v16; // al
  char v17; // al
  char v18; // al
  char v19; // al
  char v20; // al
  struct RenderDevice *v21; // eax
  int v22; // eax
  void (**v23)(void *, const char *, ...); // ebx
  int v24; // eax
  char *v25; // edi
  int v26; // ebx
  int v27; // eax
  int v28; // ebx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  int v32; // ebx
  int v33; // eax
  int v34; // ebx
  int v35; // eax
  unsigned int v36; // ebp
  int v37; // eax
  int v38; // eax
  char *v39; // edi
  struct RenderDevice *v40; // eax
  double v41; // st7
  int *v42; // ecx
  double v43; // st7
  int v44; // edx
  char *v45; // edx
  int v46; // ebx
  int v47; // eax
  int v48; // [esp+44h] [ebp-1B8h] BYREF
  int v49; // [esp+48h] [ebp-1B4h]
  int v50; // [esp+4Ch] [ebp-1B0h]
  int v51; // [esp+50h] [ebp-1ACh]
  int v52; // [esp+54h] [ebp-1A8h]
  int v53; // [esp+58h] [ebp-1A4h]
  void *v54; // [esp+5Ch] [ebp-1A0h]
  char v55[4]; // [esp+60h] [ebp-19Ch] BYREF
  int v56; // [esp+64h] [ebp-198h]
  int v57; // [esp+68h] [ebp-194h]
  float v58; // [esp+6Ch] [ebp-190h]
  char *v59; // [esp+70h] [ebp-18Ch]
  double X; // [esp+74h] [ebp-188h]
  int v61; // [esp+7Ch] [ebp-180h]
  int v62; // [esp+80h] [ebp-17Ch]
  float v63; // [esp+98h] [ebp-164h]
  char *v64; // [esp+9Ch] [ebp-160h]
  char *i; // [esp+A0h] [ebp-15Ch]
  char *v66; // [esp+A4h] [ebp-158h]
  char *v67; // [esp+A8h] [ebp-154h]
  __int64 v68; // [esp+ACh] [ebp-150h]
  char *v69; // [esp+B8h] [ebp-144h]
  float v70; // [esp+BCh] [ebp-140h]
  float v71; // [esp+C0h] [ebp-13Ch]
  float v72; // [esp+C4h] [ebp-138h]
  char *v73; // [esp+C8h] [ebp-134h]
  int v74[25]; // [esp+CCh] [ebp-130h] BYREF
  _BYTE v75[28]; // [esp+130h] [ebp-CCh] BYREF
  _BYTE v76[28]; // [esp+14Ch] [ebp-B0h] BYREF
  _BYTE v77[28]; // [esp+168h] [ebp-94h] BYREF
  _DWORD v78[7]; // [esp+184h] [ebp-78h] BYREF
  _BYTE v79[80]; // [esp+1A0h] [ebp-5Ch] BYREF
  int v80; // [esp+1F8h] [ebp-4h]

  sub_1017AA70(v61, v62);
  (*(void (__thiscall **)(Canvas *))(*(_DWORD *)this + 4))(this);
  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 296))(v2);
  sub_1017CD10(v61, v62);
  v63 = COERCE_FLOAT(v55);
  v80 = 0;
  std::string::string(v55, "fonts.ini");
  sub_1017E0A0(v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v63 = COERCE_FLOAT(v55);
  std::string::string(v55, &unk_101C0E22);
  v64 = (char *)&v48;
  LOBYTE(v80) = 1;
  std::string::string(&v48, "ShadowColor");
  LOBYTE(v80) = 0;
  v3 = sub_1017C8D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v63 = COERCE_FLOAT(v55);
  v54 = &unk_101C0E23;
  *((_DWORD *)this + 18) = v3;
  std::string::string(v55, v54);
  v64 = (char *)&v48;
  LOBYTE(v80) = 2;
  std::string::string(&v48, "TextFontName");
  LOBYTE(v80) = 0;
  sub_1017C4E0(v77, v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v63 = COERCE_FLOAT(v55);
  LOBYTE(v80) = 3;
  std::string::string(v55, &unk_101C0E3D);
  v64 = (char *)&v48;
  LOBYTE(v80) = 4;
  std::string::string(&v48, "TitleSmallFontName");
  LOBYTE(v80) = 3;
  sub_1017C4E0(v76, v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  LOBYTE(v80) = 5;
  v63 = COERCE_FLOAT(v55);
  std::string::string(v55, &unk_101C0E3E);
  v64 = (char *)&v48;
  LOBYTE(v80) = 6;
  std::string::string(&v48, "TitleLargeFontName");
  LOBYTE(v80) = 5;
  sub_1017C4E0(v78, v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v63 = COERCE_FLOAT(v55);
  LOBYTE(v80) = 7;
  std::string::string(v55, &unk_101C0E3F);
  v64 = (char *)&v48;
  LOBYTE(v80) = 8;
  std::string::string(&v48, "HUDFontName");
  LOBYTE(v80) = 7;
  sub_1017C4E0(v79, v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v63 = COERCE_FLOAT(v55);
  LOBYTE(v80) = 9;
  std::string::string(v55, &unk_101C0E53);
  v64 = (char *)&v48;
  LOBYTE(v80) = 10;
  std::string::string(&v48, "DigitalFontName");
  LOBYTE(v80) = 9;
  sub_1017C4E0(v75, v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v63 = COERCE_FLOAT(v55);
  LOBYTE(v80) = 11;
  std::string::string(v55, &unk_101C0E67);
  v64 = (char *)&v48;
  LOBYTE(v80) = 12;
  std::string::string(&v48, "TextFontSize");
  LOBYTE(v80) = 11;
  v4 = COERCE_FLOAT(sub_1017C260(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X)));
  v63 = COERCE_FLOAT(v55);
  v5 = v4;
  std::string::string(v55, &unk_101C0E91);
  LOBYTE(v80) = 13;
  v64 = (char *)&v48;
  std::string::string(&v48, "TitleSmallFontSize");
  LOBYTE(v80) = 11;
  v6 = COERCE_FLOAT(sub_1017C260(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X)));
  v63 = COERCE_FLOAT(v55);
  v70 = v6;
  std::string::string(v55, &unk_101C0E92);
  v64 = (char *)&v48;
  LOBYTE(v80) = 14;
  std::string::string(&v48, "TitleLargeFontSize");
  LOBYTE(v80) = 11;
  v7 = COERCE_FLOAT(sub_1017C260(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X)));
  v63 = COERCE_FLOAT(v55);
  v71 = v7;
  std::string::string(v55, &unk_101C0E93);
  v64 = (char *)&v48;
  LOBYTE(v80) = 15;
  std::string::string(&v48, "HUDFontSize");
  LOBYTE(v80) = 11;
  v8 = COERCE_FLOAT(sub_1017C260(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X)));
  v63 = COERCE_FLOAT(v55);
  v72 = v8;
  std::string::string(v55, &unk_101C0EA7);
  v64 = (char *)&v48;
  LOBYTE(v80) = 16;
  std::string::string(&v48, "DigitalFontSize");
  LOBYTE(v80) = 11;
  v9 = COERCE_FLOAT(sub_1017C260(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X)));
  v64 = v55;
  v63 = v9;
  std::string::string(v55, &unk_101C0EBB);
  v66 = (char *)&v48;
  LOBYTE(v80) = 17;
  std::string::string(&v48, "TextFontBold");
  LOBYTE(v80) = 11;
  v10 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v64 = v55;
  LOBYTE(v67) = v10;
  std::string::string(v55, &unk_101C0EE5);
  LOBYTE(v80) = 18;
  v66 = (char *)&v48;
  std::string::string(&v48, "TitleSmallFontBold");
  LOBYTE(v80) = 11;
  v11 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v64 = v55;
  LOBYTE(v69) = v11;
  std::string::string(v55, &unk_101C0EE6);
  v66 = (char *)&v48;
  LOBYTE(v80) = 19;
  std::string::string(&v48, "TitleLargeFontBold");
  LOBYTE(v80) = 11;
  v12 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v64 = v55;
  LOBYTE(v73) = v12;
  std::string::string(v55, &unk_101C0EE7);
  v66 = (char *)&v48;
  LOBYTE(v80) = 20;
  std::string::string(&v48, "HUDFontBold");
  LOBYTE(v80) = 11;
  v13 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  v64 = v55;
  LOBYTE(v66) = v13;
  std::string::string(v55, &unk_101C0EFB);
  i = (char *)&v48;
  LOBYTE(v80) = 21;
  std::string::string(&v48, "DigitalFontBold");
  LOBYTE(v80) = 11;
  v14 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  i = v55;
  LOBYTE(v64) = v14;
  std::string::string(v55, &unk_101C0F0F);
  LODWORD(v68) = &v48;
  LOBYTE(v80) = 22;
  std::string::string(&v48, "TextFontShadow");
  LOBYTE(v80) = 11;
  v15 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  LODWORD(v68) = v55;
  v54 = &unk_101C0F3B;
  *((_BYTE *)this + 76) = v15;
  std::string::string(v55, v54);
  LOBYTE(v80) = 23;
  i = (char *)&v48;
  std::string::string(&v48, "TitleSmallFontShadow");
  LOBYTE(v80) = 11;
  v16 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  LODWORD(v68) = v55;
  v54 = &unk_101C0F51;
  *((_BYTE *)this + 77) = v16;
  std::string::string(v55, v54);
  i = (char *)&v48;
  LOBYTE(v80) = 24;
  std::string::string(&v48, "TitleLargeFontShadow");
  LOBYTE(v80) = 11;
  v17 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  LODWORD(v68) = v55;
  v54 = &unk_101C0F52;
  *((_BYTE *)this + 78) = v17;
  std::string::string(v55, v54);
  i = (char *)&v48;
  LOBYTE(v80) = 25;
  std::string::string(&v48, "HUDFontShadow");
  LOBYTE(v80) = 11;
  v18 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  LODWORD(v68) = v55;
  v54 = &unk_101C0F53;
  *((_BYTE *)this + 79) = v18;
  std::string::string(v55, v54);
  i = (char *)&v48;
  LOBYTE(v80) = 26;
  std::string::string(&v48, "DigitalFontShadow");
  LOBYTE(v80) = 11;
  v19 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  LODWORD(v68) = v55;
  v54 = &unk_101C0F69;
  *((_BYTE *)this + 80) = v19;
  std::string::string(v55, v54);
  i = (char *)&v48;
  LOBYTE(v80) = 27;
  std::string::string(&v48, "ClearType");
  LOBYTE(v80) = 11;
  v20 = sub_1017C0D0(v48, v49, v50, v51, v52, v53, v54, v55[0], v56, v57, LODWORD(v58), v59, LODWORD(X), HIDWORD(X));
  HIDWORD(X) = (char *)this + 60;
  LOBYTE(i) = v20;
  v21 = RenderDevice::Instance();
  v22 = D3DXCreateLine(*((_DWORD *)v21 + 427), HIDWORD(X));
  if ( v22 < 0 )
  {
    v23 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v24 = sub_1017EAEF(v22);
    (*v23)(dword_11249F38, " Error: %s, in: D3DXCreateLine(RenderDevice::Instance()->dev,&m_Line)", v24);
  }
  (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)this + 15) + 52))(*((_DWORD *)this + 15), 1);
  v25 = i;
  v26 = **((_DWORD **)this + 3);
  *(_QWORD *)&X = (unsigned int)i;
  v59 = v67;
  v58 = v5;
  v27 = std::string::c_str(v77);
  (*(void (__thiscall **)(_DWORD, int, float, char *, _DWORD, _DWORD))(v26 + 24))(
    *((_DWORD *)this + 3),
    v27,
    COERCE_FLOAT(LODWORD(v58)),
    v59,
    LODWORD(X),
    HIDWORD(X));
  v28 = **((_DWORD **)this + 4);
  *(_QWORD *)&X = (unsigned int)v25;
  v59 = v69;
  v58 = v70;
  v29 = std::string::c_str(v76);
  (*(void (__thiscall **)(_DWORD, int, float, char *, _DWORD, _DWORD))(v28 + 24))(
    *((_DWORD *)this + 4),
    v29,
    COERCE_FLOAT(LODWORD(v58)),
    v59,
    LODWORD(X),
    HIDWORD(X));
  v30 = **((_DWORD **)this + 5);
  *(_QWORD *)&X = (unsigned int)v25;
  v59 = v73;
  v58 = v71;
  v31 = std::string::c_str(v78);
  (*(void (__thiscall **)(_DWORD, int, float, char *, _DWORD, _DWORD))(v30 + 24))(
    *((_DWORD *)this + 5),
    v31,
    COERCE_FLOAT(LODWORD(v58)),
    v59,
    LODWORD(X),
    HIDWORD(X));
  v32 = **((_DWORD **)this + 6);
  *(_QWORD *)&X = (unsigned int)v25;
  v59 = v66;
  v58 = v72;
  v33 = std::string::c_str(v79);
  (*(void (__thiscall **)(_DWORD, int, float, char *, _DWORD, _DWORD))(v32 + 24))(
    *((_DWORD *)this + 6),
    v33,
    COERCE_FLOAT(LODWORD(v58)),
    v59,
    LODWORD(X),
    HIDWORD(X));
  v34 = **((_DWORD **)this + 7);
  *(_QWORD *)&X = (unsigned int)v25;
  v59 = v64;
  v58 = v63;
  v35 = std::string::c_str(v75);
  (*(void (__thiscall **)(_DWORD, int, float, char *, _DWORD, _DWORD))(v34 + 24))(
    *((_DWORD *)this + 7),
    v35,
    COERCE_FLOAT(LODWORD(v58)),
    v59,
    LODWORD(X),
    HIDWORD(X));
  v36 = 0;
  for ( i = 0; ; i += 52 )
  {
    v37 = *((_DWORD *)this + 9);
    if ( !v37 || v36 >= (*((_DWORD *)this + 10) - v37) / 52 )
      break;
    v38 = *((_DWORD *)this + 9);
    if ( !v38 || v36 >= (*((_DWORD *)this + 10) - v38) / 52 )
      invalid_parameter_noinfo();
    v39 = &i[*((_DWORD *)this + 9)];
    v40 = RenderDevice::Instance();
    LODWORD(v68) = *((_DWORD *)v39 + 9) * (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v40 + 296))(v40);
    v63 = (double)(unsigned int)v68 * 0.0009765625;
    v41 = ceil(v63);
    v42 = *(int **)v39;
    v63 = v41;
    v43 = v63;
    v44 = (unsigned __int8)v39[42];
    LODWORD(v63) = (unsigned __int16)v67 | 0xC00;
    HIDWORD(X) = v44;
    v45 = (char *)(unsigned __int8)v39[40];
    v68 = (__int64)v43;
    *((_DWORD *)v39 + 8) = (__int64)v43;
    v46 = *v42;
    LODWORD(X) = (unsigned __int8)v39[41];
    v59 = v45;
    LODWORD(v58) = (__int64)v43;
    v47 = std::string::c_str(v39 + 4);
    (*(void (__thiscall **)(_DWORD, int, float, char *, _DWORD, _DWORD))(v46 + 24))(
      *(_DWORD *)v39,
      v47,
      COERCE_FLOAT(LODWORD(v58)),
      v59,
      LODWORD(X),
      HIDWORD(X));
    ++v36;
  }
  LOBYTE(v80) = 9;
  std::string::~string(v75);
  LOBYTE(v80) = 7;
  std::string::~string(v79);
  LOBYTE(v80) = 5;
  std::string::~string(v78);
  LOBYTE(v80) = 3;
  std::string::~string(v76);
  LOBYTE(v80) = 0;
  std::string::~string(v77);
  v80 = -1;
  sub_10029CA0(v74);
}
