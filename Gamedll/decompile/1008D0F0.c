/*
 * func-name: ??0Effect_MultiTexParticlesEx@@QAE@PAVWorld@@@Z_0
 * func-address: 0x1008d0f0
 * callers: 0x1000227a
 * callees: 0x1001a47e
 */

Effect_MultiTexParticlesEx *__thiscall Effect_MultiTexParticlesEx::Effect_MultiTexParticlesEx(
        Effect_MultiTexParticlesEx *this,
        struct World *a2)
{
  World *v3; // ecx
  Editor *v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v9; // [esp+ACh] [ebp-ECh] BYREF
  int v10; // [esp+B0h] [ebp-E8h]
  int v11; // [esp+B4h] [ebp-E4h]
  int v12; // [esp+B8h] [ebp-E0h]
  int v13; // [esp+BCh] [ebp-DCh]
  int v14; // [esp+C0h] [ebp-D8h]
  int v15; // [esp+C4h] [ebp-D4h]
  char *v16; // [esp+C8h] [ebp-D0h]
  int v17; // [esp+CCh] [ebp-CCh] BYREF
  int v18; // [esp+D0h] [ebp-C8h]
  int v19; // [esp+D4h] [ebp-C4h]
  int v20; // [esp+D8h] [ebp-C0h]
  int v21; // [esp+DCh] [ebp-BCh]
  int v22; // [esp+E0h] [ebp-B8h]
  int v23; // [esp+E4h] [ebp-B4h]
  int v24; // [esp+E8h] [ebp-B0h] BYREF
  int v25; // [esp+ECh] [ebp-ACh]
  int v26; // [esp+F0h] [ebp-A8h]
  int v27; // [esp+F4h] [ebp-A4h]
  int v28; // [esp+F8h] [ebp-A0h]
  int v29; // [esp+FCh] [ebp-9Ch]
  int v30; // [esp+100h] [ebp-98h]
  int v31; // [esp+104h] [ebp-94h]
  int v32; // [esp+108h] [ebp-90h]
  Effect_MultiTexParticlesEx *v33; // [esp+120h] [ebp-78h]
  int *v34; // [esp+124h] [ebp-74h]
  int *v35; // [esp+128h] [ebp-70h]
  _BYTE v36[96]; // [esp+12Ch] [ebp-6Ch] BYREF
  int v37; // [esp+194h] [ebp-4h]

  v33 = this;
  Effect_MultiTexParticles::Effect_MultiTexParticles(this, a2);
  v3 = (World *)*((_DWORD *)this + 178);
  *((float *)this + 316) = 0.0;
  *((float *)this + 317) = 0.0;
  *((float *)this + 318) = 1.0;
  v37 = 0;
  *(_DWORD *)this = &Effect_MultiTexParticlesEx::`vftable';
  if ( v3 && World::IsLoading(v3) || (v4 = (Editor *)Editor::Instance(), Editor::GetEditorMode(v4)) )
  {
    v32 = 0;
    v31 = 1;
    std::string::string(&v24, &unk_1030CC98);
    v34 = &v17;
    LOBYTE(v37) = 1;
    std::string::string(&v17, &unk_1030CCA8);
    v16 = (char *)this + 1264;
    v35 = &v9;
    LOBYTE(v37) = 2;
    std::string::string(&v9, "ParticleRotationSpeed");
    LOBYTE(v37) = 0;
    v5 = EditorVar::EditorVar(
           v36,
           v9,
           v10,
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
           v32);
    LOBYTE(v37) = 3;
    std::vector<EditorVar>::push_back((char *)this + 424, v5);
    LOBYTE(v37) = 0;
    EditorVar::~EditorVar((EditorVar *)v36);
    v32 = 0;
    v31 = 1;
    std::string::string(&v24, &unk_1030CCD0);
    v35 = &v17;
    LOBYTE(v37) = 4;
    std::string::string(&v17, &unk_1030CCE4);
    v16 = (char *)this + 1268;
    v34 = &v9;
    LOBYTE(v37) = 5;
    std::string::string(&v9, "ParticleRotationSpeedVariance");
    LOBYTE(v37) = 0;
    v6 = EditorVar::EditorVar(
           v36,
           v9,
           v10,
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
           v32);
    LOBYTE(v37) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v6);
    LOBYTE(v37) = 0;
    EditorVar::~EditorVar((EditorVar *)v36);
    v32 = 0;
    v31 = 1;
    std::string::string(&v24, &unk_1030CD14);
    v35 = &v17;
    LOBYTE(v37) = 7;
    std::string::string(&v17, &unk_1030CD24);
    v16 = (char *)this + 1272;
    v34 = &v9;
    LOBYTE(v37) = 8;
    std::string::string(&v9, "ParticleScale");
    LOBYTE(v37) = 0;
    v7 = EditorVar::EditorVar(
           v36,
           v9,
           v10,
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
           v32);
    LOBYTE(v37) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v37) = 0;
    EditorVar::~EditorVar((EditorVar *)v36);
  }
  return this;
}
