/*
 * func-name: ??0Effect_DynamicLasers@@QAE@PAVWorld@@@Z_0
 * func-address: 0x1007f410
 * callers: 0x10006cad
 * callees: 0x1001aa87
 */

Effect_DynamicLasers *__thiscall Effect_DynamicLasers::Effect_DynamicLasers(
        Effect_DynamicLasers *this,
        struct World *a2)
{
  Editor *v3; // eax
  int v4; // eax
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v14; // [esp+1C8h] [ebp-FCh] BYREF
  int v15; // [esp+1CCh] [ebp-F8h]
  int v16; // [esp+1D0h] [ebp-F4h]
  int v17; // [esp+1D4h] [ebp-F0h]
  int v18; // [esp+1D8h] [ebp-ECh]
  int v19; // [esp+1DCh] [ebp-E8h]
  int v20; // [esp+1E0h] [ebp-E4h]
  char *v21; // [esp+1E4h] [ebp-E0h]
  int v22; // [esp+1E8h] [ebp-DCh] BYREF
  int v23; // [esp+1ECh] [ebp-D8h]
  int v24; // [esp+1F0h] [ebp-D4h]
  int v25; // [esp+1F4h] [ebp-D0h]
  int v26; // [esp+1F8h] [ebp-CCh]
  int v27; // [esp+1FCh] [ebp-C8h]
  int v28; // [esp+200h] [ebp-C4h] BYREF
  const char *v29; // [esp+204h] [ebp-C0h] BYREF
  int v30; // [esp+208h] [ebp-BCh] BYREF
  int v31; // [esp+20Ch] [ebp-B8h]
  int v32; // [esp+210h] [ebp-B4h]
  int v33; // [esp+214h] [ebp-B0h]
  int v34; // [esp+218h] [ebp-ACh]
  int v35; // [esp+21Ch] [ebp-A8h]
  int v36; // [esp+220h] [ebp-A4h]
  int v37; // [esp+224h] [ebp-A0h]
  Effect_DynamicLasers *v38; // [esp+23Ch] [ebp-88h]
  const char **v39; // [esp+240h] [ebp-84h]
  int *v40; // [esp+244h] [ebp-80h]
  const char **v41; // [esp+248h] [ebp-7Ch]
  float v42; // [esp+24Ch] [ebp-78h]
  float v43; // [esp+250h] [ebp-74h]
  float v44; // [esp+254h] [ebp-70h]
  _BYTE v45[96]; // [esp+258h] [ebp-6Ch] BYREF
  int v46; // [esp+2C0h] [ebp-4h]

  v38 = this;
  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_DynamicLasers::`vftable';
  *((float *)this + 290) = 0.0;
  *((float *)this + 291) = 0.0;
  *((float *)this + 292) = 0.0;
  v46 = 0;
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v37 = 1;
    v36 = 0;
    v35 = 0;
    v39 = (const char **)&v28;
    std::string::string(&v28, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  *((float *)this + 287) = 1.0;
  v37 = 1;
  *((float *)this + 289) = 0.2;
  v39 = (const char **)&v30;
  *((float *)this + 288) = 0.2;
  *((_DWORD *)this + 286) = 40;
  *((float *)this + 285) = 1.0;
  v42 = 0.0;
  v43 = 0.0;
  v44 = 0.0;
  *((float *)this + 290) = 0.0;
  *((float *)this + 293) = 999.0;
  *((float *)this + 291) = 0.0;
  v29 = "DefaultTexture.dds";
  *((float *)this + 292) = 0.0;
  std::string::string(&v30, v29);
  v4 = Precacher::CacheTexture();
  v5 = (World *)*((_DWORD *)this + 178);
  *((_DWORD *)this + 284) = v4;
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v6)) )
  {
    v37 = 0;
    v36 = 1;
    v39 = &v29;
    std::string::string(&v29, &unk_1030B214);
    v40 = &v22;
    LOBYTE(v46) = 1;
    std::string::string(&v22, &unk_1030B224);
    v21 = (char *)this + 1144;
    v41 = (const char **)&v14;
    LOBYTE(v46) = 2;
    std::string::string(&v14, "MaxNodes");
    LOBYTE(v46) = 0;
    v7 = EditorVar::EditorVar(
           v45,
           v14,
           v15,
           v16,
           v17,
           v18,
           v19,
           v20,
           v21,
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
           v37);
    LOBYTE(v46) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v46) = 0;
    EditorVar::~EditorVar((EditorVar *)v45);
    v37 = 0;
    v36 = 1;
    v41 = &v29;
    std::string::string(&v29, &unk_1030B23C);
    v40 = &v22;
    LOBYTE(v46) = 4;
    std::string::string(&v22, &unk_1030B250);
    v21 = (char *)this + 1148;
    v39 = (const char **)&v14;
    LOBYTE(v46) = 5;
    std::string::string(&v14, "NodeLifeTime");
    LOBYTE(v46) = 0;
    v8 = EditorVar::EditorVar(
           v45,
           v14,
           v15,
           v16,
           v17,
           v18,
           v19,
           v20,
           v21,
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
           v37);
    LOBYTE(v46) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v46) = 0;
    EditorVar::~EditorVar((EditorVar *)v45);
    v37 = 0;
    v36 = 1;
    v41 = &v29;
    std::string::string(&v29, &unk_1030B26C);
    v40 = &v22;
    LOBYTE(v46) = 7;
    std::string::string(&v22, &unk_1030B27C);
    v21 = (char *)this + 1152;
    v39 = (const char **)&v14;
    LOBYTE(v46) = 8;
    std::string::string(&v14, "NodeFadeinTime");
    LOBYTE(v46) = 0;
    v9 = EditorVar::EditorVar(
           v45,
           v14,
           v15,
           v16,
           v17,
           v18,
           v19,
           v20,
           v21,
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
           v37);
    LOBYTE(v46) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v46) = 0;
    EditorVar::~EditorVar((EditorVar *)v45);
    v37 = 0;
    v36 = 1;
    v41 = &v29;
    std::string::string(&v29, &unk_1030B298);
    v40 = &v22;
    LOBYTE(v46) = 10;
    std::string::string(&v22, &unk_1030B2A8);
    v21 = (char *)this + 1156;
    v39 = (const char **)&v14;
    LOBYTE(v46) = 11;
    std::string::string(&v14, "NodeFadeoutTime");
    LOBYTE(v46) = 0;
    v10 = EditorVar::EditorVar(
            v45,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
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
            v37);
    LOBYTE(v46) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v46) = 0;
    EditorVar::~EditorVar((EditorVar *)v45);
    v37 = 0;
    v36 = 1;
    v41 = &v29;
    std::string::string(&v29, &unk_1030B2C4);
    v40 = &v22;
    LOBYTE(v46) = 13;
    std::string::string(&v22, &unk_1030B2CC);
    v21 = (char *)this + 1140;
    v39 = (const char **)&v14;
    LOBYTE(v46) = 14;
    std::string::string(&v14, "Width");
    LOBYTE(v46) = 0;
    v11 = EditorVar::EditorVar(
            v45,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
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
            v37);
    LOBYTE(v46) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v46) = 0;
    EditorVar::~EditorVar((EditorVar *)v45);
    v37 = 0;
    v36 = 1;
    v41 = &v29;
    std::string::string(&v29, &unk_1030B2E0);
    v40 = &v22;
    LOBYTE(v46) = 16;
    std::string::string(&v22, &unk_1030B2EC);
    v21 = (char *)*((_DWORD *)this + 284);
    v39 = (const char **)&v14;
    LOBYTE(v46) = 17;
    std::string::string(&v14, "Texture");
    LOBYTE(v46) = 0;
    v12 = EditorVar::EditorVar(
            v45,
            v14,
            v15,
            v16,
            v17,
            v18,
            v19,
            v20,
            v21,
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
            v37);
    LOBYTE(v46) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v46) = 0;
    EditorVar::~EditorVar((EditorVar *)v45);
  }
  return this;
}
