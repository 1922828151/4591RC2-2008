/*
 * func-name: ??0Effect_Laser@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10080340
 * callers: 0x10010a5a
 * callees: 0x1001aa87
 */

Effect_Laser *__thiscall Effect_Laser::Effect_Laser(Effect_Laser *this, struct World *a2)
{
  Editor *v3; // eax
  float v4; // ecx
  float v5; // eax
  int v6; // eax
  World *v7; // ecx
  Editor *v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // [esp+420h] [ebp-FCh] BYREF
  int v23; // [esp+424h] [ebp-F8h]
  int v24; // [esp+428h] [ebp-F4h]
  int v25; // [esp+42Ch] [ebp-F0h]
  int v26; // [esp+430h] [ebp-ECh]
  int v27; // [esp+434h] [ebp-E8h]
  int v28; // [esp+438h] [ebp-E4h]
  char *v29; // [esp+43Ch] [ebp-E0h]
  int v30; // [esp+440h] [ebp-DCh] BYREF
  int v31; // [esp+444h] [ebp-D8h]
  int v32; // [esp+448h] [ebp-D4h]
  int v33; // [esp+44Ch] [ebp-D0h]
  int v34; // [esp+450h] [ebp-CCh]
  int v35; // [esp+454h] [ebp-C8h]
  int v36; // [esp+458h] [ebp-C4h] BYREF
  const char *v37; // [esp+45Ch] [ebp-C0h] BYREF
  int v38; // [esp+460h] [ebp-BCh] BYREF
  int v39; // [esp+464h] [ebp-B8h]
  int v40; // [esp+468h] [ebp-B4h]
  int v41; // [esp+46Ch] [ebp-B0h]
  int v42; // [esp+470h] [ebp-ACh]
  int v43; // [esp+474h] [ebp-A8h]
  int v44; // [esp+478h] [ebp-A4h]
  int v45; // [esp+47Ch] [ebp-A0h]
  Effect_Laser *v46; // [esp+494h] [ebp-88h]
  const char **v47; // [esp+498h] [ebp-84h]
  int *v48; // [esp+49Ch] [ebp-80h]
  const char **v49; // [esp+4A0h] [ebp-7Ch]
  float v50; // [esp+4A4h] [ebp-78h]
  float v51; // [esp+4A8h] [ebp-74h]
  float v52; // [esp+4ACh] [ebp-70h]
  _BYTE v53[96]; // [esp+4B0h] [ebp-6Ch] BYREF
  int v54; // [esp+518h] [ebp-4h]

  v46 = this;
  Effect_Base::Effect_Base(this, a2);
  v54 = 0;
  *(_DWORD *)this = &Effect_Laser::`vftable';
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v45 = 1;
    v44 = 0;
    v43 = 0;
    v47 = (const char **)&v36;
    std::string::string(&v36, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  *((float *)this + 280) = 0.2;
  *((float *)this + 279) = 0.2;
  v45 = 1;
  *((float *)this + 288) = 0.0;
  v47 = (const char **)&v38;
  *((float *)this + 286) = 0.0;
  *((_BYTE *)this + 1156) = 0;
  *((float *)this + 287) = 0.0;
  v50 = 10.0;
  *((float *)this + 267) = 0.0;
  v4 = v50;
  *((float *)this + 268) = 0.0;
  v51 = 0.0;
  v52 = 0.0;
  *((float *)this + 270) = v4;
  *((float *)this + 269) = 0.0;
  v5 = v52;
  *((float *)this + 284) = 1.0;
  *((float *)this + 271) = 0.0;
  v37 = "DefaultTexture.dds";
  *((float *)this + 272) = v5;
  std::string::string(&v38, v37);
  v6 = Precacher::CacheTexture();
  v7 = (World *)*((_DWORD *)this + 178);
  *((_DWORD *)this + 285) = v6;
  if ( v7 && World::IsLoading(v7) || (v8 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v8)) )
  {
    v45 = 0;
    v44 = 1;
    v47 = &v37;
    std::string::string(&v37, &unk_1030B444);
    v48 = &v30;
    LOBYTE(v54) = 1;
    std::string::string(&v30, &unk_1030B454);
    v29 = (char *)this + 1152;
    v49 = (const char **)&v22;
    LOBYTE(v54) = 2;
    std::string::string(&v22, "TileVBias");
    LOBYTE(v54) = 0;
    v9 = EditorVar::EditorVar(
           v53,
           v22,
           v23,
           v24,
           v25,
           v26,
           v27,
           v28,
           v29,
           v30,
           v31,
           v32,
           v33,
           v34,
           v35,
           v36,
           v37,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45);
    LOBYTE(v54) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B468);
    v48 = &v30;
    LOBYTE(v54) = 4;
    std::string::string(&v30, &unk_1030B478);
    v29 = (char *)this + 1144;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 5;
    std::string::string(&v22, "SpeedV");
    LOBYTE(v54) = 0;
    v10 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B488);
    v48 = &v30;
    LOBYTE(v54) = 7;
    std::string::string(&v30, &unk_1030B4A0);
    v29 = (char *)this + 1148;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 8;
    std::string::string(&v22, "TimeScale");
    LOBYTE(v54) = 0;
    v11 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B4B4);
    v48 = &v30;
    LOBYTE(v54) = 10;
    std::string::string(&v30, &unk_1030B4BC);
    v29 = (char *)this + 1068;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 11;
    std::string::string(&v22, "PosStartX");
    LOBYTE(v54) = 0;
    v12 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B4D0);
    v48 = &v30;
    LOBYTE(v54) = 13;
    std::string::string(&v30, &unk_1030B4D8);
    v29 = (char *)this + 1072;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 14;
    std::string::string(&v22, "PosStartY");
    LOBYTE(v54) = 0;
    v13 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B4EC);
    v48 = &v30;
    LOBYTE(v54) = 16;
    std::string::string(&v30, &unk_1030B4F4);
    v29 = (char *)this + 1076;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 17;
    std::string::string(&v22, "PosStartZ");
    LOBYTE(v54) = 0;
    v14 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B508);
    v48 = &v30;
    LOBYTE(v54) = 19;
    std::string::string(&v30, &unk_1030B510);
    v29 = (char *)this + 1080;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 20;
    std::string::string(&v22, "PosEndX");
    LOBYTE(v54) = 0;
    v15 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B520);
    v48 = &v30;
    LOBYTE(v54) = 22;
    std::string::string(&v30, &unk_1030B528);
    v29 = (char *)this + 1084;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 23;
    std::string::string(&v22, "PosEndY");
    LOBYTE(v54) = 0;
    v16 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B538);
    v48 = &v30;
    LOBYTE(v54) = 25;
    std::string::string(&v30, &unk_1030B540);
    v29 = (char *)this + 1088;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 26;
    std::string::string(&v22, "PosEndZ");
    LOBYTE(v54) = 0;
    v17 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B550);
    v48 = &v30;
    LOBYTE(v54) = 28;
    std::string::string(&v30, &unk_1030B558);
    v29 = (char *)this + 1136;
    LOBYTE(v54) = 29;
    v47 = (const char **)&v22;
    std::string::string(&v22, "Width");
    LOBYTE(v54) = 0;
    v18 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B568);
    v48 = &v30;
    LOBYTE(v54) = 31;
    std::string::string(&v30, &unk_1030B57C);
    v29 = (char *)this + 1156;
    v47 = (const char **)&v22;
    LOBYTE(v54) = 32;
    std::string::string(&v22, "Fixed");
    LOBYTE(v54) = 0;
    v19 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v19);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v45 = 0;
    v44 = 1;
    v49 = &v37;
    std::string::string(&v37, &unk_1030B58C);
    v48 = &v30;
    LOBYTE(v54) = 34;
    std::string::string(&v30, &unk_1030B598);
    v29 = (char *)*((_DWORD *)this + 285);
    v47 = (const char **)&v22;
    LOBYTE(v54) = 35;
    std::string::string(&v22, "Texture");
    LOBYTE(v54) = 0;
    v20 = EditorVar::EditorVar(
            v53,
            v22,
            v23,
            v24,
            v25,
            v26,
            v27,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45);
    LOBYTE(v54) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
  }
  return this;
}
