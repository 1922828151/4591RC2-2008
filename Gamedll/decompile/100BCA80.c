/*
 * func-name: sub_100BCA80
 * func-address: 0x100bca80
 * callers: 0x10010af5
 * callees: 0x1001aa87
 */

int __thiscall sub_100BCA80(int this, struct World *a2)
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
  int v13; // eax
  int v14; // eax
  int v16; // [esp+290h] [ebp-FCh] BYREF
  int v17; // [esp+294h] [ebp-F8h]
  int v18; // [esp+298h] [ebp-F4h]
  int v19; // [esp+29Ch] [ebp-F0h]
  int v20; // [esp+2A0h] [ebp-ECh]
  int v21; // [esp+2A4h] [ebp-E8h]
  int v22; // [esp+2A8h] [ebp-E4h]
  int v23; // [esp+2ACh] [ebp-E0h]
  int v24; // [esp+2B0h] [ebp-DCh] BYREF
  int v25; // [esp+2B4h] [ebp-D8h]
  int v26; // [esp+2B8h] [ebp-D4h]
  int v27; // [esp+2BCh] [ebp-D0h]
  int v28; // [esp+2C0h] [ebp-CCh]
  int v29; // [esp+2C4h] [ebp-C8h]
  int v30; // [esp+2C8h] [ebp-C4h] BYREF
  const char *v31; // [esp+2CCh] [ebp-C0h] BYREF
  int v32; // [esp+2D0h] [ebp-BCh] BYREF
  int v33; // [esp+2D4h] [ebp-B8h]
  int v34; // [esp+2D8h] [ebp-B4h]
  int v35; // [esp+2DCh] [ebp-B0h]
  int v36; // [esp+2E0h] [ebp-ACh]
  int v37; // [esp+2E4h] [ebp-A8h]
  int v38; // [esp+2E8h] [ebp-A4h]
  int v39; // [esp+2ECh] [ebp-A0h]
  int v40; // [esp+2F0h] [ebp-9Ch]
  int v41; // [esp+2F4h] [ebp-98h]
  int v42; // [esp+304h] [ebp-88h]
  const char **v43; // [esp+308h] [ebp-84h]
  int *v44; // [esp+30Ch] [ebp-80h]
  const char **v45; // [esp+310h] [ebp-7Ch]
  float v46; // [esp+314h] [ebp-78h]
  float v47; // [esp+318h] [ebp-74h]
  float v48; // [esp+31Ch] [ebp-70h]
  _BYTE v49[96]; // [esp+320h] [ebp-6Ch] BYREF
  int v50; // [esp+388h] [ebp-4h]

  v42 = this;
  Effect_Base::Effect_Base((Effect_Base *)this, a2);
  *(_DWORD *)this = &DecalActor::`vftable';
  *(float *)(this + 1168) = 0.0;
  *(float *)(this + 1172) = 0.0;
  *(float *)(this + 1176) = 0.0;
  v50 = 0;
  v3 = (Editor *)Editor::Instance(v40, v41);
  if ( Editor::GetEditorMode(v3) )
  {
    v39 = 1;
    v38 = 0;
    v37 = 0;
    v43 = (const char **)&v30;
    std::string::string(&v30, "ArrowTiny.xml");
    *(_DWORD *)(this + 716) = Precacher::CacheModel();
  }
  else
  {
    *(_DWORD *)(this + 716) = 0;
  }
  v46 = 3.4028235e38;
  v47 = 3.4028235e38;
  v48 = 3.4028235e38;
  v39 = 1;
  *(float *)(this + 1148) = 1.0;
  *(float *)(this + 1168) = 3.4028235e38;
  *(float *)(this + 1140) = 2.0;
  v43 = (const char **)&v32;
  *(float *)(this + 1172) = 3.4028235e38;
  *(float *)(this + 1152) = 1.0;
  v31 = "DefaultTexture.dds";
  *(_BYTE *)(this + 1133) = 0;
  *(float *)(this + 1176) = 3.4028235e38;
  *(_BYTE *)(this + 1161) = 0;
  *(_BYTE *)(this + 1144) = 0;
  *(_DWORD *)(this + 1092) = 6;
  std::string::string(&v32, v31);
  v4 = Precacher::CacheTexture();
  v5 = *(World **)(this + 712);
  *(float *)(this + 1164) = 0.5;
  *(float *)(this + 1156) = 0.0;
  *(_DWORD *)(this + 1136) = v4;
  *(_BYTE *)(this + 1160) = 1;
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v40, v41), Editor::GetEditorMode(v6)) )
  {
    v39 = 0;
    v38 = 1;
    v43 = &v31;
    std::string::string(&v31, &unk_1030ED78);
    v44 = &v24;
    LOBYTE(v50) = 1;
    std::string::string(&v24, "Decal");
    v23 = this + 1161;
    v45 = (const char **)&v16;
    LOBYTE(v50) = 2;
    std::string::string(&v16, "IsProject");
    LOBYTE(v50) = 0;
    v7 = EditorVar::EditorVar(
           v49,
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
           v37,
           v38,
           v39);
    LOBYTE(v50) = 3;
    std::vector<EditorVar>::push_back(this + 424, v7);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
    v39 = 0;
    v38 = 1;
    v45 = &v31;
    std::string::string(&v31, &unk_1030EDA4);
    v44 = &v24;
    LOBYTE(v50) = 4;
    std::string::string(&v24, "Decal");
    v23 = this + 1164;
    v43 = (const char **)&v16;
    LOBYTE(v50) = 5;
    std::string::string(&v16, "DetectLenght");
    LOBYTE(v50) = 0;
    v8 = EditorVar::EditorVar(
           v49,
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
           v37,
           v38,
           v39);
    LOBYTE(v50) = 6;
    std::vector<EditorVar>::push_back(this + 424, v8);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
    v39 = 0;
    v38 = 1;
    v45 = &v31;
    std::string::string(&v31, "Width & height of the decal in meters.");
    v44 = &v24;
    LOBYTE(v50) = 7;
    std::string::string(&v24, "Decal");
    v23 = this + 1140;
    v43 = (const char **)&v16;
    LOBYTE(v50) = 8;
    std::string::string(&v16, "Size");
    LOBYTE(v50) = 0;
    v9 = EditorVar::EditorVar(
           v49,
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
           v37,
           v38,
           v39);
    LOBYTE(v50) = 9;
    std::vector<EditorVar>::push_back(this + 424, v9);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
    v39 = 0;
    v38 = 1;
    v45 = &v31;
    std::string::string(&v31, "Texture filename used for the decal.");
    v44 = &v24;
    LOBYTE(v50) = 10;
    std::string::string(&v24, "Decal");
    v23 = *(_DWORD *)(this + 1136);
    v43 = (const char **)&v16;
    LOBYTE(v50) = 11;
    std::string::string(&v16, "Texture Filename");
    LOBYTE(v50) = 0;
    v10 = EditorVar::EditorVar(
            v49,
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
            v37,
            v38,
            v39);
    LOBYTE(v50) = 12;
    std::vector<EditorVar>::push_back(this + 424, v10);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
    v39 = 0;
    v38 = 1;
    v45 = &v31;
    std::string::string(
      &v31,
      "Instantly and permanently converts the decal into a Prefab mesh for material application. Activate this when you'r"
      "e finished placing your decal.");
    v44 = &v24;
    LOBYTE(v50) = 13;
    std::string::string(&v24, "Decal");
    v23 = this + 1144;
    v43 = (const char **)&v16;
    LOBYTE(v50) = 14;
    std::string::string(&v16, "Convert To Prefab-Mesh");
    LOBYTE(v50) = 0;
    v11 = EditorVar::EditorVar(
            v49,
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
            v37,
            v38,
            v39);
    LOBYTE(v50) = 15;
    std::vector<EditorVar>::push_back(this + 424, v11);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
    v39 = 0;
    v38 = 1;
    v45 = &v31;
    std::string::string(&v31, "The percent scale of the UV projection onto the decal.");
    v44 = &v24;
    LOBYTE(v50) = 16;
    std::string::string(&v24, "Decal");
    v23 = this + 1148;
    v43 = (const char **)&v16;
    LOBYTE(v50) = 17;
    std::string::string(&v16, "UV Projection Scale");
    LOBYTE(v50) = 0;
    v12 = EditorVar::EditorVar(
            v49,
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
            v37,
            v38,
            v39);
    LOBYTE(v50) = 18;
    std::vector<EditorVar>::push_back(this + 424, v12);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
    v39 = 0;
    v38 = 1;
    v45 = &v31;
    std::string::string(&v31, &unk_1030EF50);
    v44 = &v24;
    LOBYTE(v50) = 19;
    std::string::string(&v24, "Decal");
    v23 = this + 1152;
    v43 = (const char **)&v16;
    LOBYTE(v50) = 20;
    std::string::string(&v16, "SizeVarielty");
    LOBYTE(v50) = 0;
    v13 = EditorVar::EditorVar(
            v49,
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
            v37,
            v38,
            v39);
    LOBYTE(v50) = 21;
    std::vector<EditorVar>::push_back(this + 424, v13);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
    v39 = 0;
    v38 = 1;
    v45 = &v31;
    std::string::string(&v31, &unk_1030EF78);
    v44 = &v24;
    LOBYTE(v50) = 22;
    std::string::string(&v24, "Decal");
    v23 = this + 1160;
    v43 = (const char **)&v16;
    LOBYTE(v50) = 23;
    std::string::string(&v16, "DepandLife");
    LOBYTE(v50) = 0;
    v14 = EditorVar::EditorVar(
            v49,
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
            v37,
            v38,
            v39);
    LOBYTE(v50) = 24;
    std::vector<EditorVar>::push_back(this + 424, v14);
    LOBYTE(v50) = 0;
    EditorVar::~EditorVar((EditorVar *)v49);
  }
  return this;
}
