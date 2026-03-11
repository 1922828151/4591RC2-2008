/*
 * func-name: ??0HookEsbTake@@QAE@PAVWorld@@@Z_0
 * func-address: 0x101307c0
 * callers: 0x10003c3d
 * callees: 0x10014669
 */

HookEsbTake *__thiscall HookEsbTake::HookEsbTake(HookEsbTake *this, struct World *a2)
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
  int v20; // [esp+438h] [ebp-FCh] BYREF
  int v21; // [esp+43Ch] [ebp-F8h]
  int v22; // [esp+440h] [ebp-F4h]
  int v23; // [esp+444h] [ebp-F0h]
  int v24; // [esp+448h] [ebp-ECh]
  int v25; // [esp+44Ch] [ebp-E8h]
  int v26; // [esp+450h] [ebp-E4h]
  char *v27; // [esp+454h] [ebp-E0h]
  int v28; // [esp+458h] [ebp-DCh] BYREF
  int v29; // [esp+45Ch] [ebp-D8h]
  int v30; // [esp+460h] [ebp-D4h]
  int v31; // [esp+464h] [ebp-D0h]
  int v32; // [esp+468h] [ebp-CCh]
  int v33; // [esp+46Ch] [ebp-C8h]
  int v34; // [esp+470h] [ebp-C4h] BYREF
  int v35; // [esp+474h] [ebp-C0h] BYREF
  int v36; // [esp+478h] [ebp-BCh]
  int v37; // [esp+47Ch] [ebp-B8h]
  int v38; // [esp+480h] [ebp-B4h]
  int v39; // [esp+484h] [ebp-B0h]
  int v40; // [esp+488h] [ebp-ACh]
  int v41; // [esp+48Ch] [ebp-A8h]
  int v42; // [esp+490h] [ebp-A4h]
  int v43; // [esp+494h] [ebp-A0h]
  int v44; // [esp+498h] [ebp-9Ch]
  int v45; // [esp+49Ch] [ebp-98h]
  HookEsbTake *v46; // [esp+4ACh] [ebp-88h]
  int *v47; // [esp+4B0h] [ebp-84h]
  int *v48; // [esp+4B4h] [ebp-80h]
  int *v49; // [esp+4B8h] [ebp-7Ch]
  float v50; // [esp+4BCh] [ebp-78h]
  float v51; // [esp+4C0h] [ebp-74h]
  float v52; // [esp+4C4h] [ebp-70h]
  _BYTE v53[96]; // [esp+4C8h] [ebp-6Ch] BYREF
  int v54; // [esp+530h] [ebp-4h]

  v46 = this;
  Actor::Actor(this, a2);
  v54 = 0;
  *(_DWORD *)this = &HookEsbTake::`vftable';
  *((_BYTE *)this + 1052) = 1;
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
  *((float *)this + 307) = 0.0;
  LOBYTE(v54) = 5;
  *((float *)this + 308) = 0.0;
  *((float *)this + 309) = 0.0;
  *((_DWORD *)this + 310) = 0;
  *((float *)this + 301) = 1.0;
  *((float *)this + 302) = 1.0;
  *((float *)this + 303) = 1.0;
  v50 = 0.0;
  v51 = 0.0;
  *((float *)this + 304) = 0.0;
  v52 = 0.0;
  *((float *)this + 305) = 0.0;
  *((float *)this + 306) = 0.0;
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
    v47 = &v35;
    std::string::string(&v35, &unk_103126B8);
    v48 = &v28;
    LOBYTE(v54) = 6;
    std::string::string(&v28, &unk_103126C4);
    v27 = (char *)this + 1056;
    v49 = &v20;
    LOBYTE(v54) = 7;
    std::string::string(&v20, "FlyweightName");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 8;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_103126DC);
    v48 = &v28;
    LOBYTE(v54) = 9;
    std::string::string(&v28, &unk_103126E8);
    v27 = (char *)this + 1084;
    v47 = &v20;
    LOBYTE(v54) = 10;
    std::string::string(&v20, "EsbParent");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 11;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_103126FC);
    v48 = &v28;
    LOBYTE(v54) = 12;
    std::string::string(&v28, &unk_10312708);
    v27 = (char *)this + 1144;
    v47 = &v20;
    LOBYTE(v54) = 13;
    std::string::string(&v20, "EsbStore");
    LOBYTE(v54) = 5;
    v9 = EditorVar::EditorVar(
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
    LOBYTE(v54) = 14;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_1031271C);
    v48 = &v28;
    LOBYTE(v54) = 15;
    std::string::string(&v28, &unk_1031272C);
    v27 = (char *)this + 1204;
    v47 = &v20;
    LOBYTE(v54) = 16;
    std::string::string(&v20, "EsbEffectRadius");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 17;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312744);
    v48 = &v28;
    LOBYTE(v54) = 18;
    std::string::string(&v28, &unk_10312754);
    v27 = (char *)this + 1208;
    v47 = &v20;
    LOBYTE(v54) = 19;
    std::string::string(&v20, "EsbEffectHeight");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 20;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_1031276C);
    v48 = &v28;
    LOBYTE(v54) = 21;
    std::string::string(&v28, &unk_1031277C);
    v27 = (char *)this + 1216;
    v47 = &v20;
    LOBYTE(v54) = 22;
    std::string::string(&v20, "EsbProducePosX");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 23;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312794);
    v48 = &v28;
    LOBYTE(v54) = 24;
    std::string::string(&v28, &unk_103127A4);
    v27 = (char *)this + 1220;
    v47 = &v20;
    LOBYTE(v54) = 25;
    std::string::string(&v20, "EsbProducePosY");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 26;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_103127BC);
    v48 = &v28;
    LOBYTE(v54) = 27;
    std::string::string(&v28, &unk_103127CC);
    v27 = (char *)this + 1224;
    v47 = &v20;
    LOBYTE(v54) = 28;
    std::string::string(&v20, "EsbProducePosZ");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 29;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_103127E4);
    v48 = &v28;
    LOBYTE(v54) = 30;
    std::string::string(&v28, &unk_103127F4);
    v27 = (char *)this + 1212;
    v47 = &v20;
    LOBYTE(v54) = 31;
    std::string::string(&v20, "EsbProduceRadius");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 32;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312810);
    v48 = &v28;
    LOBYTE(v54) = 33;
    std::string::string(&v28, &unk_1031281C);
    v27 = (char *)this + 1228;
    LOBYTE(v54) = 34;
    v47 = &v20;
    std::string::string(&v20, "EsbProduceDirX");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 35;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312834);
    v48 = &v28;
    LOBYTE(v54) = 36;
    std::string::string(&v28, &unk_10312840);
    v27 = (char *)this + 1232;
    v47 = &v20;
    LOBYTE(v54) = 37;
    std::string::string(&v20, "EsbProduceDirY");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 38;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
    v43 = 0;
    v42 = 1;
    v49 = &v35;
    std::string::string(&v35, &unk_10312858);
    v48 = &v28;
    LOBYTE(v54) = 39;
    std::string::string(&v28, &unk_10312864);
    v27 = (char *)this + 1236;
    v47 = &v20;
    LOBYTE(v54) = 40;
    std::string::string(&v20, "EsbProduceDirZ");
    LOBYTE(v54) = 5;
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
    LOBYTE(v54) = 41;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v54) = 5;
    EditorVar::~EditorVar((EditorVar *)v53);
  }
  return this;
}
