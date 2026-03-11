/*
 * func-name: sub_100DED80
 * func-address: 0x100ded80
 * callers: 0x1000f74a
 * callees: none
 */

int __thiscall sub_100DED80(int this, struct World *a2)
{
  int v3; // eax
  Editor *v4; // eax
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v12; // [esp+114h] [ebp-ECh] BYREF
  int v13; // [esp+118h] [ebp-E8h]
  int v14; // [esp+11Ch] [ebp-E4h]
  int v15; // [esp+120h] [ebp-E0h]
  int v16; // [esp+124h] [ebp-DCh]
  int v17; // [esp+128h] [ebp-D8h]
  int v18; // [esp+12Ch] [ebp-D4h]
  int v19; // [esp+130h] [ebp-D0h]
  int v20; // [esp+134h] [ebp-CCh] BYREF
  int v21; // [esp+138h] [ebp-C8h]
  int v22; // [esp+13Ch] [ebp-C4h]
  int v23; // [esp+140h] [ebp-C0h]
  int v24; // [esp+144h] [ebp-BCh]
  int v25; // [esp+148h] [ebp-B8h]
  int v26; // [esp+14Ch] [ebp-B4h] BYREF
  int v27; // [esp+150h] [ebp-B0h] BYREF
  int v28; // [esp+154h] [ebp-ACh]
  int v29; // [esp+158h] [ebp-A8h]
  int v30; // [esp+15Ch] [ebp-A4h]
  int v31; // [esp+160h] [ebp-A0h]
  int v32; // [esp+164h] [ebp-9Ch]
  int v33; // [esp+168h] [ebp-98h]
  int v34; // [esp+16Ch] [ebp-94h]
  int v35; // [esp+170h] [ebp-90h]
  int v36; // [esp+174h] [ebp-8Ch]
  int v37; // [esp+178h] [ebp-88h]
  int v38; // [esp+188h] [ebp-78h]
  int *v39; // [esp+18Ch] [ebp-74h]
  int *v40; // [esp+190h] [ebp-70h]
  _BYTE v41[96]; // [esp+194h] [ebp-6Ch] BYREF
  int v42; // [esp+1FCh] [ebp-4h]

  v38 = this;
  Actor::Actor((Actor *)this, a2);
  v42 = 0;
  *(_DWORD *)this = &GameSoundSource::`vftable';
  std::string::string((void *)(this + 1068));
  std::string::string((void *)(this + 1096));
  *(float *)(this + 1060) = -100.0;
  *(float *)(this + 1124) = 750.0;
  LOBYTE(v42) = 2;
  *(_BYTE *)(this + 1056) = 0;
  *(float *)(this + 1128) = 100.0;
  *(_BYTE *)(this + 1064) = 0;
  *(float *)(this + 1132) = 1.0;
  v3 = AudioDevice::Instance();
  *(_DWORD *)(this + 1052) = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 12))(v3);
  *(_BYTE *)(this + 724) = 1;
  v4 = (Editor *)Editor::Instance(v36, v37);
  if ( Editor::GetEditorMode(v4) )
  {
    v35 = 1;
    v34 = 0;
    v33 = 0;
    std::string::string(&v26, "ArrowTiny.reb");
    *(_DWORD *)(this + 716) = Precacher::CacheModel();
  }
  else
  {
    *(_DWORD *)(this + 716) = 0;
  }
  v5 = *(World **)(this + 712);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v36, v37), Editor::GetEditorMode(v6)) )
  {
    v35 = 0;
    v34 = 1;
    std::string::string(&v27, &unk_1031046A);
    v39 = &v20;
    LOBYTE(v42) = 3;
    std::string::string(&v20, "General");
    v19 = this + 1128;
    v40 = &v12;
    LOBYTE(v42) = 4;
    std::string::string(&v12, "CullRange");
    LOBYTE(v42) = 2;
    v7 = EditorVar::EditorVar(
           v41,
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
           v34,
           v35);
    LOBYTE(v42) = 5;
    std::vector<EditorVar>::push_back(this + 424, v7);
    LOBYTE(v42) = 2;
    EditorVar::~EditorVar((EditorVar *)v41);
    v35 = 0;
    v34 = 1;
    std::string::string(&v27, &unk_1031046B);
    v40 = &v20;
    LOBYTE(v42) = 6;
    std::string::string(&v20, "General");
    v19 = this + 1124;
    v39 = &v12;
    LOBYTE(v42) = 7;
    std::string::string(&v12, "Range");
    LOBYTE(v42) = 2;
    v8 = EditorVar::EditorVar(
           v41,
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
           v34,
           v35);
    LOBYTE(v42) = 8;
    std::vector<EditorVar>::push_back(this + 424, v8);
    LOBYTE(v42) = 2;
    EditorVar::~EditorVar((EditorVar *)v41);
    v35 = 0;
    v34 = 1;
    std::string::string(&v27, &unk_1031047E);
    v40 = &v20;
    LOBYTE(v42) = 9;
    std::string::string(&v20, "General");
    v19 = this + 1132;
    v39 = &v12;
    LOBYTE(v42) = 10;
    std::string::string(&v12, "Volume");
    LOBYTE(v42) = 2;
    v9 = EditorVar::EditorVar(
           v41,
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
           v34,
           v35);
    LOBYTE(v42) = 11;
    std::vector<EditorVar>::push_back(this + 424, v9);
    LOBYTE(v42) = 2;
    EditorVar::~EditorVar((EditorVar *)v41);
    v35 = 0;
    v34 = 1;
    std::string::string(&v27, &unk_1031047F);
    v40 = &v20;
    LOBYTE(v42) = 12;
    std::string::string(&v20, "General");
    v19 = this + 1068;
    v39 = &v12;
    LOBYTE(v42) = 13;
    std::string::string(&v12, "Filename");
    LOBYTE(v42) = 2;
    v10 = EditorVar::EditorVar(
            v41,
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
            v34,
            v35);
    LOBYTE(v42) = 14;
    std::vector<EditorVar>::push_back(this + 424, v10);
    LOBYTE(v42) = 2;
    EditorVar::~EditorVar((EditorVar *)v41);
  }
  return this;
}
