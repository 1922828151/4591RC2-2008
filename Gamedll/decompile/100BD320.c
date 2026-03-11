/*
 * func-name: sub_100BD320
 * func-address: 0x100bd320
 * callers: 0x100080ad
 * callees: 0x1001aa87
 */

int __thiscall sub_100BD320(int this, struct World *a2)
{
  Editor *v3; // eax
  int v4; // eax
  int v5; // eax
  World *v6; // ecx
  Editor *v7; // eax
  int v8; // eax
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
  int v21; // eax
  int v22; // eax
  int v24; // [esp+55Ch] [ebp-ECh] BYREF
  int v25; // [esp+560h] [ebp-E8h]
  int v26; // [esp+564h] [ebp-E4h]
  int v27; // [esp+568h] [ebp-E0h]
  int v28; // [esp+56Ch] [ebp-DCh]
  int v29; // [esp+570h] [ebp-D8h]
  int v30; // [esp+574h] [ebp-D4h]
  int v31; // [esp+578h] [ebp-D0h]
  int v32; // [esp+57Ch] [ebp-CCh] BYREF
  int v33; // [esp+580h] [ebp-C8h]
  int v34; // [esp+584h] [ebp-C4h]
  int v35; // [esp+588h] [ebp-C0h]
  int v36; // [esp+58Ch] [ebp-BCh]
  int v37; // [esp+590h] [ebp-B8h]
  int v38; // [esp+594h] [ebp-B4h] BYREF
  const char *v39; // [esp+598h] [ebp-B0h] BYREF
  int v40; // [esp+59Ch] [ebp-ACh] BYREF
  int v41; // [esp+5A0h] [ebp-A8h]
  int v42; // [esp+5A4h] [ebp-A4h]
  int v43; // [esp+5A8h] [ebp-A0h]
  int v44; // [esp+5ACh] [ebp-9Ch]
  int v45; // [esp+5B0h] [ebp-98h]
  int v46; // [esp+5B4h] [ebp-94h]
  int v47; // [esp+5B8h] [ebp-90h]
  int v48; // [esp+5BCh] [ebp-8Ch]
  int v49; // [esp+5C0h] [ebp-88h]
  int v50; // [esp+5D0h] [ebp-78h]
  int *v51; // [esp+5D4h] [ebp-74h]
  int *v52; // [esp+5D8h] [ebp-70h]
  _BYTE v53[96]; // [esp+5DCh] [ebp-6Ch] BYREF
  int v54; // [esp+644h] [ebp-4h]

  v50 = this;
  Effect_Base::Effect_Base((Effect_Base *)this, a2);
  *(float *)(this + 1144) = 1.0;
  *(float *)(this + 1148) = 1.0;
  *(float *)(this + 1152) = 1.0;
  v54 = 0;
  *(float *)(this + 1156) = 0.5;
  *(_DWORD *)this = &Effect_WaterDecal::`vftable';
  *(float *)(this + 1160) = 1.0;
  *(float *)(this + 1164) = 0.0;
  *(float *)(this + 1168) = 0.0;
  *(float *)(this + 1188) = 0.0;
  *(float *)(this + 1192) = 0.0;
  *(float *)(this + 1172) = 1.0;
  *(float *)(this + 1176) = 1.0;
  *(float *)(this + 1184) = 1.0;
  *(float *)(this + 1180) = 0.5;
  v3 = (Editor *)Editor::Instance(v48, v49);
  if ( Editor::GetEditorMode(v3) )
  {
    v47 = 1;
    v46 = 0;
    v45 = 0;
    std::string::string(&v38, "ArrowTiny.xml");
    *(_DWORD *)(this + 716) = Precacher::CacheModel();
  }
  else
  {
    *(_DWORD *)(this + 716) = 0;
  }
  v47 = 1;
  std::string::string(&v40, "DefaultTexture.dds");
  v4 = Precacher::CacheTexture();
  v47 = 1;
  v39 = "DefaultTexture.dds";
  *(_DWORD *)(this + 1136) = v4;
  std::string::string(&v40, v39);
  v5 = Precacher::CacheTexture();
  v6 = *(World **)(this + 712);
  *(_DWORD *)(this + 1140) = v5;
  if ( v6 && World::IsLoading(v6) || (v7 = (Editor *)Editor::Instance(v48, v49), Editor::GetEditorMode(v7)) )
  {
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F090);
    v51 = &v32;
    LOBYTE(v54) = 1;
    std::string::string(&v32, "Decal");
    v31 = this + 1144;
    v52 = &v24;
    LOBYTE(v54) = 2;
    std::string::string(&v24, "SpeedBias");
    LOBYTE(v54) = 0;
    v8 = EditorVar::EditorVar(
           v53,
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
           v45,
           v46,
           v47);
    LOBYTE(v54) = 3;
    std::vector<EditorVar>::push_back(this + 424, v8);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F0BC);
    v52 = &v32;
    LOBYTE(v54) = 4;
    std::string::string(&v32, "Decal");
    v31 = *(_DWORD *)(this + 1136);
    v51 = &v24;
    LOBYTE(v54) = 5;
    std::string::string(&v24, "StandTexture");
    LOBYTE(v54) = 0;
    v9 = EditorVar::EditorVar(
           v53,
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
           v45,
           v46,
           v47);
    LOBYTE(v54) = 6;
    std::vector<EditorVar>::push_back(this + 424, v9);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F0EC);
    v52 = &v32;
    LOBYTE(v54) = 7;
    std::string::string(&v32, "Decal");
    v31 = this + 1148;
    v51 = &v24;
    LOBYTE(v54) = 8;
    std::string::string(&v24, "StandNodeSize");
    LOBYTE(v54) = 0;
    v10 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 9;
    std::vector<EditorVar>::push_back(this + 424, v10);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F11C);
    v52 = &v32;
    LOBYTE(v54) = 10;
    std::string::string(&v32, "Decal");
    v31 = this + 1152;
    v51 = &v24;
    LOBYTE(v54) = 11;
    std::string::string(&v24, "StandNodeSizeVar");
    LOBYTE(v54) = 0;
    v11 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 12;
    std::vector<EditorVar>::push_back(this + 424, v11);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F150);
    v52 = &v32;
    LOBYTE(v54) = 13;
    std::string::string(&v32, "Decal");
    v31 = this + 1156;
    v51 = &v24;
    LOBYTE(v54) = 14;
    std::string::string(&v24, "StandNodeInterval");
    LOBYTE(v54) = 0;
    v12 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 15;
    std::vector<EditorVar>::push_back(this + 424, v12);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F184);
    v52 = &v32;
    LOBYTE(v54) = 16;
    std::string::string(&v32, "Decal");
    v31 = this + 1160;
    v51 = &v24;
    LOBYTE(v54) = 17;
    std::string::string(&v24, "StandNodeLife");
    LOBYTE(v54) = 0;
    v13 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 18;
    std::vector<EditorVar>::push_back(this + 424, v13);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F1B4);
    v52 = &v32;
    LOBYTE(v54) = 19;
    std::string::string(&v32, "Decal");
    v31 = this + 1164;
    v51 = &v24;
    LOBYTE(v54) = 20;
    std::string::string(&v24, "StandNodeFadein");
    LOBYTE(v54) = 0;
    v14 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 21;
    std::vector<EditorVar>::push_back(this + 424, v14);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F1E4);
    v52 = &v32;
    LOBYTE(v54) = 22;
    std::string::string(&v32, "Decal");
    v31 = this + 1168;
    v51 = &v24;
    LOBYTE(v54) = 23;
    std::string::string(&v24, "StandNodeFadeout");
    LOBYTE(v54) = 0;
    v15 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 24;
    std::vector<EditorVar>::push_back(this + 424, v15);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F218);
    v52 = &v32;
    LOBYTE(v54) = 25;
    std::string::string(&v32, "Decal");
    v31 = *(_DWORD *)(this + 1140);
    v51 = &v24;
    LOBYTE(v54) = 26;
    std::string::string(&v24, "MoveTexture");
    LOBYTE(v54) = 0;
    v16 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 27;
    std::vector<EditorVar>::push_back(this + 424, v16);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F244);
    v52 = &v32;
    LOBYTE(v54) = 28;
    std::string::string(&v32, "Decal");
    v31 = this + 1172;
    LOBYTE(v54) = 29;
    v51 = &v24;
    std::string::string(&v24, "MoveNodeSize");
    LOBYTE(v54) = 0;
    v17 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 30;
    std::vector<EditorVar>::push_back(this + 424, v17);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F274);
    v52 = &v32;
    LOBYTE(v54) = 31;
    std::string::string(&v32, "Decal");
    v31 = this + 1176;
    v51 = &v24;
    LOBYTE(v54) = 32;
    std::string::string(&v24, "MoveNodeSizeVar");
    LOBYTE(v54) = 0;
    v18 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 33;
    std::vector<EditorVar>::push_back(this + 424, v18);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F2A4);
    v52 = &v32;
    LOBYTE(v54) = 34;
    std::string::string(&v32, "Decal");
    v31 = this + 1180;
    v51 = &v24;
    LOBYTE(v54) = 35;
    std::string::string(&v24, "MoveNodeInterval");
    LOBYTE(v54) = 0;
    v19 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 36;
    std::vector<EditorVar>::push_back(this + 424, v19);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F2D8);
    v52 = &v32;
    LOBYTE(v54) = 37;
    std::string::string(&v32, "Decal");
    v31 = this + 1184;
    v51 = &v24;
    LOBYTE(v54) = 38;
    std::string::string(&v24, "MoveNodeLife");
    LOBYTE(v54) = 0;
    v20 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 39;
    std::vector<EditorVar>::push_back(this + 424, v20);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F308);
    v52 = &v32;
    LOBYTE(v54) = 40;
    std::string::string(&v32, "Decal");
    v31 = this + 1188;
    v51 = &v24;
    LOBYTE(v54) = 41;
    std::string::string(&v24, "MoveNodeFadein");
    LOBYTE(v54) = 0;
    v21 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 42;
    std::vector<EditorVar>::push_back(this + 424, v21);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
    v47 = 0;
    v46 = 1;
    std::string::string(&v39, &unk_1030F338);
    LOBYTE(v54) = 43;
    v52 = &v32;
    std::string::string(&v32, "Decal");
    v31 = this + 1192;
    v51 = &v24;
    LOBYTE(v54) = 44;
    std::string::string(&v24, "MoveNodeFadeout");
    LOBYTE(v54) = 0;
    v22 = EditorVar::EditorVar(
            v53,
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
            v45,
            v46,
            v47);
    LOBYTE(v54) = 45;
    std::vector<EditorVar>::push_back(this + 424, v22);
    LOBYTE(v54) = 0;
    EditorVar::~EditorVar((EditorVar *)v53);
  }
  return this;
}
