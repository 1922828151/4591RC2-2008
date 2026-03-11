/*
 * func-name: ??0Effect_ShadedParticles@@QAE@PAVWorld@@@Z_0
 * func-address: 0x100975d0
 * callers: 0x10012ac6
 * callees: 0x102c9d98
 */

Effect_ShadedParticles *__thiscall Effect_ShadedParticles::Effect_ShadedParticles(
        Effect_ShadedParticles *this,
        struct World *a2)
{
  Editor *v3; // eax
  float v4; // ecx
  Material *v5; // eax
  Material *v6; // eax
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
  int v35; // [esp+934h] [ebp-100h] BYREF
  int v36; // [esp+938h] [ebp-FCh]
  int v37; // [esp+93Ch] [ebp-F8h]
  int v38; // [esp+940h] [ebp-F4h]
  int v39; // [esp+944h] [ebp-F0h]
  int v40; // [esp+948h] [ebp-ECh]
  int v41; // [esp+94Ch] [ebp-E8h]
  char *v42; // [esp+950h] [ebp-E4h]
  int v43; // [esp+954h] [ebp-E0h] BYREF
  int v44; // [esp+958h] [ebp-DCh]
  int v45; // [esp+95Ch] [ebp-D8h]
  int v46; // [esp+960h] [ebp-D4h]
  int v47; // [esp+964h] [ebp-D0h]
  int v48; // [esp+968h] [ebp-CCh]
  int v49; // [esp+96Ch] [ebp-C8h] BYREF
  int v50; // [esp+970h] [ebp-C4h] BYREF
  int v51; // [esp+974h] [ebp-C0h]
  int v52; // [esp+978h] [ebp-BCh]
  int v53; // [esp+97Ch] [ebp-B8h]
  int v54; // [esp+980h] [ebp-B4h]
  int v55; // [esp+984h] [ebp-B0h]
  int v56; // [esp+988h] [ebp-ACh]
  int v57; // [esp+98Ch] [ebp-A8h]
  unsigned int v58; // [esp+990h] [ebp-A4h]
  Effect_ShadedParticles *v59; // [esp+9A8h] [ebp-8Ch]
  Material *v60; // [esp+9ACh] [ebp-88h]
  int *v61; // [esp+9B0h] [ebp-84h]
  int *v62; // [esp+9B4h] [ebp-80h]
  float v63; // [esp+9B8h] [ebp-7Ch]
  float v64; // [esp+9BCh] [ebp-78h]
  float v65; // [esp+9C0h] [ebp-74h]
  float v66; // [esp+9C4h] [ebp-70h]
  _BYTE v67[96]; // [esp+9C8h] [ebp-6Ch] BYREF
  int v68; // [esp+A30h] [ebp-4h]

  v59 = this;
  Actor::Actor(this, a2);
  *(_DWORD *)this = &Effect_ShadedParticles::`vftable';
  *((float *)this + 279) = 0.0;
  *((float *)this + 280) = 0.0;
  *((float *)this + 281) = 0.0;
  *((float *)this + 282) = 0.0;
  v68 = 2;
  std::string::string((char *)this + 1132);
  std::string::string((char *)this + 1160);
  v3 = (Editor *)Editor::Instance();
  if ( Editor::GetEditorMode(v3) )
  {
    v58 = 1;
    v57 = 0;
    v56 = 0;
    v60 = (Material *)&v49;
    std::string::string(&v49, "ArrowTiny.reb");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
  }
  else
  {
    *((_DWORD *)this + 179) = 0;
  }
  *((float *)this + 264) = 15.0;
  v58 = (unsigned int)"DefaultParticle.xml";
  *((_DWORD *)this + 263) = 250;
  *((float *)this + 265) = 0.64999998;
  *((float *)this + 266) = 6.3000002;
  *((float *)this + 267) = 0.80000001;
  *((float *)this + 268) = 1000.0;
  *((float *)this + 269) = 300.0;
  *((float *)this + 270) = 400.0;
  *((float *)this + 271) = 0.15000001;
  *((float *)this + 272) = 0.079999998;
  *((float *)this + 273) = 0.0;
  *((float *)this + 274) = -8.0;
  *((float *)this + 275) = 0.0;
  *((float *)this + 276) = 0.0;
  *((float *)this + 277) = 0.0;
  *((float *)this + 278) = 0.0;
  v63 = 1.0;
  v64 = 1.0;
  v65 = 1.0;
  v66 = 1.0;
  *((float *)this + 279) = 1.0;
  v4 = v66;
  *((float *)this + 280) = 1.0;
  *((float *)this + 281) = 1.0;
  *((float *)this + 282) = v4;
  std::string::operator=((char *)this + 1132, v58);
  std::string::operator=((char *)this + 1160, &unk_1030DEDF);
  *((float *)this + 298) = 0.60000002;
  v58 = 340;
  *((_BYTE *)this + 1188) = 0;
  *((float *)this + 300) = 0.0;
  *((_BYTE *)this + 1196) = 0;
  *((_DWORD *)this + 301) = 1;
  *((_BYTE *)this + 1208) = 0;
  *((_BYTE *)this + 1209) = 1;
  *((_DWORD *)this + 303) = 0;
  v5 = (Material *)operator new(v58);
  v60 = v5;
  LOBYTE(v68) = 3;
  if ( v5 )
    v6 = Material::Material(v5);
  else
    v6 = 0;
  v7 = (World *)*((_DWORD *)this + 178);
  LOBYTE(v68) = 2;
  *((_DWORD *)this + 303) = v6;
  *((_BYTE *)this + 1216) = 0;
  *((_DWORD *)this + 305) = -1;
  *((_DWORD *)this + 306) = 0;
  *((_BYTE *)this + 724) = 1;
  if ( v7 && World::IsLoading(v7) || (v8 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v8)) )
  {
    v58 = 0;
    v57 = 1;
    v60 = (Material *)&v50;
    std::string::string(&v50, &unk_1030DF1C);
    v61 = &v43;
    LOBYTE(v68) = 4;
    std::string::string(&v43, &unk_1030DF24);
    v42 = (char *)this + 1052;
    v62 = &v35;
    LOBYTE(v68) = 5;
    std::string::string(&v35, "NumUnits");
    LOBYTE(v68) = 2;
    v9 = EditorVar::EditorVar(
           v67,
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
           v58);
    LOBYTE(v68) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030DF3C);
    v61 = &v43;
    LOBYTE(v68) = 7;
    std::string::string(&v43, &unk_1030DF50);
    v42 = (char *)this + 1056;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 8;
    std::string::string(&v35, "SpawnInterval");
    LOBYTE(v68) = 2;
    v10 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030DF6C);
    v61 = &v43;
    LOBYTE(v68) = 10;
    std::string::string(&v43, &unk_1030DF7C);
    v42 = (char *)this + 1060;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 11;
    std::string::string(&v35, "ParticleDirVariance");
    LOBYTE(v68) = 2;
    v11 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030DF9C);
    v61 = &v43;
    LOBYTE(v68) = 13;
    std::string::string(&v43, &unk_1030DFA8);
    v42 = (char *)this + 1064;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 14;
    std::string::string(&v35, "ParticleSpeed");
    LOBYTE(v68) = 2;
    v12 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030DFC4);
    v61 = &v43;
    LOBYTE(v68) = 16;
    std::string::string(&v43, &unk_1030DFD4);
    v42 = (char *)this + 1068;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 17;
    std::string::string(&v35, "ParticleSpeedVariance");
    LOBYTE(v68) = 2;
    v13 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030DFF8);
    v61 = &v43;
    LOBYTE(v68) = 19;
    std::string::string(&v43, &unk_1030E00C);
    v42 = (char *)this + 1072;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 20;
    std::string::string(&v35, "ParticleLifeTime");
    LOBYTE(v68) = 2;
    v14 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E02C);
    v61 = &v43;
    LOBYTE(v68) = 22;
    std::string::string(&v43, &unk_1030E040);
    v42 = (char *)this + 1076;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 23;
    std::string::string(&v35, "ParticleLifeTimeVariance");
    LOBYTE(v68) = 2;
    v15 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E068);
    v61 = &v43;
    LOBYTE(v68) = 25;
    std::string::string(&v43, &unk_1030E07C);
    v42 = (char *)this + 1080;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 26;
    std::string::string(&v35, "ParticleTimeFadeOut");
    LOBYTE(v68) = 2;
    v16 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E09C);
    v61 = &v43;
    LOBYTE(v68) = 28;
    std::string::string(&v43, &unk_1030E0A8);
    v42 = (char *)this + 1084;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 29;
    std::string::string(&v35, "ParticleSize");
    LOBYTE(v68) = 2;
    v17 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E0C4);
    v61 = &v43;
    LOBYTE(v68) = 31;
    std::string::string(&v43, &unk_1030E0D4);
    LOBYTE(v68) = 32;
    v42 = (char *)this + 1088;
    v60 = (Material *)&v35;
    std::string::string(&v35, "ParticleSizeVariance");
    LOBYTE(v68) = 2;
    v18 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E0F8);
    v61 = &v43;
    LOBYTE(v68) = 34;
    std::string::string(&v43, &unk_1030E108);
    v42 = (char *)this + 1092;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 35;
    std::string::string(&v35, "AccelX");
    LOBYTE(v68) = 2;
    v19 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v19);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E11C);
    v61 = &v43;
    LOBYTE(v68) = 37;
    std::string::string(&v43, &unk_1030E12C);
    v42 = (char *)this + 1096;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 38;
    std::string::string(&v35, "AccelY");
    LOBYTE(v68) = 2;
    v20 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 39;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E140);
    v61 = &v43;
    LOBYTE(v68) = 40;
    std::string::string(&v43, &unk_1030E150);
    v42 = (char *)this + 1100;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 41;
    std::string::string(&v35, "AccelZ");
    LOBYTE(v68) = 2;
    v21 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 42;
    std::vector<EditorVar>::push_back((char *)this + 424, v21);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E164);
    v61 = &v43;
    LOBYTE(v68) = 43;
    std::string::string(&v43, &unk_1030E174);
    v42 = (char *)this + 1104;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 44;
    std::string::string(&v35, "PosVarX");
    LOBYTE(v68) = 2;
    v22 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 45;
    std::vector<EditorVar>::push_back((char *)this + 424, v22);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E188);
    LOBYTE(v68) = 46;
    v61 = &v43;
    std::string::string(&v43, &unk_1030E198);
    v42 = (char *)this + 1108;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 47;
    std::string::string(&v35, "PosVarY");
    LOBYTE(v68) = 2;
    v23 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 48;
    std::vector<EditorVar>::push_back((char *)this + 424, v23);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E1AC);
    v61 = &v43;
    LOBYTE(v68) = 49;
    std::string::string(&v43, &unk_1030E1BC);
    v42 = (char *)this + 1112;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 50;
    std::string::string(&v35, "PosVarZ");
    LOBYTE(v68) = 2;
    v24 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 51;
    std::vector<EditorVar>::push_back((char *)this + 424, v24);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E1D0);
    v61 = &v43;
    LOBYTE(v68) = 52;
    std::string::string(&v43, &unk_1030E1DC);
    v42 = (char *)this + 1116;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 53;
    std::string::string(&v35, "Color");
    LOBYTE(v68) = 2;
    v25 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 54;
    std::vector<EditorVar>::push_back((char *)this + 424, v25);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E1F0);
    v61 = &v43;
    LOBYTE(v68) = 55;
    std::string::string(&v43, &unk_1030E208);
    v42 = (char *)this + 1188;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 56;
    std::string::string(&v35, "LitBySky");
    LOBYTE(v68) = 2;
    v26 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 57;
    std::vector<EditorVar>::push_back((char *)this + 424, v26);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E220);
    v61 = &v43;
    LOBYTE(v68) = 58;
    std::string::string(&v43, &unk_1030E23C);
    v42 = (char *)this + 1192;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 59;
    std::string::string(&v35, "SkyLitAmount");
    LOBYTE(v68) = 2;
    v27 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 60;
    std::vector<EditorVar>::push_back((char *)this + 424, v27);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E258);
    v61 = &v43;
    LOBYTE(v68) = 61;
    std::string::string(&v43, &unk_1030E26C);
    v42 = (char *)this + 1196;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 62;
    std::string::string(&v35, "PreventIndoors");
    LOBYTE(v68) = 2;
    v28 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 63;
    std::vector<EditorVar>::push_back((char *)this + 424, v28);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E288);
    v61 = &v43;
    LOBYTE(v68) = 64;
    std::string::string(&v43, &unk_1030E298);
    v42 = (char *)this + 1200;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 65;
    std::string::string(&v35, "YAxisConstraint");
    LOBYTE(v68) = 2;
    v29 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 66;
    std::vector<EditorVar>::push_back((char *)this + 424, v29);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E2B4);
    v61 = &v43;
    LOBYTE(v68) = 67;
    std::string::string(&v43, &unk_1030E2D0);
    LOBYTE(v68) = 68;
    v42 = (char *)this + 1204;
    v60 = (Material *)&v35;
    std::string::string(&v35, "SpawnTogetherAmount");
    LOBYTE(v68) = 2;
    v30 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 69;
    std::vector<EditorVar>::push_back((char *)this + 424, v30);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E2F0);
    v61 = &v43;
    LOBYTE(v68) = 70;
    std::string::string(&v43, &unk_1030E310);
    v42 = (char *)this + 1208;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 71;
    std::string::string(&v35, "SortedSystem");
    LOBYTE(v68) = 2;
    v31 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 72;
    std::vector<EditorVar>::push_back((char *)this + 424, v31);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E32C);
    v61 = &v43;
    LOBYTE(v68) = 73;
    std::string::string(&v43, &unk_1030E340);
    v42 = (char *)this + 1209;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 74;
    std::string::string(&v35, "FrustumCulling");
    LOBYTE(v68) = 2;
    v32 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 75;
    std::vector<EditorVar>::push_back((char *)this + 424, v32);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
    v58 = 0;
    v57 = 1;
    v62 = &v50;
    std::string::string(&v50, &unk_1030E35C);
    v61 = &v43;
    LOBYTE(v68) = 76;
    std::string::string(&v43, &unk_1030E368);
    v42 = (char *)this + 1132;
    v60 = (Material *)&v35;
    LOBYTE(v68) = 77;
    std::string::string(&v35, "ParticleMaterialFileName");
    LOBYTE(v68) = 2;
    v33 = EditorVar::EditorVar(
            v67,
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
            v58);
    LOBYTE(v68) = 78;
    std::vector<EditorVar>::push_back((char *)this + 424, v33);
    LOBYTE(v68) = 2;
    EditorVar::~EditorVar((EditorVar *)v67);
  }
  return this;
}
