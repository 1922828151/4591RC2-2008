/*
 * func-name: ??0HookEsbEnergy@@QAE@PAVWorld@@@Z_0
 * func-address: 0x1012fb50
 * callers: 0x10012990
 * callees: 0x10014669
 */

HookEsbEnergy *__thiscall HookEsbEnergy::HookEsbEnergy(HookEsbEnergy *this, struct World *a2)
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
  int v14; // [esp+1F0h] [ebp-ECh] BYREF
  int v15; // [esp+1F4h] [ebp-E8h]
  int v16; // [esp+1F8h] [ebp-E4h]
  int v17; // [esp+1FCh] [ebp-E0h]
  int v18; // [esp+200h] [ebp-DCh]
  int v19; // [esp+204h] [ebp-D8h]
  int v20; // [esp+208h] [ebp-D4h]
  char *v21; // [esp+20Ch] [ebp-D0h]
  int v22; // [esp+210h] [ebp-CCh] BYREF
  int v23; // [esp+214h] [ebp-C8h]
  int v24; // [esp+218h] [ebp-C4h]
  int v25; // [esp+21Ch] [ebp-C0h]
  int v26; // [esp+220h] [ebp-BCh]
  int v27; // [esp+224h] [ebp-B8h]
  int v28; // [esp+228h] [ebp-B4h] BYREF
  int v29; // [esp+22Ch] [ebp-B0h] BYREF
  int v30; // [esp+230h] [ebp-ACh]
  int v31; // [esp+234h] [ebp-A8h]
  int v32; // [esp+238h] [ebp-A4h]
  int v33; // [esp+23Ch] [ebp-A0h]
  int v34; // [esp+240h] [ebp-9Ch]
  int v35; // [esp+244h] [ebp-98h]
  int v36; // [esp+248h] [ebp-94h]
  int v37; // [esp+24Ch] [ebp-90h]
  int v38; // [esp+250h] [ebp-8Ch]
  int v39; // [esp+254h] [ebp-88h]
  HookEsbEnergy *v40; // [esp+264h] [ebp-78h]
  int *v41; // [esp+268h] [ebp-74h]
  int *v42; // [esp+26Ch] [ebp-70h]
  _BYTE v43[96]; // [esp+270h] [ebp-6Ch] BYREF
  int v44; // [esp+2D8h] [ebp-4h]

  v40 = this;
  Actor::Actor(this, a2);
  v44 = 0;
  *(_DWORD *)this = &HookEsbEnergy::`vftable';
  std::string::string((char *)this + 1052);
  std::string::string((char *)this + 1080);
  std::string::string((char *)this + 1108);
  *((_DWORD *)this + 284) = 0;
  std::string::string((char *)this + 1140);
  std::string::string((char *)this + 1168);
  *((float *)this + 300) = 1.0;
  *((float *)this + 301) = 1.0;
  LOBYTE(v44) = 5;
  *((_DWORD *)this + 299) = 0;
  *((_BYTE *)this + 1208) = 1;
  v3 = (Editor *)Editor::Instance(v38, v39);
  if ( Editor::GetEditorMode(v3) )
  {
    v37 = 1;
    v36 = 0;
    v35 = 0;
    std::string::string(&v28, "Sphere.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
    sub_10014669(v43);
    v4 = NxPhysics::Instance(this, -1, *((_DWORD *)this + 179), v43, 1);
    *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v4);
  }
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v38, v39), Editor::GetEditorMode(v6)) )
  {
    v37 = 0;
    v36 = 1;
    std::string::string(&v29, &unk_10312470);
    v41 = &v22;
    LOBYTE(v44) = 6;
    std::string::string(&v22, &unk_1031247C);
    v21 = (char *)this + 1052;
    v42 = &v14;
    LOBYTE(v44) = 7;
    std::string::string(&v14, "FlyweightName");
    LOBYTE(v44) = 5;
    v7 = EditorVar::EditorVar(
           v43,
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
           v35,
           v36,
           v37);
    LOBYTE(v44) = 8;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v44) = 5;
    EditorVar::~EditorVar((EditorVar *)v43);
    v37 = 0;
    v36 = 1;
    std::string::string(&v29, &unk_10312494);
    v42 = &v22;
    LOBYTE(v44) = 9;
    std::string::string(&v22, &unk_103124A0);
    v21 = (char *)this + 1080;
    v41 = &v14;
    LOBYTE(v44) = 10;
    std::string::string(&v14, "EsbParent");
    LOBYTE(v44) = 5;
    v8 = EditorVar::EditorVar(
           v43,
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
           v35,
           v36,
           v37);
    LOBYTE(v44) = 11;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v44) = 5;
    EditorVar::~EditorVar((EditorVar *)v43);
    v37 = 0;
    v36 = 1;
    std::string::string(&v29, &unk_103124B4);
    v42 = &v22;
    LOBYTE(v44) = 12;
    std::string::string(&v22, &unk_103124C0);
    v21 = (char *)this + 1140;
    v41 = &v14;
    LOBYTE(v44) = 13;
    std::string::string(&v14, "EsbEnergy");
    LOBYTE(v44) = 5;
    v9 = EditorVar::EditorVar(
           v43,
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
           v35,
           v36,
           v37);
    LOBYTE(v44) = 14;
    std::vector<EditorVar>::push_back((char *)this + 424, v9);
    LOBYTE(v44) = 5;
    EditorVar::~EditorVar((EditorVar *)v43);
    v37 = 0;
    v36 = 1;
    std::string::string(&v29, &unk_103124D4);
    v42 = &v22;
    LOBYTE(v44) = 15;
    std::string::string(&v22, &unk_103124E4);
    v21 = (char *)this + 1200;
    v41 = &v14;
    LOBYTE(v44) = 16;
    std::string::string(&v14, "EsbEffectRadius");
    LOBYTE(v44) = 5;
    v10 = EditorVar::EditorVar(
            v43,
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
            v35,
            v36,
            v37);
    LOBYTE(v44) = 17;
    std::vector<EditorVar>::push_back((char *)this + 424, v10);
    LOBYTE(v44) = 5;
    EditorVar::~EditorVar((EditorVar *)v43);
    v37 = 0;
    v36 = 1;
    std::string::string(&v29, &unk_103124FC);
    v42 = &v22;
    LOBYTE(v44) = 18;
    std::string::string(&v22, &unk_1031250C);
    v21 = (char *)this + 1204;
    v41 = &v14;
    LOBYTE(v44) = 19;
    std::string::string(&v14, "EsbEffectHeight");
    LOBYTE(v44) = 5;
    v11 = EditorVar::EditorVar(
            v43,
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
            v35,
            v36,
            v37);
    LOBYTE(v44) = 20;
    std::vector<EditorVar>::push_back((char *)this + 424, v11);
    LOBYTE(v44) = 5;
    EditorVar::~EditorVar((EditorVar *)v43);
    v37 = 0;
    v36 = 1;
    std::string::string(&v29, &unk_10312524);
    v42 = &v22;
    LOBYTE(v44) = 21;
    std::string::string(&v22, &unk_10312538);
    v21 = (char *)this + 1208;
    v41 = &v14;
    LOBYTE(v44) = 22;
    std::string::string(&v14, "IsEnergyFull");
    LOBYTE(v44) = 5;
    v12 = EditorVar::EditorVar(
            v43,
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
            v35,
            v36,
            v37);
    LOBYTE(v44) = 23;
    std::vector<EditorVar>::push_back((char *)this + 424, v12);
    LOBYTE(v44) = 5;
    EditorVar::~EditorVar((EditorVar *)v43);
  }
  return this;
}
