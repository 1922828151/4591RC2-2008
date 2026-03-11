/*
 * func-name: sub_1011F4B0
 * func-address: 0x1011f4b0
 * callers: 0x100111f8
 * callees: 0x102c9d98
 */

int __thiscall sub_1011F4B0(int this, struct World *a2)
{
  float v3; // edx
  float v4; // eax
  float v5; // eax
  Model *v6; // eax
  Model *v7; // eax
  Editor *v8; // eax
  _DWORD *v9; // eax
  EventAttemper *v10; // eax
  World *v11; // ecx
  Editor *v12; // eax
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
  int v24; // [esp+368h] [ebp-FCh] BYREF
  int v25; // [esp+36Ch] [ebp-F8h]
  int v26; // [esp+370h] [ebp-F4h]
  int v27; // [esp+374h] [ebp-F0h]
  int v28; // [esp+378h] [ebp-ECh]
  int v29; // [esp+37Ch] [ebp-E8h]
  int v30; // [esp+380h] [ebp-E4h]
  int v31; // [esp+384h] [ebp-E0h]
  int v32; // [esp+388h] [ebp-DCh] BYREF
  int v33; // [esp+38Ch] [ebp-D8h]
  int v34; // [esp+390h] [ebp-D4h]
  int v35; // [esp+394h] [ebp-D0h]
  int v36; // [esp+398h] [ebp-CCh]
  int v37; // [esp+39Ch] [ebp-C8h]
  int v38; // [esp+3A0h] [ebp-C4h]
  int v39; // [esp+3A4h] [ebp-C0h] BYREF
  int v40; // [esp+3A8h] [ebp-BCh]
  int v41; // [esp+3ACh] [ebp-B8h]
  int v42; // [esp+3B0h] [ebp-B4h]
  int v43; // [esp+3B4h] [ebp-B0h]
  int v44; // [esp+3B8h] [ebp-ACh]
  int v45; // [esp+3BCh] [ebp-A8h]
  int v46; // [esp+3C0h] [ebp-A4h]
  unsigned int v47; // [esp+3C4h] [ebp-A0h]
  int v48; // [esp+3C8h] [ebp-9Ch]
  int v49; // [esp+3CCh] [ebp-98h]
  struct EventObserver *v50; // [esp+3D0h] [ebp-94h]
  Model *v51; // [esp+3DCh] [ebp-88h]
  int v52; // [esp+3E0h] [ebp-84h]
  int *v53; // [esp+3E4h] [ebp-80h]
  int *v54; // [esp+3E8h] [ebp-7Ch]
  float v55; // [esp+3ECh] [ebp-78h]
  float v56; // [esp+3F0h] [ebp-74h]
  float v57; // [esp+3F4h] [ebp-70h]
  _BYTE v58[96]; // [esp+3F8h] [ebp-6Ch] BYREF
  int v59; // [esp+460h] [ebp-4h]

  v52 = this;
  Actor::Actor((Actor *)this, a2);
  v59 = 0;
  *(_DWORD *)this = &EstabTakeActor::`vftable';
  std::string::string((void *)(this + 1052));
  std::string::string((void *)(this + 1080));
  std::string::string((void *)(this + 1112));
  std::string::string((void *)(this + 1140));
  std::string::string((void *)(this + 1168));
  std::string::string((void *)(this + 1196));
  *(float *)(this + 1228) = 0.0;
  *(float *)(this + 1232) = 0.0;
  *(float *)(this + 1236) = 0.0;
  *(float *)(this + 1240) = 0.0;
  *(float *)(this + 1244) = 0.0;
  *(float *)(this + 1248) = 0.0;
  std::string::string((void *)(this + 1252));
  AnimationSet::AnimationSet((AnimationSet *)(this + 1300));
  AnimationSet::AnimationSet((AnimationSet *)(this + 1344));
  AnimationSet::AnimationSet((AnimationSet *)(this + 1388));
  AnimationSet::AnimationSet((AnimationSet *)(this + 1432));
  *(float *)(this + 1484) = 0.0;
  v55 = 0.0;
  v56 = 0.0;
  *(_DWORD *)(this + 1492) = 0;
  v3 = v56;
  v57 = 0.0;
  *(_DWORD *)(this + 1476) = 0;
  *(_DWORD *)(this + 1280) = 0;
  *(float *)(this + 1228) = v55;
  *(_DWORD *)(this + 1496) = -1;
  *(_DWORD *)(this + 1480) = -1;
  *(_DWORD *)(this + 1284) = -1;
  *(_DWORD *)(this + 1288) = -1;
  *(_DWORD *)(this + 1292) = -1;
  *(_DWORD *)(this + 1296) = -1;
  *(float *)(this + 1232) = v3;
  v4 = v57;
  v55 = -1.0;
  v56 = -1.0;
  v57 = -1.0;
  *(float *)(this + 1236) = v4;
  v5 = v57;
  *(float *)(this + 1240) = -1.0;
  *(float *)(this + 1224) = 10.0;
  *(float *)(this + 1244) = -1.0;
  v47 = 456;
  *(float *)(this + 1248) = v5;
  v6 = (Model *)operator new(v47);
  v51 = v6;
  LOBYTE(v59) = 12;
  if ( v6 )
  {
    Model::Model(v6);
    v7 = v51;
    *(_DWORD *)v51 = &Model::`vftable';
  }
  else
  {
    v7 = 0;
  }
  LOBYTE(v59) = 11;
  *(_DWORD *)(this + 716) = v7;
  v8 = (Editor *)Editor::Instance(v48, v49);
  if ( !Editor::GetEditorMode(v8) )
  {
    v9 = operator new(8u);
    if ( v9 )
    {
      *v9 = &VehicleProduce_Observer::`vftable';
      v9[1] = this;
    }
    else
    {
      v9 = 0;
    }
    v47 = (unsigned int)v9;
    v10 = (EventAttemper *)EventAttemper::Instance(19, 5390);
    *(_DWORD *)(this + 1488) = EventAttemper::AddObserver(v10, v48, v49, v50);
  }
  v11 = *(World **)(this + 712);
  if ( v11 && World::IsLoading(v11) || (v12 = (Editor *)Editor::Instance(v48, v49), Editor::GetEditorMode(v12)) )
  {
    v47 = 0;
    v46 = 1;
    v51 = (Model *)&v39;
    std::string::string(&v39, &unk_10311A7C);
    v53 = &v32;
    LOBYTE(v59) = 13;
    std::string::string(&v32, &unk_10311A88);
    v31 = this + 1052;
    v54 = &v24;
    LOBYTE(v59) = 14;
    std::string::string(&v24, "ModelFilename");
    LOBYTE(v59) = 11;
    v13 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 15;
    std::vector<EditorVar>::push_back(this + 424, v13);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311AA0);
    v53 = &v32;
    LOBYTE(v59) = 16;
    std::string::string(&v32, &unk_10311AB4);
    v31 = this + 1080;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 17;
    std::string::string(&v24, "FrameName");
    LOBYTE(v59) = 11;
    v14 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 18;
    std::vector<EditorVar>::push_back(this + 424, v14);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311AC8);
    v53 = &v32;
    LOBYTE(v59) = 19;
    std::string::string(&v32, &unk_10311ADC);
    v31 = this + 1108;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 20;
    std::string::string(&v24, "EstabTakeID");
    LOBYTE(v59) = 11;
    v15 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 21;
    std::vector<EditorVar>::push_back(this + 424, v15);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311AF0);
    v53 = &v32;
    LOBYTE(v59) = 22;
    std::string::string(&v32, &unk_10311B04);
    v31 = this + 1112;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 23;
    std::string::string(&v24, "AnimNormalIdle");
    LOBYTE(v59) = 11;
    v16 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 24;
    std::vector<EditorVar>::push_back(this + 424, v16);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311B1C);
    v53 = &v32;
    LOBYTE(v59) = 25;
    std::string::string(&v32, &unk_10311B30);
    v31 = this + 1140;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 26;
    std::string::string(&v24, "AnimNormalAction");
    LOBYTE(v59) = 11;
    v17 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 27;
    std::vector<EditorVar>::push_back(this + 424, v17);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311B4C);
    v53 = &v32;
    LOBYTE(v59) = 28;
    std::string::string(&v32, &unk_10311B60);
    v31 = this + 1168;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 29;
    std::string::string(&v24, "AnimTakeIdle");
    LOBYTE(v59) = 11;
    v18 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 30;
    std::vector<EditorVar>::push_back(this + 424, v18);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311B78);
    v53 = &v32;
    LOBYTE(v59) = 31;
    std::string::string(&v32, &unk_10311B8C);
    v31 = this + 1196;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 32;
    std::string::string(&v24, "AnimTakeAction");
    LOBYTE(v59) = 11;
    v19 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 33;
    std::vector<EditorVar>::push_back(this + 424, v19);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311BA4);
    v53 = &v32;
    LOBYTE(v59) = 34;
    std::string::string(&v32, &unk_10311BB8);
    v31 = this + 1224;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 35;
    std::string::string(&v24, "TakeIdleTime");
    LOBYTE(v59) = 11;
    v20 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 36;
    std::vector<EditorVar>::push_back(this + 424, v20);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311BD0);
    v53 = &v32;
    LOBYTE(v59) = 37;
    std::string::string(&v32, &unk_10311BDC);
    v31 = this + 1228;
    v51 = (Model *)&v24;
    LOBYTE(v59) = 38;
    std::string::string(&v24, "CameraPos");
    LOBYTE(v59) = 11;
    v21 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 39;
    std::vector<EditorVar>::push_back(this + 424, v21);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
    v47 = 0;
    v46 = 1;
    v54 = &v39;
    std::string::string(&v39, &unk_10311BF0);
    v53 = &v32;
    LOBYTE(v59) = 40;
    std::string::string(&v32, &unk_10311BFC);
    v31 = this + 1240;
    LOBYTE(v59) = 41;
    v51 = (Model *)&v24;
    std::string::string(&v24, "CameraDir");
    LOBYTE(v59) = 11;
    v22 = EditorVar::EditorVar(
            v58,
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
            v46,
            v47);
    LOBYTE(v59) = 42;
    std::vector<EditorVar>::push_back(this + 424, v22);
    LOBYTE(v59) = 11;
    EditorVar::~EditorVar((EditorVar *)v58);
  }
  return this;
}
