/*
 * func-name: ??0Effect_ParticleSystemEx@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10091ce0
 * callers: 0x1000f7f9
 * callees: 0x10005187
 */

Effect_ParticleSystemEx *__thiscall Effect_ParticleSystemEx::Effect_ParticleSystemEx(
        Effect_ParticleSystemEx *this,
        struct World *a2)
{
  World *v3; // ecx
  Editor *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [esp+174h] [ebp-ECh] BYREF
  int v12; // [esp+178h] [ebp-E8h]
  int v13; // [esp+17Ch] [ebp-E4h]
  int v14; // [esp+180h] [ebp-E0h]
  int v15; // [esp+184h] [ebp-DCh]
  int v16; // [esp+188h] [ebp-D8h]
  int v17; // [esp+18Ch] [ebp-D4h]
  char *v18; // [esp+190h] [ebp-D0h]
  int v19; // [esp+194h] [ebp-CCh] BYREF
  int v20; // [esp+198h] [ebp-C8h]
  int v21; // [esp+19Ch] [ebp-C4h]
  int v22; // [esp+1A0h] [ebp-C0h]
  int v23; // [esp+1A4h] [ebp-BCh]
  int v24; // [esp+1A8h] [ebp-B8h]
  int v25; // [esp+1ACh] [ebp-B4h]
  int v26; // [esp+1B0h] [ebp-B0h] BYREF
  int v27; // [esp+1B4h] [ebp-ACh]
  int v28; // [esp+1B8h] [ebp-A8h]
  int v29; // [esp+1BCh] [ebp-A4h]
  int v30; // [esp+1C0h] [ebp-A0h]
  int v31; // [esp+1C4h] [ebp-9Ch]
  int v32; // [esp+1C8h] [ebp-98h]
  int v33; // [esp+1CCh] [ebp-94h]
  int v34; // [esp+1D0h] [ebp-90h]
  Effect_ParticleSystemEx *v35; // [esp+1E8h] [ebp-78h]
  int *v36; // [esp+1ECh] [ebp-74h]
  int *v37; // [esp+1F0h] [ebp-70h]
  _BYTE v38[96]; // [esp+1F4h] [ebp-6Ch] BYREF
  int v39; // [esp+25Ch] [ebp-4h]

  v35 = this;
  Effect_ParticleSystem::Effect_ParticleSystem(this, a2);
  v3 = (World *)*((_DWORD *)this + 178);
  *((float *)this + 320) = 0.0;
  *((float *)this + 321) = 0.0;
  *((float *)this + 322) = 1.0;
  *((float *)this + 324) = -1.0;
  v39 = 0;
  *(_DWORD *)this = &Effect_ParticleSystemEx::`vftable';
  *((_BYTE *)this + 1293) = 0;
  if ( v3 && World::IsLoading(v3) || (v4 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v4)) )
  {
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_1030D6E8);
    v36 = &v19;
    LOBYTE(v39) = 1;
    std::string::string(&v19, &unk_1030D6F8);
    v18 = (char *)this + 1280;
    v37 = &v11;
    LOBYTE(v39) = 2;
    std::string::string(&v11, "ParticleRotationSpeed");
    LOBYTE(v39) = 0;
    v5 = EditorVar::EditorVar(
           v38,
           v11,
           v12,
           v13,
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
           v34);
    LOBYTE(v39) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v5);
    LOBYTE(v39) = 0;
    EditorVar::~EditorVar((EditorVar *)v38);
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_1030D720);
    v37 = &v19;
    LOBYTE(v39) = 4;
    std::string::string(&v19, &unk_1030D734);
    v18 = (char *)this + 1284;
    v36 = &v11;
    LOBYTE(v39) = 5;
    std::string::string(&v11, "ParticleRotationSpeedVariance");
    LOBYTE(v39) = 0;
    v6 = EditorVar::EditorVar(
           v38,
           v11,
           v12,
           v13,
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
           v34);
    LOBYTE(v39) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v6);
    LOBYTE(v39) = 0;
    EditorVar::~EditorVar((EditorVar *)v38);
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_1030D764);
    v37 = &v19;
    LOBYTE(v39) = 7;
    std::string::string(&v19, &unk_1030D770);
    v18 = (char *)this + 1288;
    v36 = &v11;
    LOBYTE(v39) = 8;
    std::string::string(&v11, "ParticleScale");
    LOBYTE(v39) = 0;
    v7 = EditorVar::EditorVar(
           v38,
           v11,
           v12,
           v13,
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
           v34);
    LOBYTE(v39) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v39) = 0;
    EditorVar::~EditorVar((EditorVar *)v38);
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_1030D790);
    v37 = &v19;
    LOBYTE(v39) = 10;
    std::string::string(&v19, &unk_1030D7A4);
    v18 = (char *)this + 1293;
    v36 = &v11;
    LOBYTE(v39) = 11;
    std::string::string(&v11, "ParticleFaceDir");
    LOBYTE(v39) = 0;
    v8 = EditorVar::EditorVar(
           v38,
           v11,
           v12,
           v13,
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
           v34);
    LOBYTE(v39) = 12;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v39) = 0;
    EditorVar::~EditorVar((EditorVar *)v38);
    v34 = 0;
    v33 = 1;
    std::string::string(&v26, &unk_1030D7C4);
    v37 = &v19;
    LOBYTE(v39) = 13;
    std::string::string(&v19, &unk_1030D7DC);
    v18 = (char *)this + 1296;
    v36 = &v11;
    LOBYTE(v39) = 14;
    std::string::string(&v11, "ParticleStartRotRandom");
    LOBYTE(v39) = 0;
    v9 = EditorVar::EditorVar(
           v38,
           v11,
           v12,
           v13,
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
           v34);
    LOBYTE(v39) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v39) = 0;
    EditorVar::~EditorVar((EditorVar *)v38);
  }
  return this;
}
