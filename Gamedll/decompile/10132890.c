/*
 * func-name: ??0HookEsbTransport@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10132890
 * callers: 0x10009aa2
 * callees: 0x10014669
 */

HookEsbTransport *__thiscall HookEsbTransport::HookEsbTransport(HookEsbTransport *this, struct World *a2)
{
  Editor *v3; // eax
  int v4; // eax
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  float v9; // edx
  float v10; // edx
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
  int v35; // [esp+94Ch] [ebp-FCh] BYREF
  int v36; // [esp+950h] [ebp-F8h]
  int v37; // [esp+954h] [ebp-F4h]
  int v38; // [esp+958h] [ebp-F0h]
  int v39; // [esp+95Ch] [ebp-ECh]
  int v40; // [esp+960h] [ebp-E8h]
  int v41; // [esp+964h] [ebp-E4h]
  char *v42; // [esp+968h] [ebp-E0h]
  int v43; // [esp+96Ch] [ebp-DCh] BYREF
  int v44; // [esp+970h] [ebp-D8h]
  int v45; // [esp+974h] [ebp-D4h]
  int v46; // [esp+978h] [ebp-D0h]
  int v47; // [esp+97Ch] [ebp-CCh]
  int v48; // [esp+980h] [ebp-C8h]
  void *v49; // [esp+984h] [ebp-C4h] BYREF
  int v50; // [esp+988h] [ebp-C0h] BYREF
  int v51; // [esp+98Ch] [ebp-BCh]
  int v52; // [esp+990h] [ebp-B8h]
  int v53; // [esp+994h] [ebp-B4h]
  int v54; // [esp+998h] [ebp-B0h]
  int v55; // [esp+99Ch] [ebp-ACh]
  int v56; // [esp+9A0h] [ebp-A8h]
  int v57; // [esp+9A4h] [ebp-A4h]
  int v58; // [esp+9A8h] [ebp-A0h]
  int v59; // [esp+9ACh] [ebp-9Ch]
  int v60; // [esp+9B0h] [ebp-98h]
  HookEsbTransport *v61; // [esp+9C0h] [ebp-88h]
  void **v62; // [esp+9C4h] [ebp-84h]
  int *v63; // [esp+9C8h] [ebp-80h]
  int *v64; // [esp+9CCh] [ebp-7Ch]
  float v65; // [esp+9D0h] [ebp-78h]
  float v66; // [esp+9D4h] [ebp-74h]
  float v67; // [esp+9D8h] [ebp-70h]
  _BYTE v68[96]; // [esp+9DCh] [ebp-6Ch] BYREF
  int v69; // [esp+A44h] [ebp-4h]

  v61 = this;
  Actor::Actor(this, a2);
  v69 = 0;
  *(_DWORD *)this = &HookEsbTransport::`vftable';
  std::string::string((char *)this + 1056);
  std::string::string((char *)this + 1084);
  std::string::string((char *)this + 1112);
  *((_DWORD *)this + 285) = 0;
  std::string::string((char *)this + 1148);
  *((float *)this + 294) = 0.0;
  *((float *)this + 295) = 0.0;
  *((float *)this + 296) = 0.0;
  *((float *)this + 297) = 0.0;
  LOBYTE(v69) = 4;
  *((float *)this + 298) = 0.0;
  *((float *)this + 299) = 0.0;
  *((_DWORD *)this + 301) = 0;
  *((float *)this + 302) = 0.0;
  *((float *)this + 303) = 0.0;
  *((float *)this + 304) = 0.0;
  *((float *)this + 305) = 0.0;
  *((float *)this + 306) = 0.0;
  *((float *)this + 307) = 0.0;
  *((_DWORD *)this + 309) = 0;
  *((float *)this + 310) = 0.0;
  *((float *)this + 311) = 0.0;
  *((float *)this + 312) = 0.0;
  *((float *)this + 313) = 0.0;
  *((float *)this + 314) = 0.0;
  *((float *)this + 315) = 0.0;
  *((_DWORD *)this + 317) = 0;
  v3 = (Editor *)Editor::Instance(v59, v60);
  if ( Editor::GetEditorMode(v3) )
  {
    v58 = 1;
    v57 = 0;
    v56 = 0;
    v62 = &v49;
    std::string::string(&v49, "Sphere.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
    sub_10014669(v68);
    v4 = NxPhysics::Instance(this, -1, *((_DWORD *)this + 179), v68, 1);
    *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v4);
  }
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v59, v60), Editor::GetEditorMode(v6)) )
  {
    v58 = 0;
    v57 = 1;
    v62 = (void **)&v50;
    std::string::string(&v50, &unk_10312BDC);
    v63 = &v43;
    LOBYTE(v69) = 5;
    std::string::string(&v43, &unk_10312BE8);
    v42 = (char *)this + 1056;
    v64 = &v35;
    LOBYTE(v69) = 6;
    std::string::string(&v35, "FlyweightName");
    LOBYTE(v69) = 4;
    v7 = EditorVar::EditorVar(
           v68,
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
    LOBYTE(v69) = 7;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312C00);
    v63 = &v43;
    LOBYTE(v69) = 8;
    std::string::string(&v43, &unk_10312C0C);
    v42 = (char *)this + 1084;
    v62 = (void **)&v35;
    LOBYTE(v69) = 9;
    std::string::string(&v35, "EsbParent");
    LOBYTE(v69) = 4;
    v8 = EditorVar::EditorVar(
           v68,
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
    LOBYTE(v69) = 10;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v65 = 0.0;
    *((_DWORD *)this + 286) = -1;
    *((float *)this + 294) = v65;
    v65 = 1.0;
    *((float *)this + 295) = 0.0;
    *((float *)this + 296) = 0.0;
    *((float *)this + 297) = v65;
    *((float *)this + 300) = 10.0;
    *((float *)this + 298) = 0.0;
    *((float *)this + 299) = 0.0;
    *((float *)this + 302) = 0.0;
    *((float *)this + 303) = 0.0;
    v67 = 0.0;
    *((float *)this + 304) = 0.0;
    v9 = v67;
    *((float *)this + 308) = 10.0;
    *((float *)this + 305) = 1.0;
    *((float *)this + 306) = 0.0;
    v67 = 0.0;
    v58 = 0;
    *((float *)this + 310) = 0.0;
    v65 = 1.0;
    *((float *)this + 311) = 0.0;
    v66 = 0.0;
    *((float *)this + 307) = v9;
    v10 = v67;
    v67 = 0.0;
    v57 = 1;
    *((float *)this + 316) = 10.0;
    *((float *)this + 313) = 1.0;
    *((float *)this + 314) = 0.0;
    *((float *)this + 312) = v10;
    v64 = &v50;
    v49 = &unk_1031222F;
    *((float *)this + 315) = v67;
    std::string::string(&v50, v49);
    v63 = &v43;
    LOBYTE(v69) = 11;
    std::string::string(&v43, &unk_10312C20);
    v42 = (char *)this + 1144;
    v62 = (void **)&v35;
    LOBYTE(v69) = 12;
    std::string::string(&v35, "TargetBattleID");
    LOBYTE(v69) = 4;
    v11 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 13;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312C3C);
    v63 = &v43;
    LOBYTE(v69) = 14;
    std::string::string(&v43, &unk_10312C4C);
    v42 = (char *)this + 1148;
    v62 = (void **)&v35;
    LOBYTE(v69) = 15;
    std::string::string(&v35, "TargetEstabName");
    LOBYTE(v69) = 4;
    v12 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 16;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312C64);
    v63 = &v43;
    LOBYTE(v69) = 17;
    std::string::string(&v43, &unk_10312C78);
    v42 = (char *)this + 1176;
    v62 = (void **)&v35;
    LOBYTE(v69) = 18;
    std::string::string(&v35, "GVSpawnPosX");
    LOBYTE(v69) = 4;
    v13 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 19;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312C8C);
    v63 = &v43;
    LOBYTE(v69) = 20;
    std::string::string(&v43, &unk_10312CA0);
    v42 = (char *)this + 1180;
    v62 = (void **)&v35;
    LOBYTE(v69) = 21;
    std::string::string(&v35, "GVSpawnPosY");
    LOBYTE(v69) = 4;
    v14 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 22;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312CB4);
    v63 = &v43;
    LOBYTE(v69) = 23;
    std::string::string(&v43, &unk_10312CC8);
    v42 = (char *)this + 1184;
    v62 = (void **)&v35;
    LOBYTE(v69) = 24;
    std::string::string(&v35, "GVSpawnPosZ");
    LOBYTE(v69) = 4;
    v15 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 25;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312CDC);
    v63 = &v43;
    LOBYTE(v69) = 26;
    std::string::string(&v43, &unk_10312CF0);
    LOBYTE(v69) = 27;
    v42 = (char *)this + 1188;
    v62 = (void **)&v35;
    std::string::string(&v35, "GVSpawnDirX");
    LOBYTE(v69) = 4;
    v16 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 28;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312D04);
    v63 = &v43;
    LOBYTE(v69) = 29;
    std::string::string(&v43, &unk_10312D18);
    v42 = (char *)this + 1192;
    v62 = (void **)&v35;
    LOBYTE(v69) = 30;
    std::string::string(&v35, "GVSpawnDirY");
    LOBYTE(v69) = 4;
    v17 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 31;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312D2C);
    v63 = &v43;
    LOBYTE(v69) = 32;
    std::string::string(&v43, &unk_10312D40);
    v42 = (char *)this + 1196;
    v62 = (void **)&v35;
    LOBYTE(v69) = 33;
    std::string::string(&v35, "GVSpawnDirZ");
    LOBYTE(v69) = 4;
    v18 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 34;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312D54);
    v63 = &v43;
    LOBYTE(v69) = 35;
    std::string::string(&v43, &unk_10312D68);
    v42 = (char *)this + 1200;
    v62 = (void **)&v35;
    LOBYTE(v69) = 36;
    std::string::string(&v35, "GVSpawnRadius");
    LOBYTE(v69) = 4;
    v19 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 37;
    std::vector<EditorVar>::push_back((char *)this + 424, v19);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312D80);
    v63 = &v43;
    LOBYTE(v69) = 38;
    std::string::string(&v43, &unk_10312D94);
    v42 = (char *)this + 1208;
    v62 = (void **)&v35;
    LOBYTE(v69) = 39;
    std::string::string(&v35, "AVSpawnPosX");
    LOBYTE(v69) = 4;
    v20 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 40;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312DA8);
    LOBYTE(v69) = 41;
    v63 = &v43;
    std::string::string(&v43, &unk_10312DBC);
    v42 = (char *)this + 1212;
    v62 = (void **)&v35;
    LOBYTE(v69) = 42;
    std::string::string(&v35, "AVSpawnPosY");
    LOBYTE(v69) = 4;
    v21 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 43;
    std::vector<EditorVar>::push_back((char *)this + 424, v21);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312DD0);
    v63 = &v43;
    LOBYTE(v69) = 44;
    std::string::string(&v43, &unk_10312DE4);
    v42 = (char *)this + 1216;
    v62 = (void **)&v35;
    LOBYTE(v69) = 45;
    std::string::string(&v35, "AVSpawnPosZ");
    LOBYTE(v69) = 4;
    v22 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 46;
    std::vector<EditorVar>::push_back((char *)this + 424, v22);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312DF8);
    v63 = &v43;
    LOBYTE(v69) = 47;
    std::string::string(&v43, &unk_10312E0C);
    v42 = (char *)this + 1220;
    v62 = (void **)&v35;
    LOBYTE(v69) = 48;
    std::string::string(&v35, "AVSpawnDirX");
    LOBYTE(v69) = 4;
    v23 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 49;
    std::vector<EditorVar>::push_back((char *)this + 424, v23);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312E20);
    v63 = &v43;
    LOBYTE(v69) = 50;
    std::string::string(&v43, &unk_10312E34);
    v42 = (char *)this + 1224;
    v62 = (void **)&v35;
    LOBYTE(v69) = 51;
    std::string::string(&v35, "AVSpawnDirY");
    LOBYTE(v69) = 4;
    v24 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 52;
    std::vector<EditorVar>::push_back((char *)this + 424, v24);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312E48);
    v63 = &v43;
    LOBYTE(v69) = 53;
    std::string::string(&v43, &unk_10312E5C);
    v42 = (char *)this + 1228;
    v62 = (void **)&v35;
    LOBYTE(v69) = 54;
    std::string::string(&v35, "AVSpawnDirZ");
    LOBYTE(v69) = 4;
    v25 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 55;
    std::vector<EditorVar>::push_back((char *)this + 424, v25);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312E70);
    v63 = &v43;
    LOBYTE(v69) = 56;
    std::string::string(&v43, &unk_10312E84);
    v42 = (char *)this + 1232;
    v62 = (void **)&v35;
    LOBYTE(v69) = 57;
    std::string::string(&v35, "AVSpawnRadius");
    LOBYTE(v69) = 4;
    v26 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 58;
    std::vector<EditorVar>::push_back((char *)this + 424, v26);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312E9C);
    v63 = &v43;
    LOBYTE(v69) = 59;
    std::string::string(&v43, &unk_10312EB4);
    v42 = (char *)this + 1240;
    v62 = (void **)&v35;
    LOBYTE(v69) = 60;
    std::string::string(&v35, "RobotSpawnPosX");
    LOBYTE(v69) = 4;
    v27 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 61;
    std::vector<EditorVar>::push_back((char *)this + 424, v27);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312ECC);
    v63 = &v43;
    LOBYTE(v69) = 62;
    std::string::string(&v43, &unk_10312EE4);
    v42 = (char *)this + 1244;
    v62 = (void **)&v35;
    LOBYTE(v69) = 63;
    std::string::string(&v35, "RobotSpawnPosY");
    LOBYTE(v69) = 4;
    v28 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 64;
    std::vector<EditorVar>::push_back((char *)this + 424, v28);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312EFC);
    v63 = &v43;
    LOBYTE(v69) = 65;
    std::string::string(&v43, &unk_10312F14);
    v42 = (char *)this + 1248;
    v62 = (void **)&v35;
    LOBYTE(v69) = 66;
    std::string::string(&v35, "RobotSpawnPosZ");
    LOBYTE(v69) = 4;
    v29 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 67;
    std::vector<EditorVar>::push_back((char *)this + 424, v29);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312F2C);
    v63 = &v43;
    LOBYTE(v69) = 68;
    std::string::string(&v43, &unk_10312F44);
    v42 = (char *)this + 1252;
    v62 = (void **)&v35;
    LOBYTE(v69) = 69;
    std::string::string(&v35, "RobotSpawnDirX");
    LOBYTE(v69) = 4;
    v30 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 70;
    std::vector<EditorVar>::push_back((char *)this + 424, v30);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312F5C);
    v63 = &v43;
    LOBYTE(v69) = 71;
    std::string::string(&v43, &unk_10312F74);
    v42 = (char *)this + 1256;
    v62 = (void **)&v35;
    LOBYTE(v69) = 72;
    std::string::string(&v35, "RobotSpawnDirY");
    LOBYTE(v69) = 4;
    v31 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 73;
    std::vector<EditorVar>::push_back((char *)this + 424, v31);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312F8C);
    v63 = &v43;
    LOBYTE(v69) = 74;
    std::string::string(&v43, &unk_10312FA4);
    v42 = (char *)this + 1260;
    v62 = (void **)&v35;
    LOBYTE(v69) = 75;
    std::string::string(&v35, "RobotSpawnDirZ");
    LOBYTE(v69) = 4;
    v32 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 76;
    std::vector<EditorVar>::push_back((char *)this + 424, v32);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
    v58 = 0;
    v57 = 1;
    v64 = &v50;
    std::string::string(&v50, &unk_10312FBC);
    v63 = &v43;
    LOBYTE(v69) = 77;
    std::string::string(&v43, &unk_10312FD4);
    v42 = (char *)this + 1264;
    v62 = (void **)&v35;
    LOBYTE(v69) = 78;
    std::string::string(&v35, "RobotSpawnRadius");
    LOBYTE(v69) = 4;
    v33 = EditorVar::EditorVar(
            v68,
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
    LOBYTE(v69) = 79;
    std::vector<EditorVar>::push_back((char *)this + 424, v33);
    LOBYTE(v69) = 4;
    EditorVar::~EditorVar((EditorVar *)v68);
  }
  return this;
}
