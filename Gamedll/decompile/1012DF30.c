/*
 * func-name: ?DeserializationComplete@HookEsbTransport@@UAEXXZ_0
 * func-address: 0x1012df30
 * callers: 0x10010ae1
 * callees: 0x102c9d98
 */

void __thiscall HookEsbTransport::DeserializationComplete(HookEsbTransport *this)
{
  Editor *v2; // eax
  int v3; // eax
  int v4; // edx
  int v5; // ecx
  Actor *v6; // esi
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int MeshActor; // eax
  int v11; // ecx
  Actor *v12; // eax
  Actor *v13; // edi
  Actor *v14; // eax
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // eax
  int v19; // edx
  Actor *v20; // edi
  Actor *v21; // eax
  int v22; // eax
  int v23; // ecx
  int v24; // eax
  _BYTE v25[28]; // [esp-14h] [ebp-C4h] BYREF
  _BYTE *v26; // [esp+8h] [ebp-A8h]
  char *v27; // [esp+Ch] [ebp-A4h]
  unsigned int v28; // [esp+10h] [ebp-A0h]
  int v29; // [esp+14h] [ebp-9Ch]
  int v30; // [esp+18h] [ebp-98h]
  Actor *v31; // [esp+28h] [ebp-88h]
  _BYTE v32[28]; // [esp+2Ch] [ebp-84h] BYREF
  _BYTE v33[28]; // [esp+48h] [ebp-68h] BYREF
  _DWORD v34[16]; // [esp+64h] [ebp-4Ch] BYREF
  int v35; // [esp+ACh] [ebp-4h]

  v2 = (Editor *)Editor::Instance(v29, v30);
  if ( Editor::GetEditorMode(v2) )
  {
    v3 = *((_DWORD *)this + 214);
    v4 = *((_DWORD *)this + 216);
    qmemcpy(v34, (char *)this + 868, sizeof(v34));
    v5 = *((_DWORD *)this + 215);
    v34[12] = v3;
    v34[13] = v5;
    v34[14] = v4;
    v6 = (Actor *)operator new(0x41Cu);
    v31 = v6;
    v35 = 0;
    if ( v6 )
    {
      Actor::Actor(v6, *((struct World **)this + 178));
      *(_DWORD *)v6 = &Actor::`vftable';
    }
    else
    {
      v6 = 0;
    }
    *((_DWORD *)this + 301) = v6;
    v35 = -1;
    v7 = std::operator+<char>(v32, (char *)this + 444, "_LocateGV");
    v8 = *((_DWORD *)this + 301);
    v35 = 1;
    std::string::operator=(v8 + 444, v7);
    v35 = -1;
    std::string::~string(v32);
    v28 = 1;
    v27 = 0;
    v26 = 0;
    v31 = (Actor *)v25;
    std::string::string(v25, "Arrow.xml");
    *(_DWORD *)(*((_DWORD *)this + 301) + 716) = Precacher::CacheModel();
    v9 = NxPhysics::Instance(*((_DWORD *)this + 301), -1, *(_DWORD *)(*((_DWORD *)this + 301) + 716), v34, 2);
    MeshActor = NxPhysics::CreateMeshActor(v9);
    v11 = *((_DWORD *)this + 301);
    v28 = 1052;
    *(_DWORD *)(v11 + 620) = MeshActor;
    v12 = (Actor *)operator new(v28);
    v13 = v12;
    v31 = v12;
    v35 = 2;
    if ( v12 )
    {
      Actor::Actor(v12, *((struct World **)this + 178));
      *(_DWORD *)v13 = &Actor::`vftable';
      v14 = v13;
    }
    else
    {
      v14 = 0;
    }
    v28 = (unsigned int)"_LocateAV";
    *((_DWORD *)this + 309) = v14;
    v35 = -1;
    v15 = std::operator+<char>(v32, (char *)this + 444, v28);
    v16 = *((_DWORD *)this + 309);
    v35 = 3;
    std::string::operator=(v16 + 444, v15);
    v35 = -1;
    std::string::~string(v32);
    v28 = 1;
    v27 = 0;
    v26 = 0;
    v31 = (Actor *)v25;
    std::string::string(v25, "Arrow.xml");
    *(_DWORD *)(*((_DWORD *)this + 309) + 716) = Precacher::CacheModel();
    v17 = NxPhysics::Instance(*((_DWORD *)this + 309), -1, *(_DWORD *)(*((_DWORD *)this + 309) + 716), v34, 2);
    v18 = NxPhysics::CreateMeshActor(v17);
    v19 = *((_DWORD *)this + 309);
    v28 = 1052;
    *(_DWORD *)(v19 + 620) = v18;
    v20 = (Actor *)operator new(v28);
    v31 = v20;
    v35 = 4;
    if ( v20 )
    {
      Actor::Actor(v20, *((struct World **)this + 178));
      *(_DWORD *)v20 = &Actor::`vftable';
      v21 = v20;
    }
    else
    {
      v21 = 0;
    }
    v28 = (unsigned int)"_LocateRobot";
    v27 = (char *)this + 444;
    v26 = v33;
    v35 = -1;
    *((_DWORD *)this + 317) = v21;
    v22 = std::operator+<char>(v26, v27, v28);
    v23 = *((_DWORD *)this + 317);
    v35 = 5;
    std::string::operator=(v23 + 444, v22);
    v35 = -1;
    std::string::~string(v33);
    v28 = 1;
    v27 = 0;
    v26 = 0;
    v31 = (Actor *)v25;
    std::string::string(v25, "Arrow.xml");
    *(_DWORD *)(*((_DWORD *)this + 317) + 716) = Precacher::CacheModel();
    v24 = NxPhysics::Instance(*((_DWORD *)this + 317), -1, *(_DWORD *)(*((_DWORD *)this + 317) + 716), v34, 2);
    *(_DWORD *)(*((_DWORD *)this + 317) + 620) = NxPhysics::CreateMeshActor(v24);
  }
}
