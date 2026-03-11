/*
 * func-name: ??0HookEsbStore@@QAE@PAVWorld@@@Z_0
 * func-address: 0x10130550
 * callers: 0x10013b4c
 * callees: 0x10014669
 */

HookEsbStore *__thiscall HookEsbStore::HookEsbStore(HookEsbStore *this, struct World *a2)
{
  Editor *v3; // eax
  int v4; // eax
  World *v5; // ecx
  Editor *v6; // eax
  int v7; // eax
  int v8; // eax
  int v10; // [esp+60h] [ebp-ECh] BYREF
  int v11; // [esp+64h] [ebp-E8h]
  int v12; // [esp+68h] [ebp-E4h]
  int v13; // [esp+6Ch] [ebp-E0h]
  int v14; // [esp+70h] [ebp-DCh]
  int v15; // [esp+74h] [ebp-D8h]
  int v16; // [esp+78h] [ebp-D4h]
  char *v17; // [esp+7Ch] [ebp-D0h]
  int v18; // [esp+80h] [ebp-CCh] BYREF
  int v19; // [esp+84h] [ebp-C8h]
  int v20; // [esp+88h] [ebp-C4h]
  int v21; // [esp+8Ch] [ebp-C0h]
  int v22; // [esp+90h] [ebp-BCh]
  int v23; // [esp+94h] [ebp-B8h]
  int v24; // [esp+98h] [ebp-B4h] BYREF
  int v25; // [esp+9Ch] [ebp-B0h] BYREF
  int v26; // [esp+A0h] [ebp-ACh]
  int v27; // [esp+A4h] [ebp-A8h]
  int v28; // [esp+A8h] [ebp-A4h]
  int v29; // [esp+ACh] [ebp-A0h]
  int v30; // [esp+B0h] [ebp-9Ch]
  int v31; // [esp+B4h] [ebp-98h]
  int v32; // [esp+B8h] [ebp-94h]
  int v33; // [esp+BCh] [ebp-90h]
  int v34; // [esp+C0h] [ebp-8Ch]
  int v35; // [esp+C4h] [ebp-88h]
  HookEsbStore *v36; // [esp+D4h] [ebp-78h]
  int *v37; // [esp+D8h] [ebp-74h]
  int *v38; // [esp+DCh] [ebp-70h]
  _BYTE v39[96]; // [esp+E0h] [ebp-6Ch] BYREF
  int v40; // [esp+148h] [ebp-4h]

  v36 = this;
  Actor::Actor(this, a2);
  v40 = 0;
  *(_DWORD *)this = &HookEsbStore::`vftable';
  std::string::string((char *)this + 1052);
  std::string::string((char *)this + 1080);
  std::string::string((char *)this + 1108);
  LOBYTE(v40) = 3;
  *((_DWORD *)this + 284) = 0;
  v3 = (Editor *)Editor::Instance(v34, v35);
  if ( Editor::GetEditorMode(v3) )
  {
    v33 = 1;
    v32 = 0;
    v31 = 0;
    std::string::string(&v24, "Sphere.xml");
    *((_DWORD *)this + 179) = Precacher::CacheModel();
    sub_10014669(v39);
    v4 = NxPhysics::Instance(this, -1, *((_DWORD *)this + 179), v39, 1);
    *((_DWORD *)this + 155) = NxPhysics::CreateMeshActor(v4);
  }
  v5 = (World *)*((_DWORD *)this + 178);
  if ( v5 && World::IsLoading(v5) || (v6 = (Editor *)Editor::Instance(v34, v35), Editor::GetEditorMode(v6)) )
  {
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_1031265C);
    v37 = &v18;
    LOBYTE(v40) = 4;
    std::string::string(&v18, &unk_10312668);
    v17 = (char *)this + 1052;
    v38 = &v10;
    LOBYTE(v40) = 5;
    std::string::string(&v10, "FlyweightName");
    LOBYTE(v40) = 3;
    v7 = EditorVar::EditorVar(
           v39,
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
           v32,
           v33);
    LOBYTE(v40) = 6;
    std::vector<EditorVar>::push_back((char *)this + 424, v7);
    LOBYTE(v40) = 3;
    EditorVar::~EditorVar((EditorVar *)v39);
    v33 = 0;
    v32 = 1;
    std::string::string(&v25, &unk_10312680);
    v38 = &v18;
    LOBYTE(v40) = 7;
    std::string::string(&v18, &unk_1031268C);
    v17 = (char *)this + 1080;
    v37 = &v10;
    LOBYTE(v40) = 8;
    std::string::string(&v10, "EsbParent");
    LOBYTE(v40) = 3;
    v8 = EditorVar::EditorVar(
           v39,
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
           v32,
           v33);
    LOBYTE(v40) = 9;
    std::vector<EditorVar>::push_back((char *)this + 424, v8);
    LOBYTE(v40) = 3;
    EditorVar::~EditorVar((EditorVar *)v39);
  }
  return this;
}
