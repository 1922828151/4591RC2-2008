/*
 * func-name: ??0HookEstablishment@@QAE@PAVWorld@@@Z_0
 * func-address: 0x1012f080
 * callers: 0x1001979a
 * callees: 0x10014669
 */

HookEstablishment *__thiscall HookEstablishment::HookEstablishment(HookEstablishment *this, struct World *a2)
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
  int v23; // [esp+564h] [ebp-FCh] BYREF
  int v24; // [esp+568h] [ebp-F8h]
  int v25; // [esp+56Ch] [ebp-F4h]
  int v26; // [esp+570h] [ebp-F0h]
  int v27; // [esp+574h] [ebp-ECh]
  int v28; // [esp+578h] [ebp-E8h]
  int v29; // [esp+57Ch] [ebp-E4h]
  char *v30; // [esp+580h] [ebp-E0h]
  int v31; // [esp+584h] [ebp-DCh] BYREF
  int v32; // [esp+588h] [ebp-D8h]
  int v33; // [esp+58Ch] [ebp-D4h]
  int v34; // [esp+590h] [ebp-D0h]
  int v35; // [esp+594h] [ebp-CCh]
  int v36; // [esp+598h] [ebp-C8h]
  int v37; // [esp+59Ch] [ebp-C4h] BYREF
  int v38; // [esp+5A0h] [ebp-C0h] BYREF
  int v39; // [esp+5A4h] [ebp-BCh]
  int v40; // [esp+5A8h] [ebp-B8h]
  int v41; // [esp+5ACh] [ebp-B4h]
  int v42; // [esp+5B0h] [ebp-B0h]
  int v43; // [esp+5B4h] [ebp-ACh]
  int v44; // [esp+5B8h] [ebp-A8h]
  int v45; // [esp+5BCh] [ebp-A4h]
  int v46; // [esp+5C0h] [ebp-A0h]
  int v47; // [esp+5C4h] [ebp-9Ch]
  int v48; // [esp+5C8h] [ebp-98h]
  HookEstablishment *v49; // [esp+5D8h] [ebp-88h]
  int *v50; // [esp+5DCh] [ebp-84h]
  int *v51; // [esp+5E0h] [ebp-80h]
  int *v52; // [esp+5E4h] [ebp-7Ch]
  float v53; // [esp+5E8h] [ebp-78h]
  float v54; // [esp+5ECh] [ebp-74h]
  float v55; // [esp+5F0h] [ebp-70h]
  _BYTE v56[96]; // [esp+5F4h] [ebp-6Ch] BYREF
  int v57; // [esp+65Ch] [ebp-4h]

  v49 = this;
  Actor::Actor(this, a2);
  v57 = 0;
  *(_DWORD *)this = &HookEstablishment::`vftable';
  std::string::string((char *)this + 1052);
  std::string::string((char *)this + 1080);
  std::string::string((char *)this + 1108);
  std::string::string((char *)this + 1136);
  AnimationSet::AnimationSet((HookEstablishment *)((char *)this + 1168));
  std::string::string((char *)this + 1212);
  std::string::string((char *)this + 1240);
  *((_DWORD *)this + 319) = 0;
  std::vector<Actor *>::vector<Actor *>((char *)this + 1280);
  std::string::string((char *)this + 1300);
  std::string::string((char *)this + 1328);
  std::string::string((char *)this + 1360);
  std::string::string((char *)this + 1388);
  *((_DWORD *)this + 354) = 0;
  *((float *)this + 357) = 0.0;
  *((float *)this + 358) = 0.0;
  *((float *)this + 359) = 0.0;
  v46 = (int)"NONE";
  LOBYTE(v57) = 12;
  *((_DWORD *)this + 324) = -1;
  std::string::operator=((char *)this + 1300, v46);
  std::string::operator=((char *)this + 1328, "NONE");
  *((float *)this + 355) = 1.0;
  *((_DWORD *)this + 339) = 1;
  *((float *)this + 356) = 1.0;
  *((_DWORD *)this + 317) = 0;
  *((_DWORD *)this + 318) = 0;
  v53 = 0.0;
  v54 = 0.0;
  v55 = 0.0;
  *((float *)this + 357) = 0.0;
  *((float *)this + 358) = 0.0;
  *((float *)this + 359) = 0.0;
  v3 = (Editor *)Editor::Instance(v47, v48);
  if ( Editor::GetEditorMode(v3) )
  {
    v46 = 1;
    v45 = 0;
    v44 = 0;
    v50 = &v37;
    std::string::string(&v37, "Arrow.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
    sub_10014669(v56);
    v4 = NxPhysics::Instance(this, -1, *((_DWORD *)this + 179), v56, 1);
    *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v4);
  }
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v47, v48), Editor::GetEditorMode(v6)) )
  {
    v46 = 0;
    v45 = 1;
    v50 = &v38;
    std::string::string(&v38, &unk_1031224C);
    v51 = &v31;
    LOBYTE(v57) = 13;
    std::string::string(&v31, &unk_10312258);
    v30 = (char *)this + 1052;
    v52 = &v23;
    LOBYTE(v57) = 14;
    std::string::string(&v23, "PresModel");
    LOBYTE(v57) = 12;
    v7 = EditorVar::EditorVar(
           v56,
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
           v43,
           v44,
           v45,
           v46);
    LOBYTE(v57) = 15;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_1031226C);
    v51 = &v31;
    LOBYTE(v57) = 16;
    std::string::string(&v31, &unk_1031227C);
    v30 = (char *)this + 1108;
    v50 = &v23;
    LOBYTE(v57) = 17;
    std::string::string(&v23, "PresAnim");
    LOBYTE(v57) = 12;
    v8 = EditorVar::EditorVar(
           v56,
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
           v43,
           v44,
           v45,
           v46);
    LOBYTE(v57) = 18;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_10312290);
    v51 = &v31;
    LOBYTE(v57) = 19;
    std::string::string(&v31, &unk_1031229C);
    v30 = (char *)this + 1268;
    v50 = &v23;
    LOBYTE(v57) = 20;
    std::string::string(&v23, "EsbType");
    LOBYTE(v57) = 12;
    v9 = EditorVar::EditorVar(
           v56,
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
           v43,
           v44,
           v45,
           v46);
    LOBYTE(v57) = 21;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_103122AC);
    v51 = &v31;
    LOBYTE(v57) = 22;
    std::string::string(&v31, &unk_103122B8);
    v30 = (char *)this + 1272;
    v50 = &v23;
    LOBYTE(v57) = 23;
    std::string::string(&v23, "EsbSubType");
    LOBYTE(v57) = 12;
    v10 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 24;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_103122CC);
    v51 = &v31;
    LOBYTE(v57) = 25;
    std::string::string(&v31, &unk_103122D8);
    v30 = (char *)this + 1212;
    v50 = &v23;
    LOBYTE(v57) = 26;
    std::string::string(&v23, "FlyweightName");
    LOBYTE(v57) = 12;
    v11 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 27;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_103122F0);
    v51 = &v31;
    LOBYTE(v57) = 28;
    std::string::string(&v31, &unk_103122FC);
    v30 = (char *)this + 1296;
    v50 = &v23;
    LOBYTE(v57) = 29;
    std::string::string(&v23, "EsbID");
    LOBYTE(v57) = 12;
    v12 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 30;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_1031230C);
    v51 = &v31;
    LOBYTE(v57) = 31;
    std::string::string(&v31, &unk_10312318);
    v30 = (char *)this + 1300;
    v50 = &v23;
    LOBYTE(v57) = 32;
    std::string::string(&v23, "EsbName");
    LOBYTE(v57) = 12;
    v13 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 33;
    std::vector<EditorVar>::push_back((char *)this + 424, v13);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_10312328);
    v51 = &v31;
    LOBYTE(v57) = 34;
    std::string::string(&v31, &unk_10312334);
    v30 = (char *)this + 1328;
    v50 = &v23;
    LOBYTE(v57) = 35;
    std::string::string(&v23, "EsbBrief");
    LOBYTE(v57) = 12;
    v14 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 36;
    std::vector<EditorVar>::push_back((char *)this + 424, v14);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_10312348);
    v51 = &v31;
    LOBYTE(v57) = 37;
    std::string::string(&v31, &unk_10312350);
    v30 = (char *)this + 1360;
    v50 = &v23;
    LOBYTE(v57) = 38;
    std::string::string(&v23, "EsbParent");
    LOBYTE(v57) = 12;
    v15 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 39;
    std::vector<EditorVar>::push_back((char *)this + 424, v15);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_10312364);
    v51 = &v31;
    LOBYTE(v57) = 40;
    std::string::string(&v31, &unk_10312374);
    LOBYTE(v57) = 41;
    v30 = (char *)this + 1356;
    v50 = &v23;
    std::string::string(&v23, "EsbCurNation");
    LOBYTE(v57) = 12;
    v16 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 42;
    std::vector<EditorVar>::push_back((char *)this + 424, v16);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_1031238C);
    v51 = &v31;
    LOBYTE(v57) = 43;
    std::string::string(&v31, &unk_1031239C);
    v30 = (char *)this + 1420;
    v50 = &v23;
    LOBYTE(v57) = 44;
    std::string::string(&v23, "EsbCrackRadius");
    LOBYTE(v57) = 12;
    v17 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 45;
    std::vector<EditorVar>::push_back((char *)this + 424, v17);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_103123B4);
    v51 = &v31;
    LOBYTE(v57) = 46;
    std::string::string(&v31, &unk_103123C4);
    v30 = (char *)this + 1424;
    v50 = &v23;
    LOBYTE(v57) = 47;
    std::string::string(&v23, "EsbCrackHeight");
    LOBYTE(v57) = 12;
    v18 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 48;
    std::vector<EditorVar>::push_back((char *)this + 424, v18);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_103123DC);
    v51 = &v31;
    LOBYTE(v57) = 49;
    std::string::string(&v31, &unk_103123EC);
    v30 = (char *)this + 1428;
    v50 = &v23;
    LOBYTE(v57) = 50;
    std::string::string(&v23, "EsbCrackRadiusX");
    LOBYTE(v57) = 12;
    v19 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 51;
    std::vector<EditorVar>::push_back((char *)this + 424, v19);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_10312404);
    v51 = &v31;
    LOBYTE(v57) = 52;
    std::string::string(&v31, &unk_10312414);
    v30 = (char *)this + 1432;
    v50 = &v23;
    LOBYTE(v57) = 53;
    std::string::string(&v23, "EsbCrackRadiusY");
    LOBYTE(v57) = 12;
    v20 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 54;
    std::vector<EditorVar>::push_back((char *)this + 424, v20);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
    v46 = 0;
    v45 = 1;
    v52 = &v38;
    std::string::string(&v38, &unk_1031242C);
    LOBYTE(v57) = 55;
    v51 = &v31;
    std::string::string(&v31, &unk_1031243C);
    v30 = (char *)this + 1436;
    v50 = &v23;
    LOBYTE(v57) = 56;
    std::string::string(&v23, "EsbCrackRadiusZ");
    LOBYTE(v57) = 12;
    v21 = EditorVar::EditorVar(
            v56,
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
            v43,
            v44,
            v45,
            v46);
    LOBYTE(v57) = 57;
    std::vector<EditorVar>::push_back((char *)this + 424, v21);
    LOBYTE(v57) = 12;
    EditorVar::~EditorVar((EditorVar *)v56);
  }
  return this;
}
