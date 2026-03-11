/*
 * func-name: ??0HookAlarmArea@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10134050
 * callers: 0x1000308f
 * callees: 0x10014669
 */

HookAlarmArea *__thiscall HookAlarmArea::HookAlarmArea(HookAlarmArea *this, struct World *a2)
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
  int v18; // [esp+370h] [ebp-FCh] BYREF
  int v19; // [esp+374h] [ebp-F8h]
  int v20; // [esp+378h] [ebp-F4h]
  int v21; // [esp+37Ch] [ebp-F0h]
  int v22; // [esp+380h] [ebp-ECh]
  int v23; // [esp+384h] [ebp-E8h]
  int v24; // [esp+388h] [ebp-E4h]
  char *v25; // [esp+38Ch] [ebp-E0h]
  int v26; // [esp+390h] [ebp-DCh] BYREF
  int v27; // [esp+394h] [ebp-D8h]
  int v28; // [esp+398h] [ebp-D4h]
  int v29; // [esp+39Ch] [ebp-D0h]
  int v30; // [esp+3A0h] [ebp-CCh]
  int v31; // [esp+3A4h] [ebp-C8h]
  void *v32; // [esp+3A8h] [ebp-C4h] BYREF
  int v33; // [esp+3ACh] [ebp-C0h] BYREF
  int v34; // [esp+3B0h] [ebp-BCh]
  int v35; // [esp+3B4h] [ebp-B8h]
  int v36; // [esp+3B8h] [ebp-B4h]
  int v37; // [esp+3BCh] [ebp-B0h]
  int v38; // [esp+3C0h] [ebp-ACh]
  int v39; // [esp+3C4h] [ebp-A8h]
  int v40; // [esp+3C8h] [ebp-A4h]
  int v41; // [esp+3CCh] [ebp-A0h]
  int v42; // [esp+3D0h] [ebp-9Ch]
  int v43; // [esp+3D4h] [ebp-98h]
  HookAlarmArea *v44; // [esp+3E4h] [ebp-88h]
  void **v45; // [esp+3E8h] [ebp-84h]
  int *v46; // [esp+3ECh] [ebp-80h]
  int *v47; // [esp+3F0h] [ebp-7Ch]
  float v48; // [esp+3F4h] [ebp-78h]
  float v49; // [esp+3F8h] [ebp-74h]
  float v50; // [esp+3FCh] [ebp-70h]
  _BYTE v51[96]; // [esp+400h] [ebp-6Ch] BYREF
  int v52; // [esp+468h] [ebp-4h]

  v44 = this;
  Actor::Actor(this, a2);
  v52 = 0;
  *(_DWORD *)this = &HookAlarmArea::`vftable';
  std::string::string((char *)this + 1052);
  std::string::string((char *)this + 1080);
  *((_DWORD *)this + 277) = 0;
  std::string::string((char *)this + 1116);
  std::string::string((char *)this + 1144);
  *((_DWORD *)this + 293) = 0;
  *((float *)this + 297) = 0.0;
  *((float *)this + 298) = 0.0;
  *((float *)this + 299) = 0.0;
  LOBYTE(v52) = 4;
  v3 = (Editor *)Editor::Instance(v42, v43);
  if ( Editor::GetEditorMode(v3) )
  {
    v41 = 1;
    v40 = 0;
    v39 = 0;
    v45 = &v32;
    std::string::string(&v32, "Sphere.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
    sub_10014669(v51);
    v4 = NxPhysics::Instance(this, -1, *((_DWORD *)this + 179), v51, 1);
    *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v4);
  }
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v42, v43), Editor::GetEditorMode(v6)) )
  {
    v41 = 0;
    v40 = 1;
    v45 = (void **)&v33;
    std::string::string(&v33, &unk_10313058);
    v46 = &v26;
    LOBYTE(v52) = 5;
    std::string::string(&v26, &unk_10313064);
    v25 = (char *)this + 1052;
    v47 = &v18;
    LOBYTE(v52) = 6;
    std::string::string(&v18, "EsbParent");
    LOBYTE(v52) = 4;
    v7 = EditorVar::EditorVar(
           v51,
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
           v39,
           v40,
           v41);
    LOBYTE(v52) = 7;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 0;
    v47 = &v33;
    std::string::string(&v33, &unk_10313078);
    v46 = &v26;
    LOBYTE(v52) = 8;
    std::string::string(&v26, &unk_10313084);
    v25 = (char *)this + 1112;
    v45 = (void **)&v18;
    LOBYTE(v52) = 9;
    std::string::string(&v18, "EsbParentID");
    LOBYTE(v52) = 4;
    v8 = EditorVar::EditorVar(
           v51,
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
           v39,
           v40,
           v41);
    LOBYTE(v52) = 10;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 1;
    v47 = &v33;
    std::string::string(&v33, &unk_10313098);
    v46 = &v26;
    LOBYTE(v52) = 11;
    std::string::string(&v26, &unk_103130A4);
    v25 = (char *)this + 1116;
    v45 = (void **)&v18;
    LOBYTE(v52) = 12;
    std::string::string(&v18, "ParentArea");
    LOBYTE(v52) = 4;
    v9 = EditorVar::EditorVar(
           v51,
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
           v39,
           v40,
           v41);
    LOBYTE(v52) = 13;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    *((float *)this + 295) = 10.0;
    *((float *)this + 296) = 10.0;
    v40 = 1;
    v48 = 10.0;
    v49 = 10.0;
    v50 = 10.0;
    *((float *)this + 297) = 10.0;
    v47 = &v33;
    *((float *)this + 298) = 10.0;
    v32 = &unk_103130B8;
    *((_DWORD *)this + 294) = 1;
    *((float *)this + 299) = 10.0;
    std::string::string(&v33, v32);
    v46 = &v26;
    LOBYTE(v52) = 14;
    std::string::string(&v26, &unk_103130EC);
    v25 = (char *)this + 1176;
    v45 = (void **)&v18;
    LOBYTE(v52) = 15;
    std::string::string(&v18, "EsbEffectShape");
    LOBYTE(v52) = 4;
    v10 = EditorVar::EditorVar(
            v51,
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
            v39,
            v40,
            v41);
    LOBYTE(v52) = 16;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 1;
    v47 = &v33;
    std::string::string(&v33, &unk_10313104);
    v46 = &v26;
    LOBYTE(v52) = 17;
    std::string::string(&v26, &unk_10313114);
    v25 = (char *)this + 1188;
    v45 = (void **)&v18;
    LOBYTE(v52) = 18;
    std::string::string(&v18, "EsbEffectDimX");
    LOBYTE(v52) = 4;
    v11 = EditorVar::EditorVar(
            v51,
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
            v39,
            v40,
            v41);
    LOBYTE(v52) = 19;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 1;
    v47 = &v33;
    std::string::string(&v33, &unk_1031312C);
    v46 = &v26;
    LOBYTE(v52) = 20;
    std::string::string(&v26, &unk_1031313C);
    v25 = (char *)this + 1192;
    v45 = (void **)&v18;
    LOBYTE(v52) = 21;
    std::string::string(&v18, "EsbEffectDimY");
    LOBYTE(v52) = 4;
    v12 = EditorVar::EditorVar(
            v51,
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
            v39,
            v40,
            v41);
    LOBYTE(v52) = 22;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 1;
    v47 = &v33;
    std::string::string(&v33, &unk_10313154);
    v46 = &v26;
    LOBYTE(v52) = 23;
    std::string::string(&v26, &unk_10313164);
    v25 = (char *)this + 1196;
    v45 = (void **)&v18;
    LOBYTE(v52) = 24;
    std::string::string(&v18, "EsbEffectDimZ");
    LOBYTE(v52) = 4;
    v13 = EditorVar::EditorVar(
            v51,
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
            v39,
            v40,
            v41);
    LOBYTE(v52) = 25;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 0;
    v47 = &v33;
    std::string::string(&v33, &unk_1031317C);
    v46 = &v26;
    LOBYTE(v52) = 26;
    std::string::string(&v26, &unk_1031318C);
    v25 = (char *)this + 1188;
    v45 = (void **)&v18;
    LOBYTE(v52) = 27;
    std::string::string(&v18, "EsbEffectDim");
    LOBYTE(v52) = 4;
    v14 = EditorVar::EditorVar(
            v51,
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
            v39,
            v40,
            v41);
    LOBYTE(v52) = 28;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 1;
    v47 = &v33;
    std::string::string(&v33, &unk_103131A4);
    v46 = &v26;
    LOBYTE(v52) = 29;
    std::string::string(&v26, &unk_103131B4);
    v25 = (char *)this + 1180;
    v45 = (void **)&v18;
    LOBYTE(v52) = 30;
    std::string::string(&v18, "EsbEffectRadius");
    LOBYTE(v52) = 4;
    v15 = EditorVar::EditorVar(
            v51,
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
            v39,
            v40,
            v41);
    LOBYTE(v52) = 31;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
    v41 = 0;
    v40 = 1;
    v47 = &v33;
    std::string::string(&v33, &unk_103131CC);
    v46 = &v26;
    LOBYTE(v52) = 32;
    std::string::string(&v26, &unk_103131DC);
    v25 = (char *)this + 1184;
    v45 = (void **)&v18;
    LOBYTE(v52) = 33;
    std::string::string(&v18, "EsbEffectHeight");
    LOBYTE(v52) = 4;
    v16 = EditorVar::EditorVar(
            v51,
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
            v39,
            v40,
            v41);
    LOBYTE(v52) = 34;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v52) = 4;
    EditorVar::~EditorVar((EditorVar *)v51);
  }
  return this;
}
