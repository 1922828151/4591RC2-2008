/*
 * func-name: ??0HookEsbSheild@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10131480
 * callers: 0x1000c63f
 * callees: 0x10014669
 */

HookEsbSheild *__thiscall HookEsbSheild::HookEsbSheild(HookEsbSheild *this, struct World *a2)
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
  int v17; // [esp+30Ch] [ebp-FCh] BYREF
  int v18; // [esp+310h] [ebp-F8h]
  int v19; // [esp+314h] [ebp-F4h]
  int v20; // [esp+318h] [ebp-F0h]
  int v21; // [esp+31Ch] [ebp-ECh]
  int v22; // [esp+320h] [ebp-E8h]
  int v23; // [esp+324h] [ebp-E4h]
  char *v24; // [esp+328h] [ebp-E0h]
  int v25; // [esp+32Ch] [ebp-DCh] BYREF
  int v26; // [esp+330h] [ebp-D8h]
  int v27; // [esp+334h] [ebp-D4h]
  int v28; // [esp+338h] [ebp-D0h]
  int v29; // [esp+33Ch] [ebp-CCh]
  int v30; // [esp+340h] [ebp-C8h]
  void *v31; // [esp+344h] [ebp-C4h] BYREF
  int v32; // [esp+348h] [ebp-C0h] BYREF
  int v33; // [esp+34Ch] [ebp-BCh]
  int v34; // [esp+350h] [ebp-B8h]
  int v35; // [esp+354h] [ebp-B4h]
  int v36; // [esp+358h] [ebp-B0h]
  int v37; // [esp+35Ch] [ebp-ACh]
  int v38; // [esp+360h] [ebp-A8h]
  int v39; // [esp+364h] [ebp-A4h]
  int v40; // [esp+368h] [ebp-A0h]
  int v41; // [esp+36Ch] [ebp-9Ch]
  int v42; // [esp+370h] [ebp-98h]
  HookEsbSheild *v43; // [esp+380h] [ebp-88h]
  void **v44; // [esp+384h] [ebp-84h]
  int *v45; // [esp+388h] [ebp-80h]
  int *v46; // [esp+38Ch] [ebp-7Ch]
  float v47; // [esp+390h] [ebp-78h]
  float v48; // [esp+394h] [ebp-74h]
  float v49; // [esp+398h] [ebp-70h]
  _BYTE v50[96]; // [esp+39Ch] [ebp-6Ch] BYREF
  int v51; // [esp+404h] [ebp-4h]

  v43 = this;
  Actor::Actor(this, a2);
  v51 = 0;
  *(_DWORD *)this = &HookEsbSheild::`vftable';
  std::string::string((char *)this + 1056);
  std::string::string((char *)this + 1084);
  std::string::string((char *)this + 1112);
  *((_DWORD *)this + 285) = 0;
  std::string::string((char *)this + 1144);
  std::string::string((char *)this + 1172);
  *((_DWORD *)this + 300) = 0;
  *((float *)this + 304) = 0.0;
  *((float *)this + 305) = 0.0;
  *((float *)this + 306) = 0.0;
  LOBYTE(v51) = 5;
  *((float *)this + 302) = 1.0;
  *((float *)this + 303) = 1.0;
  v3 = (Editor *)Editor::Instance(v41, v42);
  if ( Editor::GetEditorMode(v3) )
  {
    v40 = 1;
    v39 = 0;
    v38 = 0;
    v44 = &v31;
    std::string::string(&v31, "Sphere.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
    sub_10014669(v50);
    v4 = NxPhysics::Instance(this, -1, *((_DWORD *)this + 179), v50, 1);
    *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v4);
  }
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v41, v42), Editor::GetEditorMode(v6)) )
  {
    v40 = 0;
    v39 = 1;
    v44 = (void **)&v32;
    std::string::string(&v32, &unk_103128AC);
    v45 = &v25;
    LOBYTE(v51) = 6;
    std::string::string(&v25, &unk_103128B8);
    v24 = (char *)this + 1056;
    v46 = &v17;
    LOBYTE(v51) = 7;
    std::string::string(&v17, "FlyweightName");
    LOBYTE(v51) = 5;
    v7 = EditorVar::EditorVar(
           v50,
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
           v39,
           v40);
    LOBYTE(v51) = 8;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    v40 = 0;
    v39 = 1;
    v46 = &v32;
    std::string::string(&v32, &unk_103128D0);
    v45 = &v25;
    LOBYTE(v51) = 9;
    std::string::string(&v25, &unk_103128DC);
    v24 = (char *)this + 1084;
    v44 = (void **)&v17;
    LOBYTE(v51) = 10;
    std::string::string(&v17, "EsbParent");
    LOBYTE(v51) = 5;
    v8 = EditorVar::EditorVar(
           v50,
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
           v39,
           v40);
    LOBYTE(v51) = 11;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    v40 = 0;
    v39 = 1;
    v46 = &v32;
    std::string::string(&v32, &unk_103128F0);
    v45 = &v25;
    LOBYTE(v51) = 12;
    std::string::string(&v25, &unk_103128FC);
    v24 = (char *)this + 1144;
    v44 = (void **)&v17;
    LOBYTE(v51) = 13;
    std::string::string(&v17, "EsbEnergy");
    LOBYTE(v51) = 5;
    v9 = EditorVar::EditorVar(
           v50,
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
           v39,
           v40);
    LOBYTE(v51) = 14;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    *((float *)this + 302) = 10.0;
    v40 = 0;
    *((float *)this + 303) = 10.0;
    v39 = 1;
    v47 = 10.0;
    v48 = 10.0;
    v49 = 10.0;
    *((float *)this + 304) = 10.0;
    *((float *)this + 305) = 10.0;
    v46 = &v32;
    v31 = &unk_10312910;
    *((_DWORD *)this + 301) = 0;
    *((float *)this + 306) = 10.0;
    std::string::string(&v32, v31);
    v45 = &v25;
    LOBYTE(v51) = 15;
    std::string::string(&v25, &unk_10312944);
    v24 = (char *)this + 1204;
    v44 = (void **)&v17;
    LOBYTE(v51) = 16;
    std::string::string(&v17, "EsbEffectShape");
    LOBYTE(v51) = 5;
    v10 = EditorVar::EditorVar(
            v50,
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
            v39,
            v40);
    LOBYTE(v51) = 17;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    v40 = 0;
    v39 = 1;
    v46 = &v32;
    std::string::string(&v32, &unk_1031295C);
    v45 = &v25;
    LOBYTE(v51) = 18;
    std::string::string(&v25, &unk_1031296C);
    v24 = (char *)this + 1216;
    v44 = (void **)&v17;
    LOBYTE(v51) = 19;
    std::string::string(&v17, "EsbEffectDimX");
    LOBYTE(v51) = 5;
    v11 = EditorVar::EditorVar(
            v50,
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
            v39,
            v40);
    LOBYTE(v51) = 20;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    v40 = 0;
    v39 = 1;
    v46 = &v32;
    std::string::string(&v32, &unk_10312984);
    v45 = &v25;
    LOBYTE(v51) = 21;
    std::string::string(&v25, &unk_10312994);
    v24 = (char *)this + 1220;
    v44 = (void **)&v17;
    LOBYTE(v51) = 22;
    std::string::string(&v17, "EsbEffectDimY");
    LOBYTE(v51) = 5;
    v12 = EditorVar::EditorVar(
            v50,
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
            v39,
            v40);
    LOBYTE(v51) = 23;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    v40 = 0;
    v39 = 1;
    v46 = &v32;
    std::string::string(&v32, &unk_103129AC);
    v45 = &v25;
    LOBYTE(v51) = 24;
    std::string::string(&v25, &unk_103129BC);
    v24 = (char *)this + 1224;
    v44 = (void **)&v17;
    LOBYTE(v51) = 25;
    std::string::string(&v17, "EsbEffectDimZ");
    LOBYTE(v51) = 5;
    v13 = EditorVar::EditorVar(
            v50,
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
            v39,
            v40);
    LOBYTE(v51) = 26;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    v40 = 0;
    v39 = 1;
    v46 = &v32;
    std::string::string(&v32, &unk_103129D4);
    v45 = &v25;
    LOBYTE(v51) = 27;
    std::string::string(&v25, &unk_103129E4);
    v24 = (char *)this + 1208;
    v44 = (void **)&v17;
    LOBYTE(v51) = 28;
    std::string::string(&v17, "EsbEffectRadius");
    LOBYTE(v51) = 5;
    v14 = EditorVar::EditorVar(
            v50,
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
            v39,
            v40);
    LOBYTE(v51) = 29;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
    v40 = 0;
    v39 = 1;
    v46 = &v32;
    std::string::string(&v32, &unk_103129FC);
    v45 = &v25;
    LOBYTE(v51) = 30;
    std::string::string(&v25, &unk_10312A0C);
    v24 = (char *)this + 1212;
    v44 = (void **)&v17;
    LOBYTE(v51) = 31;
    std::string::string(&v17, "EsbEffectHeight");
    LOBYTE(v51) = 5;
    v15 = EditorVar::EditorVar(
            v50,
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
            v39,
            v40);
    LOBYTE(v51) = 32;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v51) = 5;
    EditorVar::~EditorVar((EditorVar *)v50);
  }
  return this;
}
