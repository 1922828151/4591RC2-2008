/*
 * func-name: ??0HookEsbAirDrop@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10131d80
 * callers: 0x10012585
 * callees: 0x10014669
 */

HookEsbAirDrop *__thiscall HookEsbAirDrop::HookEsbAirDrop(HookEsbAirDrop *this, struct World *a2)
{
  Editor *v3; // eax
  int v4; // eax
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  float v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [esp+3D4h] [ebp-FCh] BYREF
  int v21; // [esp+3D8h] [ebp-F8h]
  int v22; // [esp+3DCh] [ebp-F4h]
  int v23; // [esp+3E0h] [ebp-F0h]
  int v24; // [esp+3E4h] [ebp-ECh]
  int v25; // [esp+3E8h] [ebp-E8h]
  int v26; // [esp+3ECh] [ebp-E4h]
  char *v27; // [esp+3F0h] [ebp-E0h]
  int v28; // [esp+3F4h] [ebp-DCh] BYREF
  int v29; // [esp+3F8h] [ebp-D8h]
  int v30; // [esp+3FCh] [ebp-D4h]
  int v31; // [esp+400h] [ebp-D0h]
  int v32; // [esp+404h] [ebp-CCh]
  int v33; // [esp+408h] [ebp-C8h]
  void *v34; // [esp+40Ch] [ebp-C4h] BYREF
  int v35; // [esp+410h] [ebp-C0h] BYREF
  int v36; // [esp+414h] [ebp-BCh]
  int v37; // [esp+418h] [ebp-B8h]
  int v38; // [esp+41Ch] [ebp-B4h]
  int v39; // [esp+420h] [ebp-B0h]
  int v40; // [esp+424h] [ebp-ACh]
  int v41; // [esp+428h] [ebp-A8h]
  int v42; // [esp+42Ch] [ebp-A4h]
  int v43; // [esp+430h] [ebp-A0h]
  int v44; // [esp+434h] [ebp-9Ch]
  int v45; // [esp+438h] [ebp-98h]
  HookEsbAirDrop *v46; // [esp+448h] [ebp-88h]
  void **v47; // [esp+44Ch] [ebp-84h]
  int *v48; // [esp+450h] [ebp-80h]
  int *v49; // [esp+454h] [ebp-7Ch]
  float v50; // [esp+458h] [ebp-78h]
  float v51; // [esp+45Ch] [ebp-74h]
  float v52; // [esp+460h] [ebp-70h]
  _BYTE v53[96]; // [esp+464h] [ebp-6Ch] BYREF
  int v54; // [esp+4CCh] [ebp-4h]

  v46 = this;
  Actor::Actor(this, a2);
  v54 = 0;
  *(_DWORD *)this = &HookEsbAirDrop::`vftable';
  std::string::string((char *)this + 1056);
  std::string::string((char *)this + 1084);
  std::string::string((char *)this + 1112);
  *((_DWORD *)this + 285) = 0;
  std::string::string((char *)this + 1148);
  *((float *)this + 294) = 0.0;
  *((float *)this + 295) = 0.0;
  *((float *)this + 296) = 0.0;
  LOBYTE(v54) = 4;
  *((float *)this + 297) = 0.0;
  *((float *)this + 298) = 0.0;
  *((float *)this + 299) = 0.0;
  *((_DWORD *)this + 301) = 0;
  v3 = (Editor *)Editor::Instance(v44, v45);
  if ( Editor::GetEditorMode(v3) )
  {
    v43 = 1;
    v42 = 0;
    v41 = 0;
    v47 = &v34;
    std::string::string(&v34, "Sphere.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
    sub_10014669(v53);
    v4 = NxPhysics::Instance(this, -1, *((_DWORD *)this + 179), v53, 1);
    *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v4);
  }
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v44, v45), Editor::GetEditorMode(v6)) )
  {
    v43 = 0;
    v42 = 1;
    v47 = (void **)&v35;
    std::string::string(&v35, &unk_10312A40);
    v48 = &v28;
    LOBYTE(v54) = 5;
    std::string::string(&v28, &unk_10312A4C);
    v27 = (char *)this + 1056;
    v49 = &v20;
    LOBYTE(v54) = 6;
    std::string::string(&v20, "FlyweightName");
    LOBYTE(v54) = 4;
    v7 = EditorVar::EditorVar(
           v53,
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
    LOBYTE(v54) = 7;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312A64);
    v48 = &v28;
    LOBYTE(v54) = 8;
    std::string::string(&v28, &unk_10312A70);
    v27 = (char *)this + 1084;
    v47 = (void **)&v20;
    LOBYTE(v54) = 9;
    std::string::string(&v20, "EsbParent");
    LOBYTE(v54) = 4;
    v8 = EditorVar::EditorVar(
           v53,
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
    LOBYTE(v54) = 10;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v50 = 0.0;
    *((_DWORD *)this + 286) = -1;
    *((float *)this + 294) = v50;
    v50 = 1.0;
    *((float *)this + 295) = 0.0;
    *((float *)this + 296) = 0.0;
    v9 = v50;
    v51 = 0.0;
    v52 = 0.0;
    v43 = 0;
    *((float *)this + 300) = 10.0;
    v42 = 1;
    *((float *)this + 297) = v9;
    *((float *)this + 298) = 0.0;
    v49 = &v35;
    v34 = &unk_1031222E;
    *((float *)this + 299) = 0.0;
    std::string::string(&v35, v34);
    v48 = &v28;
    LOBYTE(v54) = 11;
    std::string::string(&v28, &unk_10312A84);
    v27 = (char *)this + 1144;
    v47 = (void **)&v20;
    LOBYTE(v54) = 12;
    std::string::string(&v20, "TargetBattleID");
    LOBYTE(v54) = 4;
    v10 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 13;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312AA0);
    v48 = &v28;
    LOBYTE(v54) = 14;
    std::string::string(&v28, &unk_10312AB0);
    v27 = (char *)this + 1148;
    v47 = (void **)&v20;
    LOBYTE(v54) = 15;
    std::string::string(&v20, "TargetEstabName");
    LOBYTE(v54) = 4;
    v11 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 16;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312AC8);
    v48 = &v28;
    LOBYTE(v54) = 17;
    std::string::string(&v28, &unk_10312AD4);
    v27 = (char *)this + 1176;
    v47 = (void **)&v20;
    LOBYTE(v54) = 18;
    std::string::string(&v20, "SpawnPosX");
    LOBYTE(v54) = 4;
    v12 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 19;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312AE8);
    v48 = &v28;
    LOBYTE(v54) = 20;
    std::string::string(&v28, &unk_10312AF4);
    v27 = (char *)this + 1180;
    v47 = (void **)&v20;
    LOBYTE(v54) = 21;
    std::string::string(&v20, "SpawnPosY");
    LOBYTE(v54) = 4;
    v13 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 22;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312B08);
    v48 = &v28;
    LOBYTE(v54) = 23;
    std::string::string(&v28, &unk_10312B14);
    LOBYTE(v54) = 24;
    v27 = (char *)this + 1184;
    v47 = (void **)&v20;
    std::string::string(&v20, "SpawnPosZ");
    LOBYTE(v54) = 4;
    v14 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 25;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312B28);
    v48 = &v28;
    LOBYTE(v54) = 26;
    std::string::string(&v28, &unk_10312B34);
    v27 = (char *)this + 1188;
    v47 = (void **)&v20;
    LOBYTE(v54) = 27;
    std::string::string(&v20, "SpawnDirX");
    LOBYTE(v54) = 4;
    v15 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 28;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312B48);
    v48 = &v28;
    LOBYTE(v54) = 29;
    std::string::string(&v28, &unk_10312B54);
    v27 = (char *)this + 1192;
    v47 = (void **)&v20;
    LOBYTE(v54) = 30;
    std::string::string(&v20, "SpawnDirY");
    LOBYTE(v54) = 4;
    v16 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 31;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312B68);
    v48 = &v28;
    LOBYTE(v54) = 32;
    std::string::string(&v28, &unk_10312B74);
    v27 = (char *)this + 1196;
    v47 = (void **)&v20;
    LOBYTE(v54) = 33;
    std::string::string(&v20, "SpawnDirZ");
    LOBYTE(v54) = 4;
    v17 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 34;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312B88);
    v48 = &v28;
    LOBYTE(v54) = 35;
    std::string::string(&v28, &unk_10312B94);
    v27 = (char *)this + 1200;
    v47 = (void **)&v20;
    LOBYTE(v54) = 36;
    std::string::string(&v20, "SpawnRadius");
    LOBYTE(v54) = 4;
    v18 = EditorVar::EditorVar(
            v53,
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
    LOBYTE(v54) = 37;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v54) = 4;
    EditorVar::~EditorVar((EditorVar *)v53);
  }
  return this;
}
