/*
 * func-name: ??0Effect_LaserParticle@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100825f0
 * callers: 0x10003de6
 * callees: 0x1001aa87
 */

Effect_LaserParticle *__thiscall Effect_LaserParticle::Effect_LaserParticle(
        Effect_LaserParticle *this,
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
  int v23; // eax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v38; // [esp+B38h] [ebp-ECh] BYREF
  int v39; // [esp+B3Ch] [ebp-E8h]
  int v40; // [esp+B40h] [ebp-E4h]
  int v41; // [esp+B44h] [ebp-E0h]
  int v42; // [esp+B48h] [ebp-DCh]
  int v43; // [esp+B4Ch] [ebp-D8h]
  int v44; // [esp+B50h] [ebp-D4h]
  char *v45; // [esp+B54h] [ebp-D0h]
  int v46; // [esp+B58h] [ebp-CCh] BYREF
  int v47; // [esp+B5Ch] [ebp-C8h]
  int v48; // [esp+B60h] [ebp-C4h]
  int v49; // [esp+B64h] [ebp-C0h]
  int v50; // [esp+B68h] [ebp-BCh]
  int v51; // [esp+B6Ch] [ebp-B8h]
  int v52; // [esp+B70h] [ebp-B4h] BYREF
  const char *v53; // [esp+B74h] [ebp-B0h] BYREF
  int v54; // [esp+B78h] [ebp-ACh] BYREF
  int v55; // [esp+B7Ch] [ebp-A8h]
  int v56; // [esp+B80h] [ebp-A4h]
  int v57; // [esp+B84h] [ebp-A0h]
  int v58; // [esp+B88h] [ebp-9Ch]
  int v59; // [esp+B8Ch] [ebp-98h]
  int v60; // [esp+B90h] [ebp-94h]
  int v61; // [esp+B94h] [ebp-90h]
  Effect_LaserParticle *v62; // [esp+BACh] [ebp-78h]
  int *v63; // [esp+BB0h] [ebp-74h]
  int *v64; // [esp+BB4h] [ebp-70h]
  _BYTE v65[96]; // [esp+BB8h] [ebp-6Ch] BYREF
  int v66; // [esp+C20h] [ebp-4h]

  v62 = this;
  Effect_Base::Effect_Base(this, a2);
  *(_DWORD *)this = &Effect_LaserParticle::`vftable';
  *((float *)this + 308) = 0.0;
  *((float *)this + 309) = 0.0;
  *((float *)this + 310) = 0.0;
  v66 = 0;
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v61 = 1;
    v60 = 0;
    v59 = 0;
    std::string::string(&v52, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  *((float *)this + 285) = 15.0;
  v61 = 1;
  *((float *)this + 286) = 0.64999998;
  *((float *)this + 287) = 6.3000002;
  v53 = "DefaultTexture.dds";
  *((float *)this + 288) = 0.80000001;
  *((_DWORD *)this + 284) = 250;
  *((_BYTE *)this + 1200) = 0;
  *((float *)this + 289) = 1000.0;
  *((_BYTE *)this + 1208) = 0;
  *((_DWORD *)this + 304) = 1;
  *((float *)this + 290) = 300.0;
  *((_BYTE *)this + 1220) = 0;
  *((_BYTE *)this + 1221) = 1;
  *((float *)this + 291) = 400.0;
  *((_BYTE *)this + 1248) = 1;
  *((float *)this + 292) = 0.15000001;
  *((float *)this + 293) = 0.079999998;
  *((float *)this + 294) = 0.0;
  *((float *)this + 295) = -8.0;
  *((float *)this + 296) = 0.0;
  *((float *)this + 297) = 0.0;
  *((float *)this + 298) = 0.0;
  *((float *)this + 299) = 0.0;
  *((float *)this + 301) = 0.60000002;
  *((float *)this + 303) = 0.0;
  *((float *)this + 306) = 1.0;
  *((float *)this + 307) = 0.0;
  std::string::string(&v54, v53);
  v4 = Precacher::CacheTexture();
  v5 = (World *)*((_DWORD *)this + 178);
  *((_DWORD *)this + 311) = v4;
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v6)) )
  {
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B710);
    v63 = &v46;
    LOBYTE(v66) = 1;
    std::string::string(&v46, &unk_1030B718);
    v45 = (char *)this + 1136;
    v64 = &v38;
    LOBYTE(v66) = 2;
    std::string::string(&v38, "NumUnits");
    LOBYTE(v66) = 0;
    v7 = EditorVar::EditorVar(
           v65,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61);
    LOBYTE(v66) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B730);
    v64 = &v46;
    LOBYTE(v66) = 4;
    std::string::string(&v46, &unk_1030B744);
    v45 = (char *)this + 1140;
    v63 = &v38;
    LOBYTE(v66) = 5;
    std::string::string(&v38, "SpawnInterval");
    LOBYTE(v66) = 0;
    v8 = EditorVar::EditorVar(
           v65,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61);
    LOBYTE(v66) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B760);
    v64 = &v46;
    LOBYTE(v66) = 7;
    std::string::string(&v46, &unk_1030B770);
    v45 = (char *)this + 1144;
    v63 = &v38;
    LOBYTE(v66) = 8;
    std::string::string(&v38, "ParticleDirVariance");
    LOBYTE(v66) = 0;
    v9 = EditorVar::EditorVar(
           v65,
           v38,
           v39,
           v40,
           v41,
           v42,
           v43,
           v44,
           v45,
           v46,
           v47,
           v48,
           v49,
           v50,
           v51,
           v52,
           v53,
           v54,
           v55,
           v56,
           v57,
           v58,
           v59,
           v60,
           v61);
    LOBYTE(v66) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B790);
    v64 = &v46;
    LOBYTE(v66) = 10;
    std::string::string(&v46, &unk_1030B79C);
    v45 = (char *)this + 1148;
    v63 = &v38;
    LOBYTE(v66) = 11;
    std::string::string(&v38, "ParticleSpeed");
    LOBYTE(v66) = 0;
    v10 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B7B8);
    v64 = &v46;
    LOBYTE(v66) = 13;
    std::string::string(&v46, &unk_1030B7C8);
    v45 = (char *)this + 1152;
    v63 = &v38;
    LOBYTE(v66) = 14;
    std::string::string(&v38, "ParticleSpeedVariance");
    LOBYTE(v66) = 0;
    v11 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B7EC);
    v64 = &v46;
    LOBYTE(v66) = 16;
    std::string::string(&v46, &unk_1030B800);
    v45 = (char *)this + 1156;
    v63 = &v38;
    LOBYTE(v66) = 17;
    std::string::string(&v38, "ParticleLifeTime");
    LOBYTE(v66) = 0;
    v12 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B820);
    v64 = &v46;
    LOBYTE(v66) = 19;
    std::string::string(&v46, &unk_1030B834);
    v45 = (char *)this + 1160;
    v63 = &v38;
    LOBYTE(v66) = 20;
    std::string::string(&v38, "ParticleLifeTimeVariance");
    LOBYTE(v66) = 0;
    v13 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B85C);
    v64 = &v46;
    LOBYTE(v66) = 22;
    std::string::string(&v46, &unk_1030B870);
    v45 = (char *)this + 1164;
    v63 = &v38;
    LOBYTE(v66) = 23;
    std::string::string(&v38, "ParticleTimeFadeOut");
    LOBYTE(v66) = 0;
    v14 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B890);
    v64 = &v46;
    LOBYTE(v66) = 25;
    std::string::string(&v46, &unk_1030B89C);
    v45 = (char *)this + 1168;
    v63 = &v38;
    LOBYTE(v66) = 26;
    std::string::string(&v38, "ParticleSize");
    LOBYTE(v66) = 0;
    v15 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B8B8);
    v64 = &v46;
    LOBYTE(v66) = 28;
    std::string::string(&v46, &unk_1030B8C8);
    v45 = (char *)this + 1172;
    LOBYTE(v66) = 29;
    v63 = &v38;
    std::string::string(&v38, "ParticleSizeVariance");
    LOBYTE(v66) = 0;
    v16 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B8EC);
    v64 = &v46;
    LOBYTE(v66) = 31;
    std::string::string(&v46, &unk_1030B8FC);
    v45 = (char *)this + 1176;
    v63 = &v38;
    LOBYTE(v66) = 32;
    std::string::string(&v38, "AccelX");
    LOBYTE(v66) = 0;
    v17 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B910);
    v64 = &v46;
    LOBYTE(v66) = 34;
    std::string::string(&v46, &unk_1030B920);
    v45 = (char *)this + 1180;
    v63 = &v38;
    LOBYTE(v66) = 35;
    std::string::string(&v38, "AccelY");
    LOBYTE(v66) = 0;
    v18 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B934);
    v64 = &v46;
    LOBYTE(v66) = 37;
    std::string::string(&v46, &unk_1030B944);
    v45 = (char *)this + 1184;
    v63 = &v38;
    LOBYTE(v66) = 38;
    std::string::string(&v38, "AccelZ");
    LOBYTE(v66) = 0;
    v19 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 39;
    std::vector<EditorVar>::push_back((char *)this + 424, v19);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B958);
    v64 = &v46;
    LOBYTE(v66) = 40;
    std::string::string(&v46, &unk_1030B968);
    v45 = (char *)this + 1188;
    v63 = &v38;
    LOBYTE(v66) = 41;
    std::string::string(&v38, "PosVarX");
    LOBYTE(v66) = 0;
    v20 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 42;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B97C);
    LOBYTE(v66) = 43;
    v64 = &v46;
    std::string::string(&v46, &unk_1030B98C);
    v45 = (char *)this + 1192;
    v63 = &v38;
    LOBYTE(v66) = 44;
    std::string::string(&v38, "PosVarY");
    LOBYTE(v66) = 0;
    v21 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 45;
    std::vector<EditorVar>::push_back((char *)this + 424, v21);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B9A0);
    v64 = &v46;
    LOBYTE(v66) = 46;
    std::string::string(&v46, &unk_1030B9B0);
    v45 = (char *)this + 1196;
    v63 = &v38;
    LOBYTE(v66) = 47;
    std::string::string(&v38, "PosVarZ");
    LOBYTE(v66) = 0;
    v22 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 48;
    std::vector<EditorVar>::push_back((char *)this + 424, v22);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B9C4);
    v64 = &v46;
    LOBYTE(v66) = 49;
    std::string::string(&v46, &unk_1030B9DC);
    v45 = (char *)this + 1200;
    v63 = &v38;
    LOBYTE(v66) = 50;
    std::string::string(&v38, "LitBySky");
    LOBYTE(v66) = 0;
    v23 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 51;
    std::vector<EditorVar>::push_back((char *)this + 424, v23);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030B9F4);
    v64 = &v46;
    LOBYTE(v66) = 52;
    std::string::string(&v46, &unk_1030BA10);
    v45 = (char *)this + 1204;
    v63 = &v38;
    LOBYTE(v66) = 53;
    std::string::string(&v38, "SkyLitAmount");
    LOBYTE(v66) = 0;
    v24 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 54;
    std::vector<EditorVar>::push_back((char *)this + 424, v24);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BA2C);
    v64 = &v46;
    LOBYTE(v66) = 55;
    std::string::string(&v46, &unk_1030BA40);
    v45 = (char *)this + 1208;
    v63 = &v38;
    LOBYTE(v66) = 56;
    std::string::string(&v38, "PreventIndoors");
    LOBYTE(v66) = 0;
    v25 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 57;
    std::vector<EditorVar>::push_back((char *)this + 424, v25);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BA5C);
    v64 = &v46;
    LOBYTE(v66) = 58;
    std::string::string(&v46, &unk_1030BA6C);
    v45 = (char *)this + 1212;
    v63 = &v38;
    LOBYTE(v66) = 59;
    std::string::string(&v38, "YAxisConstraint");
    LOBYTE(v66) = 0;
    v26 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 60;
    std::vector<EditorVar>::push_back((char *)this + 424, v26);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BA88);
    v64 = &v46;
    LOBYTE(v66) = 61;
    std::string::string(&v46, &unk_1030BAA4);
    v45 = (char *)this + 1216;
    v63 = &v38;
    LOBYTE(v66) = 62;
    std::string::string(&v38, "SpawnTogetherAmount");
    LOBYTE(v66) = 0;
    v27 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 63;
    std::vector<EditorVar>::push_back((char *)this + 424, v27);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BAC4);
    v64 = &v46;
    LOBYTE(v66) = 64;
    std::string::string(&v46, &unk_1030BAE4);
    LOBYTE(v66) = 65;
    v45 = (char *)this + 1220;
    v63 = &v38;
    std::string::string(&v38, "SortedSystem");
    LOBYTE(v66) = 0;
    v28 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 66;
    std::vector<EditorVar>::push_back((char *)this + 424, v28);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BB00);
    v64 = &v46;
    LOBYTE(v66) = 67;
    std::string::string(&v46, &unk_1030BB14);
    v45 = (char *)this + 1221;
    v63 = &v38;
    LOBYTE(v66) = 68;
    std::string::string(&v38, "FrustumCulling");
    LOBYTE(v66) = 0;
    v29 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 69;
    std::vector<EditorVar>::push_back((char *)this + 424, v29);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BB30);
    v64 = &v46;
    LOBYTE(v66) = 70;
    std::string::string(&v46, &unk_1030BB3C);
    v45 = (char *)*((_DWORD *)this + 311);
    v63 = &v38;
    LOBYTE(v66) = 71;
    std::string::string(&v38, "Texture");
    LOBYTE(v66) = 0;
    v30 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 72;
    std::vector<EditorVar>::push_back((char *)this + 424, v30);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BB50);
    v64 = &v46;
    LOBYTE(v66) = 73;
    std::string::string(&v46, &unk_1030BB5C);
    v45 = (char *)this + 1224;
    v63 = &v38;
    LOBYTE(v66) = 74;
    std::string::string(&v38, "LaserLength");
    LOBYTE(v66) = 0;
    v31 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 75;
    std::vector<EditorVar>::push_back((char *)this + 424, v31);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BB74);
    v64 = &v46;
    LOBYTE(v66) = 76;
    std::string::string(&v46, &unk_1030BB80);
    v45 = (char *)this + 1228;
    v63 = &v38;
    LOBYTE(v66) = 77;
    std::string::string(&v38, "AbsorbBias");
    LOBYTE(v66) = 0;
    v32 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 78;
    std::vector<EditorVar>::push_back((char *)this + 424, v32);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BB98);
    v64 = &v46;
    LOBYTE(v66) = 79;
    std::string::string(&v46, &unk_1030BBA4);
    v45 = (char *)this + 1232;
    v63 = &v38;
    LOBYTE(v66) = 80;
    std::string::string(&v38, "AbsorbPosX");
    LOBYTE(v66) = 0;
    v33 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 81;
    std::vector<EditorVar>::push_back((char *)this + 424, v33);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BBBC);
    v64 = &v46;
    LOBYTE(v66) = 82;
    std::string::string(&v46, &unk_1030BBC8);
    v45 = (char *)this + 1236;
    v63 = &v38;
    LOBYTE(v66) = 83;
    std::string::string(&v38, "AbsorbPosY");
    LOBYTE(v66) = 0;
    v34 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 84;
    std::vector<EditorVar>::push_back((char *)this + 424, v34);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BBE0);
    v64 = &v46;
    LOBYTE(v66) = 85;
    std::string::string(&v46, &unk_1030BBEC);
    v45 = (char *)this + 1240;
    LOBYTE(v66) = 86;
    v63 = &v38;
    std::string::string(&v38, "AbsorbPosZ");
    LOBYTE(v66) = 0;
    v35 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 87;
    std::vector<EditorVar>::push_back((char *)this + 424, v35);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
    v61 = 0;
    v60 = 1;
    std::string::string(&v53, &unk_1030BC04);
    v64 = &v46;
    LOBYTE(v66) = 88;
    std::string::string(&v46, &unk_1030BC10);
    v45 = (char *)this + 1248;
    v63 = &v38;
    LOBYTE(v66) = 89;
    std::string::string(&v38, "Bounce");
    LOBYTE(v66) = 0;
    v36 = EditorVar::EditorVar(
            v65,
            v38,
            v39,
            v40,
            v41,
            v42,
            v43,
            v44,
            v45,
            v46,
            v47,
            v48,
            v49,
            v50,
            v51,
            v52,
            v53,
            v54,
            v55,
            v56,
            v57,
            v58,
            v59,
            v60,
            v61);
    LOBYTE(v66) = 90;
    std::vector<EditorVar>::push_back((char *)this + 424, v36);
    LOBYTE(v66) = 0;
    EditorVar::~EditorVar((EditorVar *)v65);
  }
  return this;
}
