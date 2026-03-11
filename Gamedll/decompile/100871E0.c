/*
 * func-name: ??0Effect_LightBeam@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100871e0
 * callers: 0x100076ad
 * callees: 0x1001aa87
 */

Effect_LightBeam *__thiscall Effect_LightBeam::Effect_LightBeam(Effect_LightBeam *this, struct World *a2)
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
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [esp+430h] [ebp-ECh] BYREF
  int v21; // [esp+434h] [ebp-E8h]
  int v22; // [esp+438h] [ebp-E4h]
  int v23; // [esp+43Ch] [ebp-E0h]
  int v24; // [esp+440h] [ebp-DCh]
  int v25; // [esp+444h] [ebp-D8h]
  int v26; // [esp+448h] [ebp-D4h]
  char *v27; // [esp+44Ch] [ebp-D0h]
  int v28; // [esp+450h] [ebp-CCh] BYREF
  int v29; // [esp+454h] [ebp-C8h]
  int v30; // [esp+458h] [ebp-C4h]
  int v31; // [esp+45Ch] [ebp-C0h]
  int v32; // [esp+460h] [ebp-BCh]
  int v33; // [esp+464h] [ebp-B8h]
  int v34; // [esp+468h] [ebp-B4h] BYREF
  int v35; // [esp+46Ch] [ebp-B0h] BYREF
  int v36; // [esp+470h] [ebp-ACh] BYREF
  int v37; // [esp+474h] [ebp-A8h]
  int v38; // [esp+478h] [ebp-A4h]
  int v39; // [esp+47Ch] [ebp-A0h]
  int v40; // [esp+480h] [ebp-9Ch]
  int v41; // [esp+484h] [ebp-98h]
  int v42; // [esp+488h] [ebp-94h]
  int v43; // [esp+48Ch] [ebp-90h]
  Effect_LightBeam *v44; // [esp+4A4h] [ebp-78h]
  int *v45; // [esp+4A8h] [ebp-74h]
  int *v46; // [esp+4ACh] [ebp-70h]
  _BYTE v47[96]; // [esp+4B0h] [ebp-6Ch] BYREF
  int v48; // [esp+518h] [ebp-4h]

  v44 = this;
  Effect_Base::Effect_Base(this, a2);
  v48 = 0;
  *(_DWORD *)this = &Effect_LightBeam::`vftable';
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v43 = 1;
    v42 = 0;
    v41 = 0;
    std::string::string(&v34, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  v43 = 1;
  std::string::string(&v36, "DefaultTexture.dds");
  v4 = Precacher::CacheTexture();
  v5 = (World *)*((_DWORD *)this + 178);
  *((float *)this + 285) = 0.16666667;
  *((float *)this + 287) = 3.0;
  *((float *)this + 288) = 1.75;
  *((_DWORD *)this + 295) = v4;
  *((float *)this + 289) = 0.017999999;
  *((_DWORD *)this + 284) = 40;
  *((_BYTE *)this + 724) = 1;
  *((float *)this + 286) = 1.0;
  *((float *)this + 290) = 0.0;
  *((float *)this + 291) = 0.0;
  *((float *)this + 292) = 0.0;
  *((float *)this + 293) = 0.0;
  *((float *)this + 294) = 0.0;
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v6)) )
  {
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C018);
    v45 = &v28;
    LOBYTE(v48) = 1;
    std::string::string(&v28, &unk_1030C034);
    v27 = (char *)this + 1136;
    v46 = &v20;
    LOBYTE(v48) = 2;
    std::string::string(&v20, "NumUnits");
    LOBYTE(v48) = 0;
    v7 = EditorVar::EditorVar(
           v47,
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
           v39,
           v40,
           v41,
           v42,
           v43);
    LOBYTE(v48) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, "Spread between billboards, in meters");
    v46 = &v28;
    LOBYTE(v48) = 4;
    std::string::string(&v28, &unk_1030C074);
    v27 = (char *)this + 1140;
    v45 = &v20;
    LOBYTE(v48) = 5;
    std::string::string(&v20, "DistanceMultiplier");
    LOBYTE(v48) = 0;
    v8 = EditorVar::EditorVar(
           v47,
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
           v39,
           v40,
           v41,
           v42,
           v43);
    LOBYTE(v48) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, "Starting billboard size.");
    v46 = &v28;
    LOBYTE(v48) = 7;
    std::string::string(&v28, &unk_1030C0B0);
    v27 = (char *)this + 1148;
    v45 = &v20;
    LOBYTE(v48) = 8;
    std::string::string(&v20, "StartSize");
    LOBYTE(v48) = 0;
    v9 = EditorVar::EditorVar(
           v47,
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
           v39,
           v40,
           v41,
           v42,
           v43);
    LOBYTE(v48) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, "Increase in size per billboard down the beam.");
    v46 = &v28;
    LOBYTE(v48) = 10;
    std::string::string(&v28, &unk_1030C0F8);
    v27 = (char *)this + 1152;
    v45 = &v20;
    LOBYTE(v48) = 11;
    std::string::string(&v20, "SizeMultiplier");
    LOBYTE(v48) = 0;
    v10 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, "Scales the entire system by the specified amount");
    v46 = &v28;
    LOBYTE(v48) = 13;
    std::string::string(&v28, &unk_1030C148);
    v27 = (char *)this + 1156;
    v45 = &v20;
    LOBYTE(v48) = 14;
    std::string::string(&v20, "TotalScalingFactor");
    LOBYTE(v48) = 0;
    v11 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C168);
    v46 = &v28;
    LOBYTE(v48) = 16;
    std::string::string(&v28, &unk_1030C174);
    v27 = (char *)*((_DWORD *)this + 295);
    v45 = &v20;
    LOBYTE(v48) = 17;
    std::string::string(&v20, "GlowTex");
    LOBYTE(v48) = 0;
    v12 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C188);
    v46 = &v28;
    LOBYTE(v48) = 19;
    std::string::string(&v28, &unk_1030C19C);
    v27 = (char *)this + 1144;
    v45 = &v20;
    LOBYTE(v48) = 20;
    std::string::string(&v20, "AlphaMultiplier");
    LOBYTE(v48) = 0;
    v13 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C1B8);
    v46 = &v28;
    LOBYTE(v48) = 22;
    std::string::string(&v28, &unk_1030C1C4);
    v27 = (char *)this + 1160;
    v45 = &v20;
    LOBYTE(v48) = 23;
    std::string::string(&v20, "SpeedRot");
    LOBYTE(v48) = 0;
    v14 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C1DC);
    v46 = &v28;
    LOBYTE(v48) = 25;
    std::string::string(&v28, &unk_1030C1E8);
    v27 = (char *)this + 1164;
    v45 = &v20;
    LOBYTE(v48) = 26;
    std::string::string(&v20, "SpeedOffset");
    LOBYTE(v48) = 0;
    v15 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C200);
    v46 = &v28;
    LOBYTE(v48) = 28;
    std::string::string(&v28, &unk_1030C20C);
    v27 = (char *)this + 1168;
    LOBYTE(v48) = 29;
    v45 = &v20;
    std::string::string(&v20, "Distance");
    LOBYTE(v48) = 0;
    v16 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C224);
    v46 = &v28;
    LOBYTE(v48) = 31;
    std::string::string(&v28, &unk_1030C230);
    v27 = (char *)this + 1172;
    v45 = &v20;
    LOBYTE(v48) = 32;
    std::string::string(&v20, "RandRotation");
    LOBYTE(v48) = 0;
    v17 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
    v43 = 0;
    v42 = 1;
    std::string::string(&v35, &unk_1030C24C);
    v46 = &v28;
    LOBYTE(v48) = 34;
    std::string::string(&v28, &unk_1030C258);
    v27 = (char *)this + 1176;
    v45 = &v20;
    LOBYTE(v48) = 35;
    std::string::string(&v20, "RandScale");
    LOBYTE(v48) = 0;
    v18 = EditorVar::EditorVar(
            v47,
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
            v39,
            v40,
            v41,
            v42,
            v43);
    LOBYTE(v48) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v48) = 0;
    EditorVar::~EditorVar((EditorVar *)v47);
  }
  return this;
}
